#include "serverWindow.h"
#include "ui_serverWindow.h"
#include <QHostAddress>
#include <QDataStream>
#include <QProcess>
#include <QPixmap>
#include <QDir>

serverWindow::serverWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::serverWindow)
{
    ui->setupUi(this);

    dirSetting();

    // ********** Connect Signal & Slot ------>>
    connect(ui->startBtn, SIGNAL(clicked())      , this, SLOT(startServer()));
    connect(ui->stopBtn , SIGNAL(clicked())      , this, SLOT(stopServer()));
    connect(&server     , SIGNAL(newConnection()), this, SLOT(acceptConnection()));
}

void serverWindow::dirSetting()
{
    QDir dir;
    dir.cdUp();
    projPath     = dir.currentPath();
    savePath     = projPath + "/recieve/";
    prosFilePath = "python -s " + projPath + "/Papilionidae_classification/pailio_recognition_forApp.py ";

    ui->savePath->setText(savePath);
}

void serverWindow::startServer()
{
    server.listen(QHostAddress::Any, 37);
    ui->stateBrowser->append(tr("伺服器啟動..."));
    ui->startBtn->setEnabled(false);
    ui->stopBtn->setEnabled(true);
}

void serverWindow::stopServer()
{
    server.close();
    ui->stateBrowser->append(tr("伺服器關閉...\n"));
    ui->startBtn->setEnabled(true);
    ui->stopBtn->setEnabled(false);
}

void serverWindow::acceptConnection()
{
    curTime  = QDateTime::currentDateTime();
    filePath = savePath + curTime.toString("yyyy-MM-dd_hh-mm-ss") + ".jpg";
    file     = new QFile(filePath);

    // ********** Check File ----------------->>
    if (!file->open(QIODevice::WriteOnly)) {
        ui->stateBrowser->append(tr("無法開啟檔案: ") + filePath);
        delete file;
        file = 0;
        return;
    }

    bytesReceived = 0;
    fileSize      = 0;

    // ********** Connect Singal & Slot ------>>
    clientConnection = server.nextPendingConnection();
    connect(clientConnection, SIGNAL(readyRead())                        , this, SLOT(updateProgress()));
    connect(clientConnection, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));

    QApplication::setOverrideCursor(Qt::WaitCursor);
}

void serverWindow::updateProgress()
{
    // ********** Send File Size & File ------>>
    QDataStream sendIn(clientConnection);
    if(clientConnection->bytesAvailable() > sizeof(qint64) && fileSize == 0){
        sendIn >> fileSize;
        bytesReceived += sizeof(qint64);
        ui->stateBrowser->append(tr("檔案大小: ") + QString::number(fileSize/1024) + "KB");
        ui->recvProsBar->setMaximum(fileSize);
    }
    else{
        bytesReceived += (int) clientConnection->bytesAvailable();
        ui->recvProsBar->setValue(bytesReceived);
        file->write(clientConnection->readAll());
    }

    // ********** Finish Sending ------------->>
    if(fileSize == bytesReceived){
        file->close();
        ui->stateBrowser->append(tr("檔案已儲存: ") + file->fileName());

        displayImage();
        sendProsResult();
    }
}

void serverWindow::displayImage()
{
    if(!image.load(filePath))
        ui->imageDisplay->setText(tr("無法顯示圖片"));
    else
        ui->imageDisplay->setPixmap(QPixmap::fromImage(image.scaled(300,300)));
}

void serverWindow::sendProsResult()
{
    // ********** Call Python Script --------->>
    QProcess filePros;
    ui->stateBrowser->append(tr("開始辨識..."));
    filePros.start(prosFilePath + filePath);        // execute
    filePros.waitForFinished(-1);                   // wait for finish
    ui->stateBrowser->append(tr("辨識完成..."));

    prosResult = filePros.readAllStandardOutput();  // read output
    prosIndex   = prosResult.split("_").at(0);      // class index
    prosPercent = prosResult.split("_").at(1);      // recogntion percentage
    index2Name(prosIndex.toInt());                  // convert class index to class name
    ui->recgResult->setText(prosResult);
    ui->stateBrowser->append(tr("辨識結果: ") + prosResult);

    //clientConnection->write(prosResult.toLatin1()); // send output( can't send chinese)
    clientConnection->write(prosResult.toUtf8(), prosResult.toUtf8().length()); // send chinese
    ui->stateBrowser->append("送出辨識結果...");
}

void serverWindow::index2Name(int idx)
{
    switch (idx) {
    case 0:
        prosResult = "大紅紋鳳蝶"; break;
    case 1:
        prosResult = "無尾鳳蝶"; break;
    case 2:
        prosResult = "柑橘鳳蝶"; break;
    case 3:
        prosResult = "青斑鳳蝶"; break;
    case 4:
        prosResult = "無尾白紋鳳蝶"; break;
    case 5:
        prosResult = "大鳳蝶(雄)"; break;
    case 6:
        prosResult = "白紋鳳蝶"; break;
    case 7:
        prosResult = "紅紋鳳蝶"; break;
    case 8:
        prosResult = "青帶鳳蝶"; break;
    case 9:
        prosResult = "玉帶鳳蝶(雄)"; break;
    case 10:
        prosResult = "黑鳳蝶"; break;
    case 11:
        prosResult = "大鳳蝶(雌)"; break;
    case 12:
        prosResult = "玉帶鳳蝶(雌)"; break;
    case 13:
        prosResult = "烏鴉鳳蝶"; break;
    case 14:
        prosResult = "綠斑鳳蝶"; break;
    case 15:
        prosResult = "大琉璃紋鳳蝶"; break;
    default:
        prosResult = "錯誤辨識結果"; break;
    }
    prosResult += " (相似度" + prosPercent + "%)";
}

void serverWindow::displayError(QAbstractSocket::SocketError socketError)
{
    if (socketError == QTcpSocket::RemoteHostClosedError) {
        ui->stateBrowser->append(tr("連結中斷..."));
        ui->stateBrowser->append(tr("-------------------------\n"));
    }
    else {
        ui->stateBrowser->append(tr("Network error: ") + clientConnection->errorString());
        ui->stateBrowser->append(tr("-------------------------\n"));
    }
    delete file;
    file = 0;

    QApplication::restoreOverrideCursor();
}

serverWindow::~serverWindow()
{
    delete ui;
    delete file;
}

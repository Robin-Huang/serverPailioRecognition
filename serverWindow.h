#ifndef SERVERWINDOW_H
#define SERVERWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFile>
#include <QDateTime>
#include <QImage>

namespace Ui {
class serverWindow;
}

class serverWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit serverWindow(QWidget *parent = 0);
    ~serverWindow();
    void dirSetting();

public slots:
    void startServer();
    void stopServer();
    void acceptConnection();
    void updateProgress();
    void displayImage();
    void sendProsResult();
    void index2Name(int index);
    void displayError(QAbstractSocket::SocketError socketError);

private:
    Ui::serverWindow *ui;

    QDateTime  curTime;

    // Server & Client
    QTcpServer server;
    QTcpSocket *clientConnection;

    // Recieve File
    int     bytesReceived;
    QFile  *file;
    qint64  fileSize;
    QString projPath;
    QString filePath;
    QString savePath;
    QImage  image;

    // Process Result
    QString prosFilePath;
    QString prosResult;
    QString prosIndex;
    QString prosPercent;
};

#endif // SERVERWINDOW_H

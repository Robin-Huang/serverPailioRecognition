/********************************************************************************
** Form generated from reading UI file 'serverWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERWINDOW_H
#define UI_SERVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serverWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_recgResult;
    QLabel *recgResult;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_recvState;
    QProgressBar *recvProsBar;
    QLabel *imageDisplay;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_savePath;
    QLabel *savePath;
    QFrame *frame_2;
    QGridLayout *gridLayout_4;
    QTextBrowser *stateBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *startBtn;
    QPushButton *stopBtn;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_ip;
    QLabel *ip;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *serverWindow)
    {
        if (serverWindow->objectName().isEmpty())
            serverWindow->setObjectName(QStringLiteral("serverWindow"));
        serverWindow->resize(775, 481);
        serverWindow->setStyleSheet(QStringLiteral("background-color:rgb(153, 153, 153);"));
        centralWidget = new QWidget(serverWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 20, 461, 391));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(31, 31, 31);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_recgResult = new QLabel(frame);
        label_recgResult->setObjectName(QStringLiteral("label_recgResult"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224 Light"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_recgResult->setFont(font);
        label_recgResult->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_recgResult);

        recgResult = new QLabel(frame);
        recgResult->setObjectName(QStringLiteral("recgResult"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(recgResult->sizePolicy().hasHeightForWidth());
        recgResult->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224 Light"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        recgResult->setFont(font1);
        recgResult->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        recgResult->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(recgResult);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_recvState = new QLabel(frame);
        label_recvState->setObjectName(QStringLiteral("label_recvState"));
        label_recvState->setFont(font1);
        label_recvState->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_recvState);

        recvProsBar = new QProgressBar(frame);
        recvProsBar->setObjectName(QStringLiteral("recvProsBar"));
        sizePolicy.setHeightForWidth(recvProsBar->sizePolicy().hasHeightForWidth());
        recvProsBar->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        recvProsBar->setFont(font2);
        recvProsBar->setStyleSheet(QLatin1String("QProgressBar{\n"
"border : 2px solid grey;\n"
"border-radius  : 5px;\n"
"width: 10px;\n"
"margin : 1px;\n"
"background-color :rgb(185, 255, 247);\n"
"color : rgb(0, 0, 0);\n"
"}\n"
"QProgressBar:chunk{\n"
"background-color :rgb(115, 202, 255);\n"
"width: 15px;\n"
"margin: 1px;\n"
"}"));
        recvProsBar->setValue(24);
        recvProsBar->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(recvProsBar);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        imageDisplay = new QLabel(frame);
        imageDisplay->setObjectName(QStringLiteral("imageDisplay"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(imageDisplay->sizePolicy().hasHeightForWidth());
        imageDisplay->setSizePolicy(sizePolicy1);
        imageDisplay->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        imageDisplay->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageDisplay, 0, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_savePath = new QLabel(frame);
        label_savePath->setObjectName(QStringLiteral("label_savePath"));
        label_savePath->setFont(font1);
        label_savePath->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(label_savePath);

        savePath = new QLabel(frame);
        savePath->setObjectName(QStringLiteral("savePath"));
        sizePolicy.setHeightForWidth(savePath->sizePolicy().hasHeightForWidth());
        savePath->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\273\237\346\255\243\351\273\221\351\253\224 Light"));
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setWeight(75);
        savePath->setFont(font3);
        savePath->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        savePath->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(savePath);


        gridLayout->addLayout(horizontalLayout_8, 3, 0, 1, 1);

        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(480, 20, 281, 391));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(31, 31, 31);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(10);
        stateBrowser = new QTextBrowser(frame_2);
        stateBrowser->setObjectName(QStringLiteral("stateBrowser"));
        stateBrowser->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout_4->addWidget(stateBrowser, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(20);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        startBtn = new QPushButton(frame_2);
        startBtn->setObjectName(QStringLiteral("startBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startBtn->sizePolicy().hasHeightForWidth());
        startBtn->setSizePolicy(sizePolicy2);
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        startBtn->setFont(font4);
        startBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color: rgb(141, 241, 226);\n"
"border:2px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(109, 186, 175);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(49, 84, 79);\n"
"}"));

        horizontalLayout->addWidget(startBtn);

        stopBtn = new QPushButton(frame_2);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));
        sizePolicy2.setHeightForWidth(stopBtn->sizePolicy().hasHeightForWidth());
        stopBtn->setSizePolicy(sizePolicy2);
        stopBtn->setFont(font4);
        stopBtn->setStyleSheet(QLatin1String("QPushButton{\n"
"color:rgb(0, 0, 0);\n"
"background-color:rgb(255, 165, 255);\n"
"border:2px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"	border-color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color:rgb(184, 119, 184);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"color: rgb(255, 255, 255);\n"
"color: rgb(126, 81, 126);\n"
"background-color: rgb(49, 84, 79);\n"
"}"));

        horizontalLayout->addWidget(stopBtn);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_ip = new QLabel(frame_2);
        label_ip->setObjectName(QStringLiteral("label_ip"));
        label_ip->setFont(font1);
        label_ip->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_ip);

        ip = new QLabel(frame_2);
        ip->setObjectName(QStringLiteral("ip"));
        sizePolicy.setHeightForWidth(ip->sizePolicy().hasHeightForWidth());
        ip->setSizePolicy(sizePolicy);
        ip->setFont(font1);
        ip->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:5px;"));
        ip->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(ip);


        gridLayout_4->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        serverWindow->setCentralWidget(centralWidget);
        frame_2->raise();
        frame->raise();
        menuBar = new QMenuBar(serverWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 775, 20));
        serverWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(serverWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        serverWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(serverWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        serverWindow->setStatusBar(statusBar);

        retranslateUi(serverWindow);

        QMetaObject::connectSlotsByName(serverWindow);
    } // setupUi

    void retranslateUi(QMainWindow *serverWindow)
    {
        serverWindow->setWindowTitle(QApplication::translate("serverWindow", "serverWindow", Q_NULLPTR));
        label_recgResult->setText(QApplication::translate("serverWindow", "\345\210\244\345\210\245\347\265\220\346\236\234 : ", Q_NULLPTR));
        recgResult->setText(QApplication::translate("serverWindow", "\345\210\244\346\226\267\347\265\220\346\236\234(\347\233\270\344\274\274\345\272\246%)", Q_NULLPTR));
        label_recvState->setText(QApplication::translate("serverWindow", "\346\216\245\346\224\266\347\213\200\346\205\213 : ", Q_NULLPTR));
        imageDisplay->setText(QString());
        label_savePath->setText(QApplication::translate("serverWindow", "\345\255\230\346\252\224\350\267\257\345\276\221 : ", Q_NULLPTR));
        savePath->setText(QString());
        startBtn->setText(QApplication::translate("serverWindow", "Start", Q_NULLPTR));
        stopBtn->setText(QApplication::translate("serverWindow", "Stop", Q_NULLPTR));
        label_ip->setText(QApplication::translate("serverWindow", "IP : ", Q_NULLPTR));
        ip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class serverWindow: public Ui_serverWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERWINDOW_H

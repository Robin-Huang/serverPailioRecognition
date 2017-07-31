#include "serverWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    serverWindow servWindow;
    servWindow.show();

    return a.exec();
}

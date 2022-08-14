#include "ChatFreelyServer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ChatFreelyServer w;
    w.show();
    return a.exec();
}

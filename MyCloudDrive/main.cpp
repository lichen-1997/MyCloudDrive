#include <QtWidgets/QApplication>

#include "LoginDialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginDialog w;
    w.show();
    return a.exec();
}

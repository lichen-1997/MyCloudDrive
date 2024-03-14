#include "MyCloudDrive.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyCloudDrive w;
    w.show();
    return a.exec();
}

#include <QtWidgets/QApplication>
#include <QDebug>
#include "MainWidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MainWidget m;
	m.showLoginDialog();
	return a.exec();
}

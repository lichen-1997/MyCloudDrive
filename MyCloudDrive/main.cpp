#include <QtWidgets/QApplication>
#include <QDebug>
#include "LoginDialog.h"
#include "MainWidget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	MainWidget m;
    LoginDialog w;
    int code = w.exec();
	if(code == QDialog::Accepted)
	{
		m.show();
		return a.exec();
	}
	qDebug() << "³ÌÐòÍË³ö£¡";
}

#include <QtWidgets/QApplication>
#include <QWidget>
#include <QDebug>
#include "LoginDialog.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	QWidget m;
	m.setWindowTitle("������");
    LoginDialog w;
    int code = w.exec();
	if(code == QDialog::Accepted)
	{
		m.show();
		return a.exec();
	}
	qDebug() << "�����˳���";
}

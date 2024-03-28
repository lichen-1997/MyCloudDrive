#include "LoginDialog.h"

LoginDialog::LoginDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	init();
}

LoginDialog::~LoginDialog()
{}

void LoginDialog::init()
{
	setWindowFlags(Qt::CustomizeWindowHint);
}

void LoginDialog::on_pb_close_clicked()
{
	reject();
}

void LoginDialog::on_pb_login_clicked()
{
	// TODO µÇÂ¼ÑéÖ¤
	accept();
}




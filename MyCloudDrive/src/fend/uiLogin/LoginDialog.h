#pragma once
#pragma execution_character_set("UTF-8")

#include <QDialog>
#include "ui_LoginDialog.h"

class LoginDialog : public QDialog
{
	Q_OBJECT

public:
	LoginDialog(QWidget *parent = nullptr);
	~LoginDialog();

private slots:
	void on_pb_close_clicked();
	void on_pb_login_clicked();

private:
	void init();

private:
	Ui::LoginDialogClass ui;
};

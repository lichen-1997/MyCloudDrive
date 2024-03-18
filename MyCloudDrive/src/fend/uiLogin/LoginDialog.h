#pragma once

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

private:
	void init();

private:
	Ui::LoginDialogClass ui;
};

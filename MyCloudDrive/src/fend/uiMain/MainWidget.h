#pragma once

#include <QWidget>
#include "ui_MainWidget.h"
#include "LoginDialog.h"

class MainWidget : public QWidget
{
	Q_OBJECT

public:
	MainWidget(QWidget *parent = nullptr);
	~MainWidget();
	void showLoginDialog();
private:
	Ui::MainWidgetClass ui;
	LoginDialog* m_pLoginDialog = nullptr;
};

#include "MainWidget.h"

MainWidget::MainWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.splitter->setStretchFactor(0, 1);
	ui.splitter->setStretchFactor(1, 4);
}

MainWidget::~MainWidget()
{
	if(m_pLoginDialog != nullptr)
	{
		delete m_pLoginDialog;
		m_pLoginDialog = nullptr;
	}
}

void MainWidget::showLoginDialog()
{
	if(m_pLoginDialog == nullptr)
	{
		m_pLoginDialog = new LoginDialog();
		connect(m_pLoginDialog, &LoginDialog::accepted, this, &MainWidget::show);
	}
	m_pLoginDialog->show();
}


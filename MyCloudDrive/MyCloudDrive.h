#pragma once

#include <QtWidgets/QWidget>
#include "ui_MyCloudDrive.h"

class MyCloudDrive : public QWidget
{
    Q_OBJECT

public:
    MyCloudDrive(QWidget *parent = nullptr);
    ~MyCloudDrive();

private:
    Ui::MyCloudDriveClass ui;
};

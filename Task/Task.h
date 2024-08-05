#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Task.h"

class Task : public QMainWindow
{
    Q_OBJECT

public:
    Task(QWidget *parent = nullptr);
    ~Task();

private:
    Ui::TaskClass ui;
};

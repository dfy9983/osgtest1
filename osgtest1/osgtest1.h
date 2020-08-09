#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_osgtest1.h"

class osgtest1 : public QMainWindow
{
    Q_OBJECT

public:
    osgtest1(QWidget *parent = Q_NULLPTR);

private:
    Ui::osgtest1Class ui;
};

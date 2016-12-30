#include "workblank.h"
#include "ui_workblank.h"

WorkBlank::WorkBlank(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkBlank)
{
    ui->setupUi(this);
}

WorkBlank::~WorkBlank()
{
    delete ui;
}

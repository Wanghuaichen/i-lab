#include "agv.h"
#include "ui_agv.h"

AGV::AGV(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AGV)
{
    ui->setupUi(this);
}

AGV::~AGV()
{
    delete ui;
}

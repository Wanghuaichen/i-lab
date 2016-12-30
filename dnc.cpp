#include "dnc.h"
#include "ui_dnc.h"

DNC::DNC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DNC)
{
    ui->setupUi(this);
}

DNC::~DNC()
{
    delete ui;
}


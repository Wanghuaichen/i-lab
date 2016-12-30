#include "delta.h"
#include "ui_delta.h"

Delta::Delta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Delta)
{
    ui->setupUi(this);
}

Delta::~Delta()
{
    delete ui;
}

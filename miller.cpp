#include "miller.h"
#include "ui_miller.h"

Miller::Miller(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Miller)
{
    ui->setupUi(this);
}

Miller::~Miller()
{
    delete ui;
}

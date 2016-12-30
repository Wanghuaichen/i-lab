#include "dncsim.h"
#include "ui_dncsim.h"

DNCSim::DNCSim(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DNCSim)
{
    ui->setupUi(this);
}

DNCSim::~DNCSim()
{
    delete ui;
}

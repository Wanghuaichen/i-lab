#include "energy.h"
#include "ui_energy.h"

Energy::Energy(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Energy)
{
    ui->setupUi(this);
}

Energy::~Energy()
{
    delete ui;
}

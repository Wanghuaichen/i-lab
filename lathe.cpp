#include "lathe.h"
#include "ui_lathe.h"

Lathe::Lathe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lathe)
{
    ui->setupUi(this);
}

Lathe::~Lathe()
{
    delete ui;
}

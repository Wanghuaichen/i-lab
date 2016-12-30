#include "rfid.h"
#include "ui_rfid.h"

RFID::RFID(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RFID)
{
    ui->setupUi(this);
}

RFID::~RFID()
{
    delete ui;
}

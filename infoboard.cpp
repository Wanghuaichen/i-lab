#include "infoboard.h"
#include "ui_infoboard.h"

InfoBoard::InfoBoard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InfoBoard)
{
    ui->setupUi(this);
}

InfoBoard::~InfoBoard()
{
    delete ui;
}

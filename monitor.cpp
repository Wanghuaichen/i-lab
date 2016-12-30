#include "monitor.h"
#include "ui_monitor.h"

Monitor::Monitor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Monitor)
{
    ui->setupUi(this);

    movie1 = new QMovie(":/picture/gif/gif1.gif");
    movie2 = new QMovie(":/picture/gif/gif2.gif");

    movie1->setScaledSize(QSize(255,255));
    movie2->setScaledSize(QSize(255,255));

    ui->lbVideo1->setMovie(movie1);
    ui->lbVideo2->setMovie(movie1);
    ui->lbVideo3->setMovie(movie1);
    ui->lbVideo4->setMovie(movie2);
    ui->lbVideo5->setMovie(movie2);
    ui->lbVideo6->setMovie(movie2);


    movie1->start();
    movie2->start();

    ui->lbVideo1->show();
    ui->lbVideo2->show();
    ui->lbVideo3->show();
    ui->lbVideo4->show();
    ui->lbVideo5->show();
    ui->lbVideo6->show();

}

Monitor::~Monitor()
{
    delete ui;
    delete movie1;
    delete movie2;
}

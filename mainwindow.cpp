#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
    if (QMessageBox::Yes == QMessageBox::warning(NULL, "主功能", "是否需要初始化系统？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
        reset();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tmr;
}

void MainWindow::init()
{
    connect(ui->actWndMonitor, &QAction::toggled, this, &MainWindow::showMonitor);
    connect(ui->actWndManipulator, &QAction::toggled, this, &MainWindow::showManipulator);
    connect(ui->actWndAGV, &QAction::toggled, this, &MainWindow::showAGV);
    connect(ui->actWndDelta, &QAction::toggled, this, &MainWindow::showDelta);
    connect(ui->actWndLathe, &QAction::toggled, this, &MainWindow::showLathe);
    connect(ui->actWndDNC, &QAction::toggled, this, &MainWindow::showDNC);
    connect(ui->actWndMiller, &QAction::toggled, this, &MainWindow::showMiller);
    connect(ui->actWndEnergy, &QAction::toggled, this, &MainWindow::showEnergy);
    connect(ui->actWndRFID, &QAction::toggled, this, &MainWindow::showRFID);
    connect(ui->actWndBoard, &QAction::toggled, this, &MainWindow::showBoard);
    connect(ui->actWndSim, &QAction::toggled, this, &MainWindow::showSim);
    connect(ui->actError, &QAction::triggered, this, &MainWindow::displayError);

    tmr = new QTimer(this);
    tmr->setInterval(1000);
    connect(tmr, &QTimer::timeout, this, &MainWindow::setPgbValue);

    connect(ui->pbStart, &QPushButton::clicked, this, &MainWindow::projectStart);
    connect(ui->pbStop, &QPushButton::clicked, this, &MainWindow::projectStop);
    connect(ui->pbPause, &QPushButton::clicked, this, &MainWindow::projectPause);
    connect(ui->pbScram, &QPushButton::clicked, this, &MainWindow::projectScram);
    connect(ui->actToolStart, &QAction::triggered, this, &MainWindow::tmrStart);
    connect(ui->actToolStop, &QAction::triggered, this, &MainWindow::tmrStop);
    connect(ui->actToolReset, &QAction::triggered, this, &MainWindow::reset);
}

void MainWindow::tmrStart()
{
    if (!tmr->isActive())
        tmr->start();

    ui->pbStart->setEnabled(false);
    ui->pbStop->setEnabled(true);
}

void MainWindow::tmrStop()
{
    if (tmr->isActive())
        tmr->stop();

    ui->pbStart->setEnabled(true);
    ui->pbStop->setEnabled(false);
}

void MainWindow::projectStart()
{
    tmrStart();
}

void MainWindow::projectPause()
{
    if (QMessageBox::Yes == QMessageBox::warning(NULL, "主功能", "是否需要暂停当前动作？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
        tmrStop();
}

void MainWindow::projectStop()
{
    if (QMessageBox::Yes == QMessageBox::warning(NULL, "主功能", "是否需要停止当前动作？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
        tmrStop();
}

void MainWindow::projectScram()
{
    tmrStop();
}

void MainWindow::setPgbValue()
{
    if (ui->pgbMainAGV->value() < 100)
        ui->pgbMainAGV->setValue(ui->pgbMainAGV->value() + 1);
    else ui->pgbMainAGV->setValue(0);

    if (ui->pgbMainLathe->value() < 100)
        ui->pgbMainLathe->setValue(ui->pgbMainLathe->value() + 1);
    else ui->pgbMainLathe->setValue(0);

    if (ui->pgbMainDelta1->value() < 100)
        ui->pgbMainDelta1->setValue(ui->pgbMainDelta1->value() + 1);
    else ui->pgbMainDelta1->setValue(0);

    tmr->start();
}

void MainWindow::displayError()
{
    if (ui->pbStart->isEnabled())   //程序未执行时，故障演示不可用
        return;

    if (QMessageBox::Yes == QMessageBox::warning(NULL, "警告", "发生运行错误，是否暂停当前动作并进行处理？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
        if (QMessageBox::Yes == QMessageBox::warning(NULL, "故障诊断", "是否需要全局动作停止？", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
        {
            ui->pbStop->click();
            QMessageBox::information(NULL, "故障诊断", "此页面用于演示故障诊断页面。", QMessageBox::Ok);
        }
        else
        {
            QMessageBox::information(NULL, "故障诊断", "此页面用于演示故障诊断页面。", QMessageBox::Ok);
        }
    else
        return;
}

void MainWindow::reset()
{
    ui->pgbMainAGV->setValue(0);
    ui->pgbMainDelta1->setValue(0);
    ui->pgbMainDelta2->setValue(0);
    ui->pgbMainLathe->setValue(0);
    ui->pgbMainMan1->setValue(0);
    ui->pgbMainMiller->setValue(0);

    ui->cb1->setChecked(false);
    ui->cb2->setChecked(false);
    ui->cb5->setChecked(false);
    ui->cb6->setChecked(false);
    ui->cb7->setChecked(false);
    ui->cb8->setChecked(false);
}

void MainWindow::showManipulator()
{
    man.show();
    ui->actWndManipulator->setChecked(false);
}

void MainWindow::showMonitor()
{
    mon.show();
    ui->actWndMonitor->setChecked(false);
}

void MainWindow::showAGV()
{
    agv.show();
    ui->actWndAGV->setChecked(false);
}

void MainWindow::showDelta()
{
    dlt.show();
    ui->actWndDelta->setChecked(false);
}

void MainWindow::showDNC()
{
    dnc.show();
    ui->actWndDNC->setChecked(false);
}

void MainWindow::showMiller()
{
    mil.show();
    ui->actWndMiller->setChecked(false);
}

void MainWindow::showLathe()
{
    lth.show();
    ui->actWndLathe->setChecked(false);
}

void MainWindow::showRFID()
{
    rfid.show();
    ui->actWndRFID->setChecked(false);
}

void MainWindow::showEnergy()
{
    engy.show();
    ui->actWndEnergy->setChecked(false);
}

void MainWindow::showSim()
{
    sim.show();
    ui->actWndSim->setChecked(false);
}

void MainWindow::showBoard()
{
    board.show();
    ui->actWndBoard->setChecked(false);
}

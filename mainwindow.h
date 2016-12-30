#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMenu>
#include <QAction>
#include <QTimer>

#include "manipulator.h"
#include "monitor.h"
#include "agv.h"
#include "delta.h"
#include "dnc.h"
#include "lathe.h"
#include "miller.h"
#include "energy.h"
#include "rfid.h"
#include "infoboard.h"
#include "dncsim.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Manipulator man;
    Monitor mon;
    AGV agv;
    Delta dlt;
    Lathe lth;
    DNC dnc;
    Miller mil;
    RFID rfid;
    Energy engy;
    InfoBoard board;
    DNCSim sim;

    QTimer *tmr;

    void init();
    void setPgbValue();
    void tmrStart();
    void tmrStop();
    void projectStart();
    void projectStop();
    void projectPause();
    void projectScram();

    void displayError();
    void reset();

    void showManipulator();
    void showMonitor();
    void showAGV();
    void showDelta();
    void showDNC();
    void showMiller();
    void showLathe();
    void showWorkBlank();
    void showRFID();
    void showEnergy();
    void showSim();
    void showBoard();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

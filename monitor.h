#ifndef MONITOR_H
#define MONITOR_H

#include <QWidget>
#include <QMovie>
#include <QLabel>


namespace Ui {
class Monitor;
}

class Monitor : public QWidget
{
    Q_OBJECT

public:
    explicit Monitor(QWidget *parent = 0);
    ~Monitor();

    QMovie *movie1;
    QMovie *movie2;

private:
    Ui::Monitor *ui;
};

#endif // MONITOR_H

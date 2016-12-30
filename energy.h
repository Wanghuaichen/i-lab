#ifndef ENERGY_H
#define ENERGY_H

#include <QWidget>

namespace Ui {
class Energy;
}

class Energy : public QWidget
{
    Q_OBJECT

public:
    explicit Energy(QWidget *parent = 0);
    ~Energy();

private:
    Ui::Energy *ui;
};

#endif // ENERGY_H

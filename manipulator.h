#ifndef MANIPULATOR_H
#define MANIPULATOR_H

#include <QWidget>
#include <QComboBox>
#include <QString>

namespace Ui {
class Manipulator;
}

class Manipulator : public QWidget
{
    Q_OBJECT

public:
    explicit Manipulator(QWidget *parent = 0);
    ~Manipulator();

    void chooseAct2(const QString & act);

private:
    Ui::Manipulator *ui;
};

#endif // MANIPULATOR_H

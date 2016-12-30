#ifndef LATHE_H
#define LATHE_H

#include <QWidget>

namespace Ui {
class Lathe;
}

class Lathe : public QWidget
{
    Q_OBJECT

public:
    explicit Lathe(QWidget *parent = 0);
    ~Lathe();

private:
    Ui::Lathe *ui;
};

#endif // LATHE_H

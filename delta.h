#ifndef DELTA_H
#define DELTA_H

#include <QWidget>

namespace Ui {
class Delta;
}

class Delta : public QWidget
{
    Q_OBJECT

public:
    explicit Delta(QWidget *parent = 0);
    ~Delta();

private:
    Ui::Delta *ui;
};

#endif // DELTA_H

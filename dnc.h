#ifndef DNC_H
#define DNC_H

#include <QWidget>

namespace Ui {
class DNC;
}

class DNC : public QWidget
{
    Q_OBJECT

public:
    explicit DNC(QWidget *parent = 0);
    ~DNC();

private:
    Ui::DNC *ui;
};

#endif // DNC_H

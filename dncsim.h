#ifndef DNCSIM_H
#define DNCSIM_H

#include <QWidget>

namespace Ui {
class DNCSim;
}

class DNCSim : public QWidget
{
    Q_OBJECT

public:
    explicit DNCSim(QWidget *parent = 0);
    ~DNCSim();

private:
    Ui::DNCSim *ui;
};

#endif // DNCSIM_H

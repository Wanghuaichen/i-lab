#ifndef AGV_H
#define AGV_H

#include <QWidget>

namespace Ui {
class AGV;
}

class AGV : public QWidget
{
    Q_OBJECT

public:
    explicit AGV(QWidget *parent = 0);
    ~AGV();

private:
    Ui::AGV *ui;
};

#endif // AGV_H

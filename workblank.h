#ifndef WORKBLANK_H
#define WORKBLANK_H

#include <QWidget>

namespace Ui {
class WorkBlank;
}

class WorkBlank : public QWidget
{
    Q_OBJECT

public:
    explicit WorkBlank(QWidget *parent = 0);
    ~WorkBlank();

private:
    Ui::WorkBlank *ui;
};

#endif // WORKBLANK_H

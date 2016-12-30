#ifndef MILLER_H
#define MILLER_H

#include <QWidget>

namespace Ui {
class Miller;
}

class Miller : public QWidget
{
    Q_OBJECT

public:
    explicit Miller(QWidget *parent = 0);
    ~Miller();

private:
    Ui::Miller *ui;
};

#endif // MILLER_H

#ifndef INFOBOARD_H
#define INFOBOARD_H

#include <QWidget>

namespace Ui {
class InfoBoard;
}

class InfoBoard : public QWidget
{
    Q_OBJECT

public:
    explicit InfoBoard(QWidget *parent = 0);
    ~InfoBoard();

private:
    Ui::InfoBoard *ui;
};

#endif // INFOBOARD_H

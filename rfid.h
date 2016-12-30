#ifndef RFID_H
#define RFID_H

#include <QWidget>

namespace Ui {
class RFID;
}

class RFID : public QWidget
{
    Q_OBJECT

public:
    explicit RFID(QWidget *parent = 0);
    ~RFID();

private:
    Ui::RFID *ui;
};

#endif // RFID_H

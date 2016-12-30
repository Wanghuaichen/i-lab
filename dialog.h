#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog *ui;

    void pbCancleClicked();
    void pbOkClicked();
};

#endif // DIALOG_H

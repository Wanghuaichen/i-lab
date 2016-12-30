#include "dialog.h"
#include "ui_dialog.h"

#include <QTextCodec>
#include <QMessageBox>
#include <QLabel>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->pbOK, &QPushButton::clicked, this, &Dialog::pbOkClicked);
//    connect(ui->pbCancle, &QPushButton::clicked, this, &Dialog::pbCancleClicked);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::pbOkClicked()
{
  if(this->ui->leUser->text().trimmed() == tr("admin") &&
     this->ui->lePassport->text().trimmed() == tr("admin"))
  {
      accept();
  }
  else
  {
     // QTextCodec::setCodecForTr( QTextCodec::codecForName("GBK") );
      QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK") );
      QMessageBox::warning(this,tr("警告"),tr("用户名或密码错误!"),QMessageBox::Yes);
      this->ui->leUser->clear();
      this->ui->lePassport->clear();
      this->ui->leUser->setFocus();
  }
}

//void Dialog::pbCancleClicked()
//{
//    this->close();
//}

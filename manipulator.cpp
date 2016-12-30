#include "manipulator.h"
#include "ui_manipulator.h"

#include <QMessageBox>

Manipulator::Manipulator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Manipulator)
{
    ui->setupUi(this);

    connect(ui->cbHandAct2, &QComboBox::currentTextChanged, this, &Manipulator::chooseAct2);
}

Manipulator::~Manipulator()
{
    delete ui;
}



void Manipulator::chooseAct2(const QString &act)
{
    if (act == "夹紧")
    {
        if (QMessageBox::No == QMessageBox::warning(NULL, tr("动作"), tr("是否确定执行夹紧动作？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
            ui->cbHandAct2->setCurrentText("无动作");
    }
    else if (act == "松开")
    {
        if (QMessageBox::No == QMessageBox::warning(NULL, tr("动作"), tr("是否确定执行松开动作？"), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes))
            ui->cbHandAct2->setCurrentText("无动作");
    }
    else
        return;
}

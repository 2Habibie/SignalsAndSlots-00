#include "dialogone.h"
#include "ui_dialogone.h"

DialogOne::DialogOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogOne)
{
    ui->setupUi(this);

    init();
}

DialogOne::~DialogOne()
{
    delete ui;
}

void DialogOne::init()
{
    for (int i=0; i<10; i++)
    {
        ui->comboBox->addItem("Item number [" + QString::number(i) + "]");
    }
}

void DialogOne::on_okButton_clicked()
{
    close();
}

void DialogOne::on_comboBox_currentIndexChanged(int index)
{
    emit(indexChanged(index));
}

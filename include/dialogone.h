#pragma once

#include <QDialog>

namespace Ui {
class DialogOne;
}

class DialogOne : public QDialog
{
    Q_OBJECT

public:
    explicit DialogOne(QWidget *parent = nullptr);
    ~DialogOne();

    void init();

signals:
    void indexChanged (const int& index) const;

private slots:
    void on_okButton_clicked();
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::DialogOne *ui;
};

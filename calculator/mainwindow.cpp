#include "mainwindow.h"

#include <QDebug>
#include <QMessageBox>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) { ui->setupUi(this); }

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_buttonClear_clicked()
{
    ui->lineEditNum1->clear();
    ui->lineEditNum2->clear();
    ui->lineEditSum->clear();
}

void MainWindow::on_buttonCal_clicked()
{
    double num1 = ui->lineEditNum1->text().toDouble();  //获取num1的值
    double num2 = ui->lineEditNum2->text().toDouble();  //获取num2的值
    uint8_t index = ui->comboBox->currentIndex();       //获取下拉框的下标
    double result = 0.0;
    switch (index)
    {
        case 0:
            result = num1 + num2;  //加法
            break;
        case 1:
            result = num1 - num2;  //减法
            break;
        case 2:
            result = num1 * num2;  //乘法
            break;
        case 3:
            if (num2 == 0)
            {
                QMessageBox::about(this, "注意", "除数不能为0！");
                return;
            }
            result = num1 / num2;  //除法
            break;
        default: break;
    }
    ui->lineEditSum->setText(QString::number(result));
}

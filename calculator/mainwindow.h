#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

private slots:
    void on_buttonClear_clicked();  //清除输入框槽函数
    void on_buttonCal_clicked();  //计算结果槽函数

private:
    Ui::MainWindow* ui;
};

#endif  // MAINWINDOW_H

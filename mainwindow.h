#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Sun_clicked();

   // void on_pushButton_Snow_clicked();

   // void on_pushButton_Rain_clicked();

    void on_pushButton_Snow_clicked(bool checked);

    void on_pushButton_Rain_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

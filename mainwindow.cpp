#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include "QIcon"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);// izna4alno mozno ui ustanovit
    ui->label_snow->setText(" Snow is falling <img src= ':/big/Icons/256x256/snow.png'>");
    ui->label_rain->setText("Rain is raining <img src= ':/big/Icons/256x256/rain.png'>");
    ui->label_sun->setText(" Sun <img src= ':/big/Icons/256x256/sun.png'>");
   // ui->pushButton_Sun->setChecked(true);
    ui->pushButton_Sun->setIcon(QIcon(":/small/Icons/48x48/sun.png"));
    ui->pushButton_Sun->setIconSize(QSize(48,48));
    ui->pushButton_Rain->setIcon(QIcon(":/small/Icons/48x48/rain.png"));
    ui->pushButton_Rain->setIconSize(QSize(48,48));
    ui->pushButton_Snow->setIcon(QIcon(":/small/Icons/48x48/snow.png"));
    ui->pushButton_Snow->setIconSize(QSize(48,48));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Sun_clicked()
{
    ui->label_sun->setText(" Sun <img src= ':/big/Icons/256x256/sun.png'>");
    ui->pushButton_Sun->isChecked();
        ui->label_rain->clear();

    ui->pushButton_Sun->isChecked();
        ui->label_snow->clear();


}

/*void MainWindow::on_pushButton_Snow_clicked()
{
    ui->label_snow->setText("<img src= ':/small/Icons/48x48/snow.png'>");
}
*/
/*void MainWindow::on_pushButton_Rain_clicked()
{
    ui->label_rain->setText("<img src= ':/small/Icons/48x48/rain.png'>");
}*/

void MainWindow::on_pushButton_Snow_clicked(bool checked)
{
    if(checked){
        ui->label_snow->setText(" Snow is falling <img src= ':/big/Icons/256x256/snow.png'>");}
    else {
        ui->label_snow->setText("Snow stop falling");
    }


}

void MainWindow::on_pushButton_Rain_toggled(bool checked)
{
    if(checked){
        ui->label_rain->setText("Rain is raining <img src= ':/big/Icons/256x256/rain.png'>");
    } else {
        ui->label_rain->setText("Rain stop Raining");
}
}

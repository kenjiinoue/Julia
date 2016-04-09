#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "julia_worker.h"
#include "QImage.h"
#include "julia.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    QImage dispImage;
    float a=ui->inputA->text().toFloat();
    float b=ui->inputB->text().toFloat();
    float bail=ui->input_bail->text().toFloat();
    float iter=ui->input_iter->text().toFloat();
    Julia * jules = new Julia(a,b,bail,iter);

    //ui->display->set
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->hide, SIGNAL(clicked()),ui->Cdr,SLOT(hide()));
    QObject::connect(ui->show, SIGNAL(clicked()),ui->Cdr,SLOT(show()));
    QObject::connect(ui->radioButton, SIGNAL(clicked(bool)),ui->Cdr,SLOT(setHidden(bool)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

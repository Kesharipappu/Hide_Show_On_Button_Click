#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "second_dialog.h"
#include "ui_second_dialog.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->main_widget = new second_Dialog();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    ui->main_widget->setVisible(!ui->main_widget->isVisible());

    // Create an instance of the SecondDialog
//        second_Dialog secondDialog;

        // Show the second dialog modally
//        if (secondDialog.exec() == QDialog::Accepted) {
//            // If the second dialog was accepted, set its central widget to the main window
//            setCentralWidget(secondDialog.getSecondWidget());
//        }
}


//void MainWindow::on_pushButton_clicked()
//{
//    // Create an instance of the second dialog
//    QDialog *secondDialog = new QDialog(this);
//    Ui::SecondDialog uiSecondDialog;
//    uiSecondDialog.setupUi(secondDialog);

//    // Set second_widget as the central widget of main_widget
//    ui->main_widget->setCentralWidget(uiSecondDialog.second_widget);

//    // Show the second dialog
//    secondDialog->exec();
//}

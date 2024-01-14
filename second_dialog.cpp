#include "second_dialog.h"
#include "ui_second_dialog.h"

second_Dialog::second_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::second_Dialog)
{
    ui->setupUi(this);
}

second_Dialog::~second_Dialog()
{
    delete ui;
}
QWidget* second_Dialog::getSecondWidget() const
{
    // Return the central widget of the second dialog
    return ui->second_widget;
}




//in qt i have two ui named mainwindow.ui and second_dialog.ui  inside mainwindow.ui there is a button named pushButton and a widget named main_widget and inside second_dialog.ui there is a widget named second_widget . when i click on button then second_widget should display inside main_widget

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pbInstall_clicked()
{
    int index;
    index = ui->cbChoose->currentIndex(); // 0=icons; 1=theme

    QMessageBox msgBox;
    if (index==0) {
        QString file = QFileDialog::getOpenFileName(this, tr("Select a file"),"/home", tr("*.tar.gz | *.tgz (*.tar.gz *.tgz)"));

        if (file != ""){
            std::string str = "tar -zxvf " + file.toStdString() + " -C /usr/share/icons/";
            system(str.c_str());
            msgBox.setText("All done, you can now close the application and change your icons.");
            msgBox.exec();
        }
        else
        {
            msgBox.setText("You have to choose a '.tar.gz' or '.tgz' file.");
            msgBox.exec();
        }
    }
    else if (index==1) {
        QString file = QFileDialog::getOpenFileName(this, tr("Select a file"),"/home", tr("*.tar.gz | *.tgz (*.tar.gz *.tgz)"));

        if (file != ""){
            std::string str = "tar -zxvf "+file.toStdString()+" -C /usr/share/themes/";
            system(str.c_str());
            msgBox.setText("All done, you can now close the application and change your theme.");
            msgBox.exec();
        }
        else
        {
            msgBox.setText("You have to choose a '.tar.gz' or '.tgz' file.");
            msgBox.exec();
        }
    }

}

#include "study_hours.h"
#include "ui_study_hours.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>

study_hours::study_hours(QWidget *parent) :QDialog(parent),ui(new Ui::study_hours){
    ui->setupUi(this)
;
    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->study_hours_title->palette();
    titleLabel.setColor(ui->study_hours_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->study_hours_title->foregroundRole(), Qt::white);
    ui->study_hours_title->setPalette(titleLabel);

    // Adds white color to name of sponsor
    QPalette inLabel = ui->time_in_label->palette();
    inLabel.setColor(ui->time_in_label->backgroundRole(), Qt::white);
    inLabel.setColor(ui->time_in_label->foregroundRole(), Qt::white);
    ui->time_in_label->setPalette(inLabel);

    // Adds white color to name of sponsor
    QPalette outLabel = ui->time_out_label->palette();
    outLabel.setColor(ui->time_out_label->backgroundRole(), Qt::white);
    outLabel.setColor(ui->time_out_label->foregroundRole(), Qt::white);
    ui->time_out_label->setPalette(inLabel);

    // Adds white color to point sheet label
    QPalette pointLabel = ui->point_sheet_label->palette();
    pointLabel.setColor(ui->point_sheet_label->backgroundRole(), Qt::white);
    pointLabel.setColor(ui->point_sheet_label->foregroundRole(), Qt::white);
    ui->point_sheet_label->setPalette(pointLabel);






}

study_hours::~study_hours()
{
    delete ui;
}

void study_hours::on_time_out_upload_clicked()
{
    QString time_out;
    // opens local file directory, user is able to navigate to select desired folder
        time_out = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = time_out.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

void study_hours::on_time_in_upload_clicked()
{
    QString time_in;
    // opens local file directory, user is able to navigate to select desired folder
        time_in = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = time_in.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

void study_hours::on_point_sheet_upload_clicked()
{
    QString point_upload;
    // opens local file directory, user is able to navigate to select desired folder
        point_upload = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = point_upload.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

void study_hours::on_next_button_clicked()
{

}

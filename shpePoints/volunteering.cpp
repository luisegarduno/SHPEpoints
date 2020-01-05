#include "volunteering.h"
#include "ui_volunteering.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>


volunteering::volunteering(QWidget *parent) :QDialog(parent),ui(new Ui::volunteering){
    ui->setupUi(this);

    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->volunteering_title->palette();
    titleLabel.setColor(ui->volunteering_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->volunteering_title->foregroundRole(), Qt::white);
    ui->volunteering_title->setPalette(titleLabel);

    // Adds white color to points per hour label
    QPalette points_per_hourLabel = ui->per_hour_label->palette();
    points_per_hourLabel.setColor(ui->per_hour_label->backgroundRole(), Qt::white);
    points_per_hourLabel.setColor(ui->per_hour_label->foregroundRole(), Qt::white);
    ui->per_hour_label->setPalette(points_per_hourLabel);

    // Adds white color to number of hours label
    QPalette number_of_hours = ui->num_hours_label->palette();
    number_of_hours.setColor(ui->num_hours_label->backgroundRole(), Qt::white);
    number_of_hours.setColor(ui->num_hours_label->foregroundRole(), Qt::white);
    ui->num_hours_label->setPalette(number_of_hours);

    // Adds white color to name sheet label
    QPalette nameLabel = ui->name_sheet_label->palette();
    nameLabel.setColor(ui->name_sheet_label->backgroundRole(), Qt::white);
    nameLabel.setColor(ui->name_sheet_label->foregroundRole(), Qt::white);
    ui->name_sheet_label->setPalette(nameLabel);

    // Adds white color to point sheet label
    QPalette pointLabel = ui->point_sheet_label->palette();
    pointLabel.setColor(ui->point_sheet_label->backgroundRole(), Qt::white);
    pointLabel.setColor(ui->point_sheet_label->foregroundRole(), Qt::white);
    ui->point_sheet_label->setPalette(pointLabel);








}

volunteering::~volunteering()
{
    delete ui;
}

// allows user to upload name sheet file
void volunteering::on_name_sheet_upload_clicked()
{
    QString name_sheet;
    // opens local file directory, user is able to navigate to select desired folder
        name_sheet = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = name_sheet.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

// allows for the user to use point sheet upload button
void volunteering::on_point_sheet_upload_clicked()
{
    QString point_sheet;
    // opens local file directory, user is able to navigate to select desired folder
        point_sheet = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = point_sheet.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

void volunteering::on_pushButton_clicked()
{

}

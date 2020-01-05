#include "workshop.h"
#include "ui_workshop.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>

workshop::workshop(QWidget *parent) :QDialog(parent),ui(new Ui::workshop){
    ui->setupUi(this);

    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->workshop_title->palette();
    titleLabel.setColor(ui->workshop_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->workshop_title->foregroundRole(), Qt::white);
    ui->workshop_title->setPalette(titleLabel);

    // Adds white color to number of points per person
    QPalette pointsLabel = ui->points_per_person_label->palette();
    pointsLabel.setColor(ui->points_per_person_label->backgroundRole(), Qt::white);
    pointsLabel.setColor(ui->points_per_person_label->foregroundRole(), Qt::white);
    ui->points_per_person_label->setPalette(pointsLabel);

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

    // Adds white color to event name label
    QPalette eventLabel = ui->event_name_label->palette();
    eventLabel.setColor(ui->event_name_label->backgroundRole(), Qt::white);
    eventLabel.setColor(ui->event_name_label->foregroundRole(), Qt::white);
    ui->event_name_label->setPalette(eventLabel);




}

workshop::~workshop()
{
    delete ui;
}

void workshop::on_point_sheet_upload_clicked()
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

void workshop::on_name_sheet_upload_clicked()
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

#include "social_media.h"
#include "ui_social_media.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>

social_media::social_media(QWidget *parent) :QDialog(parent),ui(new Ui::social_media){
    ui->setupUi(this);
    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->social_media_title->palette();
    titleLabel.setColor(ui->social_media_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->social_media_title->foregroundRole(), Qt::white);
    ui->social_media_title->setPalette(titleLabel);

    // Adds white color to number of points per post
    QPalette pointsLabel = ui->points_label->palette();
    pointsLabel.setColor(ui->points_label->backgroundRole(), Qt::white);
    pointsLabel.setColor(ui->points_label->foregroundRole(), Qt::white);
    ui->points_label->setPalette(pointsLabel);

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

social_media::~social_media()
{
    delete ui;
}

void social_media::on_point_sheet_upload_clicked()
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

void social_media::on_name_sheet_upload_clicked()
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

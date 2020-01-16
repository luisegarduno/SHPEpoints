#include "social_event.h"
#include "ui_social_event.h"

social_event::social_event(QWidget *parent) :QDialog(parent),ui(new Ui::social_event){
    ui->setupUi(this);

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to event name label
    QPalette eventLabel = ui->event_name_label->palette();
    eventLabel.setColor(ui->event_name_label->backgroundRole(), Qt::white);
    eventLabel.setColor(ui->event_name_label->foregroundRole(), Qt::white);
    ui->event_name_label->setPalette(eventLabel);

    // Adds white color to title
    QPalette titleLabel = ui->social_event_title->palette();
    titleLabel.setColor(ui->social_event_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->social_event_title->foregroundRole(), Qt::white);
    ui->social_event_title->setPalette(titleLabel);

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






}

social_event::~social_event()
{
    delete ui;
}

void social_event::on_name_sheet_upload_clicked()
{

    QString event_sheet;
    // opens local file directory, user is able to navigate to select desired folder
        event_sheet = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = event_sheet.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }

}

void social_event::on_point_sheet_upload_clicked()
{
    QString event_sheet;
    // opens local file directory, user is able to navigate to select desired folder
        event_sheet = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = event_sheet.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

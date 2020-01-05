#include "other.h"
#include "ui_other.h"

other::other(QWidget *parent) :QDialog(parent),ui(new Ui::other){
    ui->setupUi(this);

    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->other_title->palette();
    titleLabel.setColor(ui->other_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->other_title->foregroundRole(), Qt::white);
    ui->other_title->setPalette(titleLabel);

    // Adds white color to event name label
    QPalette nameLabel = ui->event_name_label->palette();
    nameLabel.setColor(ui->event_name_label->backgroundRole(), Qt::white);
    nameLabel.setColor(ui->event_name_label->foregroundRole(), Qt::white);
    ui->event_name_label->setPalette(nameLabel);

    // Adds white color to point sheet label
    QPalette pointLabel = ui->point_sheet_label->palette();
    pointLabel.setColor(ui->point_sheet_label->backgroundRole(), Qt::white);
    pointLabel.setColor(ui->point_sheet_label->foregroundRole(), Qt::white);
    ui->point_sheet_label->setPalette(pointLabel);

    // Adds white color to event sheet label
    QPalette eventLabel = ui->event_sheet_label->palette();
    eventLabel.setColor(ui->event_sheet_label->backgroundRole(), Qt::white);
    eventLabel.setColor(ui->event_sheet_label->foregroundRole(), Qt::white);
    ui->event_sheet_label->setPalette(nameLabel);

    // Adds white color to number of points per post
    QPalette checkLabel = ui->check_box_label->palette();
    checkLabel.setColor(ui->check_box_label->backgroundRole(), Qt::white);
    checkLabel.setColor(ui->check_box_label->foregroundRole(), Qt::white);
    ui->check_box_label->setPalette(checkLabel);

    // Adds white color to number of points per post
    QPalette gearLabel = ui->gear_label->palette();
    gearLabel.setColor(ui->gear_label->backgroundRole(), Qt::white);
    gearLabel.setColor(ui->gear_label->foregroundRole(), Qt::white);
    ui->gear_label->setPalette(gearLabel);

    // Adds white color to number of points per post
    QPalette emailLabel = ui->email_label->palette();
    emailLabel.setColor(ui->email_label->backgroundRole(), Qt::white);
    emailLabel.setColor(ui->email_label->foregroundRole(), Qt::white);
    ui->email_label->setPalette(emailLabel);

    // Adds white color to number of points per post
    QPalette memberLabel = ui->member_label->palette();
    memberLabel.setColor(ui->member_label->backgroundRole(), Qt::white);
    memberLabel.setColor(ui->member_label->foregroundRole(), Qt::white);
    ui->member_label->setPalette(memberLabel);

    // Adds white color to number of points per post
    QPalette letterLabel = ui->newsletter_label->palette();
    letterLabel.setColor(ui->newsletter_label->backgroundRole(), Qt::white);
    letterLabel.setColor(ui->newsletter_label->foregroundRole(), Qt::white);
    ui->newsletter_label->setPalette(memberLabel);

}

other::~other()
{
    delete ui;
}

void other::on_point_shee_upload_clicked()
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

void other::on_event_sheet_upload_clicked()
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

#include "general_meeting.h"
#include "ui_general_meeting.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>

general_meeting::general_meeting(QWidget *parent) : QDialog(parent), ui(new Ui::general_meeting){
    ui->setupUi(this);
;

    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->general_meeting_title->palette();
    titleLabel.setColor(ui->general_meeting_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->general_meeting_title->foregroundRole(), Qt::white);
    ui->general_meeting_title->setPalette(titleLabel);

    // Adds white color to name of sponsor
    QPalette sponsorLabel = ui->sponsor_label->palette();
    sponsorLabel.setColor(ui->sponsor_label->backgroundRole(), Qt::white);
    sponsorLabel.setColor(ui->sponsor_label->foregroundRole(), Qt::white);
    ui->sponsor_label->setPalette(sponsorLabel);

    // Adds white color to meeting point label
    QPalette meetingLabel = ui->meeting_point_label->palette();
    meetingLabel.setColor(ui->meeting_point_label->backgroundRole(), Qt::white);
    meetingLabel.setColor(ui->meeting_point_label->foregroundRole(), Qt::white);
    ui->meeting_point_label->setPalette(meetingLabel);

    // Adds white color to point sheet label
    QPalette pointLabel = ui->point_sheet_label->palette();
    pointLabel.setColor(ui->point_sheet_label->backgroundRole(), Qt::white);
    pointLabel.setColor(ui->point_sheet_label->foregroundRole(), Qt::white);
    ui->point_sheet_label->setPalette(pointLabel);

}

general_meeting::~general_meeting(){
    delete ui;
}

// allows user to click on file upload for the general meeting point sheet
void general_meeting::on_meeting_upload_clicked(){
    QString meeting_upload;
    // opens local file directory, user is able to navigate to select desired folder
        meeting_upload = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = meeting_upload.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

// allows user to click on file upload for the point sheet
void general_meeting::on_point_sheet_upload_clicked()
{
    QString point_sheet_upload;
    // opens local file directory, user is able to navigate to select desired folder
        point_sheet_upload = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = point_sheet_upload.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

void general_meeting::on_next_button_clicked()
{

}

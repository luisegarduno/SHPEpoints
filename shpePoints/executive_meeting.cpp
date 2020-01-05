#include "executive_meeting.h"
#include "ui_executive_meeting.h"

executive_meeting::executive_meeting(QWidget *parent) :QDialog(parent),ui(new Ui::executive_meeting){
    ui->setupUi(this);

    // Allows for maroon background

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->executive_title->palette();
    titleLabel.setColor(ui->executive_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->executive_title->foregroundRole(), Qt::white);
    ui->executive_title->setPalette(titleLabel);

    // Adds white color to point sheet label
    QPalette pointLabel = ui->point_sheet_label->palette();
    pointLabel.setColor(ui->point_sheet_label->backgroundRole(), Qt::white);
    pointLabel.setColor(ui->point_sheet_label->foregroundRole(), Qt::white);
    ui->point_sheet_label->setPalette(pointLabel);

    // Adds white color to others label
    QPalette otherLabel = ui->other_label->palette();
    otherLabel.setColor(ui->other_label->backgroundRole(), Qt::white);
    otherLabel.setColor(ui->other_label->foregroundRole(), Qt::white);
    ui->other_label->setPalette(otherLabel);

    // Adds white color to excutive members present label
    QPalette presentLabel = ui->present_label->palette();
    presentLabel.setColor(ui->present_label->backgroundRole(), Qt::white);
    presentLabel.setColor(ui->present_label->foregroundRole(), Qt::white);
    ui->present_label->setPalette(presentLabel);

    // Adds white color to name 1 label
    QPalette name1Label = ui->name1_label->palette();
    name1Label.setColor(ui->name1_label->backgroundRole(), Qt::white);
    name1Label.setColor(ui->name1_label->foregroundRole(), Qt::white);
    ui->name1_label->setPalette(name1Label);

    // Adds white color to name 2 label
    QPalette name2Label = ui->name2_label->palette();
    name2Label.setColor(ui->name2_label->backgroundRole(), Qt::white);
    name2Label.setColor(ui->name2_label->foregroundRole(), Qt::white);
    ui->name2_label->setPalette(name2Label);

    // Adds white color to name 3 label
    QPalette name3Label = ui->name3_label->palette();
    name3Label.setColor(ui->name3_label->backgroundRole(), Qt::white);
    name3Label.setColor(ui->name3_label->foregroundRole(), Qt::white);
    ui->name3_label->setPalette(name3Label);

    // Adds white color to name 4 label
    QPalette name4Label = ui->name4_label->palette();
    name4Label.setColor(ui->name4_label->backgroundRole(), Qt::white);
    name4Label.setColor(ui->name4_label->foregroundRole(), Qt::white);
    ui->name4_label->setPalette(name4Label);

    // Adds white color to name 5 label
    QPalette name5Label = ui->name5_label->palette();
    name5Label.setColor(ui->name5_label->backgroundRole(), Qt::white);
    name5Label.setColor(ui->name5_label->foregroundRole(), Qt::white);
    ui->name5_label->setPalette(name5Label);

    // Adds white color to name 6 label
    QPalette name6Label = ui->name6_label->palette();
    name6Label.setColor(ui->name6_label->backgroundRole(), Qt::white);
    name6Label.setColor(ui->name6_label->foregroundRole(), Qt::white);
    ui->name6_label->setPalette(name6Label);

    // Adds white color to name 7 label
    QPalette name7Label = ui->name7_label->palette();
    name7Label.setColor(ui->name7_label->backgroundRole(), Qt::white);
    name7Label.setColor(ui->name7_label->foregroundRole(), Qt::white);
    ui->name7_label->setPalette(name7Label);

    // Adds white color to name 8 label
    QPalette name8Label = ui->name8_label->palette();
    name8Label.setColor(ui->name8_label->backgroundRole(), Qt::white);
    name8Label.setColor(ui->name8_label->foregroundRole(), Qt::white);
    ui->name8_label->setPalette(name8Label);

    // Adds white color to name 9 label
    QPalette name9Label = ui->name9_label->palette();
    name9Label.setColor(ui->name9_label->backgroundRole(), Qt::white);
    name9Label.setColor(ui->name9_label->foregroundRole(), Qt::white);
    ui->name9_label->setPalette(name9Label);
}

executive_meeting::~executive_meeting()
{
    delete ui;
}

void executive_meeting::on_point_sheet_upload_clicked()
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

void executive_meeting::on_other_upload_clicked()
{
    QString others_sheet;
    // opens local file directory, user is able to navigate to select desired folder
        others_sheet = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
        string fileName = others_sheet.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
        }
}

#include "committee_meeting.h"
#include "ui_committee_meeting.h"

committee_meeting::committee_meeting(QWidget *parent) :QDialog(parent),ui(new Ui::committee_meeting){
    ui->setupUi(this);

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->committee_title->palette();
    titleLabel.setColor(ui->committee_title->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->committee_title->foregroundRole(), Qt::white);
    ui->committee_title->setPalette(titleLabel);



}

committee_meeting::~committee_meeting()
{
    delete ui;
}

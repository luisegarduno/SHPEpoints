#include "mentorshpe.h"
#include "ui_mentorshpe.h"

mentorshpe::mentorshpe(QWidget *parent) :QDialog(parent),ui(new Ui::mentorshpe){
    ui->setupUi(this);

    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Adds white color to title
    QPalette titleLabel = ui->mentorshpe_label->palette();
    titleLabel.setColor(ui->mentorshpe_label->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->mentorshpe_label->foregroundRole(), Qt::white);
    ui->mentorshpe_label->setPalette(titleLabel);




}

mentorshpe::~mentorshpe()
{
    delete ui;
}

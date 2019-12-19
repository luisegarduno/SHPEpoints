#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    //Creates calender popup under user selection
    ui->dateInput_Edit->setCalendarPopup(true);


    // Adds white color to title
    QPalette titleLabel = ui->title_Label->palette();
    titleLabel.setColor(ui->title_Label->backgroundRole(), Qt::white);
    titleLabel.setColor(ui->title_Label->foregroundRole(), Qt::white);
    ui->title_Label->setPalette(titleLabel);

    // Adds white color to date label
    QPalette dateLabel = ui->date_Label->palette();
    dateLabel.setColor(ui->date_Label->backgroundRole(), Qt::white);
    dateLabel.setColor(ui->date_Label->foregroundRole(), Qt::white);
    ui->date_Label->setPalette(dateLabel);

    // Adds white color to username
    QPalette UserLabel = ui->user_label->palette();
    UserLabel.setColor(ui->user_label->backgroundRole(), Qt::white);
    UserLabel.setColor(ui->user_label->foregroundRole(), Qt::white);
    ui->user_label->setPalette(dateLabel);

    // Allows for maroon background
    QPixmap backPix("m.png");
    int w1 = ui->backLabel->width();
    int h1 = ui->backLabel->height();
    ui->backLabel->setPixmap(backPix.scaled(w1,h1,Qt::KeepAspectRatio));

    // Allows for SHPE National Logo to be present
    QPixmap logoPix("s.png");
    int w2 = ui->picLabel->width();
    int h2 = ui->picLabel->height();
    ui->picLabel->setPixmap(logoPix.scaled(w2,h2,Qt::KeepAspectRatio));

}

MainMenu::~MainMenu(){
    delete ui;
}


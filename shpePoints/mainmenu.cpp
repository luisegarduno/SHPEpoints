#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>

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


void MainMenu::on_pushButton_clicked(){
    // centers the General Meeting Screen
    newMeeting.setGeometry(
        QStyle::alignedRect(
                    Qt::LeftToRight,
                    Qt::AlignCenter,
                    newMeeting.size(),
                    qApp->desktop()->availableGeometry()
        )
    );
    // if statement that shows the General Meeting screen when selected by the combo box
    QString optionSelected = ui->eventSelection_comboBox->currentText();
    if(optionSelected == "General Meeting"){
        //this->hide();
        newMeeting.show();
    }

    /*
    QString file_name;
    // opens local file directory, user is able to navigate to select desired folder
    file_name = QFileDialog::getExistingDirectory(this, "Open Folder", QDir::homePath());

    //Qstring is converted and saved as a standard string
    string fileName = file_name.toStdString();

    // if no file was selected, display warning message
    if(fileName == ""){
        QString noFile = "Nothing was selected:\n";
        QString tryAgain = "Please select valid path to a folder";
        QMessageBox::warning(this,"Error",noFile + tryAgain);
    }
    */
}

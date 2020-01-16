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

    // if statement that shows the General Meeting screen when selected by the combo box
    QString optionSelected = ui->eventSelection_comboBox->currentText();

    if(optionSelected == "General Meeting"){
        // centers the General Meeting Screen
        newMeeting.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newMeeting.size(),
                        qApp->desktop()->availableGeometry()
            )
        );

        //this->hide();
        newMeeting.show();
    }


    // if statement that shows the Volunteering screen when selected by the combo box
    else if(optionSelected == "Volunteering"){

        // centers the Volunteering Screen
        newVolunteering.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newVolunteering.size(),
                        qApp->desktop()->availableGeometry()
            )
        );

        //this->hide();
        newVolunteering.show();
    }


    // if statement that shows the study hours screen when selected by the combo box
    else if(optionSelected == "Study Hours"){

        // centers the Study Hours Screen
        newHours.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newHours.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newHours.show();

    }

    else if (optionSelected == "Select Event"){
            QString noFile = "No event was selected:\n";
            QString tryAgain = "Please select appropriate event";
            QMessageBox::warning(this,"Error",noFile + tryAgain);
    }

    // if statement that shows the intramural event screen when selected by the combo box
    else if(optionSelected == "Intramural Event"){

        // centers the intramural event Screen
        newIntramural.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newIntramural.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newIntramural.show();

    }

    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "Workshop"){

        // centers the intramural event Screen
        newWorkshop.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newWorkshop.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newWorkshop.show();

    }

    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "Social Media"){

        // centers the intramural event Screen
        newSocial.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newSocial.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newSocial.show();
    }

    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "Other..."){

        // centers the intramural event Screen
        newOther.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newOther.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newOther.show();
    }

    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "Executive Board Meeting"){

        // centers the intramural event Screen
        newExecutive.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newExecutive.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newExecutive.show();
    }

    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "Social Event"){

        // centers the intramural event Screen
        newSEvent.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newSEvent.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newSEvent.show();
    }


    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "MentorSHPE"){

        // centers the intramural event Screen
        newMentor.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newMentor.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newMentor.show();
    }


    // if statement that shows the workshop screen when selected by the combo box
    else if(optionSelected == "Committee Meeting"){

        // centers the intramural event Screen
        newCommittee.setGeometry(
            QStyle::alignedRect(
                        Qt::LeftToRight,
                        Qt::AlignCenter,
                        newCommittee.size(),
                        qApp->desktop()->availableGeometry()
                )
            );

            //this->hide();
            newCommittee.show();
    }



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


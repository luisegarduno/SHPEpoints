/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *title_Label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QComboBox *eventSelection_comboBox;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *shpePillar_comboBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *date_Label;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QDateEdit *dateInput_Edit;
    QLabel *picLabel;
    QLabel *backLabel;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *user_label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setMinimumSize(QSize(600, 400));
        MainWindow->setMaximumSize(QSize(600, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        title_Label = new QLabel(centralwidget);
        title_Label->setObjectName(QStringLiteral("title_Label"));
        title_Label->setGeometry(QRect(160, -10, 300, 125));
        title_Label->setMinimumSize(QSize(300, 125));
        title_Label->setMaximumSize(QSize(300, 125));
        QFont font;
        font.setPointSize(23);
        font.setBold(true);
        font.setItalic(true);
        font.setUnderline(false);
        font.setWeight(75);
        title_Label->setFont(font);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 100, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        eventSelection_comboBox = new QComboBox(verticalLayoutWidget);
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->addItem(QString());
        eventSelection_comboBox->setObjectName(QStringLiteral("eventSelection_comboBox"));
        eventSelection_comboBox->setMinimumSize(QSize(140, 30));
        eventSelection_comboBox->setMaximumSize(QSize(140, 30));

        verticalLayout_2->addWidget(eventSelection_comboBox, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        shpePillar_comboBox = new QComboBox(verticalLayoutWidget);
        shpePillar_comboBox->addItem(QString());
        shpePillar_comboBox->addItem(QString());
        shpePillar_comboBox->addItem(QString());
        shpePillar_comboBox->addItem(QString());
        shpePillar_comboBox->addItem(QString());
        shpePillar_comboBox->addItem(QString());
        shpePillar_comboBox->setObjectName(QStringLiteral("shpePillar_comboBox"));
        shpePillar_comboBox->setMinimumSize(QSize(140, 30));
        shpePillar_comboBox->setMaximumSize(QSize(140, 30));

        horizontalLayout_2->addWidget(shpePillar_comboBox, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(40, 200, 161, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        date_Label = new QLabel(verticalLayoutWidget_3);
        date_Label->setObjectName(QStringLiteral("date_Label"));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        date_Label->setFont(font1);

        verticalLayout_6->addWidget(date_Label, 0, Qt::AlignHCenter|Qt::AlignBottom);


        verticalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dateInput_Edit = new QDateEdit(verticalLayoutWidget_3);
        dateInput_Edit->setObjectName(QStringLiteral("dateInput_Edit"));
        dateInput_Edit->setDateTime(QDateTime(QDate(2020, 8, 1), QTime(0, 0, 0)));

        horizontalLayout_3->addWidget(dateInput_Edit);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_4);

        picLabel = new QLabel(centralwidget);
        picLabel->setObjectName(QStringLiteral("picLabel"));
        picLabel->setGeometry(QRect(270, 80, 271, 271));
        backLabel = new QLabel(centralwidget);
        backLabel->setObjectName(QStringLiteral("backLabel"));
        backLabel->setGeometry(QRect(-260, -550, 1600, 1600));
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName(QStringLiteral("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(40, 270, 160, 61));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        user_label = new QLabel(verticalLayoutWidget_7);
        user_label->setObjectName(QStringLiteral("user_label"));
        user_label->setFont(font1);

        verticalLayout_9->addWidget(user_label, 0, Qt::AlignHCenter|Qt::AlignBottom);

        lineEdit = new QLineEdit(verticalLayoutWidget_7);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_9->addWidget(lineEdit);


        verticalLayout_8->addLayout(verticalLayout_9);


        verticalLayout_7->addLayout(verticalLayout_8);

        MainWindow->setCentralWidget(centralwidget);
        backLabel->raise();
        title_Label->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget_3->raise();
        picLabel->raise();
        verticalLayoutWidget_7->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Society Of Hispanic Professional Engineers", nullptr));
        title_Label->setText(QApplication::translate("MainWindow", "TAMU SHPE Points", nullptr));
        eventSelection_comboBox->setItemText(0, QApplication::translate("MainWindow", "Select Event", nullptr));
        eventSelection_comboBox->setItemText(1, QApplication::translate("MainWindow", "Committee Meeting", nullptr));
        eventSelection_comboBox->setItemText(2, QApplication::translate("MainWindow", "Executive Board Meeting", nullptr));
        eventSelection_comboBox->setItemText(3, QApplication::translate("MainWindow", "General Meeting", nullptr));
        eventSelection_comboBox->setItemText(4, QApplication::translate("MainWindow", "Intramural Event", nullptr));
        eventSelection_comboBox->setItemText(5, QApplication::translate("MainWindow", "MentorSHPE", nullptr));
        eventSelection_comboBox->setItemText(6, QApplication::translate("MainWindow", "Social Event", nullptr));
        eventSelection_comboBox->setItemText(7, QApplication::translate("MainWindow", "Social Media", nullptr));
        eventSelection_comboBox->setItemText(8, QApplication::translate("MainWindow", "Study Hours", nullptr));
        eventSelection_comboBox->setItemText(9, QApplication::translate("MainWindow", "Volunteering", nullptr));
        eventSelection_comboBox->setItemText(10, QApplication::translate("MainWindow", "Workshop", nullptr));
        eventSelection_comboBox->setItemText(11, QApplication::translate("MainWindow", "Other...", nullptr));

        shpePillar_comboBox->setItemText(0, QApplication::translate("MainWindow", "SHPE Pillar", nullptr));
        shpePillar_comboBox->setItemText(1, QApplication::translate("MainWindow", "Service & Outreach", nullptr));
        shpePillar_comboBox->setItemText(2, QApplication::translate("MainWindow", "Chapter Development", nullptr));
        shpePillar_comboBox->setItemText(3, QApplication::translate("MainWindow", "Academic Development", nullptr));
        shpePillar_comboBox->setItemText(4, QApplication::translate("MainWindow", "Leadership Development", nullptr));
        shpePillar_comboBox->setItemText(5, QApplication::translate("MainWindow", "Professional Development", nullptr));

        date_Label->setText(QApplication::translate("MainWindow", "Date Of Event:", nullptr));
        picLabel->setText(QString());
        backLabel->setText(QString());
        user_label->setText(QApplication::translate("MainWindow", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H

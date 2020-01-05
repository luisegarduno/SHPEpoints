#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "general_meeting.h"
#include "study_hours.h"

using std::string;

namespace filesysten = std::experimental::filesystem;
QT_BEGIN_NAMESPACE
namespace Ui{
    class MainWindow;
}

QT_END_NAMESPACE

class MainMenu : public QMainWindow{
    Q_OBJECT

    public:
        MainMenu(QWidget *parent = nullptr);

        ~MainMenu();

private slots:
        void on_pushButton_clicked();

private:
        general_meeting newMeeting;

        study_hours newHours;

        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

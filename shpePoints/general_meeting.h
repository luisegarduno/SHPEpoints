#ifndef GENERAL_MEETING_H
#define GENERAL_MEETING_H
#include <QFileDialog>
#include <QMessageBox>
#include <QDir>
#include <QDialog>
#include <QString>
#include <experimental/filesystem>
#include <QMainWindow>
#include <QPixmap>
#include <string>
#include <iostream>

#include <QDialog>

using std::string;

namespace Ui {
    class general_meeting;
}

class general_meeting : public QDialog{
    Q_OBJECT

public:
    explicit general_meeting(QWidget *parent = nullptr);

    ~general_meeting();

private slots:
    void on_meeting_upload_clicked();

    void on_point_sheet_upload_clicked();

    void on_next_button_clicked();

private:
    Ui::general_meeting *ui;
};

#endif // GENERAL_MEETING_H

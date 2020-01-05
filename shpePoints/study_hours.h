#ifndef STUDY_HOURS_H
#define STUDY_HOURS_H
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
class study_hours;
}

class study_hours : public QDialog
{
    Q_OBJECT

public:
    explicit study_hours(QWidget *parent = nullptr);
    ~study_hours();

private slots:
    void on_time_out_upload_clicked();

    void on_time_in_upload_clicked();

    void on_point_sheet_upload_clicked();

private:
    Ui::study_hours *ui;
};

#endif // STUDY_HOURS_H

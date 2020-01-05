#ifndef EXECUTIVE_MEETING_H
#define EXECUTIVE_MEETING_H
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
class executive_meeting;
}

class executive_meeting : public QDialog
{
    Q_OBJECT

public:
    explicit executive_meeting(QWidget *parent = nullptr);
    ~executive_meeting();

private slots:
    void on_point_sheet_upload_clicked();

    void on_other_upload_clicked();

private:
    Ui::executive_meeting *ui;
};

#endif // EXECUTIVE_MEETING_H

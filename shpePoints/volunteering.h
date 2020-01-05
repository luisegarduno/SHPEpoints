#ifndef VOLUNTEERING_H
#define VOLUNTEERING_H
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
class volunteering;
}

class volunteering : public QDialog
{
    Q_OBJECT

public:
    explicit volunteering(QWidget *parent = nullptr);
    ~volunteering();

private slots:
    void on_name_sheet_upload_clicked();

    void on_point_sheet_upload_clicked();

    void on_pushButton_clicked();

private:
    Ui::volunteering *ui;
};

#endif // VOLUNTEERING_H

#ifndef WORKSHOP_H
#define WORKSHOP_H
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
class workshop;
}

class workshop : public QDialog
{
    Q_OBJECT

public:
    explicit workshop(QWidget *parent = nullptr);
    ~workshop();

private slots:
    void on_pushButton_clicked();

    void on_point_sheet_upload_clicked();

    void on_name_sheet_upload_clicked();

private:
    Ui::workshop *ui;
};

#endif // WORKSHOP_H

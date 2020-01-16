#ifndef SOCIAL_EVENT_H
#define SOCIAL_EVENT_H
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
class social_event;
}

class social_event : public QDialog
{
    Q_OBJECT

public:
    explicit social_event(QWidget *parent = nullptr);
    ~social_event();

private slots:
    void on_name_sheet_upload_clicked();

    void on_point_sheet_upload_clicked();

private:
    Ui::social_event *ui;
};

#endif // SOCIAL_EVENT_H

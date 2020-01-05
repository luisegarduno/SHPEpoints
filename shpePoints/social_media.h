#ifndef SOCIAL_MEDIA_H
#define SOCIAL_MEDIA_H
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
class social_media;
}

class social_media : public QDialog
{
    Q_OBJECT

public:
    explicit social_media(QWidget *parent = nullptr);
    ~social_media();

private slots:
    void on_point_sheet_upload_clicked();

    void on_name_sheet_upload_clicked();

private:
    Ui::social_media *ui;
};

#endif // SOCIAL_MEDIA_H

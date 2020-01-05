#ifndef OTHER_H
#define OTHER_H
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
class other;
}

class other : public QDialog
{
    Q_OBJECT

public:
    explicit other(QWidget *parent = nullptr);
    ~other();

private slots:
    void on_point_shee_upload_clicked();

    void on_event_sheet_upload_clicked();

private:
    Ui::other *ui;
};

#endif // OTHER_H

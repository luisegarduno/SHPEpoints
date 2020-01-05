#ifndef INTRAMURAL_EVENT_H
#define INTRAMURAL_EVENT_H
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
class intramural_event;
}

class intramural_event : public QDialog
{
    Q_OBJECT

public:
    explicit intramural_event(QWidget *parent = nullptr);
    ~intramural_event();

private slots:
    void on_point_sheet_upload_clicked();

private:
    Ui::intramural_event *ui;
};

#endif // INTRAMURAL_EVENT_H

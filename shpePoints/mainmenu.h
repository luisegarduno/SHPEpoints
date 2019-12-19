#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>

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

    private:
        Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

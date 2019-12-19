#include "mainmenu.h"
#include <QStyle>
#include <QDesktopWidget>
#include <QApplication>

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainMenu newMainMenu;

    // Window spawns at center of screen
    newMainMenu.setGeometry(
        QStyle::alignedRect(
                    Qt::LeftToRight,
                    Qt::AlignCenter,
                    newMainMenu.size(),
                    qApp->desktop()->availableGeometry()
        )
    );



    newMainMenu.show();
    return a.exec();
}

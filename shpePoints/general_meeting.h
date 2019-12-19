#ifndef GENERAL_MEETING_H
#define GENERAL_MEETING_H

#include <QDialog>

namespace Ui {
class general_meeting;
}

class general_meeting : public QDialog
{
    Q_OBJECT

public:
    explicit general_meeting(QWidget *parent = nullptr);
    ~general_meeting();

private:
    Ui::general_meeting *ui;
};

#endif // GENERAL_MEETING_H

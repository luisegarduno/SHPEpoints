#include "general_meeting.h"
#include "ui_general_meeting.h"

general_meeting::general_meeting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::general_meeting)
{
    ui->setupUi(this);
}

general_meeting::~general_meeting()
{
    delete ui;
}

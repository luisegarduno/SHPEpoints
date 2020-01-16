#ifndef MENTORSHPE_H
#define MENTORSHPE_H

#include "general_meeting.h"
#include "study_hours.h"
#include "volunteering.h"
#include "intramural_event.h"
#include "workshop.h"
#include "social_media.h"
#include "other.h"
#include "executive_meeting.h"
#include "social_event.h"

#include <QDialog>

using std::string;

namespace Ui {
class mentorshpe;
}

class mentorshpe : public QDialog
{
    Q_OBJECT

public:
    explicit mentorshpe(QWidget *parent = nullptr);
    ~mentorshpe();

private:
    Ui::mentorshpe *ui;
};

#endif // MENTORSHPE_H

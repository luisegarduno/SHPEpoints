#ifndef COMMITTEE_MEETING_H
#define COMMITTEE_MEETING_H

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
class committee_meeting;
}

class committee_meeting : public QDialog
{
    Q_OBJECT

public:
    explicit committee_meeting(QWidget *parent = nullptr);
    ~committee_meeting();

private:
    Ui::committee_meeting *ui;
};

#endif // COMMITTEE_MEETING_H

/*
 * Duration Class
 */

#include "duration.h"

#include <assert.h>

/* Constructor */
Duration::Duration()
{
    alarm = 0;
    time = 0;
}

/* Contructor with attribute t */
Duration::Duration(int t) {
    alarm = 0;
    time = t;
}

/* getDuration method */
int Duration::getDuration() {
    return time;
}

/* tick method */
bool Duration::tick() {
    time += 1;
    return checkAndUpdateAlarm();
}

/* tick method with attribute t */
bool Duration::tick(int t) {
    time += t;
    return checkAndUpdateAlarm();
}

/* setAlarm method */
void Duration::setAlarm(int t) {
    /* Prevent entering a date in the past */
    if (t > time)
    {
        alarmHasBeenSet = true;
        alarm = t;
    }
    else {
        alarmHasBeenSet = false;
        alarm = 0;
    }
}

bool Duration::checkAndUpdateAlarm() {
    if (alarmHasBeenSet) {
        if (time >= alarm) {
            alarm = 0;
            return true;
        }
        else return false;
    }
    else return false;
}

/* Destructor */
Duration::~Duration()
{
}
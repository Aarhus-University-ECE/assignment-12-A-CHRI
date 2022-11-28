/*
 * Duration Class Header file
 */

#ifndef _DURATION_H_
#define _DURATION_H_

class Duration
{
private:
    int time;
    int alarm;
    bool alarmHasBeenSet;

    bool checkAndUpdateAlarm();
public:
    Duration();
    Duration(int t);
    ~Duration();

    /* getDuration */
    int getDuration();

    /* tick */
    bool tick();
    bool tick(int t);

    /* setAlarm */
    void setAlarm(int t);
};

#endif
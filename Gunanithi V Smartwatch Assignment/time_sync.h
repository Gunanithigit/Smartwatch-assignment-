
#ifndef TIME_SYNC_H
#define TIME_SYNC_H

typedef struct {
    int hour;
    int minute;
    int second;
} Time;

Time get_gmt_time(void);

#endif

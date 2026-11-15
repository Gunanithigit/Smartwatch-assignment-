
#ifndef CONFIG_H
#define CONFIG_H

#define MAX_TIMEZONES 3

typedef struct {
    int hourOffset;
    int minuteOffset;
    char meridiem;
} TimeZoneConfig;

#endif

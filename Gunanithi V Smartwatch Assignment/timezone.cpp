
#include "timezone.h"

Time calculate_local_time(Time gmt, TimeZoneConfig tz) {
    Time local = gmt;
    local.hour += tz.hourOffset;
    local.minute += tz.minuteOffset;

    if (local.minute >= 60) {
        local.minute -= 60;
        local.hour += 1;
    }
    if (local.hour >= 24) local.hour -= 24;
    if (local.hour < 0) local.hour += 24;

    return local;
}

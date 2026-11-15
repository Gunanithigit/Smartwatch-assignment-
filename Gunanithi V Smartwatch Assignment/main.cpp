
#include "time_sync.h"
#include "timezone.h"
#include "display.h"
#include "config.h"

int main(void) {
    display_init();

    TimeZoneConfig zones[MAX_TIMEZONES] = {
        {0, 0, 'A'},
        {5, 30, 'A'},
        {-5, 0, 'P'}
    };

    Time gmt = get_gmt_time();
    Time localTimes[MAX_TIMEZONES];

    for (int i = 0; i < MAX_TIMEZONES; i++) {
        localTimes[i] = calculate_local_time(gmt, zones[i]);
    }

    render_watch_face(localTimes, zones);
    return 0;
}

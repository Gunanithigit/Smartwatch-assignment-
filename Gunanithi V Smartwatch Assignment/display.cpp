
#include <stdio.h>
#include "display.h"

void display_init(void) {
    printf("Display initialized\n");
}

void render_watch_face(Time times[], TimeZoneConfig zones[]) {
    for (int i = 0; i < MAX_TIMEZONES; i++) {
        printf("Zone %d -> %02d:%02d:%02d (GMT %+d:%02d)\n",
               i + 1,
               times[i].hour,
               times[i].minute,
               times[i].second,
               zones[i].hourOffset,
               zones[i].minuteOffset);
    }
}

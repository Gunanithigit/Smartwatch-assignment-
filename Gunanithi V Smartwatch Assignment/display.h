
#ifndef DISPLAY_H
#define DISPLAY_H

#include "time_sync.h"
#include "config.h"

void display_init(void);
void render_watch_face(Time times[], TimeZoneConfig zones[]);

#endif

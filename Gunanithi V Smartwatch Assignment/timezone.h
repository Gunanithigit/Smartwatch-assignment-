
#ifndef TIMEZONE_H
#define TIMEZONE_H

#include "config.h"
#include "time_sync.h"

Time calculate_local_time(Time gmt, TimeZoneConfig tz);

#endif

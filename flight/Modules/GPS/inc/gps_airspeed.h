/**
 ******************************************************************************
 * @addtogroup OpenPilotModules OpenPilot Modules
 * @{ 
 * @addtogroup GPSModule GPS Module
 * @brief Calculate airspeed as a function of the difference between sequential GPS velocity and attitude measurements
 * @{ 
 *
 * @file       gps_airspeed.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @brief      GPS airspeed module
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
#ifndef GPS_AIRSPEED_H
#define GPS_AIRSPEED_H

#include "gpsvelocity.h"

void gps_airspeed_update(const GPSVelocityData *gpsVelData);
void gps_airspeed_initialize(void);

#endif // GPS_AIRSPEED_H

/**
 * @}
 * @}
 */

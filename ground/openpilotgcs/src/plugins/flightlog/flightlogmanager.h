/**
 ******************************************************************************
 *
 * @file       flightlogmanager.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2012.
 * @addtogroup [Group]
 * @{
 * @addtogroup FlightLogManager
 * @{
 * @brief [Brief]
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

#ifndef FLIGHTLOGMANAGER_H
#define FLIGHTLOGMANAGER_H

#include <QObject>
#include <QList>
#include <QQmlListProperty>

#include "uavobjectmanager.h"
#include "debuglogentry.h"
#include "debuglogstatus.h"

class FlightLogManager : public QObject {
    Q_OBJECT
    Q_PROPERTY(DebugLogStatus *flightLogStatus READ flightLogStatus)
    Q_PROPERTY(QQmlListProperty<DebugLogEntry> logEntries READ logEntries CONSTANT)

public:
    explicit FlightLogManager(QObject *parent = 0);
    ~FlightLogManager();

    QQmlListProperty<DebugLogEntry> logEntries();

    DebugLogStatus* flightLogStatus() const
    {
        return m_flightLogStatus;
    }

signals:

public slots:
    void clearAllLogs();
    void retrieveLogs(int flight = -1);

private:
    UAVObjectManager *m_objectManager;
    DebugLogStatus *m_flightLogStatus;
    QList<DebugLogEntry *> m_logEntries;

};

#endif // FLIGHTLOGMANAGER_H

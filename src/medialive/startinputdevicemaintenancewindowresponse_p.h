// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWRESPONSE_P_H
#define QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class StartInputDeviceMaintenanceWindowResponse;

class StartInputDeviceMaintenanceWindowResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit StartInputDeviceMaintenanceWindowResponsePrivate(StartInputDeviceMaintenanceWindowResponse * const q);

    void parseStartInputDeviceMaintenanceWindowResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartInputDeviceMaintenanceWindowResponse)
    Q_DISABLE_COPY(StartInputDeviceMaintenanceWindowResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif

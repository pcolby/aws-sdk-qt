// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWREQUEST_P_H
#define QTAWS_STARTINPUTDEVICEMAINTENANCEWINDOWREQUEST_P_H

#include "medialiverequest_p.h"
#include "startinputdevicemaintenancewindowrequest.h"

namespace QtAws {
namespace MediaLive {

class StartInputDeviceMaintenanceWindowRequest;

class StartInputDeviceMaintenanceWindowRequestPrivate : public MediaLiveRequestPrivate {

public:
    StartInputDeviceMaintenanceWindowRequestPrivate(const MediaLiveRequest::Action action,
                                   StartInputDeviceMaintenanceWindowRequest * const q);
    StartInputDeviceMaintenanceWindowRequestPrivate(const StartInputDeviceMaintenanceWindowRequestPrivate &other,
                                   StartInputDeviceMaintenanceWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInputDeviceMaintenanceWindowRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif

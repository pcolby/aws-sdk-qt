// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEDEVICECLAIMREQUEST_P_H
#define QTAWS_INITIATEDEVICECLAIMREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "initiatedeviceclaimrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InitiateDeviceClaimRequest;

class InitiateDeviceClaimRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    InitiateDeviceClaimRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   InitiateDeviceClaimRequest * const q);
    InitiateDeviceClaimRequestPrivate(const InitiateDeviceClaimRequestPrivate &other,
                                   InitiateDeviceClaimRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateDeviceClaimRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif

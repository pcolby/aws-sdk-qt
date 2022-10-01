// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMDEVICESBYCLAIMCODEREQUEST_P_H
#define QTAWS_CLAIMDEVICESBYCLAIMCODEREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "claimdevicesbyclaimcoderequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class ClaimDevicesByClaimCodeRequest;

class ClaimDevicesByClaimCodeRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    ClaimDevicesByClaimCodeRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   ClaimDevicesByClaimCodeRequest * const q);
    ClaimDevicesByClaimCodeRequestPrivate(const ClaimDevicesByClaimCodeRequestPrivate &other,
                                   ClaimDevicesByClaimCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ClaimDevicesByClaimCodeRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif

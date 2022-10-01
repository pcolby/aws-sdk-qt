// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZEDEVICECLAIMREQUEST_P_H
#define QTAWS_FINALIZEDEVICECLAIMREQUEST_P_H

#include "iot1clickdevicesrequest_p.h"
#include "finalizedeviceclaimrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class FinalizeDeviceClaimRequest;

class FinalizeDeviceClaimRequestPrivate : public IoT1ClickDevicesRequestPrivate {

public:
    FinalizeDeviceClaimRequestPrivate(const IoT1ClickDevicesRequest::Action action,
                                   FinalizeDeviceClaimRequest * const q);
    FinalizeDeviceClaimRequestPrivate(const FinalizeDeviceClaimRequestPrivate &other,
                                   FinalizeDeviceClaimRequest * const q);

private:
    Q_DECLARE_PUBLIC(FinalizeDeviceClaimRequest)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif

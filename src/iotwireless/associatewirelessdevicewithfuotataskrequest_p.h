// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKREQUEST_P_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associatewirelessdevicewithfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithFuotaTaskRequest;

class AssociateWirelessDeviceWithFuotaTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateWirelessDeviceWithFuotaTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateWirelessDeviceWithFuotaTaskRequest * const q);
    AssociateWirelessDeviceWithFuotaTaskRequestPrivate(const AssociateWirelessDeviceWithFuotaTaskRequestPrivate &other,
                                   AssociateWirelessDeviceWithFuotaTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessDeviceWithFuotaTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGREQUEST_P_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHTHINGREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associatewirelessdevicewiththingrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithThingRequest;

class AssociateWirelessDeviceWithThingRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateWirelessDeviceWithThingRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateWirelessDeviceWithThingRequest * const q);
    AssociateWirelessDeviceWithThingRequestPrivate(const AssociateWirelessDeviceWithThingRequestPrivate &other,
                                   AssociateWirelessDeviceWithThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessDeviceWithThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

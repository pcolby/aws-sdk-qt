// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associatewirelessdevicewithmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithMulticastGroupRequest;

class AssociateWirelessDeviceWithMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateWirelessDeviceWithMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateWirelessDeviceWithMulticastGroupRequest * const q);
    AssociateWirelessDeviceWithMulticastGroupRequestPrivate(const AssociateWirelessDeviceWithMulticastGroupRequestPrivate &other,
                                   AssociateWirelessDeviceWithMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessDeviceWithMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

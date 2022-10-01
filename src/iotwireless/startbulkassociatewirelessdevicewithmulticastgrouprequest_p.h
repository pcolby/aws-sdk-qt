// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_P_H
#define QTAWS_STARTBULKASSOCIATEWIRELESSDEVICEWITHMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "startbulkassociatewirelessdevicewithmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkAssociateWirelessDeviceWithMulticastGroupRequest;

class StartBulkAssociateWirelessDeviceWithMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    StartBulkAssociateWirelessDeviceWithMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   StartBulkAssociateWirelessDeviceWithMulticastGroupRequest * const q);
    StartBulkAssociateWirelessDeviceWithMulticastGroupRequestPrivate(const StartBulkAssociateWirelessDeviceWithMulticastGroupRequestPrivate &other,
                                   StartBulkAssociateWirelessDeviceWithMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBulkAssociateWirelessDeviceWithMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

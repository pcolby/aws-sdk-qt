// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_P_H
#define QTAWS_STARTBULKDISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "startbulkdisassociatewirelessdevicefrommulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest;

class StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest * const q);
    StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestPrivate(const StartBulkDisassociateWirelessDeviceFromMulticastGroupRequestPrivate &other,
                                   StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBulkDisassociateWirelessDeviceFromMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

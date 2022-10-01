// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMMULTICASTGROUPREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociatewirelessdevicefrommulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromMulticastGroupRequest;

class DisassociateWirelessDeviceFromMulticastGroupRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateWirelessDeviceFromMulticastGroupRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateWirelessDeviceFromMulticastGroupRequest * const q);
    DisassociateWirelessDeviceFromMulticastGroupRequestPrivate(const DisassociateWirelessDeviceFromMulticastGroupRequestPrivate &other,
                                   DisassociateWirelessDeviceFromMulticastGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessDeviceFromMulticastGroupRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

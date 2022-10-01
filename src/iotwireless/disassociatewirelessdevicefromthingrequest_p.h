// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGREQUEST_P_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMTHINGREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociatewirelessdevicefromthingrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromThingRequest;

class DisassociateWirelessDeviceFromThingRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateWirelessDeviceFromThingRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateWirelessDeviceFromThingRequest * const q);
    DisassociateWirelessDeviceFromThingRequestPrivate(const DisassociateWirelessDeviceFromThingRequestPrivate &other,
                                   DisassociateWirelessDeviceFromThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessDeviceFromThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

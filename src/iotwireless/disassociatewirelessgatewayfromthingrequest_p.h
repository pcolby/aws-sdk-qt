// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGREQUEST_P_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociatewirelessgatewayfromthingrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromThingRequest;

class DisassociateWirelessGatewayFromThingRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateWirelessGatewayFromThingRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateWirelessGatewayFromThingRequest * const q);
    DisassociateWirelessGatewayFromThingRequestPrivate(const DisassociateWirelessGatewayFromThingRequestPrivate &other,
                                   DisassociateWirelessGatewayFromThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessGatewayFromThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

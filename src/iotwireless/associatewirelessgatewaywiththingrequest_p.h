// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGREQUEST_P_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associatewirelessgatewaywiththingrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithThingRequest;

class AssociateWirelessGatewayWithThingRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateWirelessGatewayWithThingRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateWirelessGatewayWithThingRequest * const q);
    AssociateWirelessGatewayWithThingRequestPrivate(const AssociateWirelessGatewayWithThingRequestPrivate &other,
                                   AssociateWirelessGatewayWithThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessGatewayWithThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYREQUEST_P_H
#define QTAWS_CREATEWIRELESSGATEWAYREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createwirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayRequest;

class CreateWirelessGatewayRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateWirelessGatewayRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateWirelessGatewayRequest * const q);
    CreateWirelessGatewayRequestPrivate(const CreateWirelessGatewayRequestPrivate &other,
                                   CreateWirelessGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

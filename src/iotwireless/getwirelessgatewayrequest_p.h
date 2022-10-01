// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYREQUEST_P_H
#define QTAWS_GETWIRELESSGATEWAYREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayRequest;

class GetWirelessGatewayRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessGatewayRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessGatewayRequest * const q);
    GetWirelessGatewayRequestPrivate(const GetWirelessGatewayRequestPrivate &other,
                                   GetWirelessGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

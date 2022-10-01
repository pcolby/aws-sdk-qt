// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSGATEWAYREQUEST_P_H
#define QTAWS_UPDATEWIRELESSGATEWAYREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "updatewirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessGatewayRequest;

class UpdateWirelessGatewayRequestPrivate : public IoTWirelessRequestPrivate {

public:
    UpdateWirelessGatewayRequestPrivate(const IoTWirelessRequest::Action action,
                                   UpdateWirelessGatewayRequest * const q);
    UpdateWirelessGatewayRequestPrivate(const UpdateWirelessGatewayRequestPrivate &other,
                                   UpdateWirelessGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYREQUEST_P_H
#define QTAWS_DELETEWIRELESSGATEWAYREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletewirelessgatewayrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayRequest;

class DeleteWirelessGatewayRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteWirelessGatewayRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteWirelessGatewayRequest * const q);
    DeleteWirelessGatewayRequestPrivate(const DeleteWirelessGatewayRequestPrivate &other,
                                   DeleteWirelessGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKREQUEST_P_H
#define QTAWS_GETWIRELESSGATEWAYTASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskRequest;

class GetWirelessGatewayTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessGatewayTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessGatewayTaskRequest * const q);
    GetWirelessGatewayTaskRequestPrivate(const GetWirelessGatewayTaskRequestPrivate &other,
                                   GetWirelessGatewayTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

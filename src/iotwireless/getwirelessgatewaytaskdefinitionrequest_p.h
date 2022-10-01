// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONREQUEST_P_H
#define QTAWS_GETWIRELESSGATEWAYTASKDEFINITIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessgatewaytaskdefinitionrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskDefinitionRequest;

class GetWirelessGatewayTaskDefinitionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessGatewayTaskDefinitionRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessGatewayTaskDefinitionRequest * const q);
    GetWirelessGatewayTaskDefinitionRequestPrivate(const GetWirelessGatewayTaskDefinitionRequestPrivate &other,
                                   GetWirelessGatewayTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayTaskDefinitionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONREQUEST_P_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKDEFINITIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createwirelessgatewaytaskdefinitionrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskDefinitionRequest;

class CreateWirelessGatewayTaskDefinitionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateWirelessGatewayTaskDefinitionRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateWirelessGatewayTaskDefinitionRequest * const q);
    CreateWirelessGatewayTaskDefinitionRequestPrivate(const CreateWirelessGatewayTaskDefinitionRequestPrivate &other,
                                   CreateWirelessGatewayTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWirelessGatewayTaskDefinitionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

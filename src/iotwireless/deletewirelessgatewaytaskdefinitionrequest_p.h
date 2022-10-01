// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONREQUEST_P_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKDEFINITIONREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletewirelessgatewaytaskdefinitionrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskDefinitionRequest;

class DeleteWirelessGatewayTaskDefinitionRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteWirelessGatewayTaskDefinitionRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteWirelessGatewayTaskDefinitionRequest * const q);
    DeleteWirelessGatewayTaskDefinitionRequestPrivate(const DeleteWirelessGatewayTaskDefinitionRequestPrivate &other,
                                   DeleteWirelessGatewayTaskDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessGatewayTaskDefinitionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

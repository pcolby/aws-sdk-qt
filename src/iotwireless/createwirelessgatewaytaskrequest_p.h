// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYTASKREQUEST_P_H
#define QTAWS_CREATEWIRELESSGATEWAYTASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "createwirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayTaskRequest;

class CreateWirelessGatewayTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    CreateWirelessGatewayTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   CreateWirelessGatewayTaskRequest * const q);
    CreateWirelessGatewayTaskRequestPrivate(const CreateWirelessGatewayTaskRequestPrivate &other,
                                   CreateWirelessGatewayTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateWirelessGatewayTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

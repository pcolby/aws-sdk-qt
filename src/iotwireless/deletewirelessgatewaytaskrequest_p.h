// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWIRELESSGATEWAYTASKREQUEST_P_H
#define QTAWS_DELETEWIRELESSGATEWAYTASKREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletewirelessgatewaytaskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteWirelessGatewayTaskRequest;

class DeleteWirelessGatewayTaskRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteWirelessGatewayTaskRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteWirelessGatewayTaskRequest * const q);
    DeleteWirelessGatewayTaskRequestPrivate(const DeleteWirelessGatewayTaskRequestPrivate &other,
                                   DeleteWirelessGatewayTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteWirelessGatewayTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif

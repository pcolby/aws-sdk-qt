// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYCONNECTREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYCONNECTREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayconnectrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayConnectRequest;

class DeleteTransitGatewayConnectRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayConnectRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayConnectRequest * const q);
    DeleteTransitGatewayConnectRequestPrivate(const DeleteTransitGatewayConnectRequestPrivate &other,
                                   DeleteTransitGatewayConnectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayConnectRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

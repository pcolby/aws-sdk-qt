// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSITGATEWAYREQUEST_P_H
#define QTAWS_DELETETRANSITGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deletetransitgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteTransitGatewayRequest;

class DeleteTransitGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteTransitGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteTransitGatewayRequest * const q);
    DeleteTransitGatewayRequestPrivate(const DeleteTransitGatewayRequestPrivate &other,
                                   DeleteTransitGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTransitGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

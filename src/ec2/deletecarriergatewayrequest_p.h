// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECARRIERGATEWAYREQUEST_P_H
#define QTAWS_DELETECARRIERGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deletecarriergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCarrierGatewayRequest;

class DeleteCarrierGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteCarrierGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteCarrierGatewayRequest * const q);
    DeleteCarrierGatewayRequestPrivate(const DeleteCarrierGatewayRequestPrivate &other,
                                   DeleteCarrierGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCarrierGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

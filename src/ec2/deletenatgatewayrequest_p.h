// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENATGATEWAYREQUEST_P_H
#define QTAWS_DELETENATGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deletenatgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNatGatewayRequest;

class DeleteNatGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteNatGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteNatGatewayRequest * const q);
    DeleteNatGatewayRequestPrivate(const DeleteNatGatewayRequestPrivate &other,
                                   DeleteNatGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteNatGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

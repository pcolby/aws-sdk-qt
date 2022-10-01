// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEGRESSONLYINTERNETGATEWAYREQUEST_P_H
#define QTAWS_DELETEEGRESSONLYINTERNETGATEWAYREQUEST_P_H

#include "ec2request_p.h"
#include "deleteegressonlyinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteEgressOnlyInternetGatewayRequest;

class DeleteEgressOnlyInternetGatewayRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteEgressOnlyInternetGatewayRequestPrivate(const Ec2Request::Action action,
                                   DeleteEgressOnlyInternetGatewayRequest * const q);
    DeleteEgressOnlyInternetGatewayRequestPrivate(const DeleteEgressOnlyInternetGatewayRequestPrivate &other,
                                   DeleteEgressOnlyInternetGatewayRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEgressOnlyInternetGatewayRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

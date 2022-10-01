// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSREQUEST_P_H
#define QTAWS_GETDEPLOYMENTSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdeploymentsrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDeploymentsRequest;

class GetDeploymentsRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDeploymentsRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDeploymentsRequest * const q);
    GetDeploymentsRequestPrivate(const GetDeploymentsRequestPrivate &other,
                                   GetDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentsRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

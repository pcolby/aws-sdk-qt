// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSREQUEST_P_H
#define QTAWS_GETDEPLOYMENTSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getdeploymentsrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentsRequest;

class GetDeploymentsRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetDeploymentsRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetDeploymentsRequest * const q);
    GetDeploymentsRequestPrivate(const GetDeploymentsRequestPrivate &other,
                                   GetDeploymentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentsRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

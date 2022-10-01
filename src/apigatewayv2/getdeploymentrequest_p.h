// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTREQUEST_P_H
#define QTAWS_GETDEPLOYMENTREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getdeploymentrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDeploymentRequest;

class GetDeploymentRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetDeploymentRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetDeploymentRequest * const q);
    GetDeploymentRequestPrivate(const GetDeploymentRequestPrivate &other,
                                   GetDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

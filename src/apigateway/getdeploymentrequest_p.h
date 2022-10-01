// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTREQUEST_P_H
#define QTAWS_GETDEPLOYMENTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getdeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetDeploymentRequest;

class GetDeploymentRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetDeploymentRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetDeploymentRequest * const q);
    GetDeploymentRequestPrivate(const GetDeploymentRequestPrivate &other,
                                   GetDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeploymentRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

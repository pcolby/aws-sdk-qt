// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTREQUEST_P_H
#define QTAWS_UPDATEDEPLOYMENTREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "updatedeploymentrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateDeploymentRequest;

class UpdateDeploymentRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    UpdateDeploymentRequestPrivate(const ApiGatewayV2Request::Action action,
                                   UpdateDeploymentRequest * const q);
    UpdateDeploymentRequestPrivate(const UpdateDeploymentRequestPrivate &other,
                                   UpdateDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

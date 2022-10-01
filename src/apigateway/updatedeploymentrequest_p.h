// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTREQUEST_P_H
#define QTAWS_UPDATEDEPLOYMENTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "updatedeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class UpdateDeploymentRequest;

class UpdateDeploymentRequestPrivate : public ApiGatewayRequestPrivate {

public:
    UpdateDeploymentRequestPrivate(const ApiGatewayRequest::Action action,
                                   UpdateDeploymentRequest * const q);
    UpdateDeploymentRequestPrivate(const UpdateDeploymentRequestPrivate &other,
                                   UpdateDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeploymentRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

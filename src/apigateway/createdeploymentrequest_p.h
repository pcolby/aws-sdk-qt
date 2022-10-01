// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTREQUEST_P_H
#define QTAWS_CREATEDEPLOYMENTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "createdeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class CreateDeploymentRequest;

class CreateDeploymentRequestPrivate : public ApiGatewayRequestPrivate {

public:
    CreateDeploymentRequestPrivate(const ApiGatewayRequest::Action action,
                                   CreateDeploymentRequest * const q);
    CreateDeploymentRequestPrivate(const CreateDeploymentRequestPrivate &other,
                                   CreateDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeploymentRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

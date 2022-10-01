// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTREQUEST_P_H
#define QTAWS_DELETEDEPLOYMENTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deletedeploymentrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteDeploymentRequest;

class DeleteDeploymentRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteDeploymentRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteDeploymentRequest * const q);
    DeleteDeploymentRequestPrivate(const DeleteDeploymentRequestPrivate &other,
                                   DeleteDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

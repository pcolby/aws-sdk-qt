// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTREQUEST_P_H
#define QTAWS_DELETEDEPLOYMENTREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deletedeploymentrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteDeploymentRequest;

class DeleteDeploymentRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteDeploymentRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteDeploymentRequest * const q);
    DeleteDeploymentRequestPrivate(const DeleteDeploymentRequestPrivate &other,
                                   DeleteDeploymentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeploymentRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

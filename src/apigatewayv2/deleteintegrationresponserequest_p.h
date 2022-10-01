// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_DELETEINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteintegrationresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteIntegrationResponseRequest;

class DeleteIntegrationResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteIntegrationResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteIntegrationResponseRequest * const q);
    DeleteIntegrationResponseRequestPrivate(const DeleteIntegrationResponseRequestPrivate &other,
                                   DeleteIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONREQUEST_P_H
#define QTAWS_DELETEINTEGRATIONREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "deleteintegrationrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteIntegrationRequest;

class DeleteIntegrationRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    DeleteIntegrationRequestPrivate(const ApiGatewayV2Request::Action action,
                                   DeleteIntegrationRequest * const q);
    DeleteIntegrationRequestPrivate(const DeleteIntegrationRequestPrivate &other,
                                   DeleteIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

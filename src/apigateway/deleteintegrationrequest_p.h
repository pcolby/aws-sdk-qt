// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTEGRATIONREQUEST_P_H
#define QTAWS_DELETEINTEGRATIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "deleteintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class DeleteIntegrationRequest;

class DeleteIntegrationRequestPrivate : public ApiGatewayRequestPrivate {

public:
    DeleteIntegrationRequestPrivate(const ApiGatewayRequest::Action action,
                                   DeleteIntegrationRequest * const q);
    DeleteIntegrationRequestPrivate(const DeleteIntegrationRequestPrivate &other,
                                   DeleteIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

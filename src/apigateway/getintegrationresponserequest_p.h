// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSEREQUEST_P_H
#define QTAWS_GETINTEGRATIONRESPONSEREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getintegrationresponserequest.h"

namespace QtAws {
namespace ApiGateway {

class GetIntegrationResponseRequest;

class GetIntegrationResponseRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetIntegrationResponseRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetIntegrationResponseRequest * const q);
    GetIntegrationResponseRequestPrivate(const GetIntegrationResponseRequestPrivate &other,
                                   GetIntegrationResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponseRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

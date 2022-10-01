// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONREQUEST_P_H
#define QTAWS_GETINTEGRATIONREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getintegrationrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetIntegrationRequest;

class GetIntegrationRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetIntegrationRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetIntegrationRequest * const q);
    GetIntegrationRequestPrivate(const GetIntegrationRequestPrivate &other,
                                   GetIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

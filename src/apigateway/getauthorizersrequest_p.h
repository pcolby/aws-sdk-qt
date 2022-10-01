// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERSREQUEST_P_H
#define QTAWS_GETAUTHORIZERSREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getauthorizersrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetAuthorizersRequest;

class GetAuthorizersRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetAuthorizersRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetAuthorizersRequest * const q);
    GetAuthorizersRequestPrivate(const GetAuthorizersRequestPrivate &other,
                                   GetAuthorizersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAuthorizersRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

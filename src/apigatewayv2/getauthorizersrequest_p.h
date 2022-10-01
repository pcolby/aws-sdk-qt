// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERSREQUEST_P_H
#define QTAWS_GETAUTHORIZERSREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getauthorizersrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetAuthorizersRequest;

class GetAuthorizersRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetAuthorizersRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetAuthorizersRequest * const q);
    GetAuthorizersRequestPrivate(const GetAuthorizersRequestPrivate &other,
                                   GetAuthorizersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAuthorizersRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

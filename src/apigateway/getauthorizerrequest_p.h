// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERREQUEST_P_H
#define QTAWS_GETAUTHORIZERREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getauthorizerrequest.h"

namespace QtAws {
namespace ApiGateway {

class GetAuthorizerRequest;

class GetAuthorizerRequestPrivate : public ApiGatewayRequestPrivate {

public:
    GetAuthorizerRequestPrivate(const ApiGatewayRequest::Action action,
                                   GetAuthorizerRequest * const q);
    GetAuthorizerRequestPrivate(const GetAuthorizerRequestPrivate &other,
                                   GetAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAuthorizerRequest)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

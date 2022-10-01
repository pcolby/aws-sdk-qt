// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERREQUEST_P_H
#define QTAWS_GETAUTHORIZERREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getauthorizerrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetAuthorizerRequest;

class GetAuthorizerRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetAuthorizerRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetAuthorizerRequest * const q);
    GetAuthorizerRequestPrivate(const GetAuthorizerRequestPrivate &other,
                                   GetAuthorizerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAuthorizerRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

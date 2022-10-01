// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTESREQUEST_P_H
#define QTAWS_GETROUTESREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getroutesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRoutesRequest;

class GetRoutesRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetRoutesRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetRoutesRequest * const q);
    GetRoutesRequestPrivate(const GetRoutesRequestPrivate &other,
                                   GetRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRoutesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

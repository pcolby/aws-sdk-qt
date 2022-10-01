// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEREQUEST_P_H
#define QTAWS_GETROUTEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getrouterequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteRequest;

class GetRouteRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetRouteRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetRouteRequest * const q);
    GetRouteRequestPrivate(const GetRouteRequestPrivate &other,
                                   GetRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRouteRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

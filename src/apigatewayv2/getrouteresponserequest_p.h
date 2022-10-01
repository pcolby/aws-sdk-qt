// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSEREQUEST_P_H
#define QTAWS_GETROUTERESPONSEREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getrouteresponserequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponseRequest;

class GetRouteResponseRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetRouteResponseRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetRouteResponseRequest * const q);
    GetRouteResponseRequestPrivate(const GetRouteResponseRequestPrivate &other,
                                   GetRouteResponseRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRouteResponseRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

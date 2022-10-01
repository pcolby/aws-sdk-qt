// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSESREQUEST_P_H
#define QTAWS_GETROUTERESPONSESREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getrouteresponsesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponsesRequest;

class GetRouteResponsesRequestPrivate : public ApiGatewayV2RequestPrivate {

public:
    GetRouteResponsesRequestPrivate(const ApiGatewayV2Request::Action action,
                                   GetRouteResponsesRequest * const q);
    GetRouteResponsesRequestPrivate(const GetRouteResponsesRequestPrivate &other,
                                   GetRouteResponsesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRouteResponsesRequest)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETROUTERESPONSESREQUEST_P_H
#define QTAWS_GETROUTERESPONSESREQUEST_P_H

#include "apigatewayv2request_p.h"
#include "getrouteresponsesrequest.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponsesRequest;

class QTAWS_EXPORT GetRouteResponsesRequestPrivate : public ApiGatewayV2RequestPrivate {

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

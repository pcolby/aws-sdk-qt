// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSESRESPONSE_P_H
#define QTAWS_GETROUTERESPONSESRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponsesResponse;

class GetRouteResponsesResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetRouteResponsesResponsePrivate(GetRouteResponsesResponse * const q);

    void parseGetRouteResponsesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRouteResponsesResponse)
    Q_DISABLE_COPY(GetRouteResponsesResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

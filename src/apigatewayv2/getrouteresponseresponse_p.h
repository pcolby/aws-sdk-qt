// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTERESPONSERESPONSE_P_H
#define QTAWS_GETROUTERESPONSERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRouteResponseResponse;

class GetRouteResponseResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetRouteResponseResponsePrivate(GetRouteResponseResponse * const q);

    void parseGetRouteResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRouteResponseResponse)
    Q_DISABLE_COPY(GetRouteResponseResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

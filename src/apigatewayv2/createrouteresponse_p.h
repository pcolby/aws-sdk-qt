// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSE_P_H
#define QTAWS_CREATEROUTERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteResponse;

class CreateRouteResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateRouteResponsePrivate(CreateRouteResponse * const q);

    void parseCreateRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRouteResponse)
    Q_DISABLE_COPY(CreateRouteResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

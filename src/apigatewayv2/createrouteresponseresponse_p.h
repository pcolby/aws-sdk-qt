// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSERESPONSE_P_H
#define QTAWS_CREATEROUTERESPONSERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateRouteResponseResponse;

class CreateRouteResponseResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateRouteResponseResponsePrivate(CreateRouteResponseResponse * const q);

    void parseCreateRouteResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRouteResponseResponse)
    Q_DISABLE_COPY(CreateRouteResponseResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

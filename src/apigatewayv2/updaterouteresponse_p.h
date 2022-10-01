// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSE_P_H
#define QTAWS_UPDATEROUTERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteResponse;

class UpdateRouteResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateRouteResponsePrivate(UpdateRouteResponse * const q);

    void parseUpdateRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRouteResponse)
    Q_DISABLE_COPY(UpdateRouteResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

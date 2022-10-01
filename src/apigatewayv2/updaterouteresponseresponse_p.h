// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSERESPONSE_P_H
#define QTAWS_UPDATEROUTERESPONSERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateRouteResponseResponse;

class UpdateRouteResponseResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateRouteResponseResponsePrivate(UpdateRouteResponseResponse * const q);

    void parseUpdateRouteResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRouteResponseResponse)
    Q_DISABLE_COPY(UpdateRouteResponseResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

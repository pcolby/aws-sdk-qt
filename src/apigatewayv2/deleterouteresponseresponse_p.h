// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTERESPONSERESPONSE_P_H
#define QTAWS_DELETEROUTERESPONSERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteRouteResponseResponse;

class DeleteRouteResponseResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteRouteResponseResponsePrivate(DeleteRouteResponseResponse * const q);

    void parseDeleteRouteResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRouteResponseResponse)
    Q_DISABLE_COPY(DeleteRouteResponseResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

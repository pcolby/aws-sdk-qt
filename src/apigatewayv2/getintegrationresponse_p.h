// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSE_P_H
#define QTAWS_GETINTEGRATIONRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponse;

class GetIntegrationResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetIntegrationResponsePrivate(GetIntegrationResponse * const q);

    void parseGetIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponse)
    Q_DISABLE_COPY(GetIntegrationResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

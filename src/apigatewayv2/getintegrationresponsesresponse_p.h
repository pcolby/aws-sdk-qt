// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSESRESPONSE_P_H
#define QTAWS_GETINTEGRATIONRESPONSESRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponsesResponse;

class GetIntegrationResponsesResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetIntegrationResponsesResponsePrivate(GetIntegrationResponsesResponse * const q);

    void parseGetIntegrationResponsesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponsesResponse)
    Q_DISABLE_COPY(GetIntegrationResponsesResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSERESPONSE_P_H
#define QTAWS_GETINTEGRATIONRESPONSERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationResponseResponse;

class GetIntegrationResponseResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetIntegrationResponseResponsePrivate(GetIntegrationResponseResponse * const q);

    void parseGetIntegrationResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponseResponse)
    Q_DISABLE_COPY(GetIntegrationResponseResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

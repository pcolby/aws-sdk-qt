// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONRESPONSE_P_H
#define QTAWS_CREATEINTEGRATIONRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationResponse;

class CreateIntegrationResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateIntegrationResponsePrivate(CreateIntegrationResponse * const q);

    void parseCreateIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationResponse)
    Q_DISABLE_COPY(CreateIntegrationResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

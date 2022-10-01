// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINTEGRATIONRESPONSERESPONSE_P_H
#define QTAWS_CREATEINTEGRATIONRESPONSERESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateIntegrationResponseResponse;

class CreateIntegrationResponseResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateIntegrationResponseResponsePrivate(CreateIntegrationResponseResponse * const q);

    void parseCreateIntegrationResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIntegrationResponseResponse)
    Q_DISABLE_COPY(CreateIntegrationResponseResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSE_P_H
#define QTAWS_UPDATEINTEGRATIONRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateIntegrationResponse;

class UpdateIntegrationResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateIntegrationResponsePrivate(UpdateIntegrationResponse * const q);

    void parseUpdateIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIntegrationResponse)
    Q_DISABLE_COPY(UpdateIntegrationResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

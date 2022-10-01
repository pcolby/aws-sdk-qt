// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONSRESPONSE_P_H
#define QTAWS_GETINTEGRATIONSRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetIntegrationsResponse;

class GetIntegrationsResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetIntegrationsResponsePrivate(GetIntegrationsResponse * const q);

    void parseGetIntegrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntegrationsResponse)
    Q_DISABLE_COPY(GetIntegrationsResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

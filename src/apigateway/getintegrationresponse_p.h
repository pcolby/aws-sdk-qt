// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSE_P_H
#define QTAWS_GETINTEGRATIONRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetIntegrationResponse;

class GetIntegrationResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetIntegrationResponsePrivate(GetIntegrationResponse * const q);

    void parseGetIntegrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponse)
    Q_DISABLE_COPY(GetIntegrationResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

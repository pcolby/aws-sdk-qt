// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONRESPONSERESPONSE_P_H
#define QTAWS_GETINTEGRATIONRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetIntegrationResponseResponse;

class GetIntegrationResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetIntegrationResponseResponsePrivate(GetIntegrationResponseResponse * const q);

    void parseGetIntegrationResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntegrationResponseResponse)
    Q_DISABLE_COPY(GetIntegrationResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

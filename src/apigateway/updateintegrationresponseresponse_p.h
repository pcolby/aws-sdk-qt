// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINTEGRATIONRESPONSERESPONSE_P_H
#define QTAWS_UPDATEINTEGRATIONRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateIntegrationResponseResponse;

class UpdateIntegrationResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateIntegrationResponseResponsePrivate(UpdateIntegrationResponseResponse * const q);

    void parseUpdateIntegrationResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIntegrationResponseResponse)
    Q_DISABLE_COPY(UpdateIntegrationResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

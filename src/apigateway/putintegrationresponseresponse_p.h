// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONRESPONSERESPONSE_P_H
#define QTAWS_PUTINTEGRATIONRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class PutIntegrationResponseResponse;

class PutIntegrationResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit PutIntegrationResponseResponsePrivate(PutIntegrationResponseResponse * const q);

    void parsePutIntegrationResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutIntegrationResponseResponse)
    Q_DISABLE_COPY(PutIntegrationResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

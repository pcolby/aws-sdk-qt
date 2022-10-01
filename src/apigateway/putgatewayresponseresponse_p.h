// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGATEWAYRESPONSERESPONSE_P_H
#define QTAWS_PUTGATEWAYRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class PutGatewayResponseResponse;

class PutGatewayResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit PutGatewayResponseResponsePrivate(PutGatewayResponseResponse * const q);

    void parsePutGatewayResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutGatewayResponseResponse)
    Q_DISABLE_COPY(PutGatewayResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

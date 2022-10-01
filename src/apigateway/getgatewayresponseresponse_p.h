// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSERESPONSE_P_H
#define QTAWS_GETGATEWAYRESPONSERESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponseResponse;

class GetGatewayResponseResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetGatewayResponseResponsePrivate(GetGatewayResponseResponse * const q);

    void parseGetGatewayResponseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponseResponse)
    Q_DISABLE_COPY(GetGatewayResponseResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGATEWAYRESPONSESRESPONSE_P_H
#define QTAWS_GETGATEWAYRESPONSESRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetGatewayResponsesResponse;

class GetGatewayResponsesResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetGatewayResponsesResponsePrivate(GetGatewayResponsesResponse * const q);

    void parseGetGatewayResponsesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGatewayResponsesResponse)
    Q_DISABLE_COPY(GetGatewayResponsesResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

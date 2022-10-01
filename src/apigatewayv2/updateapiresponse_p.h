// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIRESPONSE_P_H
#define QTAWS_UPDATEAPIRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateApiResponse;

class UpdateApiResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateApiResponsePrivate(UpdateApiResponse * const q);

    void parseUpdateApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiResponse)
    Q_DISABLE_COPY(UpdateApiResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

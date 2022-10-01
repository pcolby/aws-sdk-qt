// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIRESPONSE_P_H
#define QTAWS_GETAPIRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApiResponse;

class GetApiResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetApiResponsePrivate(GetApiResponse * const q);

    void parseGetApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApiResponse)
    Q_DISABLE_COPY(GetApiResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

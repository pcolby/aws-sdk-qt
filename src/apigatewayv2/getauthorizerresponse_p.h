// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERRESPONSE_P_H
#define QTAWS_GETAUTHORIZERRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetAuthorizerResponse;

class GetAuthorizerResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetAuthorizerResponsePrivate(GetAuthorizerResponse * const q);

    void parseGetAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAuthorizerResponse)
    Q_DISABLE_COPY(GetAuthorizerResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTHORIZERRESPONSE_P_H
#define QTAWS_CREATEAUTHORIZERRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateAuthorizerResponse;

class CreateAuthorizerResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateAuthorizerResponsePrivate(CreateAuthorizerResponse * const q);

    void parseCreateAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAuthorizerResponse)
    Q_DISABLE_COPY(CreateAuthorizerResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERRESPONSE_P_H
#define QTAWS_UPDATEAUTHORIZERRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class UpdateAuthorizerResponse;

class UpdateAuthorizerResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit UpdateAuthorizerResponsePrivate(UpdateAuthorizerResponse * const q);

    void parseUpdateAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAuthorizerResponse)
    Q_DISABLE_COPY(UpdateAuthorizerResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

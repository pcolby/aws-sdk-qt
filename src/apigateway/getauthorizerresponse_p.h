// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERRESPONSE_P_H
#define QTAWS_GETAUTHORIZERRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetAuthorizerResponse;

class GetAuthorizerResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetAuthorizerResponsePrivate(GetAuthorizerResponse * const q);

    void parseGetAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAuthorizerResponse)
    Q_DISABLE_COPY(GetAuthorizerResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTHORIZERRESPONSE_P_H
#define QTAWS_UPDATEAUTHORIZERRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateAuthorizerResponse;

class UpdateAuthorizerResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateAuthorizerResponsePrivate(UpdateAuthorizerResponse * const q);

    void parseUpdateAuthorizerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAuthorizerResponse)
    Q_DISABLE_COPY(UpdateAuthorizerResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

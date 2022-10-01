// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIKEYRESPONSE_P_H
#define QTAWS_UPDATEAPIKEYRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateApiKeyResponse;

class UpdateApiKeyResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateApiKeyResponsePrivate(UpdateApiKeyResponse * const q);

    void parseUpdateApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiKeyResponse)
    Q_DISABLE_COPY(UpdateApiKeyResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

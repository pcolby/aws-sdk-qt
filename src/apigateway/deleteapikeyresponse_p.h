// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIKEYRESPONSE_P_H
#define QTAWS_DELETEAPIKEYRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteApiKeyResponse;

class DeleteApiKeyResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteApiKeyResponsePrivate(DeleteApiKeyResponse * const q);

    void parseDeleteApiKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApiKeyResponse)
    Q_DISABLE_COPY(DeleteApiKeyResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

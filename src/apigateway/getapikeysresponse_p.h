// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPIKEYSRESPONSE_P_H
#define QTAWS_GETAPIKEYSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetApiKeysResponse;

class GetApiKeysResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetApiKeysResponsePrivate(GetApiKeysResponse * const q);

    void parseGetApiKeysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApiKeysResponse)
    Q_DISABLE_COPY(GetApiKeysResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

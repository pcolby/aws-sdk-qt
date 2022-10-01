// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTHORIZERSRESPONSE_P_H
#define QTAWS_GETAUTHORIZERSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetAuthorizersResponse;

class GetAuthorizersResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetAuthorizersResponsePrivate(GetAuthorizersResponse * const q);

    void parseGetAuthorizersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAuthorizersResponse)
    Q_DISABLE_COPY(GetAuthorizersResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

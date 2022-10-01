// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESTAPIRESPONSE_P_H
#define QTAWS_GETRESTAPIRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetRestApiResponse;

class GetRestApiResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetRestApiResponsePrivate(GetRestApiResponse * const q);

    void parseGetRestApiResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRestApiResponse)
    Q_DISABLE_COPY(GetRestApiResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

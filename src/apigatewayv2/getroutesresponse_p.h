// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTESRESPONSE_P_H
#define QTAWS_GETROUTESRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetRoutesResponse;

class GetRoutesResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetRoutesResponsePrivate(GetRoutesResponse * const q);

    void parseGetRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRoutesResponse)
    Q_DISABLE_COPY(GetRoutesResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

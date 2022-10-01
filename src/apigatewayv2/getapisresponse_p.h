// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPISRESPONSE_P_H
#define QTAWS_GETAPISRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetApisResponse;

class GetApisResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetApisResponsePrivate(GetApisResponse * const q);

    void parseGetApisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetApisResponse)
    Q_DISABLE_COPY(GetApisResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

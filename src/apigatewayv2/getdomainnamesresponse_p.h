// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMESRESPONSE_P_H
#define QTAWS_GETDOMAINNAMESRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetDomainNamesResponse;

class GetDomainNamesResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetDomainNamesResponsePrivate(GetDomainNamesResponse * const q);

    void parseGetDomainNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainNamesResponse)
    Q_DISABLE_COPY(GetDomainNamesResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

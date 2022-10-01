// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINNAMESRESPONSE_P_H
#define QTAWS_GETDOMAINNAMESRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetDomainNamesResponse;

class GetDomainNamesResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetDomainNamesResponsePrivate(GetDomainNamesResponse * const q);

    void parseGetDomainNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDomainNamesResponse)
    Q_DISABLE_COPY(GetDomainNamesResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKSRESPONSE_P_H
#define QTAWS_GETVPCLINKSRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetVpcLinksResponse;

class GetVpcLinksResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetVpcLinksResponsePrivate(GetVpcLinksResponse * const q);

    void parseGetVpcLinksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpcLinksResponse)
    Q_DISABLE_COPY(GetVpcLinksResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

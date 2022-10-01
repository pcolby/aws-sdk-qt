// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKRESPONSE_P_H
#define QTAWS_GETVPCLINKRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class GetVpcLinkResponse;

class GetVpcLinkResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit GetVpcLinkResponsePrivate(GetVpcLinkResponse * const q);

    void parseGetVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpcLinkResponse)
    Q_DISABLE_COPY(GetVpcLinkResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

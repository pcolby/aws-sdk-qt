// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVPCLINKRESPONSE_P_H
#define QTAWS_GETVPCLINKRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class GetVpcLinkResponse;

class GetVpcLinkResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit GetVpcLinkResponsePrivate(GetVpcLinkResponse * const q);

    void parseGetVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVpcLinkResponse)
    Q_DISABLE_COPY(GetVpcLinkResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCLINKRESPONSE_P_H
#define QTAWS_CREATEVPCLINKRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class CreateVpcLinkResponse;

class CreateVpcLinkResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit CreateVpcLinkResponsePrivate(CreateVpcLinkResponse * const q);

    void parseCreateVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcLinkResponse)
    Q_DISABLE_COPY(CreateVpcLinkResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

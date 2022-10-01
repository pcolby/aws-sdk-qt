// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCLINKRESPONSE_P_H
#define QTAWS_CREATEVPCLINKRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class CreateVpcLinkResponse;

class CreateVpcLinkResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit CreateVpcLinkResponsePrivate(CreateVpcLinkResponse * const q);

    void parseCreateVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcLinkResponse)
    Q_DISABLE_COPY(CreateVpcLinkResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

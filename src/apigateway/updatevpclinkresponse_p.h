// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVPCLINKRESPONSE_P_H
#define QTAWS_UPDATEVPCLINKRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class UpdateVpcLinkResponse;

class UpdateVpcLinkResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit UpdateVpcLinkResponsePrivate(UpdateVpcLinkResponse * const q);

    void parseUpdateVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVpcLinkResponse)
    Q_DISABLE_COPY(UpdateVpcLinkResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

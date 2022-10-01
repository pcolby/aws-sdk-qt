// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKRESPONSE_P_H
#define QTAWS_DELETEVPCLINKRESPONSE_P_H

#include "apigatewayv2response_p.h"

namespace QtAws {
namespace ApiGatewayV2 {

class DeleteVpcLinkResponse;

class DeleteVpcLinkResponsePrivate : public ApiGatewayV2ResponsePrivate {

public:

    explicit DeleteVpcLinkResponsePrivate(DeleteVpcLinkResponse * const q);

    void parseDeleteVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcLinkResponse)
    Q_DISABLE_COPY(DeleteVpcLinkResponsePrivate)

};

} // namespace ApiGatewayV2
} // namespace QtAws

#endif

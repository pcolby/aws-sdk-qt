// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCLINKRESPONSE_P_H
#define QTAWS_DELETEVPCLINKRESPONSE_P_H

#include "apigatewayresponse_p.h"

namespace QtAws {
namespace ApiGateway {

class DeleteVpcLinkResponse;

class DeleteVpcLinkResponsePrivate : public ApiGatewayResponsePrivate {

public:

    explicit DeleteVpcLinkResponsePrivate(DeleteVpcLinkResponse * const q);

    void parseDeleteVpcLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcLinkResponse)
    Q_DISABLE_COPY(DeleteVpcLinkResponsePrivate)

};

} // namespace ApiGateway
} // namespace QtAws

#endif

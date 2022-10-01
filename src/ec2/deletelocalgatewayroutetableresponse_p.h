// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOCALGATEWAYROUTETABLERESPONSE_P_H
#define QTAWS_DELETELOCALGATEWAYROUTETABLERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteLocalGatewayRouteTableResponse;

class DeleteLocalGatewayRouteTableResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteLocalGatewayRouteTableResponsePrivate(DeleteLocalGatewayRouteTableResponse * const q);

    void parseDeleteLocalGatewayRouteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLocalGatewayRouteTableResponse)
    Q_DISABLE_COPY(DeleteLocalGatewayRouteTableResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCALGATEWAYROUTERESPONSE_P_H
#define QTAWS_CREATELOCALGATEWAYROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateLocalGatewayRouteResponse;

class CreateLocalGatewayRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateLocalGatewayRouteResponsePrivate(CreateLocalGatewayRouteResponse * const q);

    void parseCreateLocalGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocalGatewayRouteResponse)
    Q_DISABLE_COPY(CreateLocalGatewayRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

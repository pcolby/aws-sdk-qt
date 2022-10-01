// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOCALGATEWAYROUTERESPONSE_P_H
#define QTAWS_MODIFYLOCALGATEWAYROUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyLocalGatewayRouteResponse;

class ModifyLocalGatewayRouteResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyLocalGatewayRouteResponsePrivate(ModifyLocalGatewayRouteResponse * const q);

    void parseModifyLocalGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyLocalGatewayRouteResponse)
    Q_DISABLE_COPY(ModifyLocalGatewayRouteResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif

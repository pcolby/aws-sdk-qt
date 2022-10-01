// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYROUTERESPONSE_P_H
#define QTAWS_DESCRIBEGATEWAYROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DescribeGatewayRouteResponse;

class DescribeGatewayRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DescribeGatewayRouteResponsePrivate(DescribeGatewayRouteResponse * const q);

    void parseDescribeGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayRouteResponse)
    Q_DISABLE_COPY(DescribeGatewayRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYROUTERESPONSE_P_H
#define QTAWS_UPDATEGATEWAYROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class UpdateGatewayRouteResponse;

class UpdateGatewayRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit UpdateGatewayRouteResponsePrivate(UpdateGatewayRouteResponse * const q);

    void parseUpdateGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayRouteResponse)
    Q_DISABLE_COPY(UpdateGatewayRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif

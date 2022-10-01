// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYROUTERESPONSE_P_H
#define QTAWS_CREATEGATEWAYROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class CreateGatewayRouteResponse;

class CreateGatewayRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit CreateGatewayRouteResponsePrivate(CreateGatewayRouteResponse * const q);

    void parseCreateGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGatewayRouteResponse)
    Q_DISABLE_COPY(CreateGatewayRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif

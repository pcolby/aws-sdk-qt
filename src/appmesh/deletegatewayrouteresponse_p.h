// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYROUTERESPONSE_P_H
#define QTAWS_DELETEGATEWAYROUTERESPONSE_P_H

#include "appmeshresponse_p.h"

namespace QtAws {
namespace AppMesh {

class DeleteGatewayRouteResponse;

class DeleteGatewayRouteResponsePrivate : public AppMeshResponsePrivate {

public:

    explicit DeleteGatewayRouteResponsePrivate(DeleteGatewayRouteResponse * const q);

    void parseDeleteGatewayRouteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayRouteResponse)
    Q_DISABLE_COPY(DeleteGatewayRouteResponsePrivate)

};

} // namespace AppMesh
} // namespace QtAws

#endif

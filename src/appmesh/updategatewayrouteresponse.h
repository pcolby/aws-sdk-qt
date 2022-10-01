// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYROUTERESPONSE_H
#define QTAWS_UPDATEGATEWAYROUTERESPONSE_H

#include "appmeshresponse.h"
#include "updategatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateGatewayRouteResponsePrivate;

class QTAWSAPPMESH_EXPORT UpdateGatewayRouteResponse : public AppMeshResponse {
    Q_OBJECT

public:
    UpdateGatewayRouteResponse(const UpdateGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayRouteResponse)
    Q_DISABLE_COPY(UpdateGatewayRouteResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYROUTERESPONSE_H
#define QTAWS_DELETEGATEWAYROUTERESPONSE_H

#include "appmeshresponse.h"
#include "deletegatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteGatewayRouteResponsePrivate;

class QTAWSAPPMESH_EXPORT DeleteGatewayRouteResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DeleteGatewayRouteResponse(const DeleteGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayRouteResponse)
    Q_DISABLE_COPY(DeleteGatewayRouteResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif

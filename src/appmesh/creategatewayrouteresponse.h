// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYROUTERESPONSE_H
#define QTAWS_CREATEGATEWAYROUTERESPONSE_H

#include "appmeshresponse.h"
#include "creategatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class CreateGatewayRouteResponsePrivate;

class QTAWSAPPMESH_EXPORT CreateGatewayRouteResponse : public AppMeshResponse {
    Q_OBJECT

public:
    CreateGatewayRouteResponse(const CreateGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGatewayRouteResponse)
    Q_DISABLE_COPY(CreateGatewayRouteResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYROUTEREQUEST_P_H
#define QTAWS_UPDATEGATEWAYROUTEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "updategatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateGatewayRouteRequest;

class UpdateGatewayRouteRequestPrivate : public AppMeshRequestPrivate {

public:
    UpdateGatewayRouteRequestPrivate(const AppMeshRequest::Action action,
                                   UpdateGatewayRouteRequest * const q);
    UpdateGatewayRouteRequestPrivate(const UpdateGatewayRouteRequestPrivate &other,
                                   UpdateGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

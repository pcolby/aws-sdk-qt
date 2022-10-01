// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYROUTEREQUEST_P_H
#define QTAWS_DELETEGATEWAYROUTEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "deletegatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteGatewayRouteRequest;

class DeleteGatewayRouteRequestPrivate : public AppMeshRequestPrivate {

public:
    DeleteGatewayRouteRequestPrivate(const AppMeshRequest::Action action,
                                   DeleteGatewayRouteRequest * const q);
    DeleteGatewayRouteRequestPrivate(const DeleteGatewayRouteRequestPrivate &other,
                                   DeleteGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

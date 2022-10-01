// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYROUTEREQUEST_P_H
#define QTAWS_CREATEGATEWAYROUTEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "creategatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class CreateGatewayRouteRequest;

class CreateGatewayRouteRequestPrivate : public AppMeshRequestPrivate {

public:
    CreateGatewayRouteRequestPrivate(const AppMeshRequest::Action action,
                                   CreateGatewayRouteRequest * const q);
    CreateGatewayRouteRequestPrivate(const CreateGatewayRouteRequestPrivate &other,
                                   CreateGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYROUTEREQUEST_P_H
#define QTAWS_DESCRIBEGATEWAYROUTEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "describegatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeGatewayRouteRequest;

class DescribeGatewayRouteRequestPrivate : public AppMeshRequestPrivate {

public:
    DescribeGatewayRouteRequestPrivate(const AppMeshRequest::Action action,
                                   DescribeGatewayRouteRequest * const q);
    DescribeGatewayRouteRequestPrivate(const DescribeGatewayRouteRequestPrivate &other,
                                   DescribeGatewayRouteRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

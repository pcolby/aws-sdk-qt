// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYROUTEREQUEST_H
#define QTAWS_DESCRIBEGATEWAYROUTEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeGatewayRouteRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeGatewayRouteRequest : public AppMeshRequest {

public:
    DescribeGatewayRouteRequest(const DescribeGatewayRouteRequest &other);
    DescribeGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

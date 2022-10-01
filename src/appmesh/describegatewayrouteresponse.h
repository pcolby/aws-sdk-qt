// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGATEWAYROUTERESPONSE_H
#define QTAWS_DESCRIBEGATEWAYROUTERESPONSE_H

#include "appmeshresponse.h"
#include "describegatewayrouterequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeGatewayRouteResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeGatewayRouteResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeGatewayRouteResponse(const DescribeGatewayRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGatewayRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGatewayRouteResponse)
    Q_DISABLE_COPY(DescribeGatewayRouteResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif

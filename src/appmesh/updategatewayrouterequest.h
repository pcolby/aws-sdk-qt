// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYROUTEREQUEST_H
#define QTAWS_UPDATEGATEWAYROUTEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateGatewayRouteRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateGatewayRouteRequest : public AppMeshRequest {

public:
    UpdateGatewayRouteRequest(const UpdateGatewayRouteRequest &other);
    UpdateGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGATEWAYROUTEREQUEST_H
#define QTAWS_DELETEGATEWAYROUTEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteGatewayRouteRequestPrivate;

class QTAWSAPPMESH_EXPORT DeleteGatewayRouteRequest : public AppMeshRequest {

public:
    DeleteGatewayRouteRequest(const DeleteGatewayRouteRequest &other);
    DeleteGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

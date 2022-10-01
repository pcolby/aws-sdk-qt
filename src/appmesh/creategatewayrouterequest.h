// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGATEWAYROUTEREQUEST_H
#define QTAWS_CREATEGATEWAYROUTEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateGatewayRouteRequestPrivate;

class QTAWSAPPMESH_EXPORT CreateGatewayRouteRequest : public AppMeshRequest {

public:
    CreateGatewayRouteRequest(const CreateGatewayRouteRequest &other);
    CreateGatewayRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGatewayRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

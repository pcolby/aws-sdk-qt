// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALGATEWAYREQUEST_H
#define QTAWS_UPDATEVIRTUALGATEWAYREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualGatewayRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualGatewayRequest : public AppMeshRequest {

public:
    UpdateVirtualGatewayRequest(const UpdateVirtualGatewayRequest &other);
    UpdateVirtualGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

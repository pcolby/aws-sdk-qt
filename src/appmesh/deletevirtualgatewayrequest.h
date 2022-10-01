// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALGATEWAYREQUEST_H
#define QTAWS_DELETEVIRTUALGATEWAYREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualGatewayRequestPrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualGatewayRequest : public AppMeshRequest {

public:
    DeleteVirtualGatewayRequest(const DeleteVirtualGatewayRequest &other);
    DeleteVirtualGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

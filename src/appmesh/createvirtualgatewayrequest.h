// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALGATEWAYREQUEST_H
#define QTAWS_CREATEVIRTUALGATEWAYREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualGatewayRequestPrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualGatewayRequest : public AppMeshRequest {

public:
    CreateVirtualGatewayRequest(const CreateVirtualGatewayRequest &other);
    CreateVirtualGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

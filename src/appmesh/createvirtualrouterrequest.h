// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALROUTERREQUEST_H
#define QTAWS_CREATEVIRTUALROUTERREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualRouterRequestPrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualRouterRequest : public AppMeshRequest {

public:
    CreateVirtualRouterRequest(const CreateVirtualRouterRequest &other);
    CreateVirtualRouterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALROUTERREQUEST_H
#define QTAWS_UPDATEVIRTUALROUTERREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualRouterRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualRouterRequest : public AppMeshRequest {

public:
    UpdateVirtualRouterRequest(const UpdateVirtualRouterRequest &other);
    UpdateVirtualRouterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALROUTERREQUEST_H
#define QTAWS_DELETEVIRTUALROUTERREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualRouterRequestPrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualRouterRequest : public AppMeshRequest {

public:
    DeleteVirtualRouterRequest(const DeleteVirtualRouterRequest &other);
    DeleteVirtualRouterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

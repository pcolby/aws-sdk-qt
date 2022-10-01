// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALROUTERREQUEST_P_H
#define QTAWS_DELETEVIRTUALROUTERREQUEST_P_H

#include "appmeshrequest_p.h"
#include "deletevirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualRouterRequest;

class DeleteVirtualRouterRequestPrivate : public AppMeshRequestPrivate {

public:
    DeleteVirtualRouterRequestPrivate(const AppMeshRequest::Action action,
                                   DeleteVirtualRouterRequest * const q);
    DeleteVirtualRouterRequestPrivate(const DeleteVirtualRouterRequestPrivate &other,
                                   DeleteVirtualRouterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

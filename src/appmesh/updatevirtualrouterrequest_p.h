// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALROUTERREQUEST_P_H
#define QTAWS_UPDATEVIRTUALROUTERREQUEST_P_H

#include "appmeshrequest_p.h"
#include "updatevirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualRouterRequest;

class UpdateVirtualRouterRequestPrivate : public AppMeshRequestPrivate {

public:
    UpdateVirtualRouterRequestPrivate(const AppMeshRequest::Action action,
                                   UpdateVirtualRouterRequest * const q);
    UpdateVirtualRouterRequestPrivate(const UpdateVirtualRouterRequestPrivate &other,
                                   UpdateVirtualRouterRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALROUTERREQUEST_P_H
#define QTAWS_CREATEVIRTUALROUTERREQUEST_P_H

#include "appmeshrequest_p.h"
#include "createvirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualRouterRequest;

class CreateVirtualRouterRequestPrivate : public AppMeshRequestPrivate {

public:
    CreateVirtualRouterRequestPrivate(const AppMeshRequest::Action action,
                                   CreateVirtualRouterRequest * const q);
    CreateVirtualRouterRequestPrivate(const CreateVirtualRouterRequestPrivate &other,
                                   CreateVirtualRouterRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVirtualRouterRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALNODEREQUEST_P_H
#define QTAWS_CREATEVIRTUALNODEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "createvirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualNodeRequest;

class CreateVirtualNodeRequestPrivate : public AppMeshRequestPrivate {

public:
    CreateVirtualNodeRequestPrivate(const AppMeshRequest::Action action,
                                   CreateVirtualNodeRequest * const q);
    CreateVirtualNodeRequestPrivate(const CreateVirtualNodeRequestPrivate &other,
                                   CreateVirtualNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

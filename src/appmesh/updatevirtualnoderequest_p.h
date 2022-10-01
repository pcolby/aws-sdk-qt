// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALNODEREQUEST_P_H
#define QTAWS_UPDATEVIRTUALNODEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "updatevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualNodeRequest;

class UpdateVirtualNodeRequestPrivate : public AppMeshRequestPrivate {

public:
    UpdateVirtualNodeRequestPrivate(const AppMeshRequest::Action action,
                                   UpdateVirtualNodeRequest * const q);
    UpdateVirtualNodeRequestPrivate(const UpdateVirtualNodeRequestPrivate &other,
                                   UpdateVirtualNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

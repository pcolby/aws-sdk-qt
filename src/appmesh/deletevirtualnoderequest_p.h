// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALNODEREQUEST_P_H
#define QTAWS_DELETEVIRTUALNODEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "deletevirtualnoderequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualNodeRequest;

class DeleteVirtualNodeRequestPrivate : public AppMeshRequestPrivate {

public:
    DeleteVirtualNodeRequestPrivate(const AppMeshRequest::Action action,
                                   DeleteVirtualNodeRequest * const q);
    DeleteVirtualNodeRequestPrivate(const DeleteVirtualNodeRequestPrivate &other,
                                   DeleteVirtualNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

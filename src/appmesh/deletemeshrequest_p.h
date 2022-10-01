// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESHREQUEST_P_H
#define QTAWS_DELETEMESHREQUEST_P_H

#include "appmeshrequest_p.h"
#include "deletemeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteMeshRequest;

class DeleteMeshRequestPrivate : public AppMeshRequestPrivate {

public:
    DeleteMeshRequestPrivate(const AppMeshRequest::Action action,
                                   DeleteMeshRequest * const q);
    DeleteMeshRequestPrivate(const DeleteMeshRequestPrivate &other,
                                   DeleteMeshRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

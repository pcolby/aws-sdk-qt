// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMESHREQUEST_P_H
#define QTAWS_UPDATEMESHREQUEST_P_H

#include "appmeshrequest_p.h"
#include "updatemeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateMeshRequest;

class UpdateMeshRequestPrivate : public AppMeshRequestPrivate {

public:
    UpdateMeshRequestPrivate(const AppMeshRequest::Action action,
                                   UpdateMeshRequest * const q);
    UpdateMeshRequestPrivate(const UpdateMeshRequestPrivate &other,
                                   UpdateMeshRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

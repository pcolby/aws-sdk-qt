// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMESHREQUEST_P_H
#define QTAWS_CREATEMESHREQUEST_P_H

#include "appmeshrequest_p.h"
#include "createmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateMeshRequest;

class CreateMeshRequestPrivate : public AppMeshRequestPrivate {

public:
    CreateMeshRequestPrivate(const AppMeshRequest::Action action,
                                   CreateMeshRequest * const q);
    CreateMeshRequestPrivate(const CreateMeshRequestPrivate &other,
                                   CreateMeshRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

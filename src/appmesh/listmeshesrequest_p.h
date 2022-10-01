// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMESHESREQUEST_P_H
#define QTAWS_LISTMESHESREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listmeshesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListMeshesRequest;

class ListMeshesRequestPrivate : public AppMeshRequestPrivate {

public:
    ListMeshesRequestPrivate(const AppMeshRequest::Action action,
                                   ListMeshesRequest * const q);
    ListMeshesRequestPrivate(const ListMeshesRequestPrivate &other,
                                   ListMeshesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMeshesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

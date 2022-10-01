// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALNODESREQUEST_P_H
#define QTAWS_LISTVIRTUALNODESREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listvirtualnodesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualNodesRequest;

class ListVirtualNodesRequestPrivate : public AppMeshRequestPrivate {

public:
    ListVirtualNodesRequestPrivate(const AppMeshRequest::Action action,
                                   ListVirtualNodesRequest * const q);
    ListVirtualNodesRequestPrivate(const ListVirtualNodesRequestPrivate &other,
                                   ListVirtualNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualNodesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

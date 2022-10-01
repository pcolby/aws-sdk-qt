// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALROUTERSREQUEST_P_H
#define QTAWS_LISTVIRTUALROUTERSREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listvirtualroutersrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualRoutersRequest;

class ListVirtualRoutersRequestPrivate : public AppMeshRequestPrivate {

public:
    ListVirtualRoutersRequestPrivate(const AppMeshRequest::Action action,
                                   ListVirtualRoutersRequest * const q);
    ListVirtualRoutersRequestPrivate(const ListVirtualRoutersRequestPrivate &other,
                                   ListVirtualRoutersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualRoutersRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

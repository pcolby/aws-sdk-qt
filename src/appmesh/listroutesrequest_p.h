// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTESREQUEST_P_H
#define QTAWS_LISTROUTESREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listroutesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListRoutesRequest;

class ListRoutesRequestPrivate : public AppMeshRequestPrivate {

public:
    ListRoutesRequestPrivate(const AppMeshRequest::Action action,
                                   ListRoutesRequest * const q);
    ListRoutesRequestPrivate(const ListRoutesRequestPrivate &other,
                                   ListRoutesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRoutesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

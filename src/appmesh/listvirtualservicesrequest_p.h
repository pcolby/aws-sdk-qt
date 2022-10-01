// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALSERVICESREQUEST_P_H
#define QTAWS_LISTVIRTUALSERVICESREQUEST_P_H

#include "appmeshrequest_p.h"
#include "listvirtualservicesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualServicesRequest;

class ListVirtualServicesRequestPrivate : public AppMeshRequestPrivate {

public:
    ListVirtualServicesRequestPrivate(const AppMeshRequest::Action action,
                                   ListVirtualServicesRequest * const q);
    ListVirtualServicesRequestPrivate(const ListVirtualServicesRequestPrivate &other,
                                   ListVirtualServicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVirtualServicesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif

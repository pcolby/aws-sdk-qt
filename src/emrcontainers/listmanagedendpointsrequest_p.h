// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDENDPOINTSREQUEST_P_H
#define QTAWS_LISTMANAGEDENDPOINTSREQUEST_P_H

#include "emrcontainersrequest_p.h"
#include "listmanagedendpointsrequest.h"

namespace QtAws {
namespace Emrcontainers {

class ListManagedEndpointsRequest;

class ListManagedEndpointsRequestPrivate : public EmrcontainersRequestPrivate {

public:
    ListManagedEndpointsRequestPrivate(const EmrcontainersRequest::Action action,
                                   ListManagedEndpointsRequest * const q);
    ListManagedEndpointsRequestPrivate(const ListManagedEndpointsRequestPrivate &other,
                                   ListManagedEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListManagedEndpointsRequest)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif

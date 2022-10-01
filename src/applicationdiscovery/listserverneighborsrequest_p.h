// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERNEIGHBORSREQUEST_P_H
#define QTAWS_LISTSERVERNEIGHBORSREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "listserverneighborsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListServerNeighborsRequest;

class ListServerNeighborsRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    ListServerNeighborsRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   ListServerNeighborsRequest * const q);
    ListServerNeighborsRequestPrivate(const ListServerNeighborsRequestPrivate &other,
                                   ListServerNeighborsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServerNeighborsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREDRESOURCESREQUEST_P_H
#define QTAWS_LISTMONITOREDRESOURCESREQUEST_P_H

#include "devopsgururequest_p.h"
#include "listmonitoredresourcesrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListMonitoredResourcesRequest;

class ListMonitoredResourcesRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    ListMonitoredResourcesRequestPrivate(const DevOpsGuruRequest::Action action,
                                   ListMonitoredResourcesRequest * const q);
    ListMonitoredResourcesRequestPrivate(const ListMonitoredResourcesRequestPrivate &other,
                                   ListMonitoredResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMonitoredResourcesRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif

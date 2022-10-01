// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCESREQUEST_P_H
#define QTAWS_LISTINSTANCESREQUEST_P_H

#include "servicediscoveryrequest_p.h"
#include "listinstancesrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class ListInstancesRequest;

class ListInstancesRequestPrivate : public ServiceDiscoveryRequestPrivate {

public:
    ListInstancesRequestPrivate(const ServiceDiscoveryRequest::Action action,
                                   ListInstancesRequest * const q);
    ListInstancesRequestPrivate(const ListInstancesRequestPrivate &other,
                                   ListInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInstancesRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif

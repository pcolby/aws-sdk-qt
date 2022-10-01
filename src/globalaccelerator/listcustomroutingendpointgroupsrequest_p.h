// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSREQUEST_P_H
#define QTAWS_LISTCUSTOMROUTINGENDPOINTGROUPSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listcustomroutingendpointgroupsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListCustomRoutingEndpointGroupsRequest;

class ListCustomRoutingEndpointGroupsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListCustomRoutingEndpointGroupsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListCustomRoutingEndpointGroupsRequest * const q);
    ListCustomRoutingEndpointGroupsRequestPrivate(const ListCustomRoutingEndpointGroupsRequestPrivate &other,
                                   ListCustomRoutingEndpointGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCustomRoutingEndpointGroupsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

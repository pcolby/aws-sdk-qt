// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTGROUPSREQUEST_P_H
#define QTAWS_LISTENDPOINTGROUPSREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "listendpointgroupsrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class ListEndpointGroupsRequest;

class ListEndpointGroupsRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    ListEndpointGroupsRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   ListEndpointGroupsRequest * const q);
    ListEndpointGroupsRequestPrivate(const ListEndpointGroupsRequestPrivate &other,
                                   ListEndpointGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointGroupsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

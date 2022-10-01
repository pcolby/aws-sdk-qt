// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATAFLOWENDPOINTGROUPSREQUEST_P_H
#define QTAWS_LISTDATAFLOWENDPOINTGROUPSREQUEST_P_H

#include "groundstationrequest_p.h"
#include "listdataflowendpointgroupsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListDataflowEndpointGroupsRequest;

class ListDataflowEndpointGroupsRequestPrivate : public GroundStationRequestPrivate {

public:
    ListDataflowEndpointGroupsRequestPrivate(const GroundStationRequest::Action action,
                                   ListDataflowEndpointGroupsRequest * const q);
    ListDataflowEndpointGroupsRequestPrivate(const ListDataflowEndpointGroupsRequestPrivate &other,
                                   ListDataflowEndpointGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDataflowEndpointGroupsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

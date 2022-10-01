// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAFLOWENDPOINTGROUPREQUEST_P_H
#define QTAWS_GETDATAFLOWENDPOINTGROUPREQUEST_P_H

#include "groundstationrequest_p.h"
#include "getdataflowendpointgrouprequest.h"

namespace QtAws {
namespace GroundStation {

class GetDataflowEndpointGroupRequest;

class GetDataflowEndpointGroupRequestPrivate : public GroundStationRequestPrivate {

public:
    GetDataflowEndpointGroupRequestPrivate(const GroundStationRequest::Action action,
                                   GetDataflowEndpointGroupRequest * const q);
    GetDataflowEndpointGroupRequestPrivate(const GetDataflowEndpointGroupRequestPrivate &other,
                                   GetDataflowEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDataflowEndpointGroupRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

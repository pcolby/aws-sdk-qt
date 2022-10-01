// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATAFLOWENDPOINTGROUPREQUEST_P_H
#define QTAWS_DELETEDATAFLOWENDPOINTGROUPREQUEST_P_H

#include "groundstationrequest_p.h"
#include "deletedataflowendpointgrouprequest.h"

namespace QtAws {
namespace GroundStation {

class DeleteDataflowEndpointGroupRequest;

class DeleteDataflowEndpointGroupRequestPrivate : public GroundStationRequestPrivate {

public:
    DeleteDataflowEndpointGroupRequestPrivate(const GroundStationRequest::Action action,
                                   DeleteDataflowEndpointGroupRequest * const q);
    DeleteDataflowEndpointGroupRequestPrivate(const DeleteDataflowEndpointGroupRequestPrivate &other,
                                   DeleteDataflowEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDataflowEndpointGroupRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

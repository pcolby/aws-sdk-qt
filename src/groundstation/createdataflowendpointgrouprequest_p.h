// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATAFLOWENDPOINTGROUPREQUEST_P_H
#define QTAWS_CREATEDATAFLOWENDPOINTGROUPREQUEST_P_H

#include "groundstationrequest_p.h"
#include "createdataflowendpointgrouprequest.h"

namespace QtAws {
namespace GroundStation {

class CreateDataflowEndpointGroupRequest;

class CreateDataflowEndpointGroupRequestPrivate : public GroundStationRequestPrivate {

public:
    CreateDataflowEndpointGroupRequestPrivate(const GroundStationRequest::Action action,
                                   CreateDataflowEndpointGroupRequest * const q);
    CreateDataflowEndpointGroupRequestPrivate(const CreateDataflowEndpointGroupRequestPrivate &other,
                                   CreateDataflowEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataflowEndpointGroupRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif

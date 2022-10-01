// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMROUTINGENDPOINTGROUPREQUEST_P_H
#define QTAWS_CREATECUSTOMROUTINGENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "createcustomroutingendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class CreateCustomRoutingEndpointGroupRequest;

class CreateCustomRoutingEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    CreateCustomRoutingEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   CreateCustomRoutingEndpointGroupRequest * const q);
    CreateCustomRoutingEndpointGroupRequestPrivate(const CreateCustomRoutingEndpointGroupRequestPrivate &other,
                                   CreateCustomRoutingEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomRoutingEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

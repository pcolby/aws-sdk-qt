// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPREQUEST_P_H
#define QTAWS_DELETECUSTOMROUTINGENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "deletecustomroutingendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingEndpointGroupRequest;

class DeleteCustomRoutingEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DeleteCustomRoutingEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DeleteCustomRoutingEndpointGroupRequest * const q);
    DeleteCustomRoutingEndpointGroupRequestPrivate(const DeleteCustomRoutingEndpointGroupRequestPrivate &other,
                                   DeleteCustomRoutingEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomRoutingEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describecustomroutingendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingEndpointGroupRequest;

class DescribeCustomRoutingEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeCustomRoutingEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeCustomRoutingEndpointGroupRequest * const q);
    DescribeCustomRoutingEndpointGroupRequestPrivate(const DescribeCustomRoutingEndpointGroupRequestPrivate &other,
                                   DescribeCustomRoutingEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

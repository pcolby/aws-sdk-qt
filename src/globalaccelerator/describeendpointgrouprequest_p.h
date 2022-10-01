// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTGROUPREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTGROUPREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describeendpointgrouprequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeEndpointGroupRequest;

class DescribeEndpointGroupRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeEndpointGroupRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeEndpointGroupRequest * const q);
    DescribeEndpointGroupRequestPrivate(const DescribeEndpointGroupRequestPrivate &other,
                                   DescribeEndpointGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorRequest;

class DescribeCustomRoutingAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeCustomRoutingAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeCustomRoutingAcceleratorRequest * const q);
    DescribeCustomRoutingAcceleratorRequestPrivate(const DescribeCustomRoutingAcceleratorRequestPrivate &other,
                                   DescribeCustomRoutingAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

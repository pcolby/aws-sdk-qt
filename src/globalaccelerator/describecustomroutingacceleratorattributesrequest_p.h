// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describecustomroutingacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorAttributesRequest;

class DescribeCustomRoutingAcceleratorAttributesRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeCustomRoutingAcceleratorAttributesRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeCustomRoutingAcceleratorAttributesRequest * const q);
    DescribeCustomRoutingAcceleratorAttributesRequestPrivate(const DescribeCustomRoutingAcceleratorAttributesRequestPrivate &other,
                                   DescribeCustomRoutingAcceleratorAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

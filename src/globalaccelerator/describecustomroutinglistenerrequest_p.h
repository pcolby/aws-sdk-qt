// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGLISTENERREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMROUTINGLISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describecustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingListenerRequest;

class DescribeCustomRoutingListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeCustomRoutingListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeCustomRoutingListenerRequest * const q);
    DescribeCustomRoutingListenerRequestPrivate(const DescribeCustomRoutingListenerRequestPrivate &other,
                                   DescribeCustomRoutingListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomRoutingListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

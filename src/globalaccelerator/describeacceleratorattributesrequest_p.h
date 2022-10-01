// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORATTRIBUTESREQUEST_P_H
#define QTAWS_DESCRIBEACCELERATORATTRIBUTESREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describeacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorAttributesRequest;

class DescribeAcceleratorAttributesRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeAcceleratorAttributesRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeAcceleratorAttributesRequest * const q);
    DescribeAcceleratorAttributesRequestPrivate(const DescribeAcceleratorAttributesRequestPrivate &other,
                                   DescribeAcceleratorAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorAttributesRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

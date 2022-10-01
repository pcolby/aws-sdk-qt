// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORREQUEST_P_H
#define QTAWS_DESCRIBEACCELERATORREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describeacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorRequest;

class DescribeAcceleratorRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeAcceleratorRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeAcceleratorRequest * const q);
    DescribeAcceleratorRequestPrivate(const DescribeAcceleratorRequestPrivate &other,
                                   DescribeAcceleratorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERREQUEST_P_H
#define QTAWS_DESCRIBELISTENERREQUEST_P_H

#include "globalacceleratorrequest_p.h"
#include "describelistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeListenerRequest;

class DescribeListenerRequestPrivate : public GlobalAcceleratorRequestPrivate {

public:
    DescribeListenerRequestPrivate(const GlobalAcceleratorRequest::Action action,
                                   DescribeListenerRequest * const q);
    DescribeListenerRequestPrivate(const DescribeListenerRequestPrivate &other,
                                   DescribeListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeListenerRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEEVENTWINDOWSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEEVENTWINDOWSREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstanceeventwindowsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceEventWindowsRequest;

class DescribeInstanceEventWindowsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceEventWindowsRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceEventWindowsRequest * const q);
    DescribeInstanceEventWindowsRequestPrivate(const DescribeInstanceEventWindowsRequestPrivate &other,
                                   DescribeInstanceEventWindowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceEventWindowsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

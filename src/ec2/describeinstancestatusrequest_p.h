// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTATUSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCESTATUSREQUEST_P_H

#include "ec2request_p.h"
#include "describeinstancestatusrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeInstanceStatusRequest;

class DescribeInstanceStatusRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeInstanceStatusRequestPrivate(const Ec2Request::Action action,
                                   DescribeInstanceStatusRequest * const q);
    DescribeInstanceStatusRequestPrivate(const DescribeInstanceStatusRequestPrivate &other,
                                   DescribeInstanceStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceStatusRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOIPPOOLSREQUEST_P_H
#define QTAWS_DESCRIBECOIPPOOLSREQUEST_P_H

#include "ec2request_p.h"
#include "describecoippoolsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeCoipPoolsRequest;

class DescribeCoipPoolsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeCoipPoolsRequestPrivate(const Ec2Request::Action action,
                                   DescribeCoipPoolsRequest * const q);
    DescribeCoipPoolsRequestPrivate(const DescribeCoipPoolsRequestPrivate &other,
                                   DescribeCoipPoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCoipPoolsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

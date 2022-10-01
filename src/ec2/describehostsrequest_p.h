// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTSREQUEST_P_H
#define QTAWS_DESCRIBEHOSTSREQUEST_P_H

#include "ec2request_p.h"
#include "describehostsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeHostsRequest;

class DescribeHostsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeHostsRequestPrivate(const Ec2Request::Action action,
                                   DescribeHostsRequest * const q);
    DescribeHostsRequestPrivate(const DescribeHostsRequestPrivate &other,
                                   DescribeHostsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHostsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

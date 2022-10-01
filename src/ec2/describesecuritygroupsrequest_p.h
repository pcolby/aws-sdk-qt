// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPSREQUEST_P_H
#define QTAWS_DESCRIBESECURITYGROUPSREQUEST_P_H

#include "ec2request_p.h"
#include "describesecuritygroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupsRequest;

class DescribeSecurityGroupsRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSecurityGroupsRequestPrivate(const Ec2Request::Action action,
                                   DescribeSecurityGroupsRequest * const q);
    DescribeSecurityGroupsRequestPrivate(const DescribeSecurityGroupsRequestPrivate &other,
                                   DescribeSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityGroupsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

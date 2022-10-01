// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPRULESREQUEST_P_H
#define QTAWS_DESCRIBESECURITYGROUPRULESREQUEST_P_H

#include "ec2request_p.h"
#include "describesecuritygrouprulesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupRulesRequest;

class DescribeSecurityGroupRulesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSecurityGroupRulesRequestPrivate(const Ec2Request::Action action,
                                   DescribeSecurityGroupRulesRequest * const q);
    DescribeSecurityGroupRulesRequestPrivate(const DescribeSecurityGroupRulesRequestPrivate &other,
                                   DescribeSecurityGroupRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityGroupRulesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

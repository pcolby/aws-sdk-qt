// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYGROUPREFERENCESREQUEST_P_H
#define QTAWS_DESCRIBESECURITYGROUPREFERENCESREQUEST_P_H

#include "ec2request_p.h"
#include "describesecuritygroupreferencesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSecurityGroupReferencesRequest;

class DescribeSecurityGroupReferencesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSecurityGroupReferencesRequestPrivate(const Ec2Request::Action action,
                                   DescribeSecurityGroupReferencesRequest * const q);
    DescribeSecurityGroupReferencesRequestPrivate(const DescribeSecurityGroupReferencesRequestPrivate &other,
                                   DescribeSecurityGroupReferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSecurityGroupReferencesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPAMSCOPESREQUEST_P_H
#define QTAWS_DESCRIBEIPAMSCOPESREQUEST_P_H

#include "ec2request_p.h"
#include "describeipamscopesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeIpamScopesRequest;

class DescribeIpamScopesRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeIpamScopesRequestPrivate(const Ec2Request::Action action,
                                   DescribeIpamScopesRequest * const q);
    DescribeIpamScopesRequestPrivate(const DescribeIpamScopesRequestPrivate &other,
                                   DescribeIpamScopesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIpamScopesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif

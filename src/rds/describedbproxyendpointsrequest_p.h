// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYENDPOINTSREQUEST_P_H
#define QTAWS_DESCRIBEDBPROXYENDPOINTSREQUEST_P_H

#include "rdsrequest_p.h"
#include "describedbproxyendpointsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyEndpointsRequest;

class DescribeDBProxyEndpointsRequestPrivate : public RdsRequestPrivate {

public:
    DescribeDBProxyEndpointsRequestPrivate(const RdsRequest::Action action,
                                   DescribeDBProxyEndpointsRequest * const q);
    DescribeDBProxyEndpointsRequestPrivate(const DescribeDBProxyEndpointsRequestPrivate &other,
                                   DescribeDBProxyEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDBProxyEndpointsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif

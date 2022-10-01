// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEELASTICLOADBALANCERSREQUEST_P_H
#define QTAWS_DESCRIBEELASTICLOADBALANCERSREQUEST_P_H

#include "opsworksrequest_p.h"
#include "describeelasticloadbalancersrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeElasticLoadBalancersRequest;

class DescribeElasticLoadBalancersRequestPrivate : public OpsWorksRequestPrivate {

public:
    DescribeElasticLoadBalancersRequestPrivate(const OpsWorksRequest::Action action,
                                   DescribeElasticLoadBalancersRequest * const q);
    DescribeElasticLoadBalancersRequestPrivate(const DescribeElasticLoadBalancersRequestPrivate &other,
                                   DescribeElasticLoadBalancersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeElasticLoadBalancersRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

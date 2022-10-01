// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERREQUEST_P_H
#define QTAWS_APPLYSECURITYGROUPSTOLOADBALANCERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "applysecuritygroupstoloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ApplySecurityGroupsToLoadBalancerRequest;

class ApplySecurityGroupsToLoadBalancerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    ApplySecurityGroupsToLoadBalancerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   ApplySecurityGroupsToLoadBalancerRequest * const q);
    ApplySecurityGroupsToLoadBalancerRequestPrivate(const ApplySecurityGroupsToLoadBalancerRequestPrivate &other,
                                   ApplySecurityGroupsToLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ApplySecurityGroupsToLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

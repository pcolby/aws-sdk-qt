// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSECURITYGROUPSREQUEST_P_H
#define QTAWS_SETSECURITYGROUPSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "setsecuritygroupsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSecurityGroupsRequest;

class SetSecurityGroupsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    SetSecurityGroupsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   SetSecurityGroupsRequest * const q);
    SetSecurityGroupsRequestPrivate(const SetSecurityGroupsRequestPrivate &other,
                                   SetSecurityGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSecurityGroupsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

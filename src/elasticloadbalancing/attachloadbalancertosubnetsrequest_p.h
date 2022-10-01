// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTOSUBNETSREQUEST_P_H
#define QTAWS_ATTACHLOADBALANCERTOSUBNETSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "attachloadbalancertosubnetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class AttachLoadBalancerToSubnetsRequest;

class AttachLoadBalancerToSubnetsRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    AttachLoadBalancerToSubnetsRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   AttachLoadBalancerToSubnetsRequest * const q);
    AttachLoadBalancerToSubnetsRequestPrivate(const AttachLoadBalancerToSubnetsRequestPrivate &other,
                                   AttachLoadBalancerToSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancerToSubnetsRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

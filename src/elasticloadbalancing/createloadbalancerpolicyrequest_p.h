// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERPOLICYREQUEST_P_H
#define QTAWS_CREATELOADBALANCERPOLICYREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "createloadbalancerpolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerPolicyRequest;

class CreateLoadBalancerPolicyRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    CreateLoadBalancerPolicyRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   CreateLoadBalancerPolicyRequest * const q);
    CreateLoadBalancerPolicyRequestPrivate(const CreateLoadBalancerPolicyRequestPrivate &other,
                                   CreateLoadBalancerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

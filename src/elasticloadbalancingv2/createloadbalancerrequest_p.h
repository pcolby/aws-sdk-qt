// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERREQUEST_P_H
#define QTAWS_CREATELOADBALANCERREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "createloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateLoadBalancerRequest;

class CreateLoadBalancerRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    CreateLoadBalancerRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   CreateLoadBalancerRequest * const q);
    CreateLoadBalancerRequestPrivate(const CreateLoadBalancerRequestPrivate &other,
                                   CreateLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

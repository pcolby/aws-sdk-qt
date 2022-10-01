// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESREQUEST_P_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "modifyloadbalancerattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyLoadBalancerAttributesRequest;

class ModifyLoadBalancerAttributesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    ModifyLoadBalancerAttributesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   ModifyLoadBalancerAttributesRequest * const q);
    ModifyLoadBalancerAttributesRequestPrivate(const ModifyLoadBalancerAttributesRequestPrivate &other,
                                   ModifyLoadBalancerAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyLoadBalancerAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

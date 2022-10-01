// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESOFLISTENERREQUEST_P_H
#define QTAWS_SETLOADBALANCERPOLICIESOFLISTENERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "setloadbalancerpoliciesoflistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesOfListenerRequest;

class SetLoadBalancerPoliciesOfListenerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    SetLoadBalancerPoliciesOfListenerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   SetLoadBalancerPoliciesOfListenerRequest * const q);
    SetLoadBalancerPoliciesOfListenerRequestPrivate(const SetLoadBalancerPoliciesOfListenerRequestPrivate &other,
                                   SetLoadBalancerPoliciesOfListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetLoadBalancerPoliciesOfListenerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERREQUEST_P_H
#define QTAWS_SETLOADBALANCERPOLICIESFORBACKENDSERVERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "setloadbalancerpoliciesforbackendserverrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class SetLoadBalancerPoliciesForBackendServerRequest;

class SetLoadBalancerPoliciesForBackendServerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    SetLoadBalancerPoliciesForBackendServerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   SetLoadBalancerPoliciesForBackendServerRequest * const q);
    SetLoadBalancerPoliciesForBackendServerRequestPrivate(const SetLoadBalancerPoliciesForBackendServerRequestPrivate &other,
                                   SetLoadBalancerPoliciesForBackendServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetLoadBalancerPoliciesForBackendServerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

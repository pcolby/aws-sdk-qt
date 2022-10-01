// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_P_H
#define QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "disableavailabilityzonesforloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DisableAvailabilityZonesForLoadBalancerRequest;

class DisableAvailabilityZonesForLoadBalancerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DisableAvailabilityZonesForLoadBalancerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DisableAvailabilityZonesForLoadBalancerRequest * const q);
    DisableAvailabilityZonesForLoadBalancerRequestPrivate(const DisableAvailabilityZonesForLoadBalancerRequestPrivate &other,
                                   DisableAvailabilityZonesForLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableAvailabilityZonesForLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

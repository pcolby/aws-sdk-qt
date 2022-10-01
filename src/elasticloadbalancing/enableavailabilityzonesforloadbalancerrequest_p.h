// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_P_H
#define QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "enableavailabilityzonesforloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class EnableAvailabilityZonesForLoadBalancerRequest;

class EnableAvailabilityZonesForLoadBalancerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    EnableAvailabilityZonesForLoadBalancerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   EnableAvailabilityZonesForLoadBalancerRequest * const q);
    EnableAvailabilityZonesForLoadBalancerRequestPrivate(const EnableAvailabilityZonesForLoadBalancerRequestPrivate &other,
                                   EnableAvailabilityZonesForLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAvailabilityZonesForLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

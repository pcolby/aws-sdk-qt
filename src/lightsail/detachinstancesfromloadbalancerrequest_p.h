// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESFROMLOADBALANCERREQUEST_P_H
#define QTAWS_DETACHINSTANCESFROMLOADBALANCERREQUEST_P_H

#include "lightsailrequest_p.h"
#include "detachinstancesfromloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachInstancesFromLoadBalancerRequest;

class DetachInstancesFromLoadBalancerRequestPrivate : public LightsailRequestPrivate {

public:
    DetachInstancesFromLoadBalancerRequestPrivate(const LightsailRequest::Action action,
                                   DetachInstancesFromLoadBalancerRequest * const q);
    DetachInstancesFromLoadBalancerRequestPrivate(const DetachInstancesFromLoadBalancerRequestPrivate &other,
                                   DetachInstancesFromLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachInstancesFromLoadBalancerRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

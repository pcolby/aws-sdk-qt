// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHELASTICLOADBALANCERREQUEST_P_H
#define QTAWS_DETACHELASTICLOADBALANCERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "detachelasticloadbalancerrequest.h"

namespace QtAws {
namespace OpsWorks {

class DetachElasticLoadBalancerRequest;

class DetachElasticLoadBalancerRequestPrivate : public OpsWorksRequestPrivate {

public:
    DetachElasticLoadBalancerRequestPrivate(const OpsWorksRequest::Action action,
                                   DetachElasticLoadBalancerRequest * const q);
    DetachElasticLoadBalancerRequestPrivate(const DetachElasticLoadBalancerRequestPrivate &other,
                                   DetachElasticLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachElasticLoadBalancerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

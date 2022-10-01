// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERMETRICDATAREQUEST_P_H
#define QTAWS_GETLOADBALANCERMETRICDATAREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getloadbalancermetricdatarequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerMetricDataRequest;

class GetLoadBalancerMetricDataRequestPrivate : public LightsailRequestPrivate {

public:
    GetLoadBalancerMetricDataRequestPrivate(const LightsailRequest::Action action,
                                   GetLoadBalancerMetricDataRequest * const q);
    GetLoadBalancerMetricDataRequestPrivate(const GetLoadBalancerMetricDataRequestPrivate &other,
                                   GetLoadBalancerMetricDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancerMetricDataRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

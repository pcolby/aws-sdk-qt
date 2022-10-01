// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERTLSPOLICIESREQUEST_P_H
#define QTAWS_GETLOADBALANCERTLSPOLICIESREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getloadbalancertlspoliciesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerTlsPoliciesRequest;

class GetLoadBalancerTlsPoliciesRequestPrivate : public LightsailRequestPrivate {

public:
    GetLoadBalancerTlsPoliciesRequestPrivate(const LightsailRequest::Action action,
                                   GetLoadBalancerTlsPoliciesRequest * const q);
    GetLoadBalancerTlsPoliciesRequestPrivate(const GetLoadBalancerTlsPoliciesRequestPrivate &other,
                                   GetLoadBalancerTlsPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancerTlsPoliciesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

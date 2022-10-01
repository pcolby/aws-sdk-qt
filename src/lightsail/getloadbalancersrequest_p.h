// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERSREQUEST_P_H
#define QTAWS_GETLOADBALANCERSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getloadbalancersrequest.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancersRequest;

class GetLoadBalancersRequestPrivate : public LightsailRequestPrivate {

public:
    GetLoadBalancersRequestPrivate(const LightsailRequest::Action action,
                                   GetLoadBalancersRequest * const q);
    GetLoadBalancersRequestPrivate(const GetLoadBalancersRequestPrivate &other,
                                   GetLoadBalancersRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancersRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

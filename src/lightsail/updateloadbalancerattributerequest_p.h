// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOADBALANCERATTRIBUTEREQUEST_P_H
#define QTAWS_UPDATELOADBALANCERATTRIBUTEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "updateloadbalancerattributerequest.h"

namespace QtAws {
namespace Lightsail {

class UpdateLoadBalancerAttributeRequest;

class UpdateLoadBalancerAttributeRequestPrivate : public LightsailRequestPrivate {

public:
    UpdateLoadBalancerAttributeRequestPrivate(const LightsailRequest::Action action,
                                   UpdateLoadBalancerAttributeRequest * const q);
    UpdateLoadBalancerAttributeRequestPrivate(const UpdateLoadBalancerAttributeRequestPrivate &other,
                                   UpdateLoadBalancerAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateLoadBalancerAttributeRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERREQUEST_P_H
#define QTAWS_CREATELOADBALANCERREQUEST_P_H

#include "lightsailrequest_p.h"
#include "createloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateLoadBalancerRequest;

class CreateLoadBalancerRequestPrivate : public LightsailRequestPrivate {

public:
    CreateLoadBalancerRequestPrivate(const LightsailRequest::Action action,
                                   CreateLoadBalancerRequest * const q);
    CreateLoadBalancerRequestPrivate(const CreateLoadBalancerRequestPrivate &other,
                                   CreateLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

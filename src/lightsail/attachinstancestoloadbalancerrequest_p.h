// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESTOLOADBALANCERREQUEST_P_H
#define QTAWS_ATTACHINSTANCESTOLOADBALANCERREQUEST_P_H

#include "lightsailrequest_p.h"
#include "attachinstancestoloadbalancerrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachInstancesToLoadBalancerRequest;

class AttachInstancesToLoadBalancerRequestPrivate : public LightsailRequestPrivate {

public:
    AttachInstancesToLoadBalancerRequestPrivate(const LightsailRequest::Action action,
                                   AttachInstancesToLoadBalancerRequest * const q);
    AttachInstancesToLoadBalancerRequestPrivate(const AttachInstancesToLoadBalancerRequestPrivate &other,
                                   AttachInstancesToLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachInstancesToLoadBalancerRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif

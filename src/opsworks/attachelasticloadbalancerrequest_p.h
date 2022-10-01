// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHELASTICLOADBALANCERREQUEST_P_H
#define QTAWS_ATTACHELASTICLOADBALANCERREQUEST_P_H

#include "opsworksrequest_p.h"
#include "attachelasticloadbalancerrequest.h"

namespace QtAws {
namespace OpsWorks {

class AttachElasticLoadBalancerRequest;

class AttachElasticLoadBalancerRequestPrivate : public OpsWorksRequestPrivate {

public:
    AttachElasticLoadBalancerRequestPrivate(const OpsWorksRequest::Action action,
                                   AttachElasticLoadBalancerRequest * const q);
    AttachElasticLoadBalancerRequestPrivate(const AttachElasticLoadBalancerRequestPrivate &other,
                                   AttachElasticLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachElasticLoadBalancerRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif

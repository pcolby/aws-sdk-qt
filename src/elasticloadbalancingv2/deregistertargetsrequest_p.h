// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTARGETSREQUEST_P_H
#define QTAWS_DEREGISTERTARGETSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "deregistertargetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeregisterTargetsRequest;

class DeregisterTargetsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DeregisterTargetsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DeregisterTargetsRequest * const q);
    DeregisterTargetsRequestPrivate(const DeregisterTargetsRequestPrivate &other,
                                   DeregisterTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterTargetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

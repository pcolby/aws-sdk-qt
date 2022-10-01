// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETRULEPRIORITIESREQUEST_P_H
#define QTAWS_SETRULEPRIORITIESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "setruleprioritiesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetRulePrioritiesRequest;

class SetRulePrioritiesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    SetRulePrioritiesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   SetRulePrioritiesRequest * const q);
    SetRulePrioritiesRequestPrivate(const SetRulePrioritiesRequestPrivate &other,
                                   SetRulePrioritiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetRulePrioritiesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

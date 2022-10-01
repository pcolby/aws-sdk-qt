// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERULEREQUEST_P_H
#define QTAWS_CREATERULEREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "createrulerequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateRuleRequest;

class CreateRuleRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    CreateRuleRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   CreateRuleRequest * const q);
    CreateRuleRequestPrivate(const CreateRuleRequestPrivate &other,
                                   CreateRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRuleRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

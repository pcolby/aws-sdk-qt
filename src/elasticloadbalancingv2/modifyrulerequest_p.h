// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYRULEREQUEST_P_H
#define QTAWS_MODIFYRULEREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "modifyrulerequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyRuleRequest;

class ModifyRuleRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    ModifyRuleRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   ModifyRuleRequest * const q);
    ModifyRuleRequestPrivate(const ModifyRuleRequestPrivate &other,
                                   ModifyRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyRuleRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

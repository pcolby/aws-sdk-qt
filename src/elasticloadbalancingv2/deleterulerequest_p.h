// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEREQUEST_P_H
#define QTAWS_DELETERULEREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "deleterulerequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteRuleRequest;

class DeleteRuleRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DeleteRuleRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DeleteRuleRequest * const q);
    DeleteRuleRequestPrivate(const DeleteRuleRequestPrivate &other,
                                   DeleteRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

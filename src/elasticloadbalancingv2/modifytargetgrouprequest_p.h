// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPREQUEST_P_H
#define QTAWS_MODIFYTARGETGROUPREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "modifytargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupRequest;

class ModifyTargetGroupRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    ModifyTargetGroupRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   ModifyTargetGroupRequest * const q);
    ModifyTargetGroupRequestPrivate(const ModifyTargetGroupRequestPrivate &other,
                                   ModifyTargetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTargetGroupRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

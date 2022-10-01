// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPATTRIBUTESREQUEST_P_H
#define QTAWS_MODIFYTARGETGROUPATTRIBUTESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "modifytargetgroupattributesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupAttributesRequest;

class ModifyTargetGroupAttributesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    ModifyTargetGroupAttributesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   ModifyTargetGroupAttributesRequest * const q);
    ModifyTargetGroupAttributesRequestPrivate(const ModifyTargetGroupAttributesRequestPrivate &other,
                                   ModifyTargetGroupAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyTargetGroupAttributesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

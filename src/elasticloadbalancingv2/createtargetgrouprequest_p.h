// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETARGETGROUPREQUEST_P_H
#define QTAWS_CREATETARGETGROUPREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "createtargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateTargetGroupRequest;

class CreateTargetGroupRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    CreateTargetGroupRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   CreateTargetGroupRequest * const q);
    CreateTargetGroupRequestPrivate(const CreateTargetGroupRequestPrivate &other,
                                   CreateTargetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTargetGroupRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

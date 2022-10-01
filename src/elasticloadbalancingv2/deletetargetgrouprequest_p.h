// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETGROUPREQUEST_P_H
#define QTAWS_DELETETARGETGROUPREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "deletetargetgrouprequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteTargetGroupRequest;

class DeleteTargetGroupRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DeleteTargetGroupRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DeleteTargetGroupRequest * const q);
    DeleteTargetGroupRequestPrivate(const DeleteTargetGroupRequestPrivate &other,
                                   DeleteTargetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTargetGroupRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

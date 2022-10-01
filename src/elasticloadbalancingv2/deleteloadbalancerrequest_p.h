// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERREQUEST_P_H
#define QTAWS_DELETELOADBALANCERREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "deleteloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteLoadBalancerRequest;

class DeleteLoadBalancerRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DeleteLoadBalancerRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DeleteLoadBalancerRequest * const q);
    DeleteLoadBalancerRequestPrivate(const DeleteLoadBalancerRequestPrivate &other,
                                   DeleteLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

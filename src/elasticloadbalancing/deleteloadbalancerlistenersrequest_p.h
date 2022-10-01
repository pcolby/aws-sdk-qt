// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERLISTENERSREQUEST_P_H
#define QTAWS_DELETELOADBALANCERLISTENERSREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "deleteloadbalancerlistenersrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerListenersRequest;

class DeleteLoadBalancerListenersRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DeleteLoadBalancerListenersRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DeleteLoadBalancerListenersRequest * const q);
    DeleteLoadBalancerListenersRequestPrivate(const DeleteLoadBalancerListenersRequestPrivate &other,
                                   DeleteLoadBalancerListenersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerListenersRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

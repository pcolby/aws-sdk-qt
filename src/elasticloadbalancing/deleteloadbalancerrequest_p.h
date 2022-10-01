// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERREQUEST_P_H
#define QTAWS_DELETELOADBALANCERREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "deleteloadbalancerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerRequest;

class DeleteLoadBalancerRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DeleteLoadBalancerRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DeleteLoadBalancerRequest * const q);
    DeleteLoadBalancerRequestPrivate(const DeleteLoadBalancerRequestPrivate &other,
                                   DeleteLoadBalancerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

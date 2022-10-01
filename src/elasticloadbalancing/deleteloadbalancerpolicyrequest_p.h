// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERPOLICYREQUEST_P_H
#define QTAWS_DELETELOADBALANCERPOLICYREQUEST_P_H

#include "elasticloadbalancingrequest_p.h"
#include "deleteloadbalancerpolicyrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerPolicyRequest;

class DeleteLoadBalancerPolicyRequestPrivate : public ElasticLoadBalancingRequestPrivate {

public:
    DeleteLoadBalancerPolicyRequestPrivate(const ElasticLoadBalancingRequest::Action action,
                                   DeleteLoadBalancerPolicyRequest * const q);
    DeleteLoadBalancerPolicyRequestPrivate(const DeleteLoadBalancerPolicyRequestPrivate &other,
                                   DeleteLoadBalancerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerPolicyRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

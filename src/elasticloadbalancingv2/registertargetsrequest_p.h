// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTARGETSREQUEST_P_H
#define QTAWS_REGISTERTARGETSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "registertargetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RegisterTargetsRequest;

class RegisterTargetsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    RegisterTargetsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   RegisterTargetsRequest * const q);
    RegisterTargetsRequestPrivate(const RegisterTargetsRequestPrivate &other,
                                   RegisterTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterTargetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

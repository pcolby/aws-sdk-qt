// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBNETSREQUEST_P_H
#define QTAWS_SETSUBNETSREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "setsubnetsrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetSubnetsRequest;

class SetSubnetsRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    SetSubnetsRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   SetSubnetsRequest * const q);
    SetSubnetsRequestPrivate(const SetSubnetsRequestPrivate &other,
                                   SetSubnetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSubnetsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

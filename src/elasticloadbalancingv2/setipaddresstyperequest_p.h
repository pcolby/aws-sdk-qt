// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPEREQUEST_P_H
#define QTAWS_SETIPADDRESSTYPEREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "setipaddresstyperequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class SetIpAddressTypeRequest;

class SetIpAddressTypeRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    SetIpAddressTypeRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   SetIpAddressTypeRequest * const q);
    SetIpAddressTypeRequestPrivate(const SetIpAddressTypeRequestPrivate &other,
                                   SetIpAddressTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetIpAddressTypeRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

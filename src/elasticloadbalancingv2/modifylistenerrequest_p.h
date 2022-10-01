// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLISTENERREQUEST_P_H
#define QTAWS_MODIFYLISTENERREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "modifylistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyListenerRequest;

class ModifyListenerRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    ModifyListenerRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   ModifyListenerRequest * const q);
    ModifyListenerRequestPrivate(const ModifyListenerRequestPrivate &other,
                                   ModifyListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyListenerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

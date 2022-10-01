// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELISTENERREQUEST_P_H
#define QTAWS_CREATELISTENERREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "createlistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateListenerRequest;

class CreateListenerRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    CreateListenerRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   CreateListenerRequest * const q);
    CreateListenerRequestPrivate(const CreateListenerRequestPrivate &other,
                                   CreateListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateListenerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

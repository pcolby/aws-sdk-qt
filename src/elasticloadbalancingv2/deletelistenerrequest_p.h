// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELISTENERREQUEST_P_H
#define QTAWS_DELETELISTENERREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "deletelistenerrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteListenerRequest;

class DeleteListenerRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DeleteListenerRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DeleteListenerRequest * const q);
    DeleteListenerRequestPrivate(const DeleteListenerRequestPrivate &other,
                                   DeleteListenerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteListenerRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

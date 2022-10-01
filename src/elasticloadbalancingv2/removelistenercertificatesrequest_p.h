// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELISTENERCERTIFICATESREQUEST_P_H
#define QTAWS_REMOVELISTENERCERTIFICATESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "removelistenercertificatesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class RemoveListenerCertificatesRequest;

class RemoveListenerCertificatesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    RemoveListenerCertificatesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   RemoveListenerCertificatesRequest * const q);
    RemoveListenerCertificatesRequestPrivate(const RemoveListenerCertificatesRequestPrivate &other,
                                   RemoveListenerCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveListenerCertificatesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

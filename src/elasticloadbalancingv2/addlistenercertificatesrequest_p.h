// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLISTENERCERTIFICATESREQUEST_P_H
#define QTAWS_ADDLISTENERCERTIFICATESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "addlistenercertificatesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class AddListenerCertificatesRequest;

class AddListenerCertificatesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    AddListenerCertificatesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   AddListenerCertificatesRequest * const q);
    AddListenerCertificatesRequestPrivate(const AddListenerCertificatesRequestPrivate &other,
                                   AddListenerCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddListenerCertificatesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

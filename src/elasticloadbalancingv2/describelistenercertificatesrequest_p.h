// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELISTENERCERTIFICATESREQUEST_P_H
#define QTAWS_DESCRIBELISTENERCERTIFICATESREQUEST_P_H

#include "elasticloadbalancingv2request_p.h"
#include "describelistenercertificatesrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeListenerCertificatesRequest;

class DescribeListenerCertificatesRequestPrivate : public ElasticLoadBalancingv2RequestPrivate {

public:
    DescribeListenerCertificatesRequestPrivate(const ElasticLoadBalancingv2Request::Action action,
                                   DescribeListenerCertificatesRequest * const q);
    DescribeListenerCertificatesRequestPrivate(const DescribeListenerCertificatesRequestPrivate &other,
                                   DescribeListenerCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeListenerCertificatesRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

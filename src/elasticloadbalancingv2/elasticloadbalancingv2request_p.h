// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGV2REQUEST_P_H
#define QTAWS_ELASTICLOADBALANCINGV2REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2Request;

class ElasticLoadBalancingv2RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElasticLoadBalancingv2Request::Action action; ///< ElasticLoadBalancingv2 action to be performed.
    QString apiVersion;        ///< ElasticLoadBalancingv2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticLoadBalancingv2 request (query string) parameters. @todo?

    ElasticLoadBalancingv2RequestPrivate(const ElasticLoadBalancingv2Request::Action action, ElasticLoadBalancingv2Request * const q);
    ElasticLoadBalancingv2RequestPrivate(const ElasticLoadBalancingv2RequestPrivate &other, ElasticLoadBalancingv2Request * const q);

    static QString toString(const ElasticLoadBalancingv2Request::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticLoadBalancingv2Request)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGREQUEST_P_H
#define QTAWS_ELASTICLOADBALANCINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elasticloadbalancingrequest.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ElasticLoadBalancingRequest;

class ElasticLoadBalancingRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElasticLoadBalancingRequest::Action action; ///< ElasticLoadBalancing action to be performed.
    QString apiVersion;        ///< ElasticLoadBalancing API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticLoadBalancing request (query string) parameters. @todo?

    ElasticLoadBalancingRequestPrivate(const ElasticLoadBalancingRequest::Action action, ElasticLoadBalancingRequest * const q);
    ElasticLoadBalancingRequestPrivate(const ElasticLoadBalancingRequestPrivate &other, ElasticLoadBalancingRequest * const q);

    static QString toString(const ElasticLoadBalancingRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticLoadBalancingRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

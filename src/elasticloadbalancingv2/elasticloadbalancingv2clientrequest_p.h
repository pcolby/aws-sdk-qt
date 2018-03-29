/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICLOADBALANCINGV2CLIENTREQUEST_P_H
#define QTAWS_ELASTICLOADBALANCINGV2CLIENTREQUEST_P_H

#include "elasticloadbalancingv2_p.h"
#include "elasticloadbalancingv2clientrequest.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2ClientRequest;

class QTAWS_EXPORT ElasticLoadBalancingv2ClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ElasticLoadBalancingv2ClientRequest::Action action; ///< ElasticLoadBalancingv2 action to be performed.
    QString apiVersion;        ///< ElasticLoadBalancingv2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticLoadBalancingv2 request (query string) parameters. @todo?

    ElasticLoadBalancingv2ClientRequestPrivate(const ElasticLoadBalancingv2ClientRequest::Action action, ElasticLoadBalancingv2ClientRequest * const q);
    ElasticLoadBalancingv2ClientRequestPrivate(const ElasticLoadBalancingv2ClientRequestPrivate &other, ElasticLoadBalancingv2ClientRequest * const q);

    static QString toString(const ElasticLoadBalancingv2ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticLoadBalancingv2ClientRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

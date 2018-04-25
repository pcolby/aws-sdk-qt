/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICLOADBALANCINGV2REQUEST_H
#define QTAWS_ELASTICLOADBALANCINGV2REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2RequestPrivate;

class QTAWS_EXPORT ElasticLoadBalancingv2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElasticLoadBalancingv2.
    enum Action {
        AddListenerCertificatesAction,
        AddTagsAction,
        CreateListenerAction,
        CreateLoadBalancerAction,
        CreateRuleAction,
        CreateTargetGroupAction,
        DeleteListenerAction,
        DeleteLoadBalancerAction,
        DeleteRuleAction,
        DeleteTargetGroupAction,
        DeregisterTargetsAction,
        DescribeAccountLimitsAction,
        DescribeListenerCertificatesAction,
        DescribeListenersAction,
        DescribeLoadBalancerAttributesAction,
        DescribeLoadBalancersAction,
        DescribeRulesAction,
        DescribeSSLPoliciesAction,
        DescribeTagsAction,
        DescribeTargetGroupAttributesAction,
        DescribeTargetGroupsAction,
        DescribeTargetHealthAction,
        ModifyListenerAction,
        ModifyLoadBalancerAttributesAction,
        ModifyRuleAction,
        ModifyTargetGroupAction,
        ModifyTargetGroupAttributesAction,
        RegisterTargetsAction,
        RemoveListenerCertificatesAction,
        RemoveTagsAction,
        SetIpAddressTypeAction,
        SetRulePrioritiesAction,
        SetSecurityGroupsAction,
        SetSubnetsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticLoadBalancingv2Request(const Action action);
    ElasticLoadBalancingv2Request(const ElasticLoadBalancingv2Request &other);
    ElasticLoadBalancingv2Request &operator=(const ElasticLoadBalancingv2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticLoadBalancingv2Request &other) const;


protected:
    /// @cond internal
    ElasticLoadBalancingv2Request(ElasticLoadBalancingv2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingv2Request)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

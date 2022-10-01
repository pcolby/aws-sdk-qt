// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGV2REQUEST_H
#define QTAWS_ELASTICLOADBALANCINGV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticloadbalancingv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2RequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ElasticLoadBalancingv2Request : public QtAws::Core::AwsAbstractRequest {

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
    explicit ElasticLoadBalancingv2Request(ElasticLoadBalancingv2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingv2Request)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif

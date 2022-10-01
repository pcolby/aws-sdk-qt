// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGREQUEST_H
#define QTAWS_ELASTICLOADBALANCINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticloadbalancingglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElasticLoadBalancing {

class ElasticLoadBalancingRequestPrivate;

class QTAWSELASTICLOADBALANCING_EXPORT ElasticLoadBalancingRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElasticLoadBalancing.
    enum Action {
        AddTagsAction,
        ApplySecurityGroupsToLoadBalancerAction,
        AttachLoadBalancerToSubnetsAction,
        ConfigureHealthCheckAction,
        CreateAppCookieStickinessPolicyAction,
        CreateLBCookieStickinessPolicyAction,
        CreateLoadBalancerAction,
        CreateLoadBalancerListenersAction,
        CreateLoadBalancerPolicyAction,
        DeleteLoadBalancerAction,
        DeleteLoadBalancerListenersAction,
        DeleteLoadBalancerPolicyAction,
        DeregisterInstancesFromLoadBalancerAction,
        DescribeAccountLimitsAction,
        DescribeInstanceHealthAction,
        DescribeLoadBalancerAttributesAction,
        DescribeLoadBalancerPoliciesAction,
        DescribeLoadBalancerPolicyTypesAction,
        DescribeLoadBalancersAction,
        DescribeTagsAction,
        DetachLoadBalancerFromSubnetsAction,
        DisableAvailabilityZonesForLoadBalancerAction,
        EnableAvailabilityZonesForLoadBalancerAction,
        ModifyLoadBalancerAttributesAction,
        RegisterInstancesWithLoadBalancerAction,
        RemoveTagsAction,
        SetLoadBalancerListenerSSLCertificateAction,
        SetLoadBalancerPoliciesForBackendServerAction,
        SetLoadBalancerPoliciesOfListenerAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElasticLoadBalancingRequest(const Action action);
    ElasticLoadBalancingRequest(const ElasticLoadBalancingRequest &other);
    ElasticLoadBalancingRequest &operator=(const ElasticLoadBalancingRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElasticLoadBalancingRequest &other) const;


protected:
    /// @cond internal
    explicit ElasticLoadBalancingRequest(ElasticLoadBalancingRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingRequest)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif

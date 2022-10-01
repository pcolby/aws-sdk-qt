// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RESOLVERREQUEST_H
#define QTAWS_ROUTE53RESOLVERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsroute53resolverglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53Resolver {

class Route53ResolverRequestPrivate;

class QTAWSROUTE53RESOLVER_EXPORT Route53ResolverRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53Resolver.
    enum Action {
        AssociateFirewallRuleGroupAction,
        AssociateResolverEndpointIpAddressAction,
        AssociateResolverQueryLogConfigAction,
        AssociateResolverRuleAction,
        CreateFirewallDomainListAction,
        CreateFirewallRuleAction,
        CreateFirewallRuleGroupAction,
        CreateResolverEndpointAction,
        CreateResolverQueryLogConfigAction,
        CreateResolverRuleAction,
        DeleteFirewallDomainListAction,
        DeleteFirewallRuleAction,
        DeleteFirewallRuleGroupAction,
        DeleteResolverEndpointAction,
        DeleteResolverQueryLogConfigAction,
        DeleteResolverRuleAction,
        DisassociateFirewallRuleGroupAction,
        DisassociateResolverEndpointIpAddressAction,
        DisassociateResolverQueryLogConfigAction,
        DisassociateResolverRuleAction,
        GetFirewallConfigAction,
        GetFirewallDomainListAction,
        GetFirewallRuleGroupAction,
        GetFirewallRuleGroupAssociationAction,
        GetFirewallRuleGroupPolicyAction,
        GetResolverConfigAction,
        GetResolverDnssecConfigAction,
        GetResolverEndpointAction,
        GetResolverQueryLogConfigAction,
        GetResolverQueryLogConfigAssociationAction,
        GetResolverQueryLogConfigPolicyAction,
        GetResolverRuleAction,
        GetResolverRuleAssociationAction,
        GetResolverRulePolicyAction,
        ImportFirewallDomainsAction,
        ListFirewallConfigsAction,
        ListFirewallDomainListsAction,
        ListFirewallDomainsAction,
        ListFirewallRuleGroupAssociationsAction,
        ListFirewallRuleGroupsAction,
        ListFirewallRulesAction,
        ListResolverConfigsAction,
        ListResolverDnssecConfigsAction,
        ListResolverEndpointIpAddressesAction,
        ListResolverEndpointsAction,
        ListResolverQueryLogConfigAssociationsAction,
        ListResolverQueryLogConfigsAction,
        ListResolverRuleAssociationsAction,
        ListResolverRulesAction,
        ListTagsForResourceAction,
        PutFirewallRuleGroupPolicyAction,
        PutResolverQueryLogConfigPolicyAction,
        PutResolverRulePolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateFirewallConfigAction,
        UpdateFirewallDomainsAction,
        UpdateFirewallRuleAction,
        UpdateFirewallRuleGroupAssociationAction,
        UpdateResolverConfigAction,
        UpdateResolverDnssecConfigAction,
        UpdateResolverEndpointAction,
        UpdateResolverRuleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53ResolverRequest(const Action action);
    Route53ResolverRequest(const Route53ResolverRequest &other);
    Route53ResolverRequest &operator=(const Route53ResolverRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53ResolverRequest &other) const;


protected:
    /// @cond internal
    explicit Route53ResolverRequest(Route53ResolverRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53ResolverRequest)

};

} // namespace Route53Resolver
} // namespace QtAws

#endif

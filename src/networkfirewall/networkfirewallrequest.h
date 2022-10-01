// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKFIREWALLREQUEST_H
#define QTAWS_NETWORKFIREWALLREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsnetworkfirewallglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace NetworkFirewall {

class NetworkFirewallRequestPrivate;

class QTAWSNETWORKFIREWALL_EXPORT NetworkFirewallRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by NetworkFirewall.
    enum Action {
        AssociateFirewallPolicyAction,
        AssociateSubnetsAction,
        CreateFirewallAction,
        CreateFirewallPolicyAction,
        CreateRuleGroupAction,
        DeleteFirewallAction,
        DeleteFirewallPolicyAction,
        DeleteResourcePolicyAction,
        DeleteRuleGroupAction,
        DescribeFirewallAction,
        DescribeFirewallPolicyAction,
        DescribeLoggingConfigurationAction,
        DescribeResourcePolicyAction,
        DescribeRuleGroupAction,
        DescribeRuleGroupMetadataAction,
        DisassociateSubnetsAction,
        ListFirewallPoliciesAction,
        ListFirewallsAction,
        ListRuleGroupsAction,
        ListTagsForResourceAction,
        PutResourcePolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateFirewallDeleteProtectionAction,
        UpdateFirewallDescriptionAction,
        UpdateFirewallEncryptionConfigurationAction,
        UpdateFirewallPolicyAction,
        UpdateFirewallPolicyChangeProtectionAction,
        UpdateLoggingConfigurationAction,
        UpdateRuleGroupAction,
        UpdateSubnetChangeProtectionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    NetworkFirewallRequest(const Action action);
    NetworkFirewallRequest(const NetworkFirewallRequest &other);
    NetworkFirewallRequest &operator=(const NetworkFirewallRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const NetworkFirewallRequest &other) const;


protected:
    /// @cond internal
    explicit NetworkFirewallRequest(NetworkFirewallRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NetworkFirewallRequest)

};

} // namespace NetworkFirewall
} // namespace QtAws

#endif

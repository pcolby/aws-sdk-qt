/*
    Copyright 2013-2021 Paul Colby

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
    NetworkFirewallRequest(NetworkFirewallRequestPrivate * const d);
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

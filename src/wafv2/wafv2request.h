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

#ifndef QTAWS_WAFV2REQUEST_H
#define QTAWS_WAFV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawswafv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WAFV2 {

class Wafv2RequestPrivate;

class QTAWSWAFV2_EXPORT Wafv2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WAFV2.
    enum Action {
        AssociateWebACLAction,
        CheckCapacityAction,
        CreateIPSetAction,
        CreateRegexPatternSetAction,
        CreateRuleGroupAction,
        CreateWebACLAction,
        DeleteFirewallManagerRuleGroupsAction,
        DeleteIPSetAction,
        DeleteLoggingConfigurationAction,
        DeletePermissionPolicyAction,
        DeleteRegexPatternSetAction,
        DeleteRuleGroupAction,
        DeleteWebACLAction,
        DescribeManagedRuleGroupAction,
        DisassociateWebACLAction,
        GetIPSetAction,
        GetLoggingConfigurationAction,
        GetPermissionPolicyAction,
        GetRateBasedStatementManagedKeysAction,
        GetRegexPatternSetAction,
        GetRuleGroupAction,
        GetSampledRequestsAction,
        GetWebACLAction,
        GetWebACLForResourceAction,
        ListAvailableManagedRuleGroupsAction,
        ListIPSetsAction,
        ListLoggingConfigurationsAction,
        ListRegexPatternSetsAction,
        ListResourcesForWebACLAction,
        ListRuleGroupsAction,
        ListTagsForResourceAction,
        ListWebACLsAction,
        PutLoggingConfigurationAction,
        PutPermissionPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateIPSetAction,
        UpdateRegexPatternSetAction,
        UpdateRuleGroupAction,
        UpdateWebACLAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Wafv2Request(const Action action);
    Wafv2Request(const Wafv2Request &other);
    Wafv2Request &operator=(const Wafv2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Wafv2Request &other) const;


protected:
    /// @cond internal
    explicit Wafv2Request(Wafv2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Wafv2Request)

};

} // namespace WAFV2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFV2REQUEST_H
#define QTAWS_WAFV2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawswafv2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Wafv2 {

class Wafv2RequestPrivate;

class QTAWSWAFV2_EXPORT Wafv2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Wafv2.
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
        GenerateMobileSdkReleaseUrlAction,
        GetIPSetAction,
        GetLoggingConfigurationAction,
        GetManagedRuleSetAction,
        GetMobileSdkReleaseAction,
        GetPermissionPolicyAction,
        GetRateBasedStatementManagedKeysAction,
        GetRegexPatternSetAction,
        GetRuleGroupAction,
        GetSampledRequestsAction,
        GetWebACLAction,
        GetWebACLForResourceAction,
        ListAvailableManagedRuleGroupVersionsAction,
        ListAvailableManagedRuleGroupsAction,
        ListIPSetsAction,
        ListLoggingConfigurationsAction,
        ListManagedRuleSetsAction,
        ListMobileSdkReleasesAction,
        ListRegexPatternSetsAction,
        ListResourcesForWebACLAction,
        ListRuleGroupsAction,
        ListTagsForResourceAction,
        ListWebACLsAction,
        PutLoggingConfigurationAction,
        PutManagedRuleSetVersionsAction,
        PutPermissionPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateIPSetAction,
        UpdateManagedRuleSetVersionExpiryDateAction,
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

} // namespace Wafv2
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFREQUEST_H
#define QTAWS_WAFREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawswafglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Waf {

class WafRequestPrivate;

class QTAWSWAF_EXPORT WafRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Waf.
    enum Action {
        CreateByteMatchSetAction,
        CreateGeoMatchSetAction,
        CreateIPSetAction,
        CreateRateBasedRuleAction,
        CreateRegexMatchSetAction,
        CreateRegexPatternSetAction,
        CreateRuleAction,
        CreateRuleGroupAction,
        CreateSizeConstraintSetAction,
        CreateSqlInjectionMatchSetAction,
        CreateWebACLAction,
        CreateWebACLMigrationStackAction,
        CreateXssMatchSetAction,
        DeleteByteMatchSetAction,
        DeleteGeoMatchSetAction,
        DeleteIPSetAction,
        DeleteLoggingConfigurationAction,
        DeletePermissionPolicyAction,
        DeleteRateBasedRuleAction,
        DeleteRegexMatchSetAction,
        DeleteRegexPatternSetAction,
        DeleteRuleAction,
        DeleteRuleGroupAction,
        DeleteSizeConstraintSetAction,
        DeleteSqlInjectionMatchSetAction,
        DeleteWebACLAction,
        DeleteXssMatchSetAction,
        GetByteMatchSetAction,
        GetChangeTokenAction,
        GetChangeTokenStatusAction,
        GetGeoMatchSetAction,
        GetIPSetAction,
        GetLoggingConfigurationAction,
        GetPermissionPolicyAction,
        GetRateBasedRuleAction,
        GetRateBasedRuleManagedKeysAction,
        GetRegexMatchSetAction,
        GetRegexPatternSetAction,
        GetRuleAction,
        GetRuleGroupAction,
        GetSampledRequestsAction,
        GetSizeConstraintSetAction,
        GetSqlInjectionMatchSetAction,
        GetWebACLAction,
        GetXssMatchSetAction,
        ListActivatedRulesInRuleGroupAction,
        ListByteMatchSetsAction,
        ListGeoMatchSetsAction,
        ListIPSetsAction,
        ListLoggingConfigurationsAction,
        ListRateBasedRulesAction,
        ListRegexMatchSetsAction,
        ListRegexPatternSetsAction,
        ListRuleGroupsAction,
        ListRulesAction,
        ListSizeConstraintSetsAction,
        ListSqlInjectionMatchSetsAction,
        ListSubscribedRuleGroupsAction,
        ListTagsForResourceAction,
        ListWebACLsAction,
        ListXssMatchSetsAction,
        PutLoggingConfigurationAction,
        PutPermissionPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateByteMatchSetAction,
        UpdateGeoMatchSetAction,
        UpdateIPSetAction,
        UpdateRateBasedRuleAction,
        UpdateRegexMatchSetAction,
        UpdateRegexPatternSetAction,
        UpdateRuleAction,
        UpdateRuleGroupAction,
        UpdateSizeConstraintSetAction,
        UpdateSqlInjectionMatchSetAction,
        UpdateWebACLAction,
        UpdateXssMatchSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WafRequest(const Action action);
    WafRequest(const WafRequest &other);
    WafRequest &operator=(const WafRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WafRequest &other) const;


protected:
    /// @cond internal
    explicit WafRequest(WafRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WafRequest)

};

} // namespace Waf
} // namespace QtAws

#endif

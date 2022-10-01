// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFREGIONALREQUEST_H
#define QTAWS_WAFREGIONALREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawswafregionalglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WafRegional {

class WafRegionalRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT WafRegionalRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WafRegional.
    enum Action {
        AssociateWebACLAction,
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
        DisassociateWebACLAction,
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
        GetWebACLForResourceAction,
        GetXssMatchSetAction,
        ListActivatedRulesInRuleGroupAction,
        ListByteMatchSetsAction,
        ListGeoMatchSetsAction,
        ListIPSetsAction,
        ListLoggingConfigurationsAction,
        ListRateBasedRulesAction,
        ListRegexMatchSetsAction,
        ListRegexPatternSetsAction,
        ListResourcesForWebACLAction,
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

    WafRegionalRequest(const Action action);
    WafRegionalRequest(const WafRegionalRequest &other);
    WafRegionalRequest &operator=(const WafRegionalRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WafRegionalRequest &other) const;


protected:
    /// @cond internal
    explicit WafRegionalRequest(WafRegionalRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WafRegionalRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif

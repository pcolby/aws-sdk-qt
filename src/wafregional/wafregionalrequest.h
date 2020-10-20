/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_WAFREGIONALREQUEST_H
#define QTAWS_WAFREGIONALREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WAFRegional {

class WAFRegionalRequestPrivate;

class QTAWS_EXPORT WAFRegionalRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WAFRegional.
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

    WAFRegionalRequest(const Action action);
    WAFRegionalRequest(const WAFRegionalRequest &other);
    WAFRegionalRequest &operator=(const WAFRegionalRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WAFRegionalRequest &other) const;


protected:
    /// @cond internal
    WAFRegionalRequest(WAFRegionalRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WAFRegionalRequest)

};

} // namespace WAFRegional
} // namespace QtAws

#endif

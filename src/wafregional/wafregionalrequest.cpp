// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wafregionalrequest.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WafRegional {

/*!
 * \class QtAws::WafRegional::WafRegionalRequest
 * \brief The WafRegionalRequest class provides an interface for WafRegional requests.
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * \enum WafRegionalRequest::Action
 *
 * This enum describes the actions that can be performed as WafRegional
 * requests.
 *
 * \value AssociateWebACLAction WafRegional AssociateWebACL action.
 * \value CreateByteMatchSetAction WafRegional CreateByteMatchSet action.
 * \value CreateGeoMatchSetAction WafRegional CreateGeoMatchSet action.
 * \value CreateIPSetAction WafRegional CreateIPSet action.
 * \value CreateRateBasedRuleAction WafRegional CreateRateBasedRule action.
 * \value CreateRegexMatchSetAction WafRegional CreateRegexMatchSet action.
 * \value CreateRegexPatternSetAction WafRegional CreateRegexPatternSet action.
 * \value CreateRuleAction WafRegional CreateRule action.
 * \value CreateRuleGroupAction WafRegional CreateRuleGroup action.
 * \value CreateSizeConstraintSetAction WafRegional CreateSizeConstraintSet action.
 * \value CreateSqlInjectionMatchSetAction WafRegional CreateSqlInjectionMatchSet action.
 * \value CreateWebACLAction WafRegional CreateWebACL action.
 * \value CreateWebACLMigrationStackAction WafRegional CreateWebACLMigrationStack action.
 * \value CreateXssMatchSetAction WafRegional CreateXssMatchSet action.
 * \value DeleteByteMatchSetAction WafRegional DeleteByteMatchSet action.
 * \value DeleteGeoMatchSetAction WafRegional DeleteGeoMatchSet action.
 * \value DeleteIPSetAction WafRegional DeleteIPSet action.
 * \value DeleteLoggingConfigurationAction WafRegional DeleteLoggingConfiguration action.
 * \value DeletePermissionPolicyAction WafRegional DeletePermissionPolicy action.
 * \value DeleteRateBasedRuleAction WafRegional DeleteRateBasedRule action.
 * \value DeleteRegexMatchSetAction WafRegional DeleteRegexMatchSet action.
 * \value DeleteRegexPatternSetAction WafRegional DeleteRegexPatternSet action.
 * \value DeleteRuleAction WafRegional DeleteRule action.
 * \value DeleteRuleGroupAction WafRegional DeleteRuleGroup action.
 * \value DeleteSizeConstraintSetAction WafRegional DeleteSizeConstraintSet action.
 * \value DeleteSqlInjectionMatchSetAction WafRegional DeleteSqlInjectionMatchSet action.
 * \value DeleteWebACLAction WafRegional DeleteWebACL action.
 * \value DeleteXssMatchSetAction WafRegional DeleteXssMatchSet action.
 * \value DisassociateWebACLAction WafRegional DisassociateWebACL action.
 * \value GetByteMatchSetAction WafRegional GetByteMatchSet action.
 * \value GetChangeTokenAction WafRegional GetChangeToken action.
 * \value GetChangeTokenStatusAction WafRegional GetChangeTokenStatus action.
 * \value GetGeoMatchSetAction WafRegional GetGeoMatchSet action.
 * \value GetIPSetAction WafRegional GetIPSet action.
 * \value GetLoggingConfigurationAction WafRegional GetLoggingConfiguration action.
 * \value GetPermissionPolicyAction WafRegional GetPermissionPolicy action.
 * \value GetRateBasedRuleAction WafRegional GetRateBasedRule action.
 * \value GetRateBasedRuleManagedKeysAction WafRegional GetRateBasedRuleManagedKeys action.
 * \value GetRegexMatchSetAction WafRegional GetRegexMatchSet action.
 * \value GetRegexPatternSetAction WafRegional GetRegexPatternSet action.
 * \value GetRuleAction WafRegional GetRule action.
 * \value GetRuleGroupAction WafRegional GetRuleGroup action.
 * \value GetSampledRequestsAction WafRegional GetSampledRequests action.
 * \value GetSizeConstraintSetAction WafRegional GetSizeConstraintSet action.
 * \value GetSqlInjectionMatchSetAction WafRegional GetSqlInjectionMatchSet action.
 * \value GetWebACLAction WafRegional GetWebACL action.
 * \value GetWebACLForResourceAction WafRegional GetWebACLForResource action.
 * \value GetXssMatchSetAction WafRegional GetXssMatchSet action.
 * \value ListActivatedRulesInRuleGroupAction WafRegional ListActivatedRulesInRuleGroup action.
 * \value ListByteMatchSetsAction WafRegional ListByteMatchSets action.
 * \value ListGeoMatchSetsAction WafRegional ListGeoMatchSets action.
 * \value ListIPSetsAction WafRegional ListIPSets action.
 * \value ListLoggingConfigurationsAction WafRegional ListLoggingConfigurations action.
 * \value ListRateBasedRulesAction WafRegional ListRateBasedRules action.
 * \value ListRegexMatchSetsAction WafRegional ListRegexMatchSets action.
 * \value ListRegexPatternSetsAction WafRegional ListRegexPatternSets action.
 * \value ListResourcesForWebACLAction WafRegional ListResourcesForWebACL action.
 * \value ListRuleGroupsAction WafRegional ListRuleGroups action.
 * \value ListRulesAction WafRegional ListRules action.
 * \value ListSizeConstraintSetsAction WafRegional ListSizeConstraintSets action.
 * \value ListSqlInjectionMatchSetsAction WafRegional ListSqlInjectionMatchSets action.
 * \value ListSubscribedRuleGroupsAction WafRegional ListSubscribedRuleGroups action.
 * \value ListTagsForResourceAction WafRegional ListTagsForResource action.
 * \value ListWebACLsAction WafRegional ListWebACLs action.
 * \value ListXssMatchSetsAction WafRegional ListXssMatchSets action.
 * \value PutLoggingConfigurationAction WafRegional PutLoggingConfiguration action.
 * \value PutPermissionPolicyAction WafRegional PutPermissionPolicy action.
 * \value TagResourceAction WafRegional TagResource action.
 * \value UntagResourceAction WafRegional UntagResource action.
 * \value UpdateByteMatchSetAction WafRegional UpdateByteMatchSet action.
 * \value UpdateGeoMatchSetAction WafRegional UpdateGeoMatchSet action.
 * \value UpdateIPSetAction WafRegional UpdateIPSet action.
 * \value UpdateRateBasedRuleAction WafRegional UpdateRateBasedRule action.
 * \value UpdateRegexMatchSetAction WafRegional UpdateRegexMatchSet action.
 * \value UpdateRegexPatternSetAction WafRegional UpdateRegexPatternSet action.
 * \value UpdateRuleAction WafRegional UpdateRule action.
 * \value UpdateRuleGroupAction WafRegional UpdateRuleGroup action.
 * \value UpdateSizeConstraintSetAction WafRegional UpdateSizeConstraintSet action.
 * \value UpdateSqlInjectionMatchSetAction WafRegional UpdateSqlInjectionMatchSet action.
 * \value UpdateWebACLAction WafRegional UpdateWebACL action.
 * \value UpdateXssMatchSetAction WafRegional UpdateXssMatchSet action.
 */

/*!
 * Constructs a WafRegionalRequest object for WafRegional \a action.
 */
WafRegionalRequest::WafRegionalRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WafRegionalRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WafRegionalRequest::WafRegionalRequest(const WafRegionalRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WafRegionalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WafRegionalRequest object to be equal to \a other.
 */
WafRegionalRequest& WafRegionalRequest::operator=(const WafRegionalRequest &other)
{
    Q_D(WafRegionalRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WafRegionalRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WafRegionalRequestPrivate.
 */
WafRegionalRequest::WafRegionalRequest(WafRegionalRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WafRegional action to be performed by this request.
 */
WafRegionalRequest::Action WafRegionalRequest::action() const
{
    Q_D(const WafRegionalRequest);
    return d->action;
}

/*!
 * Returns the name of the WafRegional action to be performed by this request.
 */
QString WafRegionalRequest::actionString() const
{
    return WafRegionalRequestPrivate::toString(action());
}

/*!
 * Returns the WafRegional API version implemented by this request.
 */
QString WafRegionalRequest::apiVersion() const
{
    Q_D(const WafRegionalRequest);
    return d->apiVersion;
}

/*!
 * Sets the WafRegional action to be performed by this request to \a action.
 */
void WafRegionalRequest::setAction(const Action action)
{
    Q_D(WafRegionalRequest);
    d->action = action;
}

/*!
 * Sets the WafRegional API version to include in this request to \a version.
 */
void WafRegionalRequest::setApiVersion(const QString &version)
{
    Q_D(WafRegionalRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool WafRegionalRequest::operator==(const WafRegionalRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WafRegional queue name.
 *
 * @par From WafRegional FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WafRegional queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WafRegionalRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WafRegionalRequest::clearParameter(const QString &name)
{
    Q_D(WafRegionalRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WafRegionalRequest::clearParameters()
{
    Q_D(WafRegionalRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WafRegionalRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WafRegionalRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WafRegionalRequest::parameters() const
{
    Q_D(const WafRegionalRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WafRegionalRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WafRegionalRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WafRegionalRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WafRegionalRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WafRegional request using the given
 * \a endpoint.
 *
 * This WafRegional implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WafRegionalRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WafRegionalRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WafRegional::WafRegionalRequestPrivate
 * \brief The WafRegionalRequestPrivate class provides private implementation for WafRegionalRequest.
 * \internal
 *
 * \inmodule QtAwsWafRegional
 */

/*!
 * Constructs a WafRegionalRequestPrivate object for WafRegional \a action,
 * with public implementation \a q.
 */
WafRegionalRequestPrivate::WafRegionalRequestPrivate(const WafRegionalRequest::Action action, WafRegionalRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-11-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WafRegionalRequest class's copy constructor.
 */
WafRegionalRequestPrivate::WafRegionalRequestPrivate(const WafRegionalRequestPrivate &other,
                                     WafRegionalRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WafRegionalRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WafRegional service's Action
 * query parameters.
 */
QString WafRegionalRequestPrivate::toString(const WafRegionalRequest::Action &action)
{
    #define ActionToString(action) \
        case WafRegionalRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateWebACL);
        ActionToString(CreateByteMatchSet);
        ActionToString(CreateGeoMatchSet);
        ActionToString(CreateIPSet);
        ActionToString(CreateRateBasedRule);
        ActionToString(CreateRegexMatchSet);
        ActionToString(CreateRegexPatternSet);
        ActionToString(CreateRule);
        ActionToString(CreateRuleGroup);
        ActionToString(CreateSizeConstraintSet);
        ActionToString(CreateSqlInjectionMatchSet);
        ActionToString(CreateWebACL);
        ActionToString(CreateWebACLMigrationStack);
        ActionToString(CreateXssMatchSet);
        ActionToString(DeleteByteMatchSet);
        ActionToString(DeleteGeoMatchSet);
        ActionToString(DeleteIPSet);
        ActionToString(DeleteLoggingConfiguration);
        ActionToString(DeletePermissionPolicy);
        ActionToString(DeleteRateBasedRule);
        ActionToString(DeleteRegexMatchSet);
        ActionToString(DeleteRegexPatternSet);
        ActionToString(DeleteRule);
        ActionToString(DeleteRuleGroup);
        ActionToString(DeleteSizeConstraintSet);
        ActionToString(DeleteSqlInjectionMatchSet);
        ActionToString(DeleteWebACL);
        ActionToString(DeleteXssMatchSet);
        ActionToString(DisassociateWebACL);
        ActionToString(GetByteMatchSet);
        ActionToString(GetChangeToken);
        ActionToString(GetChangeTokenStatus);
        ActionToString(GetGeoMatchSet);
        ActionToString(GetIPSet);
        ActionToString(GetLoggingConfiguration);
        ActionToString(GetPermissionPolicy);
        ActionToString(GetRateBasedRule);
        ActionToString(GetRateBasedRuleManagedKeys);
        ActionToString(GetRegexMatchSet);
        ActionToString(GetRegexPatternSet);
        ActionToString(GetRule);
        ActionToString(GetRuleGroup);
        ActionToString(GetSampledRequests);
        ActionToString(GetSizeConstraintSet);
        ActionToString(GetSqlInjectionMatchSet);
        ActionToString(GetWebACL);
        ActionToString(GetWebACLForResource);
        ActionToString(GetXssMatchSet);
        ActionToString(ListActivatedRulesInRuleGroup);
        ActionToString(ListByteMatchSets);
        ActionToString(ListGeoMatchSets);
        ActionToString(ListIPSets);
        ActionToString(ListLoggingConfigurations);
        ActionToString(ListRateBasedRules);
        ActionToString(ListRegexMatchSets);
        ActionToString(ListRegexPatternSets);
        ActionToString(ListResourcesForWebACL);
        ActionToString(ListRuleGroups);
        ActionToString(ListRules);
        ActionToString(ListSizeConstraintSets);
        ActionToString(ListSqlInjectionMatchSets);
        ActionToString(ListSubscribedRuleGroups);
        ActionToString(ListTagsForResource);
        ActionToString(ListWebACLs);
        ActionToString(ListXssMatchSets);
        ActionToString(PutLoggingConfiguration);
        ActionToString(PutPermissionPolicy);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateByteMatchSet);
        ActionToString(UpdateGeoMatchSet);
        ActionToString(UpdateIPSet);
        ActionToString(UpdateRateBasedRule);
        ActionToString(UpdateRegexMatchSet);
        ActionToString(UpdateRegexPatternSet);
        ActionToString(UpdateRule);
        ActionToString(UpdateRuleGroup);
        ActionToString(UpdateSizeConstraintSet);
        ActionToString(UpdateSqlInjectionMatchSet);
        ActionToString(UpdateWebACL);
        ActionToString(UpdateXssMatchSet);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WafRegional
} // namespace QtAws

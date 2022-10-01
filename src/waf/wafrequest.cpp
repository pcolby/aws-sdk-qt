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

#include "wafrequest.h"
#include "wafrequest_p.h"

namespace QtAws {
namespace Waf {

/*!
 * \class QtAws::Waf::WafRequest
 * \brief The WafRequest class provides an interface for Waf requests.
 *
 * \inmodule QtAwsWaf
 */

/*!
 * \enum WafRequest::Action
 *
 * This enum describes the actions that can be performed as Waf
 * requests.
 *
 * \value CreateByteMatchSetAction Waf CreateByteMatchSet action.
 * \value CreateGeoMatchSetAction Waf CreateGeoMatchSet action.
 * \value CreateIPSetAction Waf CreateIPSet action.
 * \value CreateRateBasedRuleAction Waf CreateRateBasedRule action.
 * \value CreateRegexMatchSetAction Waf CreateRegexMatchSet action.
 * \value CreateRegexPatternSetAction Waf CreateRegexPatternSet action.
 * \value CreateRuleAction Waf CreateRule action.
 * \value CreateRuleGroupAction Waf CreateRuleGroup action.
 * \value CreateSizeConstraintSetAction Waf CreateSizeConstraintSet action.
 * \value CreateSqlInjectionMatchSetAction Waf CreateSqlInjectionMatchSet action.
 * \value CreateWebACLAction Waf CreateWebACL action.
 * \value CreateWebACLMigrationStackAction Waf CreateWebACLMigrationStack action.
 * \value CreateXssMatchSetAction Waf CreateXssMatchSet action.
 * \value DeleteByteMatchSetAction Waf DeleteByteMatchSet action.
 * \value DeleteGeoMatchSetAction Waf DeleteGeoMatchSet action.
 * \value DeleteIPSetAction Waf DeleteIPSet action.
 * \value DeleteLoggingConfigurationAction Waf DeleteLoggingConfiguration action.
 * \value DeletePermissionPolicyAction Waf DeletePermissionPolicy action.
 * \value DeleteRateBasedRuleAction Waf DeleteRateBasedRule action.
 * \value DeleteRegexMatchSetAction Waf DeleteRegexMatchSet action.
 * \value DeleteRegexPatternSetAction Waf DeleteRegexPatternSet action.
 * \value DeleteRuleAction Waf DeleteRule action.
 * \value DeleteRuleGroupAction Waf DeleteRuleGroup action.
 * \value DeleteSizeConstraintSetAction Waf DeleteSizeConstraintSet action.
 * \value DeleteSqlInjectionMatchSetAction Waf DeleteSqlInjectionMatchSet action.
 * \value DeleteWebACLAction Waf DeleteWebACL action.
 * \value DeleteXssMatchSetAction Waf DeleteXssMatchSet action.
 * \value GetByteMatchSetAction Waf GetByteMatchSet action.
 * \value GetChangeTokenAction Waf GetChangeToken action.
 * \value GetChangeTokenStatusAction Waf GetChangeTokenStatus action.
 * \value GetGeoMatchSetAction Waf GetGeoMatchSet action.
 * \value GetIPSetAction Waf GetIPSet action.
 * \value GetLoggingConfigurationAction Waf GetLoggingConfiguration action.
 * \value GetPermissionPolicyAction Waf GetPermissionPolicy action.
 * \value GetRateBasedRuleAction Waf GetRateBasedRule action.
 * \value GetRateBasedRuleManagedKeysAction Waf GetRateBasedRuleManagedKeys action.
 * \value GetRegexMatchSetAction Waf GetRegexMatchSet action.
 * \value GetRegexPatternSetAction Waf GetRegexPatternSet action.
 * \value GetRuleAction Waf GetRule action.
 * \value GetRuleGroupAction Waf GetRuleGroup action.
 * \value GetSampledRequestsAction Waf GetSampledRequests action.
 * \value GetSizeConstraintSetAction Waf GetSizeConstraintSet action.
 * \value GetSqlInjectionMatchSetAction Waf GetSqlInjectionMatchSet action.
 * \value GetWebACLAction Waf GetWebACL action.
 * \value GetXssMatchSetAction Waf GetXssMatchSet action.
 * \value ListActivatedRulesInRuleGroupAction Waf ListActivatedRulesInRuleGroup action.
 * \value ListByteMatchSetsAction Waf ListByteMatchSets action.
 * \value ListGeoMatchSetsAction Waf ListGeoMatchSets action.
 * \value ListIPSetsAction Waf ListIPSets action.
 * \value ListLoggingConfigurationsAction Waf ListLoggingConfigurations action.
 * \value ListRateBasedRulesAction Waf ListRateBasedRules action.
 * \value ListRegexMatchSetsAction Waf ListRegexMatchSets action.
 * \value ListRegexPatternSetsAction Waf ListRegexPatternSets action.
 * \value ListRuleGroupsAction Waf ListRuleGroups action.
 * \value ListRulesAction Waf ListRules action.
 * \value ListSizeConstraintSetsAction Waf ListSizeConstraintSets action.
 * \value ListSqlInjectionMatchSetsAction Waf ListSqlInjectionMatchSets action.
 * \value ListSubscribedRuleGroupsAction Waf ListSubscribedRuleGroups action.
 * \value ListTagsForResourceAction Waf ListTagsForResource action.
 * \value ListWebACLsAction Waf ListWebACLs action.
 * \value ListXssMatchSetsAction Waf ListXssMatchSets action.
 * \value PutLoggingConfigurationAction Waf PutLoggingConfiguration action.
 * \value PutPermissionPolicyAction Waf PutPermissionPolicy action.
 * \value TagResourceAction Waf TagResource action.
 * \value UntagResourceAction Waf UntagResource action.
 * \value UpdateByteMatchSetAction Waf UpdateByteMatchSet action.
 * \value UpdateGeoMatchSetAction Waf UpdateGeoMatchSet action.
 * \value UpdateIPSetAction Waf UpdateIPSet action.
 * \value UpdateRateBasedRuleAction Waf UpdateRateBasedRule action.
 * \value UpdateRegexMatchSetAction Waf UpdateRegexMatchSet action.
 * \value UpdateRegexPatternSetAction Waf UpdateRegexPatternSet action.
 * \value UpdateRuleAction Waf UpdateRule action.
 * \value UpdateRuleGroupAction Waf UpdateRuleGroup action.
 * \value UpdateSizeConstraintSetAction Waf UpdateSizeConstraintSet action.
 * \value UpdateSqlInjectionMatchSetAction Waf UpdateSqlInjectionMatchSet action.
 * \value UpdateWebACLAction Waf UpdateWebACL action.
 * \value UpdateXssMatchSetAction Waf UpdateXssMatchSet action.
 */

/*!
 * Constructs a WafRequest object for Waf \a action.
 */
WafRequest::WafRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WafRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WafRequest::WafRequest(const WafRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WafRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WafRequest object to be equal to \a other.
 */
WafRequest& WafRequest::operator=(const WafRequest &other)
{
    Q_D(WafRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WafRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WafRequestPrivate.
 */
WafRequest::WafRequest(WafRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Waf action to be performed by this request.
 */
WafRequest::Action WafRequest::action() const
{
    Q_D(const WafRequest);
    return d->action;
}

/*!
 * Returns the name of the Waf action to be performed by this request.
 */
QString WafRequest::actionString() const
{
    return WafRequestPrivate::toString(action());
}

/*!
 * Returns the Waf API version implemented by this request.
 */
QString WafRequest::apiVersion() const
{
    Q_D(const WafRequest);
    return d->apiVersion;
}

/*!
 * Sets the Waf action to be performed by this request to \a action.
 */
void WafRequest::setAction(const Action action)
{
    Q_D(WafRequest);
    d->action = action;
}

/*!
 * Sets the Waf API version to include in this request to \a version.
 */
void WafRequest::setApiVersion(const QString &version)
{
    Q_D(WafRequest);
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
bool WafRequest::operator==(const WafRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Waf queue name.
 *
 * @par From Waf FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Waf queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WafRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WafRequest::clearParameter(const QString &name)
{
    Q_D(WafRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WafRequest::clearParameters()
{
    Q_D(WafRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WafRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WafRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WafRequest::parameters() const
{
    Q_D(const WafRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WafRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WafRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WafRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WafRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Waf request using the given
 * \a endpoint.
 *
 * This Waf implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WafRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WafRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Waf::WafRequestPrivate
 * \brief The WafRequestPrivate class provides private implementation for WafRequest.
 * \internal
 *
 * \inmodule QtAwsWaf
 */

/*!
 * Constructs a WafRequestPrivate object for Waf \a action,
 * with public implementation \a q.
 */
WafRequestPrivate::WafRequestPrivate(const WafRequest::Action action, WafRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-08-24"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WafRequest class's copy constructor.
 */
WafRequestPrivate::WafRequestPrivate(const WafRequestPrivate &other,
                                     WafRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WafRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Waf service's Action
 * query parameters.
 */
QString WafRequestPrivate::toString(const WafRequest::Action &action)
{
    #define ActionToString(action) \
        case WafRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
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
        ActionToString(GetXssMatchSet);
        ActionToString(ListActivatedRulesInRuleGroup);
        ActionToString(ListByteMatchSets);
        ActionToString(ListGeoMatchSets);
        ActionToString(ListIPSets);
        ActionToString(ListLoggingConfigurations);
        ActionToString(ListRateBasedRules);
        ActionToString(ListRegexMatchSets);
        ActionToString(ListRegexPatternSets);
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

} // namespace Waf
} // namespace QtAws

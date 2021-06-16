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
namespace WAF {

/*!
 * \class QtAws::WAF::WafRequest
 * \brief The WafRequest class provides an interface for WAF requests.
 *
 * \inmodule QtAwsWAF
 */

/*!
 * \enum WafRequest::Action
 *
 * This enum describes the actions that can be performed as WAF
 * requests.
 *
 * \value CreateByteMatchSetAction WAF CreateByteMatchSet action.
 * \value CreateGeoMatchSetAction WAF CreateGeoMatchSet action.
 * \value CreateIPSetAction WAF CreateIPSet action.
 * \value CreateRateBasedRuleAction WAF CreateRateBasedRule action.
 * \value CreateRegexMatchSetAction WAF CreateRegexMatchSet action.
 * \value CreateRegexPatternSetAction WAF CreateRegexPatternSet action.
 * \value CreateRuleAction WAF CreateRule action.
 * \value CreateRuleGroupAction WAF CreateRuleGroup action.
 * \value CreateSizeConstraintSetAction WAF CreateSizeConstraintSet action.
 * \value CreateSqlInjectionMatchSetAction WAF CreateSqlInjectionMatchSet action.
 * \value CreateWebACLAction WAF CreateWebACL action.
 * \value CreateXssMatchSetAction WAF CreateXssMatchSet action.
 * \value DeleteByteMatchSetAction WAF DeleteByteMatchSet action.
 * \value DeleteGeoMatchSetAction WAF DeleteGeoMatchSet action.
 * \value DeleteIPSetAction WAF DeleteIPSet action.
 * \value DeleteLoggingConfigurationAction WAF DeleteLoggingConfiguration action.
 * \value DeletePermissionPolicyAction WAF DeletePermissionPolicy action.
 * \value DeleteRateBasedRuleAction WAF DeleteRateBasedRule action.
 * \value DeleteRegexMatchSetAction WAF DeleteRegexMatchSet action.
 * \value DeleteRegexPatternSetAction WAF DeleteRegexPatternSet action.
 * \value DeleteRuleAction WAF DeleteRule action.
 * \value DeleteRuleGroupAction WAF DeleteRuleGroup action.
 * \value DeleteSizeConstraintSetAction WAF DeleteSizeConstraintSet action.
 * \value DeleteSqlInjectionMatchSetAction WAF DeleteSqlInjectionMatchSet action.
 * \value DeleteWebACLAction WAF DeleteWebACL action.
 * \value DeleteXssMatchSetAction WAF DeleteXssMatchSet action.
 * \value GetByteMatchSetAction WAF GetByteMatchSet action.
 * \value GetChangeTokenAction WAF GetChangeToken action.
 * \value GetChangeTokenStatusAction WAF GetChangeTokenStatus action.
 * \value GetGeoMatchSetAction WAF GetGeoMatchSet action.
 * \value GetIPSetAction WAF GetIPSet action.
 * \value GetLoggingConfigurationAction WAF GetLoggingConfiguration action.
 * \value GetPermissionPolicyAction WAF GetPermissionPolicy action.
 * \value GetRateBasedRuleAction WAF GetRateBasedRule action.
 * \value GetRateBasedRuleManagedKeysAction WAF GetRateBasedRuleManagedKeys action.
 * \value GetRegexMatchSetAction WAF GetRegexMatchSet action.
 * \value GetRegexPatternSetAction WAF GetRegexPatternSet action.
 * \value GetRuleAction WAF GetRule action.
 * \value GetRuleGroupAction WAF GetRuleGroup action.
 * \value GetSampledRequestsAction WAF GetSampledRequests action.
 * \value GetSizeConstraintSetAction WAF GetSizeConstraintSet action.
 * \value GetSqlInjectionMatchSetAction WAF GetSqlInjectionMatchSet action.
 * \value GetWebACLAction WAF GetWebACL action.
 * \value GetXssMatchSetAction WAF GetXssMatchSet action.
 * \value ListActivatedRulesInRuleGroupAction WAF ListActivatedRulesInRuleGroup action.
 * \value ListByteMatchSetsAction WAF ListByteMatchSets action.
 * \value ListGeoMatchSetsAction WAF ListGeoMatchSets action.
 * \value ListIPSetsAction WAF ListIPSets action.
 * \value ListLoggingConfigurationsAction WAF ListLoggingConfigurations action.
 * \value ListRateBasedRulesAction WAF ListRateBasedRules action.
 * \value ListRegexMatchSetsAction WAF ListRegexMatchSets action.
 * \value ListRegexPatternSetsAction WAF ListRegexPatternSets action.
 * \value ListRuleGroupsAction WAF ListRuleGroups action.
 * \value ListRulesAction WAF ListRules action.
 * \value ListSizeConstraintSetsAction WAF ListSizeConstraintSets action.
 * \value ListSqlInjectionMatchSetsAction WAF ListSqlInjectionMatchSets action.
 * \value ListSubscribedRuleGroupsAction WAF ListSubscribedRuleGroups action.
 * \value ListTagsForResourceAction WAF ListTagsForResource action.
 * \value ListWebACLsAction WAF ListWebACLs action.
 * \value ListXssMatchSetsAction WAF ListXssMatchSets action.
 * \value PutLoggingConfigurationAction WAF PutLoggingConfiguration action.
 * \value PutPermissionPolicyAction WAF PutPermissionPolicy action.
 * \value TagResourceAction WAF TagResource action.
 * \value UntagResourceAction WAF UntagResource action.
 * \value UpdateByteMatchSetAction WAF UpdateByteMatchSet action.
 * \value UpdateGeoMatchSetAction WAF UpdateGeoMatchSet action.
 * \value UpdateIPSetAction WAF UpdateIPSet action.
 * \value UpdateRateBasedRuleAction WAF UpdateRateBasedRule action.
 * \value UpdateRegexMatchSetAction WAF UpdateRegexMatchSet action.
 * \value UpdateRegexPatternSetAction WAF UpdateRegexPatternSet action.
 * \value UpdateRuleAction WAF UpdateRule action.
 * \value UpdateRuleGroupAction WAF UpdateRuleGroup action.
 * \value UpdateSizeConstraintSetAction WAF UpdateSizeConstraintSet action.
 * \value UpdateSqlInjectionMatchSetAction WAF UpdateSqlInjectionMatchSet action.
 * \value UpdateWebACLAction WAF UpdateWebACL action.
 * \value UpdateXssMatchSetAction WAF UpdateXssMatchSet action.
 */

/*!
 * Constructs a WafRequest object for WAF \a action.
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
 * Returns the WAF action to be performed by this request.
 */
WafRequest::Action WafRequest::action() const
{
    Q_D(const WafRequest);
    return d->action;
}

/*!
 * Returns the name of the WAF action to be performed by this request.
 */
QString WafRequest::actionString() const
{
    return WafRequestPrivate::toString(action());
}

/*!
 * Returns the WAF API version implemented by this request.
 */
QString WafRequest::apiVersion() const
{
    Q_D(const WafRequest);
    return d->apiVersion;
}

/*!
 * Sets the WAF action to be performed by this request to \a action.
 */
void WafRequest::setAction(const Action action)
{
    Q_D(WafRequest);
    d->action = action;
}

/*!
 * Sets the WAF API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid WAF queue name.
 *
 * @par From WAF FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WAF queue name, \c false otherwise.
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
 * Returns a network request for the WAF request using the given
 * \a endpoint.
 *
 * This WAF implementation builds request URLs by combining the
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
 * \class QtAws::WAF::WafRequestPrivate
 * \brief The WafRequestPrivate class provides private implementation for WafRequest.
 * \internal
 *
 * \inmodule QtAwsWAF
 */

/*!
 * Constructs a WafRequestPrivate object for WAF \a action,
 * with public implementation \a q.
 */
WafRequestPrivate::WafRequestPrivate(const WafRequest::Action action, WafRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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
 * string representations, appropriate for use with the WAF service's Action
 * query parameters.
 */
QString WafRequestPrivate::toString(const WafRequest::Action &action)
{
    #define ActionToString(action) \
        case WafRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WAF
} // namespace QtAws

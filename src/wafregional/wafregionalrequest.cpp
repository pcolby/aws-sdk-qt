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

#include "wafregionalrequest.h"
#include "wafregionalrequest_p.h"

namespace QtAws {
namespace WAFRegional {

/*!
 * \class QtAws::WAFRegional::WAFRegionalRequest
 * \brief The WAFRegionalRequest class provides an interface for WAFRegional requests.
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * \enum WAFRegionalRequest::Action
 *
 * This enum describes the actions that can be performed as WAFRegional
 * requests.
 *
 * \value AssociateWebACLAction WAFRegional AssociateWebACL action.
 * \value CreateByteMatchSetAction WAFRegional CreateByteMatchSet action.
 * \value CreateGeoMatchSetAction WAFRegional CreateGeoMatchSet action.
 * \value CreateIPSetAction WAFRegional CreateIPSet action.
 * \value CreateRateBasedRuleAction WAFRegional CreateRateBasedRule action.
 * \value CreateRegexMatchSetAction WAFRegional CreateRegexMatchSet action.
 * \value CreateRegexPatternSetAction WAFRegional CreateRegexPatternSet action.
 * \value CreateRuleAction WAFRegional CreateRule action.
 * \value CreateRuleGroupAction WAFRegional CreateRuleGroup action.
 * \value CreateSizeConstraintSetAction WAFRegional CreateSizeConstraintSet action.
 * \value CreateSqlInjectionMatchSetAction WAFRegional CreateSqlInjectionMatchSet action.
 * \value CreateWebACLAction WAFRegional CreateWebACL action.
 * \value CreateWebACLMigrationStackAction WAFRegional CreateWebACLMigrationStack action.
 * \value CreateXssMatchSetAction WAFRegional CreateXssMatchSet action.
 * \value DeleteByteMatchSetAction WAFRegional DeleteByteMatchSet action.
 * \value DeleteGeoMatchSetAction WAFRegional DeleteGeoMatchSet action.
 * \value DeleteIPSetAction WAFRegional DeleteIPSet action.
 * \value DeleteLoggingConfigurationAction WAFRegional DeleteLoggingConfiguration action.
 * \value DeletePermissionPolicyAction WAFRegional DeletePermissionPolicy action.
 * \value DeleteRateBasedRuleAction WAFRegional DeleteRateBasedRule action.
 * \value DeleteRegexMatchSetAction WAFRegional DeleteRegexMatchSet action.
 * \value DeleteRegexPatternSetAction WAFRegional DeleteRegexPatternSet action.
 * \value DeleteRuleAction WAFRegional DeleteRule action.
 * \value DeleteRuleGroupAction WAFRegional DeleteRuleGroup action.
 * \value DeleteSizeConstraintSetAction WAFRegional DeleteSizeConstraintSet action.
 * \value DeleteSqlInjectionMatchSetAction WAFRegional DeleteSqlInjectionMatchSet action.
 * \value DeleteWebACLAction WAFRegional DeleteWebACL action.
 * \value DeleteXssMatchSetAction WAFRegional DeleteXssMatchSet action.
 * \value DisassociateWebACLAction WAFRegional DisassociateWebACL action.
 * \value GetByteMatchSetAction WAFRegional GetByteMatchSet action.
 * \value GetChangeTokenAction WAFRegional GetChangeToken action.
 * \value GetChangeTokenStatusAction WAFRegional GetChangeTokenStatus action.
 * \value GetGeoMatchSetAction WAFRegional GetGeoMatchSet action.
 * \value GetIPSetAction WAFRegional GetIPSet action.
 * \value GetLoggingConfigurationAction WAFRegional GetLoggingConfiguration action.
 * \value GetPermissionPolicyAction WAFRegional GetPermissionPolicy action.
 * \value GetRateBasedRuleAction WAFRegional GetRateBasedRule action.
 * \value GetRateBasedRuleManagedKeysAction WAFRegional GetRateBasedRuleManagedKeys action.
 * \value GetRegexMatchSetAction WAFRegional GetRegexMatchSet action.
 * \value GetRegexPatternSetAction WAFRegional GetRegexPatternSet action.
 * \value GetRuleAction WAFRegional GetRule action.
 * \value GetRuleGroupAction WAFRegional GetRuleGroup action.
 * \value GetSampledRequestsAction WAFRegional GetSampledRequests action.
 * \value GetSizeConstraintSetAction WAFRegional GetSizeConstraintSet action.
 * \value GetSqlInjectionMatchSetAction WAFRegional GetSqlInjectionMatchSet action.
 * \value GetWebACLAction WAFRegional GetWebACL action.
 * \value GetWebACLForResourceAction WAFRegional GetWebACLForResource action.
 * \value GetXssMatchSetAction WAFRegional GetXssMatchSet action.
 * \value ListActivatedRulesInRuleGroupAction WAFRegional ListActivatedRulesInRuleGroup action.
 * \value ListByteMatchSetsAction WAFRegional ListByteMatchSets action.
 * \value ListGeoMatchSetsAction WAFRegional ListGeoMatchSets action.
 * \value ListIPSetsAction WAFRegional ListIPSets action.
 * \value ListLoggingConfigurationsAction WAFRegional ListLoggingConfigurations action.
 * \value ListRateBasedRulesAction WAFRegional ListRateBasedRules action.
 * \value ListRegexMatchSetsAction WAFRegional ListRegexMatchSets action.
 * \value ListRegexPatternSetsAction WAFRegional ListRegexPatternSets action.
 * \value ListResourcesForWebACLAction WAFRegional ListResourcesForWebACL action.
 * \value ListRuleGroupsAction WAFRegional ListRuleGroups action.
 * \value ListRulesAction WAFRegional ListRules action.
 * \value ListSizeConstraintSetsAction WAFRegional ListSizeConstraintSets action.
 * \value ListSqlInjectionMatchSetsAction WAFRegional ListSqlInjectionMatchSets action.
 * \value ListSubscribedRuleGroupsAction WAFRegional ListSubscribedRuleGroups action.
 * \value ListTagsForResourceAction WAFRegional ListTagsForResource action.
 * \value ListWebACLsAction WAFRegional ListWebACLs action.
 * \value ListXssMatchSetsAction WAFRegional ListXssMatchSets action.
 * \value PutLoggingConfigurationAction WAFRegional PutLoggingConfiguration action.
 * \value PutPermissionPolicyAction WAFRegional PutPermissionPolicy action.
 * \value TagResourceAction WAFRegional TagResource action.
 * \value UntagResourceAction WAFRegional UntagResource action.
 * \value UpdateByteMatchSetAction WAFRegional UpdateByteMatchSet action.
 * \value UpdateGeoMatchSetAction WAFRegional UpdateGeoMatchSet action.
 * \value UpdateIPSetAction WAFRegional UpdateIPSet action.
 * \value UpdateRateBasedRuleAction WAFRegional UpdateRateBasedRule action.
 * \value UpdateRegexMatchSetAction WAFRegional UpdateRegexMatchSet action.
 * \value UpdateRegexPatternSetAction WAFRegional UpdateRegexPatternSet action.
 * \value UpdateRuleAction WAFRegional UpdateRule action.
 * \value UpdateRuleGroupAction WAFRegional UpdateRuleGroup action.
 * \value UpdateSizeConstraintSetAction WAFRegional UpdateSizeConstraintSet action.
 * \value UpdateSqlInjectionMatchSetAction WAFRegional UpdateSqlInjectionMatchSet action.
 * \value UpdateWebACLAction WAFRegional UpdateWebACL action.
 * \value UpdateXssMatchSetAction WAFRegional UpdateXssMatchSet action.
 */

/*!
 * Constructs a WAFRegionalRequest object for WAFRegional \a action.
 */
WAFRegionalRequest::WAFRegionalRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new WAFRegionalRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
WAFRegionalRequest::WAFRegionalRequest(const WAFRegionalRequest &other)
    : QtAws::Core::AwsAbstractRequest(new WAFRegionalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the WAFRegionalRequest object to be equal to \a other.
 */
WAFRegionalRequest& WAFRegionalRequest::operator=(const WAFRegionalRequest &other)
{
    Q_D(WAFRegionalRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa WAFRegionalRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from WAFRegionalRequestPrivate.
 */
WAFRegionalRequest::WAFRegionalRequest(WAFRegionalRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WAFRegional action to be performed by this request.
 */
WAFRegionalRequest::Action WAFRegionalRequest::action() const
{
    Q_D(const WAFRegionalRequest);
    return d->action;
}

/*!
 * Returns the name of the WAFRegional action to be performed by this request.
 */
QString WAFRegionalRequest::actionString() const
{
    return WAFRegionalRequestPrivate::toString(action());
}

/*!
 * Returns the WAFRegional API version implemented by this request.
 */
QString WAFRegionalRequest::apiVersion() const
{
    Q_D(const WAFRegionalRequest);
    return d->apiVersion;
}

/*!
 * Sets the WAFRegional action to be performed by this request to \a action.
 */
void WAFRegionalRequest::setAction(const Action action)
{
    Q_D(WAFRegionalRequest);
    d->action = action;
}

/*!
 * Sets the WAFRegional API version to include in this request to \a version.
 */
void WAFRegionalRequest::setApiVersion(const QString &version)
{
    Q_D(WAFRegionalRequest);
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
bool WAFRegionalRequest::operator==(const WAFRegionalRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WAFRegional queue name.
 *
 * @par From WAFRegional FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WAFRegional queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool WAFRegionalRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int WAFRegionalRequest::clearParameter(const QString &name)
{
    Q_D(WAFRegionalRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void WAFRegionalRequest::clearParameters()
{
    Q_D(WAFRegionalRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant WAFRegionalRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const WAFRegionalRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &WAFRegionalRequest::parameters() const
{
    Q_D(const WAFRegionalRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void WAFRegionalRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(WAFRegionalRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void WAFRegionalRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(WAFRegionalRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WAFRegional request using the given
 * \a endpoint.
 *
 * This WAFRegional implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest WAFRegionalRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const WAFRegionalRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WAFRegional::WAFRegionalRequestPrivate
 * \brief The WAFRegionalRequestPrivate class provides private implementation for WAFRegionalRequest.
 * \internal
 *
 * \inmodule QtAwsWAFRegional
 */

/*!
 * Constructs a WAFRegionalRequestPrivate object for WAFRegional \a action,
 * with public implementation \a q.
 */
WAFRegionalRequestPrivate::WAFRegionalRequestPrivate(const WAFRegionalRequest::Action action, WAFRegionalRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the WAFRegionalRequest class's copy constructor.
 */
WAFRegionalRequestPrivate::WAFRegionalRequestPrivate(const WAFRegionalRequestPrivate &other,
                                     WAFRegionalRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts WAFRegionalRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the WAFRegional service's Action
 * query parameters.
 */
QString WAFRegionalRequestPrivate::toString(const WAFRegionalRequest::Action &action)
{
    #define ActionToString(action) \
        case WAFRegionalRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WAFRegional
} // namespace QtAws

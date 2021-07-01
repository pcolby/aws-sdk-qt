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

#include "wafv2request.h"
#include "wafv2request_p.h"

namespace QtAws {
namespace WAFV2 {

/*!
 * \class QtAws::WAFV2::Wafv2Request
 * \brief The Wafv2Request class provides an interface for WAFV2 requests.
 *
 * \inmodule QtAwsWAFV2
 */

/*!
 * \enum Wafv2Request::Action
 *
 * This enum describes the actions that can be performed as WAFV2
 * requests.
 *
 * \value AssociateWebACLAction WAFV2 AssociateWebACL action.
 * \value CheckCapacityAction WAFV2 CheckCapacity action.
 * \value CreateIPSetAction WAFV2 CreateIPSet action.
 * \value CreateRegexPatternSetAction WAFV2 CreateRegexPatternSet action.
 * \value CreateRuleGroupAction WAFV2 CreateRuleGroup action.
 * \value CreateWebACLAction WAFV2 CreateWebACL action.
 * \value DeleteFirewallManagerRuleGroupsAction WAFV2 DeleteFirewallManagerRuleGroups action.
 * \value DeleteIPSetAction WAFV2 DeleteIPSet action.
 * \value DeleteLoggingConfigurationAction WAFV2 DeleteLoggingConfiguration action.
 * \value DeletePermissionPolicyAction WAFV2 DeletePermissionPolicy action.
 * \value DeleteRegexPatternSetAction WAFV2 DeleteRegexPatternSet action.
 * \value DeleteRuleGroupAction WAFV2 DeleteRuleGroup action.
 * \value DeleteWebACLAction WAFV2 DeleteWebACL action.
 * \value DescribeManagedRuleGroupAction WAFV2 DescribeManagedRuleGroup action.
 * \value DisassociateWebACLAction WAFV2 DisassociateWebACL action.
 * \value GetIPSetAction WAFV2 GetIPSet action.
 * \value GetLoggingConfigurationAction WAFV2 GetLoggingConfiguration action.
 * \value GetPermissionPolicyAction WAFV2 GetPermissionPolicy action.
 * \value GetRateBasedStatementManagedKeysAction WAFV2 GetRateBasedStatementManagedKeys action.
 * \value GetRegexPatternSetAction WAFV2 GetRegexPatternSet action.
 * \value GetRuleGroupAction WAFV2 GetRuleGroup action.
 * \value GetSampledRequestsAction WAFV2 GetSampledRequests action.
 * \value GetWebACLAction WAFV2 GetWebACL action.
 * \value GetWebACLForResourceAction WAFV2 GetWebACLForResource action.
 * \value ListAvailableManagedRuleGroupsAction WAFV2 ListAvailableManagedRuleGroups action.
 * \value ListIPSetsAction WAFV2 ListIPSets action.
 * \value ListLoggingConfigurationsAction WAFV2 ListLoggingConfigurations action.
 * \value ListRegexPatternSetsAction WAFV2 ListRegexPatternSets action.
 * \value ListResourcesForWebACLAction WAFV2 ListResourcesForWebACL action.
 * \value ListRuleGroupsAction WAFV2 ListRuleGroups action.
 * \value ListTagsForResourceAction WAFV2 ListTagsForResource action.
 * \value ListWebACLsAction WAFV2 ListWebACLs action.
 * \value PutLoggingConfigurationAction WAFV2 PutLoggingConfiguration action.
 * \value PutPermissionPolicyAction WAFV2 PutPermissionPolicy action.
 * \value TagResourceAction WAFV2 TagResource action.
 * \value UntagResourceAction WAFV2 UntagResource action.
 * \value UpdateIPSetAction WAFV2 UpdateIPSet action.
 * \value UpdateRegexPatternSetAction WAFV2 UpdateRegexPatternSet action.
 * \value UpdateRuleGroupAction WAFV2 UpdateRuleGroup action.
 * \value UpdateWebACLAction WAFV2 UpdateWebACL action.
 */

/*!
 * Constructs a Wafv2Request object for WAFV2 \a action.
 */
Wafv2Request::Wafv2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Wafv2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Wafv2Request::Wafv2Request(const Wafv2Request &other)
    : QtAws::Core::AwsAbstractRequest(new Wafv2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Wafv2Request object to be equal to \a other.
 */
Wafv2Request& Wafv2Request::operator=(const Wafv2Request &other)
{
    Q_D(Wafv2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Wafv2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Wafv2RequestPrivate.
 */
Wafv2Request::Wafv2Request(Wafv2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the WAFV2 action to be performed by this request.
 */
Wafv2Request::Action Wafv2Request::action() const
{
    Q_D(const Wafv2Request);
    return d->action;
}

/*!
 * Returns the name of the WAFV2 action to be performed by this request.
 */
QString Wafv2Request::actionString() const
{
    return Wafv2RequestPrivate::toString(action());
}

/*!
 * Returns the WAFV2 API version implemented by this request.
 */
QString Wafv2Request::apiVersion() const
{
    Q_D(const Wafv2Request);
    return d->apiVersion;
}

/*!
 * Sets the WAFV2 action to be performed by this request to \a action.
 */
void Wafv2Request::setAction(const Action action)
{
    Q_D(Wafv2Request);
    d->action = action;
}

/*!
 * Sets the WAFV2 API version to include in this request to \a version.
 */
void Wafv2Request::setApiVersion(const QString &version)
{
    Q_D(Wafv2Request);
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
bool Wafv2Request::operator==(const Wafv2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid WAFV2 queue name.
 *
 * @par From WAFV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid WAFV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Wafv2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Wafv2Request::clearParameter(const QString &name)
{
    Q_D(Wafv2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Wafv2Request::clearParameters()
{
    Q_D(Wafv2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Wafv2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Wafv2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Wafv2Request::parameters() const
{
    Q_D(const Wafv2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Wafv2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Wafv2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Wafv2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Wafv2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the WAFV2 request using the given
 * \a endpoint.
 *
 * This WAFV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Wafv2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Wafv2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::WAFV2::Wafv2RequestPrivate
 * \brief The Wafv2RequestPrivate class provides private implementation for Wafv2Request.
 * \internal
 *
 * \inmodule QtAwsWAFV2
 */

/*!
 * Constructs a Wafv2RequestPrivate object for WAFV2 \a action,
 * with public implementation \a q.
 */
Wafv2RequestPrivate::Wafv2RequestPrivate(const Wafv2Request::Action action, Wafv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Wafv2Request class's copy constructor.
 */
Wafv2RequestPrivate::Wafv2RequestPrivate(const Wafv2RequestPrivate &other,
                                     Wafv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Wafv2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the WAFV2 service's Action
 * query parameters.
 */
QString Wafv2RequestPrivate::toString(const Wafv2Request::Action &action)
{
    #define ActionToString(action) \
        case Wafv2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateWebACL);
        ActionToString(CheckCapacity);
        ActionToString(CreateIPSet);
        ActionToString(CreateRegexPatternSet);
        ActionToString(CreateRuleGroup);
        ActionToString(CreateWebACL);
        ActionToString(DeleteFirewallManagerRuleGroups);
        ActionToString(DeleteIPSet);
        ActionToString(DeleteLoggingConfiguration);
        ActionToString(DeletePermissionPolicy);
        ActionToString(DeleteRegexPatternSet);
        ActionToString(DeleteRuleGroup);
        ActionToString(DeleteWebACL);
        ActionToString(DescribeManagedRuleGroup);
        ActionToString(DisassociateWebACL);
        ActionToString(GetIPSet);
        ActionToString(GetLoggingConfiguration);
        ActionToString(GetPermissionPolicy);
        ActionToString(GetRateBasedStatementManagedKeys);
        ActionToString(GetRegexPatternSet);
        ActionToString(GetRuleGroup);
        ActionToString(GetSampledRequests);
        ActionToString(GetWebACL);
        ActionToString(GetWebACLForResource);
        ActionToString(ListAvailableManagedRuleGroups);
        ActionToString(ListIPSets);
        ActionToString(ListLoggingConfigurations);
        ActionToString(ListRegexPatternSets);
        ActionToString(ListResourcesForWebACL);
        ActionToString(ListRuleGroups);
        ActionToString(ListTagsForResource);
        ActionToString(ListWebACLs);
        ActionToString(PutLoggingConfiguration);
        ActionToString(PutPermissionPolicy);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateIPSet);
        ActionToString(UpdateRegexPatternSet);
        ActionToString(UpdateRuleGroup);
        ActionToString(UpdateWebACL);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace WAFV2
} // namespace QtAws

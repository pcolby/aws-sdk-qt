// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "wafv2request.h"
#include "wafv2request_p.h"

namespace QtAws {
namespace Wafv2 {

/*!
 * \class QtAws::Wafv2::Wafv2Request
 * \brief The Wafv2Request class provides an interface for Wafv2 requests.
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * \enum Wafv2Request::Action
 *
 * This enum describes the actions that can be performed as Wafv2
 * requests.
 *
 * \value AssociateWebACLAction Wafv2 AssociateWebACL action.
 * \value CheckCapacityAction Wafv2 CheckCapacity action.
 * \value CreateIPSetAction Wafv2 CreateIPSet action.
 * \value CreateRegexPatternSetAction Wafv2 CreateRegexPatternSet action.
 * \value CreateRuleGroupAction Wafv2 CreateRuleGroup action.
 * \value CreateWebACLAction Wafv2 CreateWebACL action.
 * \value DeleteFirewallManagerRuleGroupsAction Wafv2 DeleteFirewallManagerRuleGroups action.
 * \value DeleteIPSetAction Wafv2 DeleteIPSet action.
 * \value DeleteLoggingConfigurationAction Wafv2 DeleteLoggingConfiguration action.
 * \value DeletePermissionPolicyAction Wafv2 DeletePermissionPolicy action.
 * \value DeleteRegexPatternSetAction Wafv2 DeleteRegexPatternSet action.
 * \value DeleteRuleGroupAction Wafv2 DeleteRuleGroup action.
 * \value DeleteWebACLAction Wafv2 DeleteWebACL action.
 * \value DescribeManagedRuleGroupAction Wafv2 DescribeManagedRuleGroup action.
 * \value DisassociateWebACLAction Wafv2 DisassociateWebACL action.
 * \value GenerateMobileSdkReleaseUrlAction Wafv2 GenerateMobileSdkReleaseUrl action.
 * \value GetIPSetAction Wafv2 GetIPSet action.
 * \value GetLoggingConfigurationAction Wafv2 GetLoggingConfiguration action.
 * \value GetManagedRuleSetAction Wafv2 GetManagedRuleSet action.
 * \value GetMobileSdkReleaseAction Wafv2 GetMobileSdkRelease action.
 * \value GetPermissionPolicyAction Wafv2 GetPermissionPolicy action.
 * \value GetRateBasedStatementManagedKeysAction Wafv2 GetRateBasedStatementManagedKeys action.
 * \value GetRegexPatternSetAction Wafv2 GetRegexPatternSet action.
 * \value GetRuleGroupAction Wafv2 GetRuleGroup action.
 * \value GetSampledRequestsAction Wafv2 GetSampledRequests action.
 * \value GetWebACLAction Wafv2 GetWebACL action.
 * \value GetWebACLForResourceAction Wafv2 GetWebACLForResource action.
 * \value ListAvailableManagedRuleGroupVersionsAction Wafv2 ListAvailableManagedRuleGroupVersions action.
 * \value ListAvailableManagedRuleGroupsAction Wafv2 ListAvailableManagedRuleGroups action.
 * \value ListIPSetsAction Wafv2 ListIPSets action.
 * \value ListLoggingConfigurationsAction Wafv2 ListLoggingConfigurations action.
 * \value ListManagedRuleSetsAction Wafv2 ListManagedRuleSets action.
 * \value ListMobileSdkReleasesAction Wafv2 ListMobileSdkReleases action.
 * \value ListRegexPatternSetsAction Wafv2 ListRegexPatternSets action.
 * \value ListResourcesForWebACLAction Wafv2 ListResourcesForWebACL action.
 * \value ListRuleGroupsAction Wafv2 ListRuleGroups action.
 * \value ListTagsForResourceAction Wafv2 ListTagsForResource action.
 * \value ListWebACLsAction Wafv2 ListWebACLs action.
 * \value PutLoggingConfigurationAction Wafv2 PutLoggingConfiguration action.
 * \value PutManagedRuleSetVersionsAction Wafv2 PutManagedRuleSetVersions action.
 * \value PutPermissionPolicyAction Wafv2 PutPermissionPolicy action.
 * \value TagResourceAction Wafv2 TagResource action.
 * \value UntagResourceAction Wafv2 UntagResource action.
 * \value UpdateIPSetAction Wafv2 UpdateIPSet action.
 * \value UpdateManagedRuleSetVersionExpiryDateAction Wafv2 UpdateManagedRuleSetVersionExpiryDate action.
 * \value UpdateRegexPatternSetAction Wafv2 UpdateRegexPatternSet action.
 * \value UpdateRuleGroupAction Wafv2 UpdateRuleGroup action.
 * \value UpdateWebACLAction Wafv2 UpdateWebACL action.
 */

/*!
 * Constructs a Wafv2Request object for Wafv2 \a action.
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
 * Returns the Wafv2 action to be performed by this request.
 */
Wafv2Request::Action Wafv2Request::action() const
{
    Q_D(const Wafv2Request);
    return d->action;
}

/*!
 * Returns the name of the Wafv2 action to be performed by this request.
 */
QString Wafv2Request::actionString() const
{
    return Wafv2RequestPrivate::toString(action());
}

/*!
 * Returns the Wafv2 API version implemented by this request.
 */
QString Wafv2Request::apiVersion() const
{
    Q_D(const Wafv2Request);
    return d->apiVersion;
}

/*!
 * Sets the Wafv2 action to be performed by this request to \a action.
 */
void Wafv2Request::setAction(const Action action)
{
    Q_D(Wafv2Request);
    d->action = action;
}

/*!
 * Sets the Wafv2 API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid Wafv2 queue name.
 *
 * @par From Wafv2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Wafv2 queue name, \c false otherwise.
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
 * Returns a network request for the Wafv2 request using the given
 * \a endpoint.
 *
 * This Wafv2 implementation builds request URLs by combining the
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
 * \class QtAws::Wafv2::Wafv2RequestPrivate
 * \brief The Wafv2RequestPrivate class provides private implementation for Wafv2Request.
 * \internal
 *
 * \inmodule QtAwsWafv2
 */

/*!
 * Constructs a Wafv2RequestPrivate object for Wafv2 \a action,
 * with public implementation \a q.
 */
Wafv2RequestPrivate::Wafv2RequestPrivate(const Wafv2Request::Action action, Wafv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-07-29"))
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
 * string representations, appropriate for use with the Wafv2 service's Action
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
        ActionToString(GenerateMobileSdkReleaseUrl);
        ActionToString(GetIPSet);
        ActionToString(GetLoggingConfiguration);
        ActionToString(GetManagedRuleSet);
        ActionToString(GetMobileSdkRelease);
        ActionToString(GetPermissionPolicy);
        ActionToString(GetRateBasedStatementManagedKeys);
        ActionToString(GetRegexPatternSet);
        ActionToString(GetRuleGroup);
        ActionToString(GetSampledRequests);
        ActionToString(GetWebACL);
        ActionToString(GetWebACLForResource);
        ActionToString(ListAvailableManagedRuleGroupVersions);
        ActionToString(ListAvailableManagedRuleGroups);
        ActionToString(ListIPSets);
        ActionToString(ListLoggingConfigurations);
        ActionToString(ListManagedRuleSets);
        ActionToString(ListMobileSdkReleases);
        ActionToString(ListRegexPatternSets);
        ActionToString(ListResourcesForWebACL);
        ActionToString(ListRuleGroups);
        ActionToString(ListTagsForResource);
        ActionToString(ListWebACLs);
        ActionToString(PutLoggingConfiguration);
        ActionToString(PutManagedRuleSetVersions);
        ActionToString(PutPermissionPolicy);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateIPSet);
        ActionToString(UpdateManagedRuleSetVersionExpiryDate);
        ActionToString(UpdateRegexPatternSet);
        ActionToString(UpdateRuleGroup);
        ActionToString(UpdateWebACL);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Wafv2
} // namespace QtAws

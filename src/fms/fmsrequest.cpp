// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "fmsrequest.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::FmsRequest
 * \brief The FmsRequest class provides an interface for Fms requests.
 *
 * \inmodule QtAwsFms
 */

/*!
 * \enum FmsRequest::Action
 *
 * This enum describes the actions that can be performed as Fms
 * requests.
 *
 * \value AssociateAdminAccountAction Fms AssociateAdminAccount action.
 * \value AssociateThirdPartyFirewallAction Fms AssociateThirdPartyFirewall action.
 * \value DeleteAppsListAction Fms DeleteAppsList action.
 * \value DeleteNotificationChannelAction Fms DeleteNotificationChannel action.
 * \value DeletePolicyAction Fms DeletePolicy action.
 * \value DeleteProtocolsListAction Fms DeleteProtocolsList action.
 * \value DisassociateAdminAccountAction Fms DisassociateAdminAccount action.
 * \value DisassociateThirdPartyFirewallAction Fms DisassociateThirdPartyFirewall action.
 * \value GetAdminAccountAction Fms GetAdminAccount action.
 * \value GetAppsListAction Fms GetAppsList action.
 * \value GetComplianceDetailAction Fms GetComplianceDetail action.
 * \value GetNotificationChannelAction Fms GetNotificationChannel action.
 * \value GetPolicyAction Fms GetPolicy action.
 * \value GetProtectionStatusAction Fms GetProtectionStatus action.
 * \value GetProtocolsListAction Fms GetProtocolsList action.
 * \value GetThirdPartyFirewallAssociationStatusAction Fms GetThirdPartyFirewallAssociationStatus action.
 * \value GetViolationDetailsAction Fms GetViolationDetails action.
 * \value ListAppsListsAction Fms ListAppsLists action.
 * \value ListComplianceStatusAction Fms ListComplianceStatus action.
 * \value ListMemberAccountsAction Fms ListMemberAccounts action.
 * \value ListPoliciesAction Fms ListPolicies action.
 * \value ListProtocolsListsAction Fms ListProtocolsLists action.
 * \value ListTagsForResourceAction Fms ListTagsForResource action.
 * \value ListThirdPartyFirewallFirewallPoliciesAction Fms ListThirdPartyFirewallFirewallPolicies action.
 * \value PutAppsListAction Fms PutAppsList action.
 * \value PutNotificationChannelAction Fms PutNotificationChannel action.
 * \value PutPolicyAction Fms PutPolicy action.
 * \value PutProtocolsListAction Fms PutProtocolsList action.
 * \value TagResourceAction Fms TagResource action.
 * \value UntagResourceAction Fms UntagResource action.
 */

/*!
 * Constructs a FmsRequest object for Fms \a action.
 */
FmsRequest::FmsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new FmsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FmsRequest::FmsRequest(const FmsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new FmsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FmsRequest object to be equal to \a other.
 */
FmsRequest& FmsRequest::operator=(const FmsRequest &other)
{
    Q_D(FmsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FmsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FmsRequestPrivate.
 */
FmsRequest::FmsRequest(FmsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Fms action to be performed by this request.
 */
FmsRequest::Action FmsRequest::action() const
{
    Q_D(const FmsRequest);
    return d->action;
}

/*!
 * Returns the name of the Fms action to be performed by this request.
 */
QString FmsRequest::actionString() const
{
    return FmsRequestPrivate::toString(action());
}

/*!
 * Returns the Fms API version implemented by this request.
 */
QString FmsRequest::apiVersion() const
{
    Q_D(const FmsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Fms action to be performed by this request to \a action.
 */
void FmsRequest::setAction(const Action action)
{
    Q_D(FmsRequest);
    d->action = action;
}

/*!
 * Sets the Fms API version to include in this request to \a version.
 */
void FmsRequest::setApiVersion(const QString &version)
{
    Q_D(FmsRequest);
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
bool FmsRequest::operator==(const FmsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Fms queue name.
 *
 * @par From Fms FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Fms queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FmsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FmsRequest::clearParameter(const QString &name)
{
    Q_D(FmsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FmsRequest::clearParameters()
{
    Q_D(FmsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FmsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FmsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FmsRequest::parameters() const
{
    Q_D(const FmsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FmsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FmsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FmsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FmsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Fms request using the given
 * \a endpoint.
 *
 * This Fms implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FmsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FmsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Fms::FmsRequestPrivate
 * \brief The FmsRequestPrivate class provides private implementation for FmsRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a FmsRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
FmsRequestPrivate::FmsRequestPrivate(const FmsRequest::Action action, FmsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FmsRequest class's copy constructor.
 */
FmsRequestPrivate::FmsRequestPrivate(const FmsRequestPrivate &other,
                                     FmsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FmsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Fms service's Action
 * query parameters.
 */
QString FmsRequestPrivate::toString(const FmsRequest::Action &action)
{
    #define ActionToString(action) \
        case FmsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateAdminAccount);
        ActionToString(AssociateThirdPartyFirewall);
        ActionToString(DeleteAppsList);
        ActionToString(DeleteNotificationChannel);
        ActionToString(DeletePolicy);
        ActionToString(DeleteProtocolsList);
        ActionToString(DisassociateAdminAccount);
        ActionToString(DisassociateThirdPartyFirewall);
        ActionToString(GetAdminAccount);
        ActionToString(GetAppsList);
        ActionToString(GetComplianceDetail);
        ActionToString(GetNotificationChannel);
        ActionToString(GetPolicy);
        ActionToString(GetProtectionStatus);
        ActionToString(GetProtocolsList);
        ActionToString(GetThirdPartyFirewallAssociationStatus);
        ActionToString(GetViolationDetails);
        ActionToString(ListAppsLists);
        ActionToString(ListComplianceStatus);
        ActionToString(ListMemberAccounts);
        ActionToString(ListPolicies);
        ActionToString(ListProtocolsLists);
        ActionToString(ListTagsForResource);
        ActionToString(ListThirdPartyFirewallFirewallPolicies);
        ActionToString(PutAppsList);
        ActionToString(PutNotificationChannel);
        ActionToString(PutPolicy);
        ActionToString(PutProtocolsList);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Fms
} // namespace QtAws

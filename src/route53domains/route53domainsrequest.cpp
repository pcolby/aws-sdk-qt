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

#include "route53domainsrequest.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::Route53DomainsRequest
 * \brief The Route53DomainsRequest class provides an interface for Route53Domains requests.
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * \enum Route53DomainsRequest::Action
 *
 * This enum describes the actions that can be performed as Route53Domains
 * requests.
 *
 * \value CheckDomainAvailabilityAction Route53Domains CheckDomainAvailability action.
 * \value CheckDomainTransferabilityAction Route53Domains CheckDomainTransferability action.
 * \value DeleteTagsForDomainAction Route53Domains DeleteTagsForDomain action.
 * \value DisableDomainAutoRenewAction Route53Domains DisableDomainAutoRenew action.
 * \value DisableDomainTransferLockAction Route53Domains DisableDomainTransferLock action.
 * \value EnableDomainAutoRenewAction Route53Domains EnableDomainAutoRenew action.
 * \value EnableDomainTransferLockAction Route53Domains EnableDomainTransferLock action.
 * \value GetContactReachabilityStatusAction Route53Domains GetContactReachabilityStatus action.
 * \value GetDomainDetailAction Route53Domains GetDomainDetail action.
 * \value GetDomainSuggestionsAction Route53Domains GetDomainSuggestions action.
 * \value GetOperationDetailAction Route53Domains GetOperationDetail action.
 * \value ListDomainsAction Route53Domains ListDomains action.
 * \value ListOperationsAction Route53Domains ListOperations action.
 * \value ListTagsForDomainAction Route53Domains ListTagsForDomain action.
 * \value RegisterDomainAction Route53Domains RegisterDomain action.
 * \value RenewDomainAction Route53Domains RenewDomain action.
 * \value ResendContactReachabilityEmailAction Route53Domains ResendContactReachabilityEmail action.
 * \value RetrieveDomainAuthCodeAction Route53Domains RetrieveDomainAuthCode action.
 * \value TransferDomainAction Route53Domains TransferDomain action.
 * \value UpdateDomainContactAction Route53Domains UpdateDomainContact action.
 * \value UpdateDomainContactPrivacyAction Route53Domains UpdateDomainContactPrivacy action.
 * \value UpdateDomainNameserversAction Route53Domains UpdateDomainNameservers action.
 * \value UpdateTagsForDomainAction Route53Domains UpdateTagsForDomain action.
 * \value ViewBillingAction Route53Domains ViewBilling action.
 */

/*!
 * Constructs a Route53DomainsRequest object for Route53Domains \a action.
 */
Route53DomainsRequest::Route53DomainsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Route53DomainsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Route53DomainsRequest::Route53DomainsRequest(const Route53DomainsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new Route53DomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Route53DomainsRequest object to be equal to \a other.
 */
Route53DomainsRequest& Route53DomainsRequest::operator=(const Route53DomainsRequest &other)
{
    Q_D(Route53DomainsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Route53DomainsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Route53DomainsRequestPrivate.
 */
Route53DomainsRequest::Route53DomainsRequest(Route53DomainsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Route53Domains action to be performed by this request.
 */
Route53DomainsRequest::Action Route53DomainsRequest::action() const
{
    Q_D(const Route53DomainsRequest);
    return d->action;
}

/*!
 * Returns the name of the Route53Domains action to be performed by this request.
 */
QString Route53DomainsRequest::actionString() const
{
    return Route53DomainsRequestPrivate::toString(action());
}

/*!
 * Returns the Route53Domains API version implemented by this request.
 */
QString Route53DomainsRequest::apiVersion() const
{
    Q_D(const Route53DomainsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Route53Domains action to be performed by this request to \a action.
 */
void Route53DomainsRequest::setAction(const Action action)
{
    Q_D(Route53DomainsRequest);
    d->action = action;
}

/*!
 * Sets the Route53Domains API version to include in this request to \a version.
 */
void Route53DomainsRequest::setApiVersion(const QString &version)
{
    Q_D(Route53DomainsRequest);
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
bool Route53DomainsRequest::operator==(const Route53DomainsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Route53Domains queue name.
 *
 * @par From Route53Domains FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Route53Domains queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Route53DomainsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Route53DomainsRequest::clearParameter(const QString &name)
{
    Q_D(Route53DomainsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Route53DomainsRequest::clearParameters()
{
    Q_D(Route53DomainsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Route53DomainsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Route53DomainsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Route53DomainsRequest::parameters() const
{
    Q_D(const Route53DomainsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Route53DomainsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Route53DomainsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Route53DomainsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(Route53DomainsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Route53Domains request using the given
 * \a endpoint.
 *
 * This Route53Domains implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Route53DomainsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Route53DomainsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Route53Domains::Route53DomainsRequestPrivate
 * \brief The Route53DomainsRequestPrivate class provides private implementation for Route53DomainsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a Route53DomainsRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
Route53DomainsRequestPrivate::Route53DomainsRequestPrivate(const Route53DomainsRequest::Action action, Route53DomainsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Route53DomainsRequest class's copy constructor.
 */
Route53DomainsRequestPrivate::Route53DomainsRequestPrivate(const Route53DomainsRequestPrivate &other,
                                     Route53DomainsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Route53DomainsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Route53Domains service's Action
 * query parameters.
 */
QString Route53DomainsRequestPrivate::toString(const Route53DomainsRequest::Action &action)
{
    #define ActionToString(action) \
        case Route53DomainsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Route53Domains
} // namespace QtAws

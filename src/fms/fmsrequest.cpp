/*
    Copyright 2013-2019 Paul Colby

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

#include "fmsrequest.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::FmsRequest
 * \brief The FmsRequest class provides an interface for FMS requests.
 *
 * \inmodule QtAwsFMS
 */

/*!
 * \enum FmsRequest::Action
 *
 * This enum describes the actions that can be performed as FMS
 * requests.
 *
 * \value AssociateAdminAccountAction FMS AssociateAdminAccount action.
 * \value DeleteNotificationChannelAction FMS DeleteNotificationChannel action.
 * \value DeletePolicyAction FMS DeletePolicy action.
 * \value DisassociateAdminAccountAction FMS DisassociateAdminAccount action.
 * \value GetAdminAccountAction FMS GetAdminAccount action.
 * \value GetComplianceDetailAction FMS GetComplianceDetail action.
 * \value GetNotificationChannelAction FMS GetNotificationChannel action.
 * \value GetPolicyAction FMS GetPolicy action.
 * \value GetProtectionStatusAction FMS GetProtectionStatus action.
 * \value ListComplianceStatusAction FMS ListComplianceStatus action.
 * \value ListMemberAccountsAction FMS ListMemberAccounts action.
 * \value ListPoliciesAction FMS ListPolicies action.
 * \value PutNotificationChannelAction FMS PutNotificationChannel action.
 * \value PutPolicyAction FMS PutPolicy action.
 */

/*!
 * Constructs a FmsRequest object for FMS \a action.
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
 * Returns the FMS action to be performed by this request.
 */
FmsRequest::Action FmsRequest::action() const
{
    Q_D(const FmsRequest);
    return d->action;
}

/*!
 * Returns the name of the FMS action to be performed by this request.
 */
QString FmsRequest::actionString() const
{
    return FmsRequestPrivate::toString(action());
}

/*!
 * Returns the FMS API version implemented by this request.
 */
QString FmsRequest::apiVersion() const
{
    Q_D(const FmsRequest);
    return d->apiVersion;
}

/*!
 * Sets the FMS action to be performed by this request to \a action.
 */
void FmsRequest::setAction(const Action action)
{
    Q_D(FmsRequest);
    d->action = action;
}

/*!
 * Sets the FMS API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid FMS queue name.
 *
 * @par From FMS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid FMS queue name, \c false otherwise.
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
 * Returns a network request for the FMS request using the given
 * \a endpoint.
 *
 * This FMS implementation builds request URLs by combining the
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
 * \class QtAws::FMS::FmsRequestPrivate
 * \brief The FmsRequestPrivate class provides private implementation for FmsRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a FmsRequestPrivate object for FMS \a action,
 * with public implementation \a q.
 */
FmsRequestPrivate::FmsRequestPrivate(const FmsRequest::Action action, FmsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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
 * string representations, appropriate for use with the FMS service's Action
 * query parameters.
 */
QString FmsRequestPrivate::toString(const FmsRequest::Action &action)
{
    #define ActionToString(action) \
        case FmsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace FMS
} // namespace QtAws

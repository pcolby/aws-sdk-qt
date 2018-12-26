/*
    Copyright 2013-2018 Paul Colby

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

#include "connectrequest.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ConnectRequest
 * \brief The ConnectRequest class provides an interface for Connect requests.
 *
 * \inmodule QtAwsConnect
 */

/*!
 * \enum ConnectRequest::Action
 *
 * This enum describes the actions that can be performed as Connect
 * requests.
 *
 * \value CreateUserAction Connect CreateUser action.
 * \value DeleteUserAction Connect DeleteUser action.
 * \value DescribeUserAction Connect DescribeUser action.
 * \value DescribeUserHierarchyGroupAction Connect DescribeUserHierarchyGroup action.
 * \value DescribeUserHierarchyStructureAction Connect DescribeUserHierarchyStructure action.
 * \value GetContactAttributesAction Connect GetContactAttributes action.
 * \value GetCurrentMetricDataAction Connect GetCurrentMetricData action.
 * \value GetFederationTokenAction Connect GetFederationToken action.
 * \value GetMetricDataAction Connect GetMetricData action.
 * \value ListRoutingProfilesAction Connect ListRoutingProfiles action.
 * \value ListSecurityProfilesAction Connect ListSecurityProfiles action.
 * \value ListUserHierarchyGroupsAction Connect ListUserHierarchyGroups action.
 * \value ListUsersAction Connect ListUsers action.
 * \value StartOutboundVoiceContactAction Connect StartOutboundVoiceContact action.
 * \value StopContactAction Connect StopContact action.
 * \value UpdateContactAttributesAction Connect UpdateContactAttributes action.
 * \value UpdateUserHierarchyAction Connect UpdateUserHierarchy action.
 * \value UpdateUserIdentityInfoAction Connect UpdateUserIdentityInfo action.
 * \value UpdateUserPhoneConfigAction Connect UpdateUserPhoneConfig action.
 * \value UpdateUserRoutingProfileAction Connect UpdateUserRoutingProfile action.
 * \value UpdateUserSecurityProfilesAction Connect UpdateUserSecurityProfiles action.
 */

/*!
 * Constructs a ConnectRequest object for Connect \a action.
 */
ConnectRequest::ConnectRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ConnectRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ConnectRequest::ConnectRequest(const ConnectRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ConnectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ConnectRequest object to be equal to \a other.
 */
ConnectRequest& ConnectRequest::operator=(const ConnectRequest &other)
{
    Q_D(ConnectRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ConnectRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectRequestPrivate.
 */
ConnectRequest::ConnectRequest(ConnectRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Connect action to be performed by this request.
 */
ConnectRequest::Action ConnectRequest::action() const
{
    Q_D(const ConnectRequest);
    return d->action;
}

/*!
 * Returns the name of the Connect action to be performed by this request.
 */
QString ConnectRequest::actionString() const
{
    return ConnectRequestPrivate::toString(action());
}

/*!
 * Returns the Connect API version implemented by this request.
 */
QString ConnectRequest::apiVersion() const
{
    Q_D(const ConnectRequest);
    return d->apiVersion;
}

/*!
 * Sets the Connect action to be performed by this request to \a action.
 */
void ConnectRequest::setAction(const Action action)
{
    Q_D(ConnectRequest);
    d->action = action;
}

/*!
 * Sets the Connect API version to include in this request to \a version.
 */
void ConnectRequest::setApiVersion(const QString &version)
{
    Q_D(ConnectRequest);
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
bool ConnectRequest::operator==(const ConnectRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Connect queue name.
 *
 * @par From Connect FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Connect queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ConnectRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ConnectRequest::clearParameter(const QString &name)
{
    Q_D(ConnectRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ConnectRequest::clearParameters()
{
    Q_D(ConnectRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ConnectRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ConnectRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ConnectRequest::parameters() const
{
    Q_D(const ConnectRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ConnectRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ConnectRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ConnectRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ConnectRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Connect request using the given
 * \a endpoint.
 *
 * This Connect implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ConnectRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ConnectRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Connect::ConnectRequestPrivate
 * \brief The ConnectRequestPrivate class provides private implementation for ConnectRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
ConnectRequestPrivate::ConnectRequestPrivate(const ConnectRequest::Action action, ConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ConnectRequest class's copy constructor.
 */
ConnectRequestPrivate::ConnectRequestPrivate(const ConnectRequestPrivate &other,
                                     ConnectRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ConnectRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Connect service's Action
 * query parameters.
 */
QString ConnectRequestPrivate::toString(const ConnectRequest::Action &action)
{
    #define ActionToString(action) \
        case ConnectRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Connect
} // namespace QtAws

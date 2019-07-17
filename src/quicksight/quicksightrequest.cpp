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

#include "quicksightrequest.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::QuickSightRequest
 * \brief The QuickSightRequest class provides an interface for QuickSight requests.
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * \enum QuickSightRequest::Action
 *
 * This enum describes the actions that can be performed as QuickSight
 * requests.
 *
 * \value CreateGroupAction QuickSight CreateGroup action.
 * \value CreateGroupMembershipAction QuickSight CreateGroupMembership action.
 * \value DeleteGroupAction QuickSight DeleteGroup action.
 * \value DeleteGroupMembershipAction QuickSight DeleteGroupMembership action.
 * \value DeleteUserAction QuickSight DeleteUser action.
 * \value DescribeGroupAction QuickSight DescribeGroup action.
 * \value DescribeUserAction QuickSight DescribeUser action.
 * \value GetDashboardEmbedUrlAction QuickSight GetDashboardEmbedUrl action.
 * \value ListGroupMembershipsAction QuickSight ListGroupMemberships action.
 * \value ListGroupsAction QuickSight ListGroups action.
 * \value ListUserGroupsAction QuickSight ListUserGroups action.
 * \value ListUsersAction QuickSight ListUsers action.
 * \value RegisterUserAction QuickSight RegisterUser action.
 * \value UpdateGroupAction QuickSight UpdateGroup action.
 * \value UpdateUserAction QuickSight UpdateUser action.
 */

/*!
 * Constructs a QuickSightRequest object for QuickSight \a action.
 */
QuickSightRequest::QuickSightRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new QuickSightRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
QuickSightRequest::QuickSightRequest(const QuickSightRequest &other)
    : QtAws::Core::AwsAbstractRequest(new QuickSightRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the QuickSightRequest object to be equal to \a other.
 */
QuickSightRequest& QuickSightRequest::operator=(const QuickSightRequest &other)
{
    Q_D(QuickSightRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa QuickSightRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from QuickSightRequestPrivate.
 */
QuickSightRequest::QuickSightRequest(QuickSightRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the QuickSight action to be performed by this request.
 */
QuickSightRequest::Action QuickSightRequest::action() const
{
    Q_D(const QuickSightRequest);
    return d->action;
}

/*!
 * Returns the name of the QuickSight action to be performed by this request.
 */
QString QuickSightRequest::actionString() const
{
    return QuickSightRequestPrivate::toString(action());
}

/*!
 * Returns the QuickSight API version implemented by this request.
 */
QString QuickSightRequest::apiVersion() const
{
    Q_D(const QuickSightRequest);
    return d->apiVersion;
}

/*!
 * Sets the QuickSight action to be performed by this request to \a action.
 */
void QuickSightRequest::setAction(const Action action)
{
    Q_D(QuickSightRequest);
    d->action = action;
}

/*!
 * Sets the QuickSight API version to include in this request to \a version.
 */
void QuickSightRequest::setApiVersion(const QString &version)
{
    Q_D(QuickSightRequest);
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
bool QuickSightRequest::operator==(const QuickSightRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid QuickSight queue name.
 *
 * @par From QuickSight FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid QuickSight queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool QuickSightRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int QuickSightRequest::clearParameter(const QString &name)
{
    Q_D(QuickSightRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void QuickSightRequest::clearParameters()
{
    Q_D(QuickSightRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant QuickSightRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const QuickSightRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &QuickSightRequest::parameters() const
{
    Q_D(const QuickSightRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void QuickSightRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(QuickSightRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void QuickSightRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(QuickSightRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the QuickSight request using the given
 * \a endpoint.
 *
 * This QuickSight implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest QuickSightRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const QuickSightRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::QuickSight::QuickSightRequestPrivate
 * \brief The QuickSightRequestPrivate class provides private implementation for QuickSightRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
QuickSightRequestPrivate::QuickSightRequestPrivate(const QuickSightRequest::Action action, QuickSightRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the QuickSightRequest class's copy constructor.
 */
QuickSightRequestPrivate::QuickSightRequestPrivate(const QuickSightRequestPrivate &other,
                                     QuickSightRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts QuickSightRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the QuickSight service's Action
 * query parameters.
 */
QString QuickSightRequestPrivate::toString(const QuickSightRequest::Action &action)
{
    #define ActionToString(action) \
        case QuickSightRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace QuickSight
} // namespace QtAws

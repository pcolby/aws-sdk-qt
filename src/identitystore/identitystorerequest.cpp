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

#include "identitystorerequest.h"
#include "identitystorerequest_p.h"

namespace QtAws {
namespace IdentityStore {

/*!
 * \class QtAws::IdentityStore::IdentityStoreRequest
 * \brief The IdentityStoreRequest class provides an interface for IdentityStore requests.
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * \enum IdentityStoreRequest::Action
 *
 * This enum describes the actions that can be performed as IdentityStore
 * requests.
 *
 * \value CreateGroupAction IdentityStore CreateGroup action.
 * \value CreateGroupMembershipAction IdentityStore CreateGroupMembership action.
 * \value CreateUserAction IdentityStore CreateUser action.
 * \value DeleteGroupAction IdentityStore DeleteGroup action.
 * \value DeleteGroupMembershipAction IdentityStore DeleteGroupMembership action.
 * \value DeleteUserAction IdentityStore DeleteUser action.
 * \value DescribeGroupAction IdentityStore DescribeGroup action.
 * \value DescribeGroupMembershipAction IdentityStore DescribeGroupMembership action.
 * \value DescribeUserAction IdentityStore DescribeUser action.
 * \value GetGroupIdAction IdentityStore GetGroupId action.
 * \value GetGroupMembershipIdAction IdentityStore GetGroupMembershipId action.
 * \value GetUserIdAction IdentityStore GetUserId action.
 * \value IsMemberInGroupsAction IdentityStore IsMemberInGroups action.
 * \value ListGroupMembershipsAction IdentityStore ListGroupMemberships action.
 * \value ListGroupMembershipsForMemberAction IdentityStore ListGroupMembershipsForMember action.
 * \value ListGroupsAction IdentityStore ListGroups action.
 * \value ListUsersAction IdentityStore ListUsers action.
 * \value UpdateGroupAction IdentityStore UpdateGroup action.
 * \value UpdateUserAction IdentityStore UpdateUser action.
 */

/*!
 * Constructs a IdentityStoreRequest object for IdentityStore \a action.
 */
IdentityStoreRequest::IdentityStoreRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IdentityStoreRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IdentityStoreRequest::IdentityStoreRequest(const IdentityStoreRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IdentityStoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IdentityStoreRequest object to be equal to \a other.
 */
IdentityStoreRequest& IdentityStoreRequest::operator=(const IdentityStoreRequest &other)
{
    Q_D(IdentityStoreRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IdentityStoreRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IdentityStoreRequestPrivate.
 */
IdentityStoreRequest::IdentityStoreRequest(IdentityStoreRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IdentityStore action to be performed by this request.
 */
IdentityStoreRequest::Action IdentityStoreRequest::action() const
{
    Q_D(const IdentityStoreRequest);
    return d->action;
}

/*!
 * Returns the name of the IdentityStore action to be performed by this request.
 */
QString IdentityStoreRequest::actionString() const
{
    return IdentityStoreRequestPrivate::toString(action());
}

/*!
 * Returns the IdentityStore API version implemented by this request.
 */
QString IdentityStoreRequest::apiVersion() const
{
    Q_D(const IdentityStoreRequest);
    return d->apiVersion;
}

/*!
 * Sets the IdentityStore action to be performed by this request to \a action.
 */
void IdentityStoreRequest::setAction(const Action action)
{
    Q_D(IdentityStoreRequest);
    d->action = action;
}

/*!
 * Sets the IdentityStore API version to include in this request to \a version.
 */
void IdentityStoreRequest::setApiVersion(const QString &version)
{
    Q_D(IdentityStoreRequest);
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
bool IdentityStoreRequest::operator==(const IdentityStoreRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IdentityStore queue name.
 *
 * @par From IdentityStore FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IdentityStore queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IdentityStoreRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IdentityStoreRequest::clearParameter(const QString &name)
{
    Q_D(IdentityStoreRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IdentityStoreRequest::clearParameters()
{
    Q_D(IdentityStoreRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IdentityStoreRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IdentityStoreRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IdentityStoreRequest::parameters() const
{
    Q_D(const IdentityStoreRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IdentityStoreRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IdentityStoreRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IdentityStoreRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IdentityStoreRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IdentityStore request using the given
 * \a endpoint.
 *
 * This IdentityStore implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IdentityStoreRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IdentityStoreRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IdentityStore::IdentityStoreRequestPrivate
 * \brief The IdentityStoreRequestPrivate class provides private implementation for IdentityStoreRequest.
 * \internal
 *
 * \inmodule QtAwsIdentityStore
 */

/*!
 * Constructs a IdentityStoreRequestPrivate object for IdentityStore \a action,
 * with public implementation \a q.
 */
IdentityStoreRequestPrivate::IdentityStoreRequestPrivate(const IdentityStoreRequest::Action action, IdentityStoreRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-06-15"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IdentityStoreRequest class's copy constructor.
 */
IdentityStoreRequestPrivate::IdentityStoreRequestPrivate(const IdentityStoreRequestPrivate &other,
                                     IdentityStoreRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IdentityStoreRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IdentityStore service's Action
 * query parameters.
 */
QString IdentityStoreRequestPrivate::toString(const IdentityStoreRequest::Action &action)
{
    #define ActionToString(action) \
        case IdentityStoreRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateGroup);
        ActionToString(CreateGroupMembership);
        ActionToString(CreateUser);
        ActionToString(DeleteGroup);
        ActionToString(DeleteGroupMembership);
        ActionToString(DeleteUser);
        ActionToString(DescribeGroup);
        ActionToString(DescribeGroupMembership);
        ActionToString(DescribeUser);
        ActionToString(GetGroupId);
        ActionToString(GetGroupMembershipId);
        ActionToString(GetUserId);
        ActionToString(IsMemberInGroups);
        ActionToString(ListGroupMemberships);
        ActionToString(ListGroupMembershipsForMember);
        ActionToString(ListGroups);
        ActionToString(ListUsers);
        ActionToString(UpdateGroup);
        ActionToString(UpdateUser);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IdentityStore
} // namespace QtAws

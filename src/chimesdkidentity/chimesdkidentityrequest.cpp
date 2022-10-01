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

#include "chimesdkidentityrequest.h"
#include "chimesdkidentityrequest_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ChimeSdkIdentityRequest
 * \brief The ChimeSdkIdentityRequest class provides an interface for ChimeSdkIdentity requests.
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * \enum ChimeSdkIdentityRequest::Action
 *
 * This enum describes the actions that can be performed as ChimeSdkIdentity
 * requests.
 *
 * \value CreateAppInstanceAction ChimeSdkIdentity CreateAppInstance action.
 * \value CreateAppInstanceAdminAction ChimeSdkIdentity CreateAppInstanceAdmin action.
 * \value CreateAppInstanceUserAction ChimeSdkIdentity CreateAppInstanceUser action.
 * \value DeleteAppInstanceAction ChimeSdkIdentity DeleteAppInstance action.
 * \value DeleteAppInstanceAdminAction ChimeSdkIdentity DeleteAppInstanceAdmin action.
 * \value DeleteAppInstanceUserAction ChimeSdkIdentity DeleteAppInstanceUser action.
 * \value DeregisterAppInstanceUserEndpointAction ChimeSdkIdentity DeregisterAppInstanceUserEndpoint action.
 * \value DescribeAppInstanceAction ChimeSdkIdentity DescribeAppInstance action.
 * \value DescribeAppInstanceAdminAction ChimeSdkIdentity DescribeAppInstanceAdmin action.
 * \value DescribeAppInstanceUserAction ChimeSdkIdentity DescribeAppInstanceUser action.
 * \value DescribeAppInstanceUserEndpointAction ChimeSdkIdentity DescribeAppInstanceUserEndpoint action.
 * \value GetAppInstanceRetentionSettingsAction ChimeSdkIdentity GetAppInstanceRetentionSettings action.
 * \value ListAppInstanceAdminsAction ChimeSdkIdentity ListAppInstanceAdmins action.
 * \value ListAppInstanceUserEndpointsAction ChimeSdkIdentity ListAppInstanceUserEndpoints action.
 * \value ListAppInstanceUsersAction ChimeSdkIdentity ListAppInstanceUsers action.
 * \value ListAppInstancesAction ChimeSdkIdentity ListAppInstances action.
 * \value ListTagsForResourceAction ChimeSdkIdentity ListTagsForResource action.
 * \value PutAppInstanceRetentionSettingsAction ChimeSdkIdentity PutAppInstanceRetentionSettings action.
 * \value RegisterAppInstanceUserEndpointAction ChimeSdkIdentity RegisterAppInstanceUserEndpoint action.
 * \value TagResourceAction ChimeSdkIdentity TagResource action.
 * \value UntagResourceAction ChimeSdkIdentity UntagResource action.
 * \value UpdateAppInstanceAction ChimeSdkIdentity UpdateAppInstance action.
 * \value UpdateAppInstanceUserAction ChimeSdkIdentity UpdateAppInstanceUser action.
 * \value UpdateAppInstanceUserEndpointAction ChimeSdkIdentity UpdateAppInstanceUserEndpoint action.
 */

/*!
 * Constructs a ChimeSdkIdentityRequest object for ChimeSdkIdentity \a action.
 */
ChimeSdkIdentityRequest::ChimeSdkIdentityRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkIdentityRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ChimeSdkIdentityRequest::ChimeSdkIdentityRequest(const ChimeSdkIdentityRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ChimeSdkIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ChimeSdkIdentityRequest object to be equal to \a other.
 */
ChimeSdkIdentityRequest& ChimeSdkIdentityRequest::operator=(const ChimeSdkIdentityRequest &other)
{
    Q_D(ChimeSdkIdentityRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ChimeSdkIdentityRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeSdkIdentityRequestPrivate.
 */
ChimeSdkIdentityRequest::ChimeSdkIdentityRequest(ChimeSdkIdentityRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ChimeSdkIdentity action to be performed by this request.
 */
ChimeSdkIdentityRequest::Action ChimeSdkIdentityRequest::action() const
{
    Q_D(const ChimeSdkIdentityRequest);
    return d->action;
}

/*!
 * Returns the name of the ChimeSdkIdentity action to be performed by this request.
 */
QString ChimeSdkIdentityRequest::actionString() const
{
    return ChimeSdkIdentityRequestPrivate::toString(action());
}

/*!
 * Returns the ChimeSdkIdentity API version implemented by this request.
 */
QString ChimeSdkIdentityRequest::apiVersion() const
{
    Q_D(const ChimeSdkIdentityRequest);
    return d->apiVersion;
}

/*!
 * Sets the ChimeSdkIdentity action to be performed by this request to \a action.
 */
void ChimeSdkIdentityRequest::setAction(const Action action)
{
    Q_D(ChimeSdkIdentityRequest);
    d->action = action;
}

/*!
 * Sets the ChimeSdkIdentity API version to include in this request to \a version.
 */
void ChimeSdkIdentityRequest::setApiVersion(const QString &version)
{
    Q_D(ChimeSdkIdentityRequest);
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
bool ChimeSdkIdentityRequest::operator==(const ChimeSdkIdentityRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ChimeSdkIdentity queue name.
 *
 * @par From ChimeSdkIdentity FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ChimeSdkIdentity queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ChimeSdkIdentityRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ChimeSdkIdentityRequest::clearParameter(const QString &name)
{
    Q_D(ChimeSdkIdentityRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ChimeSdkIdentityRequest::clearParameters()
{
    Q_D(ChimeSdkIdentityRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ChimeSdkIdentityRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ChimeSdkIdentityRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ChimeSdkIdentityRequest::parameters() const
{
    Q_D(const ChimeSdkIdentityRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ChimeSdkIdentityRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ChimeSdkIdentityRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ChimeSdkIdentityRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ChimeSdkIdentityRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ChimeSdkIdentity request using the given
 * \a endpoint.
 *
 * This ChimeSdkIdentity implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ChimeSdkIdentityRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ChimeSdkIdentityRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ChimeSdkIdentity::ChimeSdkIdentityRequestPrivate
 * \brief The ChimeSdkIdentityRequestPrivate class provides private implementation for ChimeSdkIdentityRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ChimeSdkIdentityRequestPrivate object for ChimeSdkIdentity \a action,
 * with public implementation \a q.
 */
ChimeSdkIdentityRequestPrivate::ChimeSdkIdentityRequestPrivate(const ChimeSdkIdentityRequest::Action action, ChimeSdkIdentityRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-04-20"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ChimeSdkIdentityRequest class's copy constructor.
 */
ChimeSdkIdentityRequestPrivate::ChimeSdkIdentityRequestPrivate(const ChimeSdkIdentityRequestPrivate &other,
                                     ChimeSdkIdentityRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ChimeSdkIdentityRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ChimeSdkIdentity service's Action
 * query parameters.
 */
QString ChimeSdkIdentityRequestPrivate::toString(const ChimeSdkIdentityRequest::Action &action)
{
    #define ActionToString(action) \
        case ChimeSdkIdentityRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateAppInstance);
        ActionToString(CreateAppInstanceAdmin);
        ActionToString(CreateAppInstanceUser);
        ActionToString(DeleteAppInstance);
        ActionToString(DeleteAppInstanceAdmin);
        ActionToString(DeleteAppInstanceUser);
        ActionToString(DeregisterAppInstanceUserEndpoint);
        ActionToString(DescribeAppInstance);
        ActionToString(DescribeAppInstanceAdmin);
        ActionToString(DescribeAppInstanceUser);
        ActionToString(DescribeAppInstanceUserEndpoint);
        ActionToString(GetAppInstanceRetentionSettings);
        ActionToString(ListAppInstanceAdmins);
        ActionToString(ListAppInstanceUserEndpoints);
        ActionToString(ListAppInstanceUsers);
        ActionToString(ListAppInstances);
        ActionToString(ListTagsForResource);
        ActionToString(PutAppInstanceRetentionSettings);
        ActionToString(RegisterAppInstanceUserEndpoint);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAppInstance);
        ActionToString(UpdateAppInstanceUser);
        ActionToString(UpdateAppInstanceUserEndpoint);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ChimeSdkIdentity
} // namespace QtAws

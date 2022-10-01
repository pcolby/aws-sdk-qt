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

#include "apigatewaymanagementrequest.h"
#include "apigatewaymanagementrequest_p.h"

namespace QtAws {
namespace ApiGatewayManagement {

/*!
 * \class QtAws::ApiGatewayManagement::ApiGatewayManagementRequest
 * \brief The ApiGatewayManagementRequest class provides an interface for ApiGatewayManagement requests.
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * \enum ApiGatewayManagementRequest::Action
 *
 * This enum describes the actions that can be performed as ApiGatewayManagement
 * requests.
 *
 * \value DeleteConnectionAction ApiGatewayManagement DeleteConnection action.
 * \value GetConnectionAction ApiGatewayManagement GetConnection action.
 * \value PostToConnectionAction ApiGatewayManagement PostToConnection action.
 */

/*!
 * Constructs a ApiGatewayManagementRequest object for ApiGatewayManagement \a action.
 */
ApiGatewayManagementRequest::ApiGatewayManagementRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ApiGatewayManagementRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApiGatewayManagementRequest::ApiGatewayManagementRequest(const ApiGatewayManagementRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ApiGatewayManagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApiGatewayManagementRequest object to be equal to \a other.
 */
ApiGatewayManagementRequest& ApiGatewayManagementRequest::operator=(const ApiGatewayManagementRequest &other)
{
    Q_D(ApiGatewayManagementRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApiGatewayManagementRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayManagementRequestPrivate.
 */
ApiGatewayManagementRequest::ApiGatewayManagementRequest(ApiGatewayManagementRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ApiGatewayManagement action to be performed by this request.
 */
ApiGatewayManagementRequest::Action ApiGatewayManagementRequest::action() const
{
    Q_D(const ApiGatewayManagementRequest);
    return d->action;
}

/*!
 * Returns the name of the ApiGatewayManagement action to be performed by this request.
 */
QString ApiGatewayManagementRequest::actionString() const
{
    return ApiGatewayManagementRequestPrivate::toString(action());
}

/*!
 * Returns the ApiGatewayManagement API version implemented by this request.
 */
QString ApiGatewayManagementRequest::apiVersion() const
{
    Q_D(const ApiGatewayManagementRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApiGatewayManagement action to be performed by this request to \a action.
 */
void ApiGatewayManagementRequest::setAction(const Action action)
{
    Q_D(ApiGatewayManagementRequest);
    d->action = action;
}

/*!
 * Sets the ApiGatewayManagement API version to include in this request to \a version.
 */
void ApiGatewayManagementRequest::setApiVersion(const QString &version)
{
    Q_D(ApiGatewayManagementRequest);
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
bool ApiGatewayManagementRequest::operator==(const ApiGatewayManagementRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApiGatewayManagement queue name.
 *
 * @par From ApiGatewayManagement FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApiGatewayManagement queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApiGatewayManagementRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApiGatewayManagementRequest::clearParameter(const QString &name)
{
    Q_D(ApiGatewayManagementRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApiGatewayManagementRequest::clearParameters()
{
    Q_D(ApiGatewayManagementRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApiGatewayManagementRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApiGatewayManagementRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApiGatewayManagementRequest::parameters() const
{
    Q_D(const ApiGatewayManagementRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApiGatewayManagementRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApiGatewayManagementRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApiGatewayManagementRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApiGatewayManagementRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApiGatewayManagement request using the given
 * \a endpoint.
 *
 * This ApiGatewayManagement implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApiGatewayManagementRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApiGatewayManagementRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApiGatewayManagement::ApiGatewayManagementRequestPrivate
 * \brief The ApiGatewayManagementRequestPrivate class provides private implementation for ApiGatewayManagementRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagement
 */

/*!
 * Constructs a ApiGatewayManagementRequestPrivate object for ApiGatewayManagement \a action,
 * with public implementation \a q.
 */
ApiGatewayManagementRequestPrivate::ApiGatewayManagementRequestPrivate(const ApiGatewayManagementRequest::Action action, ApiGatewayManagementRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-11-29"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApiGatewayManagementRequest class's copy constructor.
 */
ApiGatewayManagementRequestPrivate::ApiGatewayManagementRequestPrivate(const ApiGatewayManagementRequestPrivate &other,
                                     ApiGatewayManagementRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApiGatewayManagementRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApiGatewayManagement service's Action
 * query parameters.
 */
QString ApiGatewayManagementRequestPrivate::toString(const ApiGatewayManagementRequest::Action &action)
{
    #define ActionToString(action) \
        case ApiGatewayManagementRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteConnection);
        ActionToString(GetConnection);
        ActionToString(PostToConnection);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApiGatewayManagement
} // namespace QtAws

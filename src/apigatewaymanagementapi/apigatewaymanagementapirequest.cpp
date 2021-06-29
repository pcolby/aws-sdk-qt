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

#include "apigatewaymanagementapirequest.h"
#include "apigatewaymanagementapirequest_p.h"

namespace QtAws {
namespace ApiGatewayManagementApi {

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiRequest
 * \brief The ApiGatewayManagementApiRequest class provides an interface for ApiGatewayManagementApi requests.
 *
 * \inmodule QtAwsApiGatewayManagementApi
 */

/*!
 * \enum ApiGatewayManagementApiRequest::Action
 *
 * This enum describes the actions that can be performed as ApiGatewayManagementApi
 * requests.
 *
 * \value DeleteConnectionAction ApiGatewayManagementApi DeleteConnection action.
 * \value GetConnectionAction ApiGatewayManagementApi GetConnection action.
 * \value PostToConnectionAction ApiGatewayManagementApi PostToConnection action.
 */

/*!
 * Constructs a ApiGatewayManagementApiRequest object for ApiGatewayManagementApi \a action.
 */
ApiGatewayManagementApiRequest::ApiGatewayManagementApiRequest(const Action action)
    : d_ptr(new ApiGatewayManagementApiRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApiGatewayManagementApiRequest::ApiGatewayManagementApiRequest(const ApiGatewayManagementApiRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ApiGatewayManagementApiRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApiGatewayManagementApiRequest object to be equal to \a other.
 */
ApiGatewayManagementApiRequest& ApiGatewayManagementApiRequest::operator=(const ApiGatewayManagementApiRequest &other)
{
    Q_D(ApiGatewayManagementApiRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApiGatewayManagementApiRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApiGatewayManagementApiRequestPrivate.
 */
ApiGatewayManagementApiRequest::ApiGatewayManagementApiRequest(ApiGatewayManagementApiRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ApiGatewayManagementApi action to be performed by this request.
 */
ApiGatewayManagementApiRequest::Action ApiGatewayManagementApiRequest::action() const
{
    Q_D(const ApiGatewayManagementApiRequest);
    return d->action;
}

/*!
 * Returns the name of the ApiGatewayManagementApi action to be performed by this request.
 */
QString ApiGatewayManagementApiRequest::actionString() const
{
    return ApiGatewayManagementApiRequestPrivate::toString(action());
}

/*!
 * Returns the ApiGatewayManagementApi API version implemented by this request.
 */
QString ApiGatewayManagementApiRequest::apiVersion() const
{
    Q_D(const ApiGatewayManagementApiRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApiGatewayManagementApi action to be performed by this request to \a action.
 */
void ApiGatewayManagementApiRequest::setAction(const Action action)
{
    Q_D(ApiGatewayManagementApiRequest);
    d->action = action;
}

/*!
 * Sets the ApiGatewayManagementApi API version to include in this request to \a version.
 */
void ApiGatewayManagementApiRequest::setApiVersion(const QString &version)
{
    Q_D(ApiGatewayManagementApiRequest);
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
bool ApiGatewayManagementApiRequest::operator==(const ApiGatewayManagementApiRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApiGatewayManagementApi queue name.
 *
 * @par From ApiGatewayManagementApi FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApiGatewayManagementApi queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApiGatewayManagementApiRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApiGatewayManagementApiRequest::clearParameter(const QString &name)
{
    Q_D(ApiGatewayManagementApiRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApiGatewayManagementApiRequest::clearParameters()
{
    Q_D(ApiGatewayManagementApiRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApiGatewayManagementApiRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApiGatewayManagementApiRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApiGatewayManagementApiRequest::parameters() const
{
    Q_D(const ApiGatewayManagementApiRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApiGatewayManagementApiRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApiGatewayManagementApiRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApiGatewayManagementApiRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApiGatewayManagementApiRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApiGatewayManagementApi request using the given
 * \a endpoint.
 *
 * This ApiGatewayManagementApi implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApiGatewayManagementApiRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApiGatewayManagementApiRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApiGatewayManagementApi::ApiGatewayManagementApiRequestPrivate
 * \brief The ApiGatewayManagementApiRequestPrivate class provides private implementation for ApiGatewayManagementApiRequest.
 * \internal
 *
 * \inmodule QtAwsApiGatewayManagementApi
 */

/*!
 * Constructs a ApiGatewayManagementApiRequestPrivate object for ApiGatewayManagementApi \a action,
 * with public implementation \a q.
 */
ApiGatewayManagementApiRequestPrivate::ApiGatewayManagementApiRequestPrivate(const ApiGatewayManagementApiRequest::Action action, ApiGatewayManagementApiRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApiGatewayManagementApiRequest class's copy constructor.
 */
ApiGatewayManagementApiRequestPrivate::ApiGatewayManagementApiRequestPrivate(const ApiGatewayManagementApiRequestPrivate &other,
                                     ApiGatewayManagementApiRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApiGatewayManagementApiRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApiGatewayManagementApi service's Action
 * query parameters.
 */
QString ApiGatewayManagementApiRequestPrivate::toString(const ApiGatewayManagementApiRequest::Action &action)
{
    #define ActionToString(action) \
        case ApiGatewayManagementApiRequest::action##Action: return QStringLiteral(#action)
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

} // namespace ApiGatewayManagementApi
} // namespace QtAws

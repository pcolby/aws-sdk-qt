/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "request.h"
#include "request_p.h"
#include "response.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  ServerlessApplicationRepositoryClientRequest
 *
 * @brief  Interface class for providing ServerlessApplicationRepository requests
 */


/**
 * @brief  Constructs a new ServerlessApplicationRepositoryClientRequest object.
 *
 * @param  action  The ServerlessApplicationRepository action to request.
 */
ServerlessApplicationRepositoryClientRequest::ServerlessApplicationRepositoryClientRequest(const Action action)
    : AwsAbstractRequest(new ServerlessApplicationRepositoryClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ServerlessApplicationRepositoryClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ServerlessApplicationRepositoryClientRequest::ServerlessApplicationRepositoryClientRequest(const ServerlessApplicationRepositoryClientRequest &other)
    : AwsAbstractRequest(new ServerlessApplicationRepositoryClientRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
ServerlessApplicationRepositoryClientRequest& ServerlessApplicationRepositoryClientRequest::operator=(const ServerlessApplicationRepositoryClientRequest &other)
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ServerlessApplicationRepositoryClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ServerlessApplicationRepositoryClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ServerlessApplicationRepositoryClientRequest::ServerlessApplicationRepositoryClientRequest(ServerlessApplicationRepositoryClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ServerlessApplicationRepository action to be performed by this request.
 *
 * @return The ServerlessApplicationRepository action to be performed by this request.
 */
ServerlessApplicationRepositoryClientRequest::Action ServerlessApplicationRepositoryClientRequest::action() const
{
    Q_D(const ServerlessApplicationRepositoryClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the ServerlessApplicationRepository action to be performed by this request.
 *
 * @return The name of the ServerlessApplicationRepository action to be performed by this request.
 */
QString ServerlessApplicationRepositoryClientRequest::actionString() const
{
    return ServerlessApplicationRepositoryClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the ServerlessApplicationRepository API version implemented by this request.
 *
 * @return The ServerlessApplicationRepository API version implmented by this request.
 */
QString ServerlessApplicationRepositoryClientRequest::apiVersion() const
{
    Q_D(const ServerlessApplicationRepositoryClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ServerlessApplicationRepository action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ServerlessApplicationRepositoryClientRequest::setAction(const Action action)
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    d->action = action;
}

/**
 * @brief  Set the ServerlessApplicationRepository API version to include in this request.
 *
 * @param  version  The ServerlessApplicationRepository API version to include in this request.
 */
void ServerlessApplicationRepositoryClientRequest::setApiVersion(const QString &version)
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    d->apiVersion = version;
}

/**
 * @brief  Equality operator.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool ServerlessApplicationRepositoryClientRequest::operator==(const ServerlessApplicationRepositoryClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ServerlessApplicationRepository queue name.
 *
 * @par From ServerlessApplicationRepository FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ServerlessApplicationRepository queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ServerlessApplicationRepositoryClientRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int ServerlessApplicationRepositoryClientRequest::clearParameter(const QString &name)
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ServerlessApplicationRepositoryClientRequest::clearParameters()
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ServerlessApplicationRepository request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ServerlessApplicationRepositoryClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ServerlessApplicationRepositoryClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ServerlessApplicationRepository request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ServerlessApplicationRepositoryClientRequest::parameters() const
{
    Q_D(const ServerlessApplicationRepositoryClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ServerlessApplicationRepository request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ServerlessApplicationRepositoryClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ServerlessApplicationRepository request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ServerlessApplicationRepositoryClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ServerlessApplicationRepositoryClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ServerlessApplicationRepository request.
 *
 * This ServerlessApplicationRepository implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ServerlessApplicationRepository request using the given \a endpoint.
 */
QNetworkRequest ServerlessApplicationRepositoryClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ServerlessApplicationRepositoryClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ServerlessApplicationRepositoryClientRequestPrivate
 *
 * @brief  Private implementation for ServerlessApplicationRepositoryClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServerlessApplicationRepositoryClientRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed by the \a q request.
 * @param  q       Pointer to this object's public ServerlessApplicationRepositoryClientRequest instance.
 */
ServerlessApplicationRepositoryClientRequestPrivate::ServerlessApplicationRepositoryClientRequestPrivate(const ServerlessApplicationRepositoryClientRequest::Action action, ServerlessApplicationRepositoryClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ServerlessApplicationRepositoryClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ServerlessApplicationRepositoryClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ServerlessApplicationRepositoryClientRequest instance.
 */
ServerlessApplicationRepositoryClientRequestPrivate::ServerlessApplicationRepositoryClientRequestPrivate(const ServerlessApplicationRepositoryClientRequestPrivate &other,
                                     ServerlessApplicationRepositoryClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ServerlessApplicationRepository action to a string.
 *
 * This function converts ServerlessApplicationRepositoryClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ServerlessApplicationRepository service's Action
 * query parameters.
 *
 * @param  action  ServerlessApplicationRepository action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ServerlessApplicationRepositoryClientRequestPrivate::toString(const ServerlessApplicationRepositoryClientRequest::Action &action)
{
    #define ActionToString(action) \
        case ServerlessApplicationRepositoryClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ServerlessApplicationRepository
} // namespace AWS

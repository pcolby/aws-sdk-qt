/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "gameliftclientrequest.h"
#include "gameliftclientrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  GameLiftClientRequest
 *
 * @brief  Interface class for providing GameLift requests
 */


/**
 * @brief  Constructs a new GameLiftClientRequest object.
 *
 * @param  action  The GameLift action to request.
 */
GameLiftClientRequest::GameLiftClientRequest(const Action action)
    : AwsAbstractRequest(new GameLiftClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new GameLiftClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GameLiftClientRequest::GameLiftClientRequest(const GameLiftClientRequest &other)
    : AwsAbstractRequest(new GameLiftClientRequestPrivate(*other.d_func(), this))
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
GameLiftClientRequest& GameLiftClientRequest::operator=(const GameLiftClientRequest &other)
{
    Q_D(GameLiftClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new GameLiftClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GameLiftClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
GameLiftClientRequest::GameLiftClientRequest(GameLiftClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the GameLift action to be performed by this request.
 *
 * @return The GameLift action to be performed by this request.
 */
GameLiftClientRequest::Action GameLiftClientRequest::action() const
{
    Q_D(const GameLiftClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the GameLift action to be performed by this request.
 *
 * @return The name of the GameLift action to be performed by this request.
 */
QString GameLiftClientRequest::actionString() const
{
    return GameLiftClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the GameLift API version implemented by this request.
 *
 * @return The GameLift API version implmented by this request.
 */
QString GameLiftClientRequest::apiVersion() const
{
    Q_D(const GameLiftClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the GameLift action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void GameLiftClientRequest::setAction(const Action action)
{
    Q_D(GameLiftClientRequest);
    d->action = action;
}

/**
 * @brief  Set the GameLift API version to include in this request.
 *
 * @param  version  The GameLift API version to include in this request.
 */
void GameLiftClientRequest::setApiVersion(const QString &version)
{
    Q_D(GameLiftClientRequest);
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
bool GameLiftClientRequest::operator==(const GameLiftClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid GameLift queue name.
 *
 * @par From GameLift FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GameLift queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool GameLiftClientRequest::isValidQueueName(const QString &queueName)
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
int GameLiftClientRequest::clearParameter(const QString &name)
{
    Q_D(GameLiftClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void GameLiftClientRequest::clearParameters()
{
    Q_D(GameLiftClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this GameLift request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant GameLiftClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GameLiftClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this GameLift request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &GameLiftClientRequest::parameters() const
{
    Q_D(const GameLiftClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this GameLift request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void GameLiftClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GameLiftClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this GameLift request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void GameLiftClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GameLiftClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this GameLift request.
 *
 * This GameLift implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this GameLift request using the given \a endpoint.
 */
QNetworkRequest GameLiftClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const GameLiftClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  GameLiftClientRequestPrivate
 *
 * @brief  Private implementation for GameLiftClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GameLiftClientRequestPrivate object.
 *
 * @param  action  GameLift action being performed by the \a q request.
 * @param  q       Pointer to this object's public GameLiftClientRequest instance.
 */
GameLiftClientRequestPrivate::GameLiftClientRequestPrivate(const GameLiftClientRequest::Action action, GameLiftClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GameLiftClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GameLiftClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GameLiftClientRequest instance.
 */
GameLiftClientRequestPrivate::GameLiftClientRequestPrivate(const GameLiftClientRequestPrivate &other,
                                     GameLiftClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and GameLift action to a string.
 *
 * This function converts GameLiftClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GameLift service's Action
 * query parameters.
 *
 * @param  action  GameLift action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString GameLiftClientRequestPrivate::toString(const GameLiftClientRequest::Action &action)
{
    #define ActionToString(action) \
        case GameLiftClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GameLift
} // namespace AWS

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

#include "firehoseclientrequest.h"
#include "firehoseclientrequest_p.h"

namespace AWS {
namespace Firehose {

/**
 * @class  FirehoseClientRequest
 *
 * @brief  Interface class for providing Firehose requests
 */


/**
 * @brief  Constructs a new FirehoseClientRequest object.
 *
 * @param  action  The Firehose action to request.
 */
FirehoseClientRequest::FirehoseClientRequest(const Action action)
    : AwsAbstractRequest(new FirehoseClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new FirehoseClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
FirehoseClientRequest::FirehoseClientRequest(const FirehoseClientRequest &other)
    : AwsAbstractRequest(new FirehoseClientRequestPrivate(*other.d_func(), this))
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
FirehoseClientRequest& FirehoseClientRequest::operator=(const FirehoseClientRequest &other)
{
    Q_D(FirehoseClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new FirehoseClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FirehoseClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
FirehoseClientRequest::FirehoseClientRequest(FirehoseClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the Firehose action to be performed by this request.
 *
 * @return The Firehose action to be performed by this request.
 */
FirehoseClientRequest::Action FirehoseClientRequest::action() const
{
    Q_D(const FirehoseClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the Firehose action to be performed by this request.
 *
 * @return The name of the Firehose action to be performed by this request.
 */
QString FirehoseClientRequest::actionString() const
{
    return FirehoseClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the Firehose API version implemented by this request.
 *
 * @return The Firehose API version implmented by this request.
 */
QString FirehoseClientRequest::apiVersion() const
{
    Q_D(const FirehoseClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the Firehose action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void FirehoseClientRequest::setAction(const Action action)
{
    Q_D(FirehoseClientRequest);
    d->action = action;
}

/**
 * @brief  Set the Firehose API version to include in this request.
 *
 * @param  version  The Firehose API version to include in this request.
 */
void FirehoseClientRequest::setApiVersion(const QString &version)
{
    Q_D(FirehoseClientRequest);
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
bool FirehoseClientRequest::operator==(const FirehoseClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid Firehose queue name.
 *
 * @par From Firehose FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Firehose queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool FirehoseClientRequest::isValidQueueName(const QString &queueName)
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
int FirehoseClientRequest::clearParameter(const QString &name)
{
    Q_D(FirehoseClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void FirehoseClientRequest::clearParameters()
{
    Q_D(FirehoseClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this Firehose request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant FirehoseClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FirehoseClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this Firehose request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &FirehoseClientRequest::parameters() const
{
    Q_D(const FirehoseClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this Firehose request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void FirehoseClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FirehoseClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this Firehose request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void FirehoseClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FirehoseClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this Firehose request.
 *
 * This Firehose implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this Firehose request using the given \a endpoint.
 */
QNetworkRequest FirehoseClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const FirehoseClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  FirehoseClientRequestPrivate
 *
 * @brief  Private implementation for FirehoseClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FirehoseClientRequestPrivate object.
 *
 * @param  action  Firehose action being performed by the \a q request.
 * @param  q       Pointer to this object's public FirehoseClientRequest instance.
 */
FirehoseClientRequestPrivate::FirehoseClientRequestPrivate(const FirehoseClientRequest::Action action, FirehoseClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new FirehoseClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FirehoseClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public FirehoseClientRequest instance.
 */
FirehoseClientRequestPrivate::FirehoseClientRequestPrivate(const FirehoseClientRequestPrivate &other,
                                     FirehoseClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and Firehose action to a string.
 *
 * This function converts FirehoseClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Firehose service's Action
 * query parameters.
 *
 * @param  action  Firehose action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString FirehoseClientRequestPrivate::toString(const FirehoseClientRequest::Action &action)
{
    #define ActionToString(action) \
        case FirehoseClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Firehose
} // namespace AWS

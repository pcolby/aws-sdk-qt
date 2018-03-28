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
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ElasticTranscoderClientRequest
 *
 * @brief  Interface class for providing ElasticTranscoder requests
 */


/**
 * @brief  Constructs a new ElasticTranscoderClientRequest object.
 *
 * @param  action  The ElasticTranscoder action to request.
 */
ElasticTranscoderClientRequest::ElasticTranscoderClientRequest(const Action action)
    : AwsAbstractRequest(new ElasticTranscoderClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new ElasticTranscoderClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ElasticTranscoderClientRequest::ElasticTranscoderClientRequest(const ElasticTranscoderClientRequest &other)
    : AwsAbstractRequest(new ElasticTranscoderClientRequestPrivate(*other.d_func(), this))
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
ElasticTranscoderClientRequest& ElasticTranscoderClientRequest::operator=(const ElasticTranscoderClientRequest &other)
{
    Q_D(ElasticTranscoderClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new ElasticTranscoderClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ElasticTranscoderClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
ElasticTranscoderClientRequest::ElasticTranscoderClientRequest(ElasticTranscoderClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the ElasticTranscoder action to be performed by this request.
 *
 * @return The ElasticTranscoder action to be performed by this request.
 */
ElasticTranscoderClientRequest::Action ElasticTranscoderClientRequest::action() const
{
    Q_D(const ElasticTranscoderClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the ElasticTranscoder action to be performed by this request.
 *
 * @return The name of the ElasticTranscoder action to be performed by this request.
 */
QString ElasticTranscoderClientRequest::actionString() const
{
    return ElasticTranscoderClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the ElasticTranscoder API version implemented by this request.
 *
 * @return The ElasticTranscoder API version implmented by this request.
 */
QString ElasticTranscoderClientRequest::apiVersion() const
{
    Q_D(const ElasticTranscoderClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the ElasticTranscoder action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void ElasticTranscoderClientRequest::setAction(const Action action)
{
    Q_D(ElasticTranscoderClientRequest);
    d->action = action;
}

/**
 * @brief  Set the ElasticTranscoder API version to include in this request.
 *
 * @param  version  The ElasticTranscoder API version to include in this request.
 */
void ElasticTranscoderClientRequest::setApiVersion(const QString &version)
{
    Q_D(ElasticTranscoderClientRequest);
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
bool ElasticTranscoderClientRequest::operator==(const ElasticTranscoderClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid ElasticTranscoder queue name.
 *
 * @par From ElasticTranscoder FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ElasticTranscoder queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool ElasticTranscoderClientRequest::isValidQueueName(const QString &queueName)
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
int ElasticTranscoderClientRequest::clearParameter(const QString &name)
{
    Q_D(ElasticTranscoderClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void ElasticTranscoderClientRequest::clearParameters()
{
    Q_D(ElasticTranscoderClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this ElasticTranscoder request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant ElasticTranscoderClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ElasticTranscoderClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this ElasticTranscoder request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &ElasticTranscoderClientRequest::parameters() const
{
    Q_D(const ElasticTranscoderClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this ElasticTranscoder request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void ElasticTranscoderClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ElasticTranscoderClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this ElasticTranscoder request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void ElasticTranscoderClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ElasticTranscoderClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this ElasticTranscoder request.
 *
 * This ElasticTranscoder implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this ElasticTranscoder request using the given \a endpoint.
 */
QNetworkRequest ElasticTranscoderClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const ElasticTranscoderClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  ElasticTranscoderClientRequestPrivate
 *
 * @brief  Private implementation for ElasticTranscoderClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticTranscoderClientRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed by the \a q request.
 * @param  q       Pointer to this object's public ElasticTranscoderClientRequest instance.
 */
ElasticTranscoderClientRequestPrivate::ElasticTranscoderClientRequestPrivate(const ElasticTranscoderClientRequest::Action action, ElasticTranscoderClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ElasticTranscoderClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ElasticTranscoderClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ElasticTranscoderClientRequest instance.
 */
ElasticTranscoderClientRequestPrivate::ElasticTranscoderClientRequestPrivate(const ElasticTranscoderClientRequestPrivate &other,
                                     ElasticTranscoderClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and ElasticTranscoder action to a string.
 *
 * This function converts ElasticTranscoderClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ElasticTranscoder service's Action
 * query parameters.
 *
 * @param  action  ElasticTranscoder action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString ElasticTranscoderClientRequestPrivate::toString(const ElasticTranscoderClientRequest::Action &action)
{
    #define ActionToString(action) \
        case ElasticTranscoderClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ElasticTranscoder
} // namespace AWS

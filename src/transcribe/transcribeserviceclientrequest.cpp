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

#include "transcribeserviceclientrequest.h"
#include "transcribeserviceclientrequest_p.h"

namespace AWS {
namespace TranscribeService {

/**
 * @class  TranscribeServiceClientRequest
 *
 * @brief  Interface class for providing TranscribeService requests
 */


/**
 * @brief  Constructs a new TranscribeServiceClientRequest object.
 *
 * @param  action  The TranscribeService action to request.
 */
TranscribeServiceClientRequest::TranscribeServiceClientRequest(const Action action)
    : AwsAbstractRequest(new TranscribeServiceClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new TranscribeServiceClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TranscribeServiceClientRequest::TranscribeServiceClientRequest(const TranscribeServiceClientRequest &other)
    : AwsAbstractRequest(new TranscribeServiceClientRequestPrivate(*other.d_func(), this))
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
TranscribeServiceClientRequest& TranscribeServiceClientRequest::operator=(const TranscribeServiceClientRequest &other)
{
    Q_D(TranscribeServiceClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new TranscribeServiceClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from TranscribeServiceClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
TranscribeServiceClientRequest::TranscribeServiceClientRequest(TranscribeServiceClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the TranscribeService action to be performed by this request.
 *
 * @return The TranscribeService action to be performed by this request.
 */
TranscribeServiceClientRequest::Action TranscribeServiceClientRequest::action() const
{
    Q_D(const TranscribeServiceClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the TranscribeService action to be performed by this request.
 *
 * @return The name of the TranscribeService action to be performed by this request.
 */
QString TranscribeServiceClientRequest::actionString() const
{
    return TranscribeServiceClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the TranscribeService API version implemented by this request.
 *
 * @return The TranscribeService API version implmented by this request.
 */
QString TranscribeServiceClientRequest::apiVersion() const
{
    Q_D(const TranscribeServiceClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the TranscribeService action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void TranscribeServiceClientRequest::setAction(const Action action)
{
    Q_D(TranscribeServiceClientRequest);
    d->action = action;
}

/**
 * @brief  Set the TranscribeService API version to include in this request.
 *
 * @param  version  The TranscribeService API version to include in this request.
 */
void TranscribeServiceClientRequest::setApiVersion(const QString &version)
{
    Q_D(TranscribeServiceClientRequest);
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
bool TranscribeServiceClientRequest::operator==(const TranscribeServiceClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid TranscribeService queue name.
 *
 * @par From TranscribeService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid TranscribeService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool TranscribeServiceClientRequest::isValidQueueName(const QString &queueName)
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
int TranscribeServiceClientRequest::clearParameter(const QString &name)
{
    Q_D(TranscribeServiceClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void TranscribeServiceClientRequest::clearParameters()
{
    Q_D(TranscribeServiceClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this TranscribeService request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant TranscribeServiceClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const TranscribeServiceClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this TranscribeService request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &TranscribeServiceClientRequest::parameters() const
{
    Q_D(const TranscribeServiceClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this TranscribeService request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void TranscribeServiceClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(TranscribeServiceClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this TranscribeService request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void TranscribeServiceClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(TranscribeServiceClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this TranscribeService request.
 *
 * This TranscribeService implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this TranscribeService request using the given \a endpoint.
 */
QNetworkRequest TranscribeServiceClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const TranscribeServiceClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  TranscribeServiceClientRequestPrivate
 *
 * @brief  Private implementation for TranscribeServiceClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TranscribeServiceClientRequestPrivate object.
 *
 * @param  action  TranscribeService action being performed by the \a q request.
 * @param  q       Pointer to this object's public TranscribeServiceClientRequest instance.
 */
TranscribeServiceClientRequestPrivate::TranscribeServiceClientRequestPrivate(const TranscribeServiceClientRequest::Action action, TranscribeServiceClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TranscribeServiceClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the TranscribeServiceClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TranscribeServiceClientRequest instance.
 */
TranscribeServiceClientRequestPrivate::TranscribeServiceClientRequestPrivate(const TranscribeServiceClientRequestPrivate &other,
                                     TranscribeServiceClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and TranscribeService action to a string.
 *
 * This function converts TranscribeServiceClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the TranscribeService service's Action
 * query parameters.
 *
 * @param  action  TranscribeService action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString TranscribeServiceClientRequestPrivate::toString(const TranscribeServiceClientRequest::Action &action)
{
    #define ActionToString(action) \
        case TranscribeServiceClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace TranscribeService
} // namespace AWS

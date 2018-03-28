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
#include "request_p.h"

namespace AWS {
namespace KinesisVideoMedia {

/**
 * @class  KinesisVideoMediaClientRequest
 *
 * @brief  Interface class for providing  requests
 */


/**
 * @brief  Constructs a new KinesisVideoMediaClientRequest object.
 *
 * @param  action  The  action to request.
 */
KinesisVideoMediaClientRequest::KinesisVideoMediaClientRequest(const Action action)
    : AwsAbstractRequest(new KinesisVideoMediaClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new KinesisVideoMediaClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
KinesisVideoMediaClientRequest::KinesisVideoMediaClientRequest(const KinesisVideoMediaClientRequest &other)
    : AwsAbstractRequest(new KinesisVideoMediaClientRequestPrivate(*other.d_func(), this))
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
KinesisVideoMediaClientRequest& KinesisVideoMediaClientRequest::operator=(const KinesisVideoMediaClientRequest &other)
{
    Q_D(KinesisVideoMediaClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoMediaClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisVideoMediaClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
KinesisVideoMediaClientRequest::KinesisVideoMediaClientRequest(KinesisVideoMediaClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the  action to be performed by this request.
 *
 * @return The  action to be performed by this request.
 */
KinesisVideoMediaClientRequest::Action KinesisVideoMediaClientRequest::action() const
{
    Q_D(const KinesisVideoMediaClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the  action to be performed by this request.
 *
 * @return The name of the  action to be performed by this request.
 */
QString KinesisVideoMediaClientRequest::actionString() const
{
    return KinesisVideoMediaClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the  API version implemented by this request.
 *
 * @return The  API version implmented by this request.
 */
QString KinesisVideoMediaClientRequest::apiVersion() const
{
    Q_D(const KinesisVideoMediaClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the  action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void KinesisVideoMediaClientRequest::setAction(const Action action)
{
    Q_D(KinesisVideoMediaClientRequest);
    d->action = action;
}

/**
 * @brief  Set the  API version to include in this request.
 *
 * @param  version  The  API version to include in this request.
 */
void KinesisVideoMediaClientRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisVideoMediaClientRequest);
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
bool KinesisVideoMediaClientRequest::operator==(const KinesisVideoMediaClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid  queue name.
 *
 * @par From  FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid  queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool KinesisVideoMediaClientRequest::isValidQueueName(const QString &queueName)
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
int KinesisVideoMediaClientRequest::clearParameter(const QString &name)
{
    Q_D(KinesisVideoMediaClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void KinesisVideoMediaClientRequest::clearParameters()
{
    Q_D(KinesisVideoMediaClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this  request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant KinesisVideoMediaClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisVideoMediaClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this  request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &KinesisVideoMediaClientRequest::parameters() const
{
    Q_D(const KinesisVideoMediaClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this  request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void KinesisVideoMediaClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisVideoMediaClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this  request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void KinesisVideoMediaClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisVideoMediaClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this  request.
 *
 * This  implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this  request using the given \a endpoint.
 */
QNetworkRequest KinesisVideoMediaClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const KinesisVideoMediaClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  KinesisVideoMediaClientRequestPrivate
 *
 * @brief  Private implementation for KinesisVideoMediaClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoMediaClientRequestPrivate object.
 *
 * @param  action   action being performed by the \a q request.
 * @param  q       Pointer to this object's public KinesisVideoMediaClientRequest instance.
 */
KinesisVideoMediaClientRequestPrivate::KinesisVideoMediaClientRequestPrivate(const KinesisVideoMediaClientRequest::Action action, KinesisVideoMediaClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new KinesisVideoMediaClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisVideoMediaClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public KinesisVideoMediaClientRequest instance.
 */
KinesisVideoMediaClientRequestPrivate::KinesisVideoMediaClientRequestPrivate(const KinesisVideoMediaClientRequestPrivate &other,
                                     KinesisVideoMediaClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and  action to a string.
 *
 * This function converts KinesisVideoMediaClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the  service's Action
 * query parameters.
 *
 * @param  action   action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString KinesisVideoMediaClientRequestPrivate::toString(const KinesisVideoMediaClientRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisVideoMediaClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisVideoMedia
} // namespace AWS

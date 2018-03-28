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

#include "kinesisanalyticsclientrequest.h"
#include "kinesisanalyticsclientrequest_p.h"

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  KinesisAnalyticsClientRequest
 *
 * @brief  Interface class for providing KinesisAnalytics requests
 */


/**
 * @brief  Constructs a new KinesisAnalyticsClientRequest object.
 *
 * @param  action  The KinesisAnalytics action to request.
 */
KinesisAnalyticsClientRequest::KinesisAnalyticsClientRequest(const Action action)
    : AwsAbstractRequest(new KinesisAnalyticsClientRequestPrivate(action, this))
{

}

/**
 * @brief  Constructs a new KinesisAnalyticsClientRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
KinesisAnalyticsClientRequest::KinesisAnalyticsClientRequest(const KinesisAnalyticsClientRequest &other)
    : AwsAbstractRequest(new KinesisAnalyticsClientRequestPrivate(*other.d_func(), this))
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
KinesisAnalyticsClientRequest& KinesisAnalyticsClientRequest::operator=(const KinesisAnalyticsClientRequest &other)
{
    Q_D(KinesisAnalyticsClientRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new KinesisAnalyticsClientRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisAnalyticsClientRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
KinesisAnalyticsClientRequest::KinesisAnalyticsClientRequest(KinesisAnalyticsClientRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the KinesisAnalytics action to be performed by this request.
 *
 * @return The KinesisAnalytics action to be performed by this request.
 */
KinesisAnalyticsClientRequest::Action KinesisAnalyticsClientRequest::action() const
{
    Q_D(const KinesisAnalyticsClientRequest);
    return d->action;
}

/**
 * @brief Get the name of the KinesisAnalytics action to be performed by this request.
 *
 * @return The name of the KinesisAnalytics action to be performed by this request.
 */
QString KinesisAnalyticsClientRequest::actionString() const
{
    return KinesisAnalyticsClientRequestPrivate::toString(action());
}

/**
 * @brief  Get the KinesisAnalytics API version implemented by this request.
 *
 * @return The KinesisAnalytics API version implmented by this request.
 */
QString KinesisAnalyticsClientRequest::apiVersion() const
{
    Q_D(const KinesisAnalyticsClientRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the KinesisAnalytics action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void KinesisAnalyticsClientRequest::setAction(const Action action)
{
    Q_D(KinesisAnalyticsClientRequest);
    d->action = action;
}

/**
 * @brief  Set the KinesisAnalytics API version to include in this request.
 *
 * @param  version  The KinesisAnalytics API version to include in this request.
 */
void KinesisAnalyticsClientRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisAnalyticsClientRequest);
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
bool KinesisAnalyticsClientRequest::operator==(const KinesisAnalyticsClientRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid KinesisAnalytics queue name.
 *
 * @par From KinesisAnalytics FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid KinesisAnalytics queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool KinesisAnalyticsClientRequest::isValidQueueName(const QString &queueName)
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
int KinesisAnalyticsClientRequest::clearParameter(const QString &name)
{
    Q_D(KinesisAnalyticsClientRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Clear all parameters that were to be included with this request.
 */
void KinesisAnalyticsClientRequest::clearParameters()
{
    Q_D(KinesisAnalyticsClientRequest);
    d->parameters.clear();
}

/**
 * @brief  Get the value of a parameter included with this KinesisAnalytics request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant KinesisAnalyticsClientRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisAnalyticsClientRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Get all parameters included with this KinesisAnalytics request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &KinesisAnalyticsClientRequest::parameters() const
{
    Q_D(const KinesisAnalyticsClientRequest);
    return d->parameters;
}

/**
 * @brief  Set a parameter to include with this KinesisAnalytics request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void KinesisAnalyticsClientRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisAnalyticsClientRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Set all parameters to include with this KinesisAnalytics request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void KinesisAnalyticsClientRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisAnalyticsClientRequest);
    d->parameters = parameters;
}

/**
 * @brief  Build a network request object for this KinesisAnalytics request.
 *
 * This KinesisAnalytics implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this KinesisAnalytics request using the given \a endpoint.
 */
QNetworkRequest KinesisAnalyticsClientRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const KinesisAnalyticsClientRequest);
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/**
 * @internal
 *
 * @class  KinesisAnalyticsClientRequestPrivate
 *
 * @brief  Private implementation for KinesisAnalyticsClientRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new KinesisAnalyticsClientRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed by the \a q request.
 * @param  q       Pointer to this object's public KinesisAnalyticsClientRequest instance.
 */
KinesisAnalyticsClientRequestPrivate::KinesisAnalyticsClientRequestPrivate(const KinesisAnalyticsClientRequest::Action action, KinesisAnalyticsClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/**
 * @internal
 *
 * @brief  Constructs a new KinesisAnalyticsClientRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisAnalyticsClientRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public KinesisAnalyticsClientRequest instance.
 */
KinesisAnalyticsClientRequestPrivate::KinesisAnalyticsClientRequestPrivate(const KinesisAnalyticsClientRequestPrivate &other,
                                     KinesisAnalyticsClientRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/**
 * @brief  Convert and KinesisAnalytics action to a string.
 *
 * This function converts KinesisAnalyticsClientRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisAnalytics service's Action
 * query parameters.
 *
 * @param  action  KinesisAnalytics action to convert.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString KinesisAnalyticsClientRequestPrivate::toString(const KinesisAnalyticsClientRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisAnalyticsClientRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisAnalytics
} // namespace AWS

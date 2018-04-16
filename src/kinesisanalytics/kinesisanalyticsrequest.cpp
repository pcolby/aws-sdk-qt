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

#include "kinesisanalyticsrequest.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsRequest
 *
 * \brief The KinesisAnalyticsRequest class provides an interface for KinesisAnalytics requests.
 *
 * \ingroup KinesisAnalytics
 */

/*!
 * @brief  Constructs a new KinesisAnalyticsRequest object.
 *
 * @param  action  The KinesisAnalytics action to request.
 */
KinesisAnalyticsRequest::KinesisAnalyticsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KinesisAnalyticsRequestPrivate(action, this))
{

}

/*!
 * @brief  Constructs a new KinesisAnalyticsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
KinesisAnalyticsRequest::KinesisAnalyticsRequest(const KinesisAnalyticsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KinesisAnalyticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
KinesisAnalyticsRequest& KinesisAnalyticsRequest::operator=(const KinesisAnalyticsRequest &other)
{
    Q_D(KinesisAnalyticsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * @internal
 *
 * @brief  Constructs a new KinesisAnalyticsRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisAnalyticsRequestPrivate.
 *
 * @param  d  Pointer to private data (aka D-Pointer).
 */
KinesisAnalyticsRequest::KinesisAnalyticsRequest(KinesisAnalyticsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * \brief Returns the KinesisAnalytics action to be performed by this request.
 */
KinesisAnalyticsRequest::Action KinesisAnalyticsRequest::action() const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->action;
}

/*!
 * \brief Returns the name of the KinesisAnalytics action to be performed by this request.
 */
QString KinesisAnalyticsRequest::actionString() const
{
    return KinesisAnalyticsRequestPrivate::toString(action());
}

/*!
 * \brief Returns the KinesisAnalytics API version implemented by this request.
 */
QString KinesisAnalyticsRequest::apiVersion() const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->apiVersion;
}

/*!
 * @brief Set the KinesisAnalytics action to be performed by this request to \a action.
 */
void KinesisAnalyticsRequest::setAction(const Action action)
{
    Q_D(KinesisAnalyticsRequest);
    d->action = action;
}

/*!
 * Set the KinesisAnalytics API version to include in this request to \a version.
 */
void KinesisAnalyticsRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisAnalyticsRequest);
    d->apiVersion = version;
}

/*!
 * \brief Returns \c true if this request is the same as \a other.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool KinesisAnalyticsRequest::operator==(const KinesisAnalyticsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*!
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
/*bool KinesisAnalyticsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * \brief Removes the a \a name parameter from this request.
 *
 * Returns the count of paramters removed (typically \c 0 or \c 1).
 */
int KinesisAnalyticsRequest::clearParameter(const QString &name)
{
    Q_D(KinesisAnalyticsRequest);
    return d->parameters.remove(name);
}

/*!
 * \brief Removes all parameters from this request.
 */
void KinesisAnalyticsRequest::clearParameters()
{
    Q_D(KinesisAnalyticsRequest);
    d->parameters.clear();
}

/*!
 * \brief Returns the value of the \n name pararemter if set, otherwise \a defaultValue.
 */
QVariant KinesisAnalyticsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * \brief Returns a map of parameters included in this request.
 */
const QVariantMap &KinesisAnalyticsRequest::parameters() const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->parameters;
}

/*!
 * \brief Sets the \a name parameter to \a value.
 */
void KinesisAnalyticsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisAnalyticsRequest);
    d->parameters.insert(name, value);
}

/*!
 * \brief Sets the map of paramters for this request to \a parameters.
 *
 * Any request parameters set previously will be discarded.
 */
void KinesisAnalyticsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisAnalyticsRequest);
    d->parameters = parameters;
}

/*!
 * \brief Returns a network request for this KinesisAnalytics request using the given \a endpoint.
 *
 * This KinesisAnalytics implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 */
QNetworkRequest KinesisAnalyticsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const KinesisAnalyticsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \internal
 *
 * \class  KinesisAnalyticsRequestPrivate
 *
 * \brief  Private implementation for KinesisAnalyticsRequest.
 */

/*!
 * \internal
 *
 * \brief Constructs a new KinesisAnalyticsRequestPrivate object.
 */
KinesisAnalyticsRequestPrivate::KinesisAnalyticsRequestPrivate(const KinesisAnalyticsRequest::Action action, KinesisAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * \internal
 *
 * \brief Constructs a new KinesisAnalyticsRequestPrivate object, copying an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the KinesisAnalyticsRequest class's copy constructor.
 */
KinesisAnalyticsRequestPrivate::KinesisAnalyticsRequestPrivate(const KinesisAnalyticsRequestPrivate &other,
                                     KinesisAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * \internal
 *
 * \brief Returns a string representing \a action.
 *
 * This function converts KinesisAnalyticsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisAnalytics service's Action
 * query parameters.
 *
 * @return A string representing \a action, or a null string if \a action is invalid.
 */
QString KinesisAnalyticsRequestPrivate::toString(const KinesisAnalyticsRequest::Action &action)
{
    #define ActionToString(action) \
        case KinesisAnalyticsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace KinesisAnalytics
} // namespace QtAws

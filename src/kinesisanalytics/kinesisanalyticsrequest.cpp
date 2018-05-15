/*
    Copyright 2013-2018 Paul Colby

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

#include "kinesisanalyticsrequest.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsRequest
 * \brief The KinesisAnalyticsRequest class provides an interface for KinesisAnalytics requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * \enum KinesisAnalyticsRequest::Action
 *
 * This enum describes the actions that can be performed as KinesisAnalytics
 * requests.
 *
 * \value AddApplicationCloudWatchLoggingOptionAction KinesisAnalytics AddApplicationCloudWatchLoggingOption action.
 * \value AddApplicationInputAction KinesisAnalytics AddApplicationInput action.
 * \value AddApplicationInputProcessingConfigurationAction KinesisAnalytics AddApplicationInputProcessingConfiguration action.
 * \value AddApplicationOutputAction KinesisAnalytics AddApplicationOutput action.
 * \value AddApplicationReferenceDataSourceAction KinesisAnalytics AddApplicationReferenceDataSource action.
 * \value CreateApplicationAction KinesisAnalytics CreateApplication action.
 * \value DeleteApplicationAction KinesisAnalytics DeleteApplication action.
 * \value DeleteApplicationCloudWatchLoggingOptionAction KinesisAnalytics DeleteApplicationCloudWatchLoggingOption action.
 * \value DeleteApplicationInputProcessingConfigurationAction KinesisAnalytics DeleteApplicationInputProcessingConfiguration action.
 * \value DeleteApplicationOutputAction KinesisAnalytics DeleteApplicationOutput action.
 * \value DeleteApplicationReferenceDataSourceAction KinesisAnalytics DeleteApplicationReferenceDataSource action.
 * \value DescribeApplicationAction KinesisAnalytics DescribeApplication action.
 * \value DiscoverInputSchemaAction KinesisAnalytics DiscoverInputSchema action.
 * \value ListApplicationsAction KinesisAnalytics ListApplications action.
 * \value StartApplicationAction KinesisAnalytics StartApplication action.
 * \value StopApplicationAction KinesisAnalytics StopApplication action.
 * \value UpdateApplicationAction KinesisAnalytics UpdateApplication action.
 */

/*!
 * Constructs a KinesisAnalyticsRequest object for KinesisAnalytics \a action.
 */
KinesisAnalyticsRequest::KinesisAnalyticsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new KinesisAnalyticsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
KinesisAnalyticsRequest::KinesisAnalyticsRequest(const KinesisAnalyticsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new KinesisAnalyticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the KinesisAnalyticsRequest object to be equal to \a other.
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
 * Constructs aa KinesisAnalyticsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from KinesisAnalyticsRequestPrivate.
 */
KinesisAnalyticsRequest::KinesisAnalyticsRequest(KinesisAnalyticsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the KinesisAnalytics action to be performed by this request.
 */
KinesisAnalyticsRequest::Action KinesisAnalyticsRequest::action() const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->action;
}

/*!
 * Returns the name of the KinesisAnalytics action to be performed by this request.
 */
QString KinesisAnalyticsRequest::actionString() const
{
    return KinesisAnalyticsRequestPrivate::toString(action());
}

/*!
 * Returns the KinesisAnalytics API version implemented by this request.
 */
QString KinesisAnalyticsRequest::apiVersion() const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->apiVersion;
}

/*!
 * Sets the KinesisAnalytics action to be performed by this request to \a action.
 */
void KinesisAnalyticsRequest::setAction(const Action action)
{
    Q_D(KinesisAnalyticsRequest);
    d->action = action;
}

/*!
 * Sets the KinesisAnalytics API version to include in this request to \a version.
 */
void KinesisAnalyticsRequest::setApiVersion(const QString &version)
{
    Q_D(KinesisAnalyticsRequest);
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
bool KinesisAnalyticsRequest::operator==(const KinesisAnalyticsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid KinesisAnalytics queue name.
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
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int KinesisAnalyticsRequest::clearParameter(const QString &name)
{
    Q_D(KinesisAnalyticsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void KinesisAnalyticsRequest::clearParameters()
{
    Q_D(KinesisAnalyticsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant KinesisAnalyticsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &KinesisAnalyticsRequest::parameters() const
{
    Q_D(const KinesisAnalyticsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void KinesisAnalyticsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(KinesisAnalyticsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void KinesisAnalyticsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(KinesisAnalyticsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the KinesisAnalytics request using the given
 * \a endpoint.
 *
 * This KinesisAnalytics implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest KinesisAnalyticsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const KinesisAnalyticsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::KinesisAnalytics::KinesisAnalyticsRequestPrivate
 * \brief The KinesisAnalyticsRequestPrivate class provides private implementation for KinesisAnalyticsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 * Constructs a KinesisAnalyticsRequestPrivate object for KinesisAnalytics \a action,
 * with public implementation \a q.
 */
KinesisAnalyticsRequestPrivate::KinesisAnalyticsRequestPrivate(const KinesisAnalyticsRequest::Action action, KinesisAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
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
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts KinesisAnalyticsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the KinesisAnalytics service's Action
 * query parameters.
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

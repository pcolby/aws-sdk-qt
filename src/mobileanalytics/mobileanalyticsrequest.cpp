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

#include "mobileanalyticsrequest.h"
#include "mobileanalyticsrequest_p.h"

namespace QtAws {
namespace MobileAnalytics {

/*!
 * \class QtAws::MobileAnalytics::MobileAnalyticsRequest
 * \brief The MobileAnalyticsRequest class provides an interface for MobileAnalytics requests.
 *
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * \enum MobileAnalyticsRequest::Action
 *
 * This enum describes the actions that can be performed as MobileAnalytics
 * requests.
 *
 * \value PutEventsAction MobileAnalytics PutEvents action.
 */

/*!
 * Constructs a MobileAnalyticsRequest object for MobileAnalytics \a action.
 */
MobileAnalyticsRequest::MobileAnalyticsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MobileAnalyticsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MobileAnalyticsRequest::MobileAnalyticsRequest(const MobileAnalyticsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MobileAnalyticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MobileAnalyticsRequest object to be equal to \a other.
 */
MobileAnalyticsRequest& MobileAnalyticsRequest::operator=(const MobileAnalyticsRequest &other)
{
    Q_D(MobileAnalyticsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MobileAnalyticsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MobileAnalyticsRequestPrivate.
 */
MobileAnalyticsRequest::MobileAnalyticsRequest(MobileAnalyticsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MobileAnalytics action to be performed by this request.
 */
MobileAnalyticsRequest::Action MobileAnalyticsRequest::action() const
{
    Q_D(const MobileAnalyticsRequest);
    return d->action;
}

/*!
 * Returns the name of the MobileAnalytics action to be performed by this request.
 */
QString MobileAnalyticsRequest::actionString() const
{
    return MobileAnalyticsRequestPrivate::toString(action());
}

/*!
 * Returns the MobileAnalytics API version implemented by this request.
 */
QString MobileAnalyticsRequest::apiVersion() const
{
    Q_D(const MobileAnalyticsRequest);
    return d->apiVersion;
}

/*!
 * Sets the MobileAnalytics action to be performed by this request to \a action.
 */
void MobileAnalyticsRequest::setAction(const Action action)
{
    Q_D(MobileAnalyticsRequest);
    d->action = action;
}

/*!
 * Sets the MobileAnalytics API version to include in this request to \a version.
 */
void MobileAnalyticsRequest::setApiVersion(const QString &version)
{
    Q_D(MobileAnalyticsRequest);
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
bool MobileAnalyticsRequest::operator==(const MobileAnalyticsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MobileAnalytics queue name.
 *
 * @par From MobileAnalytics FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MobileAnalytics queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MobileAnalyticsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MobileAnalyticsRequest::clearParameter(const QString &name)
{
    Q_D(MobileAnalyticsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MobileAnalyticsRequest::clearParameters()
{
    Q_D(MobileAnalyticsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MobileAnalyticsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MobileAnalyticsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MobileAnalyticsRequest::parameters() const
{
    Q_D(const MobileAnalyticsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MobileAnalyticsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MobileAnalyticsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MobileAnalyticsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MobileAnalyticsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MobileAnalytics request using the given
 * \a endpoint.
 *
 * This MobileAnalytics implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MobileAnalyticsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const MobileAnalyticsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MobileAnalytics::MobileAnalyticsRequestPrivate
 * \brief The MobileAnalyticsRequestPrivate class provides private implementation for MobileAnalyticsRequest.
 * \internal
 *
 * \inmodule QtAwsMobileAnalytics
 */

/*!
 * Constructs a MobileAnalyticsRequestPrivate object for MobileAnalytics \a action,
 * with public implementation \a q.
 */
MobileAnalyticsRequestPrivate::MobileAnalyticsRequestPrivate(const MobileAnalyticsRequest::Action action, MobileAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MobileAnalyticsRequest class's copy constructor.
 */
MobileAnalyticsRequestPrivate::MobileAnalyticsRequestPrivate(const MobileAnalyticsRequestPrivate &other,
                                     MobileAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MobileAnalyticsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MobileAnalytics service's Action
 * query parameters.
 */
QString MobileAnalyticsRequestPrivate::toString(const MobileAnalyticsRequest::Action &action)
{
    #define ActionToString(action) \
        case MobileAnalyticsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(PutEvents);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MobileAnalytics
} // namespace QtAws

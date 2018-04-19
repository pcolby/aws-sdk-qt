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

#include "marketplacecommerceanalyticsrequest.h"
#include "marketplacecommerceanalyticsrequest_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsRequest
 * \brief The MarketplaceCommerceAnalyticsRequest class provides an interface for MarketplaceCommerceAnalytics requests.
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * \enum MarketplaceCommerceAnalyticsRequest::Action
 *
 * This enum describes the actions that can be performed as MarketplaceCommerceAnalytics
 * requests.
 *
 * \value GenerateDataSetAction MarketplaceCommerceAnalytics GenerateDataSet action.
 * \value StartSupportDataExportAction MarketplaceCommerceAnalytics StartSupportDataExport action.
 */

/*!
 * Constructs a[n] MarketplaceCommerceAnalyticsRequest object for MarketplaceCommerceAnalytics \a action.
 */
MarketplaceCommerceAnalyticsRequest::MarketplaceCommerceAnalyticsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new MarketplaceCommerceAnalyticsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
MarketplaceCommerceAnalyticsRequest::MarketplaceCommerceAnalyticsRequest(const MarketplaceCommerceAnalyticsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new MarketplaceCommerceAnalyticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the MarketplaceCommerceAnalyticsRequest object to be equal to \a other.
 */
MarketplaceCommerceAnalyticsRequest& MarketplaceCommerceAnalyticsRequest::operator=(const MarketplaceCommerceAnalyticsRequest &other)
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa MarketplaceCommerceAnalyticsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceCommerceAnalyticsRequestPrivate.
 */
MarketplaceCommerceAnalyticsRequest::MarketplaceCommerceAnalyticsRequest(MarketplaceCommerceAnalyticsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the MarketplaceCommerceAnalytics action to be performed by this request.
 */
MarketplaceCommerceAnalyticsRequest::Action MarketplaceCommerceAnalyticsRequest::action() const
{
    Q_D(const MarketplaceCommerceAnalyticsRequest);
    return d->action;
}

/*!
 * Returns the name of the MarketplaceCommerceAnalytics action to be performed by this request.
 */
QString MarketplaceCommerceAnalyticsRequest::actionString() const
{
    return MarketplaceCommerceAnalyticsRequestPrivate::toString(action());
}

/*!
 * Returns the MarketplaceCommerceAnalytics API version implemented by this request.
 */
QString MarketplaceCommerceAnalyticsRequest::apiVersion() const
{
    Q_D(const MarketplaceCommerceAnalyticsRequest);
    return d->apiVersion;
}

/*!
 * Sets the MarketplaceCommerceAnalytics action to be performed by this request to \a action.
 */
void MarketplaceCommerceAnalyticsRequest::setAction(const Action action)
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
    d->action = action;
}

/*!
 * Sets the MarketplaceCommerceAnalytics API version to include in this request to \a version.
 */
void MarketplaceCommerceAnalyticsRequest::setApiVersion(const QString &version)
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
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
bool MarketplaceCommerceAnalyticsRequest::operator==(const MarketplaceCommerceAnalyticsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid MarketplaceCommerceAnalytics queue name.
 *
 * @par From MarketplaceCommerceAnalytics FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid MarketplaceCommerceAnalytics queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool MarketplaceCommerceAnalyticsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int MarketplaceCommerceAnalyticsRequest::clearParameter(const QString &name)
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void MarketplaceCommerceAnalyticsRequest::clearParameters()
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant MarketplaceCommerceAnalyticsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const MarketplaceCommerceAnalyticsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &MarketplaceCommerceAnalyticsRequest::parameters() const
{
    Q_D(const MarketplaceCommerceAnalyticsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void MarketplaceCommerceAnalyticsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void MarketplaceCommerceAnalyticsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(MarketplaceCommerceAnalyticsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the MarketplaceCommerceAnalytics request using the given
 * \a endpoint.
 *
 * This MarketplaceCommerceAnalytics implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest MarketplaceCommerceAnalyticsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const MarketplaceCommerceAnalyticsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsRequestPrivate
 * \brief The MarketplaceCommerceAnalyticsRequestPrivate class provides private implementation for MarketplaceCommerceAnalyticsRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a MarketplaceCommerceAnalyticsRequestPrivate object for MarketplaceCommerceAnalytics \a action with,
 * public implementation \a q.
 */
MarketplaceCommerceAnalyticsRequestPrivate::MarketplaceCommerceAnalyticsRequestPrivate(const MarketplaceCommerceAnalyticsRequest::Action action, MarketplaceCommerceAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the MarketplaceCommerceAnalyticsRequest class's copy constructor.
 */
MarketplaceCommerceAnalyticsRequestPrivate::MarketplaceCommerceAnalyticsRequestPrivate(const MarketplaceCommerceAnalyticsRequestPrivate &other,
                                     MarketplaceCommerceAnalyticsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts MarketplaceCommerceAnalyticsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the MarketplaceCommerceAnalytics service's Action
 * query parameters.
 */
QString MarketplaceCommerceAnalyticsRequestPrivate::toString(const MarketplaceCommerceAnalyticsRequest::Action &action)
{
    #define ActionToString(action) \
        case MarketplaceCommerceAnalyticsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

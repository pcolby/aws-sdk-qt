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

#include "forecastqueryservicerequest.h"
#include "forecastqueryservicerequest_p.h"

namespace QtAws {
namespace ForecastQueryService {

/*!
 * \class QtAws::ForecastQueryService::ForecastQueryServiceRequest
 * \brief The ForecastQueryServiceRequest class provides an interface for ForecastQueryService requests.
 *
 * \inmodule QtAwsForecastQueryService
 */

/*!
 * \enum ForecastQueryServiceRequest::Action
 *
 * This enum describes the actions that can be performed as ForecastQueryService
 * requests.
 *
 * \value QueryForecastAction ForecastQueryService QueryForecast action.
 */

/*!
 * Constructs a ForecastQueryServiceRequest object for ForecastQueryService \a action.
 */
ForecastQueryServiceRequest::ForecastQueryServiceRequest(const Action action)
    : d_ptr(new ForecastQueryServiceRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ForecastQueryServiceRequest::ForecastQueryServiceRequest(const ForecastQueryServiceRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ForecastQueryServiceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ForecastQueryServiceRequest object to be equal to \a other.
 */
ForecastQueryServiceRequest& ForecastQueryServiceRequest::operator=(const ForecastQueryServiceRequest &other)
{
    Q_D(ForecastQueryServiceRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ForecastQueryServiceRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ForecastQueryServiceRequestPrivate.
 */
ForecastQueryServiceRequest::ForecastQueryServiceRequest(ForecastQueryServiceRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ForecastQueryService action to be performed by this request.
 */
ForecastQueryServiceRequest::Action ForecastQueryServiceRequest::action() const
{
    Q_D(const ForecastQueryServiceRequest);
    return d->action;
}

/*!
 * Returns the name of the ForecastQueryService action to be performed by this request.
 */
QString ForecastQueryServiceRequest::actionString() const
{
    return ForecastQueryServiceRequestPrivate::toString(action());
}

/*!
 * Returns the ForecastQueryService API version implemented by this request.
 */
QString ForecastQueryServiceRequest::apiVersion() const
{
    Q_D(const ForecastQueryServiceRequest);
    return d->apiVersion;
}

/*!
 * Sets the ForecastQueryService action to be performed by this request to \a action.
 */
void ForecastQueryServiceRequest::setAction(const Action action)
{
    Q_D(ForecastQueryServiceRequest);
    d->action = action;
}

/*!
 * Sets the ForecastQueryService API version to include in this request to \a version.
 */
void ForecastQueryServiceRequest::setApiVersion(const QString &version)
{
    Q_D(ForecastQueryServiceRequest);
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
bool ForecastQueryServiceRequest::operator==(const ForecastQueryServiceRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ForecastQueryService queue name.
 *
 * @par From ForecastQueryService FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ForecastQueryService queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ForecastQueryServiceRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ForecastQueryServiceRequest::clearParameter(const QString &name)
{
    Q_D(ForecastQueryServiceRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ForecastQueryServiceRequest::clearParameters()
{
    Q_D(ForecastQueryServiceRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ForecastQueryServiceRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ForecastQueryServiceRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ForecastQueryServiceRequest::parameters() const
{
    Q_D(const ForecastQueryServiceRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ForecastQueryServiceRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ForecastQueryServiceRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ForecastQueryServiceRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ForecastQueryServiceRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ForecastQueryService request using the given
 * \a endpoint.
 *
 * This ForecastQueryService implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ForecastQueryServiceRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ForecastQueryServiceRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ForecastQueryService::ForecastQueryServiceRequestPrivate
 * \brief The ForecastQueryServiceRequestPrivate class provides private implementation for ForecastQueryServiceRequest.
 * \internal
 *
 * \inmodule QtAwsForecastQueryService
 */

/*!
 * Constructs a ForecastQueryServiceRequestPrivate object for ForecastQueryService \a action,
 * with public implementation \a q.
 */
ForecastQueryServiceRequestPrivate::ForecastQueryServiceRequestPrivate(const ForecastQueryServiceRequest::Action action, ForecastQueryServiceRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ForecastQueryServiceRequest class's copy constructor.
 */
ForecastQueryServiceRequestPrivate::ForecastQueryServiceRequestPrivate(const ForecastQueryServiceRequestPrivate &other,
                                     ForecastQueryServiceRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ForecastQueryServiceRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ForecastQueryService service's Action
 * query parameters.
 */
QString ForecastQueryServiceRequestPrivate::toString(const ForecastQueryServiceRequest::Action &action)
{
    #define ActionToString(action) \
        case ForecastQueryServiceRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ForecastQueryService
} // namespace QtAws

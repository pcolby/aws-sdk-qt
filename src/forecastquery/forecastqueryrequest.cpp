// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forecastqueryrequest.h"
#include "forecastqueryrequest_p.h"

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::ForecastQueryRequest
 * \brief The ForecastQueryRequest class provides an interface for ForecastQuery requests.
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * \enum ForecastQueryRequest::Action
 *
 * This enum describes the actions that can be performed as ForecastQuery
 * requests.
 *
 * \value QueryForecastAction ForecastQuery QueryForecast action.
 * \value QueryWhatIfForecastAction ForecastQuery QueryWhatIfForecast action.
 */

/*!
 * Constructs a ForecastQueryRequest object for ForecastQuery \a action.
 */
ForecastQueryRequest::ForecastQueryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ForecastQueryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ForecastQueryRequest::ForecastQueryRequest(const ForecastQueryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ForecastQueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ForecastQueryRequest object to be equal to \a other.
 */
ForecastQueryRequest& ForecastQueryRequest::operator=(const ForecastQueryRequest &other)
{
    Q_D(ForecastQueryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ForecastQueryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ForecastQueryRequestPrivate.
 */
ForecastQueryRequest::ForecastQueryRequest(ForecastQueryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ForecastQuery action to be performed by this request.
 */
ForecastQueryRequest::Action ForecastQueryRequest::action() const
{
    Q_D(const ForecastQueryRequest);
    return d->action;
}

/*!
 * Returns the name of the ForecastQuery action to be performed by this request.
 */
QString ForecastQueryRequest::actionString() const
{
    return ForecastQueryRequestPrivate::toString(action());
}

/*!
 * Returns the ForecastQuery API version implemented by this request.
 */
QString ForecastQueryRequest::apiVersion() const
{
    Q_D(const ForecastQueryRequest);
    return d->apiVersion;
}

/*!
 * Sets the ForecastQuery action to be performed by this request to \a action.
 */
void ForecastQueryRequest::setAction(const Action action)
{
    Q_D(ForecastQueryRequest);
    d->action = action;
}

/*!
 * Sets the ForecastQuery API version to include in this request to \a version.
 */
void ForecastQueryRequest::setApiVersion(const QString &version)
{
    Q_D(ForecastQueryRequest);
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
bool ForecastQueryRequest::operator==(const ForecastQueryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ForecastQuery queue name.
 *
 * @par From ForecastQuery FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ForecastQuery queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ForecastQueryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ForecastQueryRequest::clearParameter(const QString &name)
{
    Q_D(ForecastQueryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ForecastQueryRequest::clearParameters()
{
    Q_D(ForecastQueryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ForecastQueryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ForecastQueryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ForecastQueryRequest::parameters() const
{
    Q_D(const ForecastQueryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ForecastQueryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ForecastQueryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ForecastQueryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ForecastQueryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ForecastQuery request using the given
 * \a endpoint.
 *
 * This ForecastQuery implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ForecastQueryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ForecastQueryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ForecastQuery::ForecastQueryRequestPrivate
 * \brief The ForecastQueryRequestPrivate class provides private implementation for ForecastQueryRequest.
 * \internal
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a ForecastQueryRequestPrivate object for ForecastQuery \a action,
 * with public implementation \a q.
 */
ForecastQueryRequestPrivate::ForecastQueryRequestPrivate(const ForecastQueryRequest::Action action, ForecastQueryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-06-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ForecastQueryRequest class's copy constructor.
 */
ForecastQueryRequestPrivate::ForecastQueryRequestPrivate(const ForecastQueryRequestPrivate &other,
                                     ForecastQueryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ForecastQueryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ForecastQuery service's Action
 * query parameters.
 */
QString ForecastQueryRequestPrivate::toString(const ForecastQueryRequest::Action &action)
{
    #define ActionToString(action) \
        case ForecastQueryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(QueryForecast);
        ActionToString(QueryWhatIfForecast);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ForecastQuery
} // namespace QtAws

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

#include "applicationinsightsrequest.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ApplicationInsightsRequest
 * \brief The ApplicationInsightsRequest class provides an interface for ApplicationInsights requests.
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * \enum ApplicationInsightsRequest::Action
 *
 * This enum describes the actions that can be performed as ApplicationInsights
 * requests.
 *
 * \value CreateApplicationAction ApplicationInsights CreateApplication action.
 * \value CreateComponentAction ApplicationInsights CreateComponent action.
 * \value CreateLogPatternAction ApplicationInsights CreateLogPattern action.
 * \value DeleteApplicationAction ApplicationInsights DeleteApplication action.
 * \value DeleteComponentAction ApplicationInsights DeleteComponent action.
 * \value DeleteLogPatternAction ApplicationInsights DeleteLogPattern action.
 * \value DescribeApplicationAction ApplicationInsights DescribeApplication action.
 * \value DescribeComponentAction ApplicationInsights DescribeComponent action.
 * \value DescribeComponentConfigurationAction ApplicationInsights DescribeComponentConfiguration action.
 * \value DescribeComponentConfigurationRecommendationAction ApplicationInsights DescribeComponentConfigurationRecommendation action.
 * \value DescribeLogPatternAction ApplicationInsights DescribeLogPattern action.
 * \value DescribeObservationAction ApplicationInsights DescribeObservation action.
 * \value DescribeProblemAction ApplicationInsights DescribeProblem action.
 * \value DescribeProblemObservationsAction ApplicationInsights DescribeProblemObservations action.
 * \value ListApplicationsAction ApplicationInsights ListApplications action.
 * \value ListComponentsAction ApplicationInsights ListComponents action.
 * \value ListConfigurationHistoryAction ApplicationInsights ListConfigurationHistory action.
 * \value ListLogPatternSetsAction ApplicationInsights ListLogPatternSets action.
 * \value ListLogPatternsAction ApplicationInsights ListLogPatterns action.
 * \value ListProblemsAction ApplicationInsights ListProblems action.
 * \value ListTagsForResourceAction ApplicationInsights ListTagsForResource action.
 * \value TagResourceAction ApplicationInsights TagResource action.
 * \value UntagResourceAction ApplicationInsights UntagResource action.
 * \value UpdateApplicationAction ApplicationInsights UpdateApplication action.
 * \value UpdateComponentAction ApplicationInsights UpdateComponent action.
 * \value UpdateComponentConfigurationAction ApplicationInsights UpdateComponentConfiguration action.
 * \value UpdateLogPatternAction ApplicationInsights UpdateLogPattern action.
 */

/*!
 * Constructs a ApplicationInsightsRequest object for ApplicationInsights \a action.
 */
ApplicationInsightsRequest::ApplicationInsightsRequest(const Action action)
    : d_ptr(new ApplicationInsightsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApplicationInsightsRequest::ApplicationInsightsRequest(const ApplicationInsightsRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ApplicationInsightsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApplicationInsightsRequest object to be equal to \a other.
 */
ApplicationInsightsRequest& ApplicationInsightsRequest::operator=(const ApplicationInsightsRequest &other)
{
    Q_D(ApplicationInsightsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApplicationInsightsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationInsightsRequestPrivate.
 */
ApplicationInsightsRequest::ApplicationInsightsRequest(ApplicationInsightsRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ApplicationInsights action to be performed by this request.
 */
ApplicationInsightsRequest::Action ApplicationInsightsRequest::action() const
{
    Q_D(const ApplicationInsightsRequest);
    return d->action;
}

/*!
 * Returns the name of the ApplicationInsights action to be performed by this request.
 */
QString ApplicationInsightsRequest::actionString() const
{
    return ApplicationInsightsRequestPrivate::toString(action());
}

/*!
 * Returns the ApplicationInsights API version implemented by this request.
 */
QString ApplicationInsightsRequest::apiVersion() const
{
    Q_D(const ApplicationInsightsRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApplicationInsights action to be performed by this request to \a action.
 */
void ApplicationInsightsRequest::setAction(const Action action)
{
    Q_D(ApplicationInsightsRequest);
    d->action = action;
}

/*!
 * Sets the ApplicationInsights API version to include in this request to \a version.
 */
void ApplicationInsightsRequest::setApiVersion(const QString &version)
{
    Q_D(ApplicationInsightsRequest);
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
bool ApplicationInsightsRequest::operator==(const ApplicationInsightsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApplicationInsights queue name.
 *
 * @par From ApplicationInsights FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApplicationInsights queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApplicationInsightsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApplicationInsightsRequest::clearParameter(const QString &name)
{
    Q_D(ApplicationInsightsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApplicationInsightsRequest::clearParameters()
{
    Q_D(ApplicationInsightsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApplicationInsightsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApplicationInsightsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApplicationInsightsRequest::parameters() const
{
    Q_D(const ApplicationInsightsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApplicationInsightsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApplicationInsightsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApplicationInsightsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApplicationInsightsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApplicationInsights request using the given
 * \a endpoint.
 *
 * This ApplicationInsights implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApplicationInsightsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApplicationInsightsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApplicationInsights::ApplicationInsightsRequestPrivate
 * \brief The ApplicationInsightsRequestPrivate class provides private implementation for ApplicationInsightsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ApplicationInsightsRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
ApplicationInsightsRequestPrivate::ApplicationInsightsRequestPrivate(const ApplicationInsightsRequest::Action action, ApplicationInsightsRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApplicationInsightsRequest class's copy constructor.
 */
ApplicationInsightsRequestPrivate::ApplicationInsightsRequestPrivate(const ApplicationInsightsRequestPrivate &other,
                                     ApplicationInsightsRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApplicationInsightsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApplicationInsights service's Action
 * query parameters.
 */
QString ApplicationInsightsRequestPrivate::toString(const ApplicationInsightsRequest::Action &action)
{
    #define ActionToString(action) \
        case ApplicationInsightsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApplicationInsights
} // namespace QtAws

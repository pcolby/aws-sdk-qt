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

#include "applicationcostprofilerrequest.h"
#include "applicationcostprofilerrequest_p.h"

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerRequest
 * \brief The ApplicationCostProfilerRequest class provides an interface for ApplicationCostProfiler requests.
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * \enum ApplicationCostProfilerRequest::Action
 *
 * This enum describes the actions that can be performed as ApplicationCostProfiler
 * requests.
 *
 * \value DeleteReportDefinitionAction ApplicationCostProfiler DeleteReportDefinition action.
 * \value GetReportDefinitionAction ApplicationCostProfiler GetReportDefinition action.
 * \value ImportApplicationUsageAction ApplicationCostProfiler ImportApplicationUsage action.
 * \value ListReportDefinitionsAction ApplicationCostProfiler ListReportDefinitions action.
 * \value PutReportDefinitionAction ApplicationCostProfiler PutReportDefinition action.
 * \value UpdateReportDefinitionAction ApplicationCostProfiler UpdateReportDefinition action.
 */

/*!
 * Constructs a ApplicationCostProfilerRequest object for ApplicationCostProfiler \a action.
 */
ApplicationCostProfilerRequest::ApplicationCostProfilerRequest(const Action action)
    : d_ptr(new ApplicationCostProfilerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApplicationCostProfilerRequest::ApplicationCostProfilerRequest(const ApplicationCostProfilerRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new ApplicationCostProfilerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApplicationCostProfilerRequest object to be equal to \a other.
 */
ApplicationCostProfilerRequest& ApplicationCostProfilerRequest::operator=(const ApplicationCostProfilerRequest &other)
{
    Q_D(ApplicationCostProfilerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApplicationCostProfilerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationCostProfilerRequestPrivate.
 */
ApplicationCostProfilerRequest::ApplicationCostProfilerRequest(ApplicationCostProfilerRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the ApplicationCostProfiler action to be performed by this request.
 */
ApplicationCostProfilerRequest::Action ApplicationCostProfilerRequest::action() const
{
    Q_D(const ApplicationCostProfilerRequest);
    return d->action;
}

/*!
 * Returns the name of the ApplicationCostProfiler action to be performed by this request.
 */
QString ApplicationCostProfilerRequest::actionString() const
{
    return ApplicationCostProfilerRequestPrivate::toString(action());
}

/*!
 * Returns the ApplicationCostProfiler API version implemented by this request.
 */
QString ApplicationCostProfilerRequest::apiVersion() const
{
    Q_D(const ApplicationCostProfilerRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApplicationCostProfiler action to be performed by this request to \a action.
 */
void ApplicationCostProfilerRequest::setAction(const Action action)
{
    Q_D(ApplicationCostProfilerRequest);
    d->action = action;
}

/*!
 * Sets the ApplicationCostProfiler API version to include in this request to \a version.
 */
void ApplicationCostProfilerRequest::setApiVersion(const QString &version)
{
    Q_D(ApplicationCostProfilerRequest);
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
bool ApplicationCostProfilerRequest::operator==(const ApplicationCostProfilerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApplicationCostProfiler queue name.
 *
 * @par From ApplicationCostProfiler FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApplicationCostProfiler queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApplicationCostProfilerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApplicationCostProfilerRequest::clearParameter(const QString &name)
{
    Q_D(ApplicationCostProfilerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApplicationCostProfilerRequest::clearParameters()
{
    Q_D(ApplicationCostProfilerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApplicationCostProfilerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApplicationCostProfilerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApplicationCostProfilerRequest::parameters() const
{
    Q_D(const ApplicationCostProfilerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApplicationCostProfilerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApplicationCostProfilerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApplicationCostProfilerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApplicationCostProfilerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApplicationCostProfiler request using the given
 * \a endpoint.
 *
 * This ApplicationCostProfiler implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApplicationCostProfilerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApplicationCostProfilerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerRequestPrivate
 * \brief The ApplicationCostProfilerRequestPrivate class provides private implementation for ApplicationCostProfilerRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ApplicationCostProfilerRequestPrivate object for ApplicationCostProfiler \a action,
 * with public implementation \a q.
 */
ApplicationCostProfilerRequestPrivate::ApplicationCostProfilerRequestPrivate(const ApplicationCostProfilerRequest::Action action, ApplicationCostProfilerRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApplicationCostProfilerRequest class's copy constructor.
 */
ApplicationCostProfilerRequestPrivate::ApplicationCostProfilerRequestPrivate(const ApplicationCostProfilerRequestPrivate &other,
                                     ApplicationCostProfilerRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApplicationCostProfilerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApplicationCostProfiler service's Action
 * query parameters.
 */
QString ApplicationCostProfilerRequestPrivate::toString(const ApplicationCostProfilerRequest::Action &action)
{
    #define ActionToString(action) \
        case ApplicationCostProfilerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DeleteReportDefinition);
        ActionToString(GetReportDefinition);
        ActionToString(ImportApplicationUsage);
        ActionToString(ListReportDefinitions);
        ActionToString(PutReportDefinition);
        ActionToString(UpdateReportDefinition);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApplicationCostProfiler
} // namespace QtAws

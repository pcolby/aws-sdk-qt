/*
    Copyright 2013-2019 Paul Colby

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

#include "cloudwatchlogsrequest.h"
#include "cloudwatchlogsrequest_p.h"

namespace QtAws {
namespace CloudWatchLogs {

/*!
 * \class QtAws::CloudWatchLogs::CloudWatchLogsRequest
 * \brief The CloudWatchLogsRequest class provides an interface for CloudWatchLogs requests.
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * \enum CloudWatchLogsRequest::Action
 *
 * This enum describes the actions that can be performed as CloudWatchLogs
 * requests.
 *
 * \value AssociateKmsKeyAction CloudWatchLogs AssociateKmsKey action.
 * \value CancelExportTaskAction CloudWatchLogs CancelExportTask action.
 * \value CreateExportTaskAction CloudWatchLogs CreateExportTask action.
 * \value CreateLogGroupAction CloudWatchLogs CreateLogGroup action.
 * \value CreateLogStreamAction CloudWatchLogs CreateLogStream action.
 * \value DeleteDestinationAction CloudWatchLogs DeleteDestination action.
 * \value DeleteLogGroupAction CloudWatchLogs DeleteLogGroup action.
 * \value DeleteLogStreamAction CloudWatchLogs DeleteLogStream action.
 * \value DeleteMetricFilterAction CloudWatchLogs DeleteMetricFilter action.
 * \value DeleteResourcePolicyAction CloudWatchLogs DeleteResourcePolicy action.
 * \value DeleteRetentionPolicyAction CloudWatchLogs DeleteRetentionPolicy action.
 * \value DeleteSubscriptionFilterAction CloudWatchLogs DeleteSubscriptionFilter action.
 * \value DescribeDestinationsAction CloudWatchLogs DescribeDestinations action.
 * \value DescribeExportTasksAction CloudWatchLogs DescribeExportTasks action.
 * \value DescribeLogGroupsAction CloudWatchLogs DescribeLogGroups action.
 * \value DescribeLogStreamsAction CloudWatchLogs DescribeLogStreams action.
 * \value DescribeMetricFiltersAction CloudWatchLogs DescribeMetricFilters action.
 * \value DescribeQueriesAction CloudWatchLogs DescribeQueries action.
 * \value DescribeResourcePoliciesAction CloudWatchLogs DescribeResourcePolicies action.
 * \value DescribeSubscriptionFiltersAction CloudWatchLogs DescribeSubscriptionFilters action.
 * \value DisassociateKmsKeyAction CloudWatchLogs DisassociateKmsKey action.
 * \value FilterLogEventsAction CloudWatchLogs FilterLogEvents action.
 * \value GetLogEventsAction CloudWatchLogs GetLogEvents action.
 * \value GetLogGroupFieldsAction CloudWatchLogs GetLogGroupFields action.
 * \value GetLogRecordAction CloudWatchLogs GetLogRecord action.
 * \value GetQueryResultsAction CloudWatchLogs GetQueryResults action.
 * \value ListTagsLogGroupAction CloudWatchLogs ListTagsLogGroup action.
 * \value PutDestinationAction CloudWatchLogs PutDestination action.
 * \value PutDestinationPolicyAction CloudWatchLogs PutDestinationPolicy action.
 * \value PutLogEventsAction CloudWatchLogs PutLogEvents action.
 * \value PutMetricFilterAction CloudWatchLogs PutMetricFilter action.
 * \value PutResourcePolicyAction CloudWatchLogs PutResourcePolicy action.
 * \value PutRetentionPolicyAction CloudWatchLogs PutRetentionPolicy action.
 * \value PutSubscriptionFilterAction CloudWatchLogs PutSubscriptionFilter action.
 * \value StartQueryAction CloudWatchLogs StartQuery action.
 * \value StopQueryAction CloudWatchLogs StopQuery action.
 * \value TagLogGroupAction CloudWatchLogs TagLogGroup action.
 * \value TestMetricFilterAction CloudWatchLogs TestMetricFilter action.
 * \value UntagLogGroupAction CloudWatchLogs UntagLogGroup action.
 */

/*!
 * Constructs a CloudWatchLogsRequest object for CloudWatchLogs \a action.
 */
CloudWatchLogsRequest::CloudWatchLogsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CloudWatchLogsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CloudWatchLogsRequest::CloudWatchLogsRequest(const CloudWatchLogsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CloudWatchLogsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CloudWatchLogsRequest object to be equal to \a other.
 */
CloudWatchLogsRequest& CloudWatchLogsRequest::operator=(const CloudWatchLogsRequest &other)
{
    Q_D(CloudWatchLogsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CloudWatchLogsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CloudWatchLogsRequestPrivate.
 */
CloudWatchLogsRequest::CloudWatchLogsRequest(CloudWatchLogsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CloudWatchLogs action to be performed by this request.
 */
CloudWatchLogsRequest::Action CloudWatchLogsRequest::action() const
{
    Q_D(const CloudWatchLogsRequest);
    return d->action;
}

/*!
 * Returns the name of the CloudWatchLogs action to be performed by this request.
 */
QString CloudWatchLogsRequest::actionString() const
{
    return CloudWatchLogsRequestPrivate::toString(action());
}

/*!
 * Returns the CloudWatchLogs API version implemented by this request.
 */
QString CloudWatchLogsRequest::apiVersion() const
{
    Q_D(const CloudWatchLogsRequest);
    return d->apiVersion;
}

/*!
 * Sets the CloudWatchLogs action to be performed by this request to \a action.
 */
void CloudWatchLogsRequest::setAction(const Action action)
{
    Q_D(CloudWatchLogsRequest);
    d->action = action;
}

/*!
 * Sets the CloudWatchLogs API version to include in this request to \a version.
 */
void CloudWatchLogsRequest::setApiVersion(const QString &version)
{
    Q_D(CloudWatchLogsRequest);
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
bool CloudWatchLogsRequest::operator==(const CloudWatchLogsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CloudWatchLogs queue name.
 *
 * @par From CloudWatchLogs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CloudWatchLogs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CloudWatchLogsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CloudWatchLogsRequest::clearParameter(const QString &name)
{
    Q_D(CloudWatchLogsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CloudWatchLogsRequest::clearParameters()
{
    Q_D(CloudWatchLogsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CloudWatchLogsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CloudWatchLogsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CloudWatchLogsRequest::parameters() const
{
    Q_D(const CloudWatchLogsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CloudWatchLogsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CloudWatchLogsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CloudWatchLogsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CloudWatchLogsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CloudWatchLogs request using the given
 * \a endpoint.
 *
 * This CloudWatchLogs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CloudWatchLogsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CloudWatchLogsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CloudWatchLogs::CloudWatchLogsRequestPrivate
 * \brief The CloudWatchLogsRequestPrivate class provides private implementation for CloudWatchLogsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatchLogs
 */

/*!
 * Constructs a CloudWatchLogsRequestPrivate object for CloudWatchLogs \a action,
 * with public implementation \a q.
 */
CloudWatchLogsRequestPrivate::CloudWatchLogsRequestPrivate(const CloudWatchLogsRequest::Action action, CloudWatchLogsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CloudWatchLogsRequest class's copy constructor.
 */
CloudWatchLogsRequestPrivate::CloudWatchLogsRequestPrivate(const CloudWatchLogsRequestPrivate &other,
                                     CloudWatchLogsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CloudWatchLogsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CloudWatchLogs service's Action
 * query parameters.
 */
QString CloudWatchLogsRequestPrivate::toString(const CloudWatchLogsRequest::Action &action)
{
    #define ActionToString(action) \
        case CloudWatchLogsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CloudWatchLogs
} // namespace QtAws

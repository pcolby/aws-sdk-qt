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

#include "codeguruprofilerrequest.h"
#include "codeguruprofilerrequest_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::CodeGuruProfilerRequest
 * \brief The CodeGuruProfilerRequest class provides an interface for CodeGuruProfiler requests.
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * \enum CodeGuruProfilerRequest::Action
 *
 * This enum describes the actions that can be performed as CodeGuruProfiler
 * requests.
 *
 * \value AddNotificationChannelsAction CodeGuruProfiler AddNotificationChannels action.
 * \value BatchGetFrameMetricDataAction CodeGuruProfiler BatchGetFrameMetricData action.
 * \value ConfigureAgentAction CodeGuruProfiler ConfigureAgent action.
 * \value CreateProfilingGroupAction CodeGuruProfiler CreateProfilingGroup action.
 * \value DeleteProfilingGroupAction CodeGuruProfiler DeleteProfilingGroup action.
 * \value DescribeProfilingGroupAction CodeGuruProfiler DescribeProfilingGroup action.
 * \value GetFindingsReportAccountSummaryAction CodeGuruProfiler GetFindingsReportAccountSummary action.
 * \value GetNotificationConfigurationAction CodeGuruProfiler GetNotificationConfiguration action.
 * \value GetPolicyAction CodeGuruProfiler GetPolicy action.
 * \value GetProfileAction CodeGuruProfiler GetProfile action.
 * \value GetRecommendationsAction CodeGuruProfiler GetRecommendations action.
 * \value ListFindingsReportsAction CodeGuruProfiler ListFindingsReports action.
 * \value ListProfileTimesAction CodeGuruProfiler ListProfileTimes action.
 * \value ListProfilingGroupsAction CodeGuruProfiler ListProfilingGroups action.
 * \value ListTagsForResourceAction CodeGuruProfiler ListTagsForResource action.
 * \value PostAgentProfileAction CodeGuruProfiler PostAgentProfile action.
 * \value PutPermissionAction CodeGuruProfiler PutPermission action.
 * \value RemoveNotificationChannelAction CodeGuruProfiler RemoveNotificationChannel action.
 * \value RemovePermissionAction CodeGuruProfiler RemovePermission action.
 * \value SubmitFeedbackAction CodeGuruProfiler SubmitFeedback action.
 * \value TagResourceAction CodeGuruProfiler TagResource action.
 * \value UntagResourceAction CodeGuruProfiler UntagResource action.
 * \value UpdateProfilingGroupAction CodeGuruProfiler UpdateProfilingGroup action.
 */

/*!
 * Constructs a CodeGuruProfilerRequest object for CodeGuruProfiler \a action.
 */
CodeGuruProfilerRequest::CodeGuruProfilerRequest(const Action action)
    : d_ptr(new CodeGuruProfilerRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeGuruProfilerRequest::CodeGuruProfilerRequest(const CodeGuruProfilerRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new CodeGuruProfilerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeGuruProfilerRequest object to be equal to \a other.
 */
CodeGuruProfilerRequest& CodeGuruProfilerRequest::operator=(const CodeGuruProfilerRequest &other)
{
    Q_D(CodeGuruProfilerRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeGuruProfilerRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeGuruProfilerRequestPrivate.
 */
CodeGuruProfilerRequest::CodeGuruProfilerRequest(CodeGuruProfilerRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the CodeGuruProfiler action to be performed by this request.
 */
CodeGuruProfilerRequest::Action CodeGuruProfilerRequest::action() const
{
    Q_D(const CodeGuruProfilerRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeGuruProfiler action to be performed by this request.
 */
QString CodeGuruProfilerRequest::actionString() const
{
    return CodeGuruProfilerRequestPrivate::toString(action());
}

/*!
 * Returns the CodeGuruProfiler API version implemented by this request.
 */
QString CodeGuruProfilerRequest::apiVersion() const
{
    Q_D(const CodeGuruProfilerRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeGuruProfiler action to be performed by this request to \a action.
 */
void CodeGuruProfilerRequest::setAction(const Action action)
{
    Q_D(CodeGuruProfilerRequest);
    d->action = action;
}

/*!
 * Sets the CodeGuruProfiler API version to include in this request to \a version.
 */
void CodeGuruProfilerRequest::setApiVersion(const QString &version)
{
    Q_D(CodeGuruProfilerRequest);
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
bool CodeGuruProfilerRequest::operator==(const CodeGuruProfilerRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeGuruProfiler queue name.
 *
 * @par From CodeGuruProfiler FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeGuruProfiler queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeGuruProfilerRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeGuruProfilerRequest::clearParameter(const QString &name)
{
    Q_D(CodeGuruProfilerRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeGuruProfilerRequest::clearParameters()
{
    Q_D(CodeGuruProfilerRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeGuruProfilerRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeGuruProfilerRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeGuruProfilerRequest::parameters() const
{
    Q_D(const CodeGuruProfilerRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeGuruProfilerRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeGuruProfilerRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeGuruProfilerRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeGuruProfilerRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeGuruProfiler request using the given
 * \a endpoint.
 *
 * This CodeGuruProfiler implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeGuruProfilerRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodeGuruProfilerRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeGuruProfiler::CodeGuruProfilerRequestPrivate
 * \brief The CodeGuruProfilerRequestPrivate class provides private implementation for CodeGuruProfilerRequest.
 * \internal
 *
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a CodeGuruProfilerRequestPrivate object for CodeGuruProfiler \a action,
 * with public implementation \a q.
 */
CodeGuruProfilerRequestPrivate::CodeGuruProfilerRequestPrivate(const CodeGuruProfilerRequest::Action action, CodeGuruProfilerRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeGuruProfilerRequest class's copy constructor.
 */
CodeGuruProfilerRequestPrivate::CodeGuruProfilerRequestPrivate(const CodeGuruProfilerRequestPrivate &other,
                                     CodeGuruProfilerRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeGuruProfilerRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeGuruProfiler service's Action
 * query parameters.
 */
QString CodeGuruProfilerRequestPrivate::toString(const CodeGuruProfilerRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeGuruProfilerRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeGuruProfiler
} // namespace QtAws

/*
    Copyright 2013-2020 Paul Colby

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

#include "codepipelinerequest.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/*!
 * \class QtAws::CodePipeline::CodePipelineRequest
 * \brief The CodePipelineRequest class provides an interface for CodePipeline requests.
 *
 * \inmodule QtAwsCodePipeline
 */

/*!
 * \enum CodePipelineRequest::Action
 *
 * This enum describes the actions that can be performed as CodePipeline
 * requests.
 *
 * \value AcknowledgeJobAction CodePipeline AcknowledgeJob action.
 * \value AcknowledgeThirdPartyJobAction CodePipeline AcknowledgeThirdPartyJob action.
 * \value CreateCustomActionTypeAction CodePipeline CreateCustomActionType action.
 * \value CreatePipelineAction CodePipeline CreatePipeline action.
 * \value DeleteCustomActionTypeAction CodePipeline DeleteCustomActionType action.
 * \value DeletePipelineAction CodePipeline DeletePipeline action.
 * \value DeleteWebhookAction CodePipeline DeleteWebhook action.
 * \value DeregisterWebhookWithThirdPartyAction CodePipeline DeregisterWebhookWithThirdParty action.
 * \value DisableStageTransitionAction CodePipeline DisableStageTransition action.
 * \value EnableStageTransitionAction CodePipeline EnableStageTransition action.
 * \value GetJobDetailsAction CodePipeline GetJobDetails action.
 * \value GetPipelineAction CodePipeline GetPipeline action.
 * \value GetPipelineExecutionAction CodePipeline GetPipelineExecution action.
 * \value GetPipelineStateAction CodePipeline GetPipelineState action.
 * \value GetThirdPartyJobDetailsAction CodePipeline GetThirdPartyJobDetails action.
 * \value ListActionExecutionsAction CodePipeline ListActionExecutions action.
 * \value ListActionTypesAction CodePipeline ListActionTypes action.
 * \value ListPipelineExecutionsAction CodePipeline ListPipelineExecutions action.
 * \value ListPipelinesAction CodePipeline ListPipelines action.
 * \value ListTagsForResourceAction CodePipeline ListTagsForResource action.
 * \value ListWebhooksAction CodePipeline ListWebhooks action.
 * \value PollForJobsAction CodePipeline PollForJobs action.
 * \value PollForThirdPartyJobsAction CodePipeline PollForThirdPartyJobs action.
 * \value PutActionRevisionAction CodePipeline PutActionRevision action.
 * \value PutApprovalResultAction CodePipeline PutApprovalResult action.
 * \value PutJobFailureResultAction CodePipeline PutJobFailureResult action.
 * \value PutJobSuccessResultAction CodePipeline PutJobSuccessResult action.
 * \value PutThirdPartyJobFailureResultAction CodePipeline PutThirdPartyJobFailureResult action.
 * \value PutThirdPartyJobSuccessResultAction CodePipeline PutThirdPartyJobSuccessResult action.
 * \value PutWebhookAction CodePipeline PutWebhook action.
 * \value RegisterWebhookWithThirdPartyAction CodePipeline RegisterWebhookWithThirdParty action.
 * \value RetryStageExecutionAction CodePipeline RetryStageExecution action.
 * \value StartPipelineExecutionAction CodePipeline StartPipelineExecution action.
 * \value TagResourceAction CodePipeline TagResource action.
 * \value UntagResourceAction CodePipeline UntagResource action.
 * \value UpdatePipelineAction CodePipeline UpdatePipeline action.
 */

/*!
 * Constructs a CodePipelineRequest object for CodePipeline \a action.
 */
CodePipelineRequest::CodePipelineRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodePipelineRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodePipelineRequest::CodePipelineRequest(const CodePipelineRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodePipelineRequest object to be equal to \a other.
 */
CodePipelineRequest& CodePipelineRequest::operator=(const CodePipelineRequest &other)
{
    Q_D(CodePipelineRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodePipelineRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodePipelineRequestPrivate.
 */
CodePipelineRequest::CodePipelineRequest(CodePipelineRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodePipeline action to be performed by this request.
 */
CodePipelineRequest::Action CodePipelineRequest::action() const
{
    Q_D(const CodePipelineRequest);
    return d->action;
}

/*!
 * Returns the name of the CodePipeline action to be performed by this request.
 */
QString CodePipelineRequest::actionString() const
{
    return CodePipelineRequestPrivate::toString(action());
}

/*!
 * Returns the CodePipeline API version implemented by this request.
 */
QString CodePipelineRequest::apiVersion() const
{
    Q_D(const CodePipelineRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodePipeline action to be performed by this request to \a action.
 */
void CodePipelineRequest::setAction(const Action action)
{
    Q_D(CodePipelineRequest);
    d->action = action;
}

/*!
 * Sets the CodePipeline API version to include in this request to \a version.
 */
void CodePipelineRequest::setApiVersion(const QString &version)
{
    Q_D(CodePipelineRequest);
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
bool CodePipelineRequest::operator==(const CodePipelineRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodePipeline queue name.
 *
 * @par From CodePipeline FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodePipeline queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodePipelineRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodePipelineRequest::clearParameter(const QString &name)
{
    Q_D(CodePipelineRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodePipelineRequest::clearParameters()
{
    Q_D(CodePipelineRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodePipelineRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodePipelineRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodePipelineRequest::parameters() const
{
    Q_D(const CodePipelineRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodePipelineRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodePipelineRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodePipelineRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodePipelineRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodePipeline request using the given
 * \a endpoint.
 *
 * This CodePipeline implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodePipelineRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const CodePipelineRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodePipeline::CodePipelineRequestPrivate
 * \brief The CodePipelineRequestPrivate class provides private implementation for CodePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsCodePipeline
 */

/*!
 * Constructs a CodePipelineRequestPrivate object for CodePipeline \a action,
 * with public implementation \a q.
 */
CodePipelineRequestPrivate::CodePipelineRequestPrivate(const CodePipelineRequest::Action action, CodePipelineRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodePipelineRequest class's copy constructor.
 */
CodePipelineRequestPrivate::CodePipelineRequestPrivate(const CodePipelineRequestPrivate &other,
                                     CodePipelineRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodePipelineRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodePipeline service's Action
 * query parameters.
 */
QString CodePipelineRequestPrivate::toString(const CodePipelineRequest::Action &action)
{
    #define ActionToString(action) \
        case CodePipelineRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodePipeline
} // namespace QtAws

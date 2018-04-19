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

#include "codedeployrequest.h"
#include "codedeployrequest_p.h"

namespace QtAws {
namespace CodeDeploy {

/*!
 * \class QtAws::CodeDeploy::CodeDeployRequest
 * \brief The CodeDeployRequest class provides an interface for CodeDeploy requests.
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * \enum CodeDeployRequest::Action
 *
 * This enum describes the actions that can be performed as CodeDeploy
 * requests.
 *
 * \value AddTagsToOnPremisesInstancesAction CodeDeploy AddTagsToOnPremisesInstances action.
 * \value BatchGetApplicationRevisionsAction CodeDeploy BatchGetApplicationRevisions action.
 * \value BatchGetApplicationsAction CodeDeploy BatchGetApplications action.
 * \value BatchGetDeploymentGroupsAction CodeDeploy BatchGetDeploymentGroups action.
 * \value BatchGetDeploymentInstancesAction CodeDeploy BatchGetDeploymentInstances action.
 * \value BatchGetDeploymentsAction CodeDeploy BatchGetDeployments action.
 * \value BatchGetOnPremisesInstancesAction CodeDeploy BatchGetOnPremisesInstances action.
 * \value ContinueDeploymentAction CodeDeploy ContinueDeployment action.
 * \value CreateApplicationAction CodeDeploy CreateApplication action.
 * \value CreateDeploymentAction CodeDeploy CreateDeployment action.
 * \value CreateDeploymentConfigAction CodeDeploy CreateDeploymentConfig action.
 * \value CreateDeploymentGroupAction CodeDeploy CreateDeploymentGroup action.
 * \value DeleteApplicationAction CodeDeploy DeleteApplication action.
 * \value DeleteDeploymentConfigAction CodeDeploy DeleteDeploymentConfig action.
 * \value DeleteDeploymentGroupAction CodeDeploy DeleteDeploymentGroup action.
 * \value DeleteGitHubAccountTokenAction CodeDeploy DeleteGitHubAccountToken action.
 * \value DeregisterOnPremisesInstanceAction CodeDeploy DeregisterOnPremisesInstance action.
 * \value GetApplicationAction CodeDeploy GetApplication action.
 * \value GetApplicationRevisionAction CodeDeploy GetApplicationRevision action.
 * \value GetDeploymentAction CodeDeploy GetDeployment action.
 * \value GetDeploymentConfigAction CodeDeploy GetDeploymentConfig action.
 * \value GetDeploymentGroupAction CodeDeploy GetDeploymentGroup action.
 * \value GetDeploymentInstanceAction CodeDeploy GetDeploymentInstance action.
 * \value GetOnPremisesInstanceAction CodeDeploy GetOnPremisesInstance action.
 * \value ListApplicationRevisionsAction CodeDeploy ListApplicationRevisions action.
 * \value ListApplicationsAction CodeDeploy ListApplications action.
 * \value ListDeploymentConfigsAction CodeDeploy ListDeploymentConfigs action.
 * \value ListDeploymentGroupsAction CodeDeploy ListDeploymentGroups action.
 * \value ListDeploymentInstancesAction CodeDeploy ListDeploymentInstances action.
 * \value ListDeploymentsAction CodeDeploy ListDeployments action.
 * \value ListGitHubAccountTokenNamesAction CodeDeploy ListGitHubAccountTokenNames action.
 * \value ListOnPremisesInstancesAction CodeDeploy ListOnPremisesInstances action.
 * \value PutLifecycleEventHookExecutionStatusAction CodeDeploy PutLifecycleEventHookExecutionStatus action.
 * \value RegisterApplicationRevisionAction CodeDeploy RegisterApplicationRevision action.
 * \value RegisterOnPremisesInstanceAction CodeDeploy RegisterOnPremisesInstance action.
 * \value RemoveTagsFromOnPremisesInstancesAction CodeDeploy RemoveTagsFromOnPremisesInstances action.
 * \value SkipWaitTimeForInstanceTerminationAction CodeDeploy SkipWaitTimeForInstanceTermination action.
 * \value StopDeploymentAction CodeDeploy StopDeployment action.
 * \value UpdateApplicationAction CodeDeploy UpdateApplication action.
 * \value UpdateDeploymentGroupAction CodeDeploy UpdateDeploymentGroup action.
 */

/*!
 * Constructs a CodeDeployRequest object for CodeDeploy \a action.
 */
CodeDeployRequest::CodeDeployRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new CodeDeployRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
CodeDeployRequest::CodeDeployRequest(const CodeDeployRequest &other)
    : QtAws::Core::AwsAbstractRequest(new CodeDeployRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the CodeDeployRequest object to be equal to \a other.
 */
CodeDeployRequest& CodeDeployRequest::operator=(const CodeDeployRequest &other)
{
    Q_D(CodeDeployRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa CodeDeployRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodeDeployRequestPrivate.
 */
CodeDeployRequest::CodeDeployRequest(CodeDeployRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the CodeDeploy action to be performed by this request.
 */
CodeDeployRequest::Action CodeDeployRequest::action() const
{
    Q_D(const CodeDeployRequest);
    return d->action;
}

/*!
 * Returns the name of the CodeDeploy action to be performed by this request.
 */
QString CodeDeployRequest::actionString() const
{
    return CodeDeployRequestPrivate::toString(action());
}

/*!
 * Returns the CodeDeploy API version implemented by this request.
 */
QString CodeDeployRequest::apiVersion() const
{
    Q_D(const CodeDeployRequest);
    return d->apiVersion;
}

/*!
 * Sets the CodeDeploy action to be performed by this request to \a action.
 */
void CodeDeployRequest::setAction(const Action action)
{
    Q_D(CodeDeployRequest);
    d->action = action;
}

/*!
 * Sets the CodeDeploy API version to include in this request to \a version.
 */
void CodeDeployRequest::setApiVersion(const QString &version)
{
    Q_D(CodeDeployRequest);
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
bool CodeDeployRequest::operator==(const CodeDeployRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid CodeDeploy queue name.
 *
 * @par From CodeDeploy FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid CodeDeploy queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool CodeDeployRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int CodeDeployRequest::clearParameter(const QString &name)
{
    Q_D(CodeDeployRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void CodeDeployRequest::clearParameters()
{
    Q_D(CodeDeployRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant CodeDeployRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const CodeDeployRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &CodeDeployRequest::parameters() const
{
    Q_D(const CodeDeployRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void CodeDeployRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(CodeDeployRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void CodeDeployRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(CodeDeployRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the CodeDeploy request using the given
 * \a endpoint.
 *
 * This CodeDeploy implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest CodeDeployRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const CodeDeployRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::CodeDeploy::CodeDeployRequestPrivate
 * \brief The CodeDeployRequestPrivate class provides private implementation for CodeDeployRequest.
 * \internal
 *
 * \inmodule QtAwsCodeDeploy
 */

/*!
 * Constructs a CodeDeployRequestPrivate object for CodeDeploy \a action,
 * with public implementation \a q.
 */
CodeDeployRequestPrivate::CodeDeployRequestPrivate(const CodeDeployRequest::Action action, CodeDeployRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the CodeDeployRequest class's copy constructor.
 */
CodeDeployRequestPrivate::CodeDeployRequestPrivate(const CodeDeployRequestPrivate &other,
                                     CodeDeployRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts CodeDeployRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the CodeDeploy service's Action
 * query parameters.
 */
QString CodeDeployRequestPrivate::toString(const CodeDeployRequest::Action &action)
{
    #define ActionToString(action) \
        case CodeDeployRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace CodeDeploy
} // namespace QtAws

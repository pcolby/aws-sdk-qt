// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "m2request.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::M2Request
 * \brief The M2Request class provides an interface for M2 requests.
 *
 * \inmodule QtAwsM2
 */

/*!
 * \enum M2Request::Action
 *
 * This enum describes the actions that can be performed as M2
 * requests.
 *
 * \value CancelBatchJobExecutionAction M2 CancelBatchJobExecution action.
 * \value CreateApplicationAction M2 CreateApplication action.
 * \value CreateDataSetImportTaskAction M2 CreateDataSetImportTask action.
 * \value CreateDeploymentAction M2 CreateDeployment action.
 * \value CreateEnvironmentAction M2 CreateEnvironment action.
 * \value DeleteApplicationAction M2 DeleteApplication action.
 * \value DeleteApplicationFromEnvironmentAction M2 DeleteApplicationFromEnvironment action.
 * \value DeleteEnvironmentAction M2 DeleteEnvironment action.
 * \value GetApplicationAction M2 GetApplication action.
 * \value GetApplicationVersionAction M2 GetApplicationVersion action.
 * \value GetBatchJobExecutionAction M2 GetBatchJobExecution action.
 * \value GetDataSetDetailsAction M2 GetDataSetDetails action.
 * \value GetDataSetImportTaskAction M2 GetDataSetImportTask action.
 * \value GetDeploymentAction M2 GetDeployment action.
 * \value GetEnvironmentAction M2 GetEnvironment action.
 * \value ListApplicationVersionsAction M2 ListApplicationVersions action.
 * \value ListApplicationsAction M2 ListApplications action.
 * \value ListBatchJobDefinitionsAction M2 ListBatchJobDefinitions action.
 * \value ListBatchJobExecutionsAction M2 ListBatchJobExecutions action.
 * \value ListDataSetImportHistoryAction M2 ListDataSetImportHistory action.
 * \value ListDataSetsAction M2 ListDataSets action.
 * \value ListDeploymentsAction M2 ListDeployments action.
 * \value ListEngineVersionsAction M2 ListEngineVersions action.
 * \value ListEnvironmentsAction M2 ListEnvironments action.
 * \value ListTagsForResourceAction M2 ListTagsForResource action.
 * \value StartApplicationAction M2 StartApplication action.
 * \value StartBatchJobAction M2 StartBatchJob action.
 * \value StopApplicationAction M2 StopApplication action.
 * \value TagResourceAction M2 TagResource action.
 * \value UntagResourceAction M2 UntagResource action.
 * \value UpdateApplicationAction M2 UpdateApplication action.
 * \value UpdateEnvironmentAction M2 UpdateEnvironment action.
 */

/*!
 * Constructs a M2Request object for M2 \a action.
 */
M2Request::M2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new M2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
M2Request::M2Request(const M2Request &other)
    : QtAws::Core::AwsAbstractRequest(new M2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the M2Request object to be equal to \a other.
 */
M2Request& M2Request::operator=(const M2Request &other)
{
    Q_D(M2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa M2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from M2RequestPrivate.
 */
M2Request::M2Request(M2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the M2 action to be performed by this request.
 */
M2Request::Action M2Request::action() const
{
    Q_D(const M2Request);
    return d->action;
}

/*!
 * Returns the name of the M2 action to be performed by this request.
 */
QString M2Request::actionString() const
{
    return M2RequestPrivate::toString(action());
}

/*!
 * Returns the M2 API version implemented by this request.
 */
QString M2Request::apiVersion() const
{
    Q_D(const M2Request);
    return d->apiVersion;
}

/*!
 * Sets the M2 action to be performed by this request to \a action.
 */
void M2Request::setAction(const Action action)
{
    Q_D(M2Request);
    d->action = action;
}

/*!
 * Sets the M2 API version to include in this request to \a version.
 */
void M2Request::setApiVersion(const QString &version)
{
    Q_D(M2Request);
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
bool M2Request::operator==(const M2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid M2 queue name.
 *
 * @par From M2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid M2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool M2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int M2Request::clearParameter(const QString &name)
{
    Q_D(M2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void M2Request::clearParameters()
{
    Q_D(M2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant M2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const M2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &M2Request::parameters() const
{
    Q_D(const M2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void M2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(M2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void M2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(M2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the M2 request using the given
 * \a endpoint.
 *
 * This M2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest M2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const M2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::M2::M2RequestPrivate
 * \brief The M2RequestPrivate class provides private implementation for M2Request.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a M2RequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
M2RequestPrivate::M2RequestPrivate(const M2Request::Action action, M2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2021-04-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the M2Request class's copy constructor.
 */
M2RequestPrivate::M2RequestPrivate(const M2RequestPrivate &other,
                                     M2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts M2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the M2 service's Action
 * query parameters.
 */
QString M2RequestPrivate::toString(const M2Request::Action &action)
{
    #define ActionToString(action) \
        case M2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelBatchJobExecution);
        ActionToString(CreateApplication);
        ActionToString(CreateDataSetImportTask);
        ActionToString(CreateDeployment);
        ActionToString(CreateEnvironment);
        ActionToString(DeleteApplication);
        ActionToString(DeleteApplicationFromEnvironment);
        ActionToString(DeleteEnvironment);
        ActionToString(GetApplication);
        ActionToString(GetApplicationVersion);
        ActionToString(GetBatchJobExecution);
        ActionToString(GetDataSetDetails);
        ActionToString(GetDataSetImportTask);
        ActionToString(GetDeployment);
        ActionToString(GetEnvironment);
        ActionToString(ListApplicationVersions);
        ActionToString(ListApplications);
        ActionToString(ListBatchJobDefinitions);
        ActionToString(ListBatchJobExecutions);
        ActionToString(ListDataSetImportHistory);
        ActionToString(ListDataSets);
        ActionToString(ListDeployments);
        ActionToString(ListEngineVersions);
        ActionToString(ListEnvironments);
        ActionToString(ListTagsForResource);
        ActionToString(StartApplication);
        ActionToString(StartBatchJob);
        ActionToString(StopApplication);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateApplication);
        ActionToString(UpdateEnvironment);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace M2
} // namespace QtAws

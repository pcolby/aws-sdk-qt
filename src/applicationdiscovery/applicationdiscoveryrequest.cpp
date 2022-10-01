// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applicationdiscoveryrequest.h"
#include "applicationdiscoveryrequest_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

/*!
 * \class QtAws::ApplicationDiscovery::ApplicationDiscoveryRequest
 * \brief The ApplicationDiscoveryRequest class provides an interface for ApplicationDiscovery requests.
 *
 * \inmodule QtAwsApplicationDiscovery
 */

/*!
 * \enum ApplicationDiscoveryRequest::Action
 *
 * This enum describes the actions that can be performed as ApplicationDiscovery
 * requests.
 *
 * \value AssociateConfigurationItemsToApplicationAction ApplicationDiscovery AssociateConfigurationItemsToApplication action.
 * \value BatchDeleteImportDataAction ApplicationDiscovery BatchDeleteImportData action.
 * \value CreateApplicationAction ApplicationDiscovery CreateApplication action.
 * \value CreateTagsAction ApplicationDiscovery CreateTags action.
 * \value DeleteApplicationsAction ApplicationDiscovery DeleteApplications action.
 * \value DeleteTagsAction ApplicationDiscovery DeleteTags action.
 * \value DescribeAgentsAction ApplicationDiscovery DescribeAgents action.
 * \value DescribeConfigurationsAction ApplicationDiscovery DescribeConfigurations action.
 * \value DescribeContinuousExportsAction ApplicationDiscovery DescribeContinuousExports action.
 * \value DescribeExportConfigurationsAction ApplicationDiscovery DescribeExportConfigurations action.
 * \value DescribeExportTasksAction ApplicationDiscovery DescribeExportTasks action.
 * \value DescribeImportTasksAction ApplicationDiscovery DescribeImportTasks action.
 * \value DescribeTagsAction ApplicationDiscovery DescribeTags action.
 * \value DisassociateConfigurationItemsFromApplicationAction ApplicationDiscovery DisassociateConfigurationItemsFromApplication action.
 * \value ExportConfigurationsAction ApplicationDiscovery ExportConfigurations action.
 * \value GetDiscoverySummaryAction ApplicationDiscovery GetDiscoverySummary action.
 * \value ListConfigurationsAction ApplicationDiscovery ListConfigurations action.
 * \value ListServerNeighborsAction ApplicationDiscovery ListServerNeighbors action.
 * \value StartContinuousExportAction ApplicationDiscovery StartContinuousExport action.
 * \value StartDataCollectionByAgentIdsAction ApplicationDiscovery StartDataCollectionByAgentIds action.
 * \value StartExportTaskAction ApplicationDiscovery StartExportTask action.
 * \value StartImportTaskAction ApplicationDiscovery StartImportTask action.
 * \value StopContinuousExportAction ApplicationDiscovery StopContinuousExport action.
 * \value StopDataCollectionByAgentIdsAction ApplicationDiscovery StopDataCollectionByAgentIds action.
 * \value UpdateApplicationAction ApplicationDiscovery UpdateApplication action.
 */

/*!
 * Constructs a ApplicationDiscoveryRequest object for ApplicationDiscovery \a action.
 */
ApplicationDiscoveryRequest::ApplicationDiscoveryRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ApplicationDiscoveryRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ApplicationDiscoveryRequest::ApplicationDiscoveryRequest(const ApplicationDiscoveryRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ApplicationDiscoveryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ApplicationDiscoveryRequest object to be equal to \a other.
 */
ApplicationDiscoveryRequest& ApplicationDiscoveryRequest::operator=(const ApplicationDiscoveryRequest &other)
{
    Q_D(ApplicationDiscoveryRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ApplicationDiscoveryRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationDiscoveryRequestPrivate.
 */
ApplicationDiscoveryRequest::ApplicationDiscoveryRequest(ApplicationDiscoveryRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ApplicationDiscovery action to be performed by this request.
 */
ApplicationDiscoveryRequest::Action ApplicationDiscoveryRequest::action() const
{
    Q_D(const ApplicationDiscoveryRequest);
    return d->action;
}

/*!
 * Returns the name of the ApplicationDiscovery action to be performed by this request.
 */
QString ApplicationDiscoveryRequest::actionString() const
{
    return ApplicationDiscoveryRequestPrivate::toString(action());
}

/*!
 * Returns the ApplicationDiscovery API version implemented by this request.
 */
QString ApplicationDiscoveryRequest::apiVersion() const
{
    Q_D(const ApplicationDiscoveryRequest);
    return d->apiVersion;
}

/*!
 * Sets the ApplicationDiscovery action to be performed by this request to \a action.
 */
void ApplicationDiscoveryRequest::setAction(const Action action)
{
    Q_D(ApplicationDiscoveryRequest);
    d->action = action;
}

/*!
 * Sets the ApplicationDiscovery API version to include in this request to \a version.
 */
void ApplicationDiscoveryRequest::setApiVersion(const QString &version)
{
    Q_D(ApplicationDiscoveryRequest);
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
bool ApplicationDiscoveryRequest::operator==(const ApplicationDiscoveryRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ApplicationDiscovery queue name.
 *
 * @par From ApplicationDiscovery FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ApplicationDiscovery queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ApplicationDiscoveryRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ApplicationDiscoveryRequest::clearParameter(const QString &name)
{
    Q_D(ApplicationDiscoveryRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ApplicationDiscoveryRequest::clearParameters()
{
    Q_D(ApplicationDiscoveryRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ApplicationDiscoveryRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ApplicationDiscoveryRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ApplicationDiscoveryRequest::parameters() const
{
    Q_D(const ApplicationDiscoveryRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ApplicationDiscoveryRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ApplicationDiscoveryRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ApplicationDiscoveryRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ApplicationDiscoveryRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ApplicationDiscovery request using the given
 * \a endpoint.
 *
 * This ApplicationDiscovery implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ApplicationDiscoveryRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ApplicationDiscoveryRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ApplicationDiscovery::ApplicationDiscoveryRequestPrivate
 * \brief The ApplicationDiscoveryRequestPrivate class provides private implementation for ApplicationDiscoveryRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationDiscovery
 */

/*!
 * Constructs a ApplicationDiscoveryRequestPrivate object for ApplicationDiscovery \a action,
 * with public implementation \a q.
 */
ApplicationDiscoveryRequestPrivate::ApplicationDiscoveryRequestPrivate(const ApplicationDiscoveryRequest::Action action, ApplicationDiscoveryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2015-11-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ApplicationDiscoveryRequest class's copy constructor.
 */
ApplicationDiscoveryRequestPrivate::ApplicationDiscoveryRequestPrivate(const ApplicationDiscoveryRequestPrivate &other,
                                     ApplicationDiscoveryRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ApplicationDiscoveryRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ApplicationDiscovery service's Action
 * query parameters.
 */
QString ApplicationDiscoveryRequestPrivate::toString(const ApplicationDiscoveryRequest::Action &action)
{
    #define ActionToString(action) \
        case ApplicationDiscoveryRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateConfigurationItemsToApplication);
        ActionToString(BatchDeleteImportData);
        ActionToString(CreateApplication);
        ActionToString(CreateTags);
        ActionToString(DeleteApplications);
        ActionToString(DeleteTags);
        ActionToString(DescribeAgents);
        ActionToString(DescribeConfigurations);
        ActionToString(DescribeContinuousExports);
        ActionToString(DescribeExportConfigurations);
        ActionToString(DescribeExportTasks);
        ActionToString(DescribeImportTasks);
        ActionToString(DescribeTags);
        ActionToString(DisassociateConfigurationItemsFromApplication);
        ActionToString(ExportConfigurations);
        ActionToString(GetDiscoverySummary);
        ActionToString(ListConfigurations);
        ActionToString(ListServerNeighbors);
        ActionToString(StartContinuousExport);
        ActionToString(StartDataCollectionByAgentIds);
        ActionToString(StartExportTask);
        ActionToString(StartImportTask);
        ActionToString(StopContinuousExport);
        ActionToString(StopDataCollectionByAgentIds);
        ActionToString(UpdateApplication);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ApplicationDiscovery
} // namespace QtAws

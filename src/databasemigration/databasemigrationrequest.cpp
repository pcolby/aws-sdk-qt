// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "databasemigrationrequest.h"
#include "databasemigrationrequest_p.h"

namespace QtAws {
namespace DatabaseMigration {

/*!
 * \class QtAws::DatabaseMigration::DatabaseMigrationRequest
 * \brief The DatabaseMigrationRequest class provides an interface for DatabaseMigration requests.
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * \enum DatabaseMigrationRequest::Action
 *
 * This enum describes the actions that can be performed as DatabaseMigration
 * requests.
 *
 * \value AddTagsToResourceAction DatabaseMigration AddTagsToResource action.
 * \value ApplyPendingMaintenanceActionAction DatabaseMigration ApplyPendingMaintenanceAction action.
 * \value CancelReplicationTaskAssessmentRunAction DatabaseMigration CancelReplicationTaskAssessmentRun action.
 * \value CreateEndpointAction DatabaseMigration CreateEndpoint action.
 * \value CreateEventSubscriptionAction DatabaseMigration CreateEventSubscription action.
 * \value CreateFleetAdvisorCollectorAction DatabaseMigration CreateFleetAdvisorCollector action.
 * \value CreateReplicationInstanceAction DatabaseMigration CreateReplicationInstance action.
 * \value CreateReplicationSubnetGroupAction DatabaseMigration CreateReplicationSubnetGroup action.
 * \value CreateReplicationTaskAction DatabaseMigration CreateReplicationTask action.
 * \value DeleteCertificateAction DatabaseMigration DeleteCertificate action.
 * \value DeleteConnectionAction DatabaseMigration DeleteConnection action.
 * \value DeleteEndpointAction DatabaseMigration DeleteEndpoint action.
 * \value DeleteEventSubscriptionAction DatabaseMigration DeleteEventSubscription action.
 * \value DeleteFleetAdvisorCollectorAction DatabaseMigration DeleteFleetAdvisorCollector action.
 * \value DeleteFleetAdvisorDatabasesAction DatabaseMigration DeleteFleetAdvisorDatabases action.
 * \value DeleteReplicationInstanceAction DatabaseMigration DeleteReplicationInstance action.
 * \value DeleteReplicationSubnetGroupAction DatabaseMigration DeleteReplicationSubnetGroup action.
 * \value DeleteReplicationTaskAction DatabaseMigration DeleteReplicationTask action.
 * \value DeleteReplicationTaskAssessmentRunAction DatabaseMigration DeleteReplicationTaskAssessmentRun action.
 * \value DescribeAccountAttributesAction DatabaseMigration DescribeAccountAttributes action.
 * \value DescribeApplicableIndividualAssessmentsAction DatabaseMigration DescribeApplicableIndividualAssessments action.
 * \value DescribeCertificatesAction DatabaseMigration DescribeCertificates action.
 * \value DescribeConnectionsAction DatabaseMigration DescribeConnections action.
 * \value DescribeEndpointSettingsAction DatabaseMigration DescribeEndpointSettings action.
 * \value DescribeEndpointTypesAction DatabaseMigration DescribeEndpointTypes action.
 * \value DescribeEndpointsAction DatabaseMigration DescribeEndpoints action.
 * \value DescribeEventCategoriesAction DatabaseMigration DescribeEventCategories action.
 * \value DescribeEventSubscriptionsAction DatabaseMigration DescribeEventSubscriptions action.
 * \value DescribeEventsAction DatabaseMigration DescribeEvents action.
 * \value DescribeFleetAdvisorCollectorsAction DatabaseMigration DescribeFleetAdvisorCollectors action.
 * \value DescribeFleetAdvisorDatabasesAction DatabaseMigration DescribeFleetAdvisorDatabases action.
 * \value DescribeFleetAdvisorLsaAnalysisAction DatabaseMigration DescribeFleetAdvisorLsaAnalysis action.
 * \value DescribeFleetAdvisorSchemaObjectSummaryAction DatabaseMigration DescribeFleetAdvisorSchemaObjectSummary action.
 * \value DescribeFleetAdvisorSchemasAction DatabaseMigration DescribeFleetAdvisorSchemas action.
 * \value DescribeOrderableReplicationInstancesAction DatabaseMigration DescribeOrderableReplicationInstances action.
 * \value DescribePendingMaintenanceActionsAction DatabaseMigration DescribePendingMaintenanceActions action.
 * \value DescribeRefreshSchemasStatusAction DatabaseMigration DescribeRefreshSchemasStatus action.
 * \value DescribeReplicationInstanceTaskLogsAction DatabaseMigration DescribeReplicationInstanceTaskLogs action.
 * \value DescribeReplicationInstancesAction DatabaseMigration DescribeReplicationInstances action.
 * \value DescribeReplicationSubnetGroupsAction DatabaseMigration DescribeReplicationSubnetGroups action.
 * \value DescribeReplicationTaskAssessmentResultsAction DatabaseMigration DescribeReplicationTaskAssessmentResults action.
 * \value DescribeReplicationTaskAssessmentRunsAction DatabaseMigration DescribeReplicationTaskAssessmentRuns action.
 * \value DescribeReplicationTaskIndividualAssessmentsAction DatabaseMigration DescribeReplicationTaskIndividualAssessments action.
 * \value DescribeReplicationTasksAction DatabaseMigration DescribeReplicationTasks action.
 * \value DescribeSchemasAction DatabaseMigration DescribeSchemas action.
 * \value DescribeTableStatisticsAction DatabaseMigration DescribeTableStatistics action.
 * \value ImportCertificateAction DatabaseMigration ImportCertificate action.
 * \value ListTagsForResourceAction DatabaseMigration ListTagsForResource action.
 * \value ModifyEndpointAction DatabaseMigration ModifyEndpoint action.
 * \value ModifyEventSubscriptionAction DatabaseMigration ModifyEventSubscription action.
 * \value ModifyReplicationInstanceAction DatabaseMigration ModifyReplicationInstance action.
 * \value ModifyReplicationSubnetGroupAction DatabaseMigration ModifyReplicationSubnetGroup action.
 * \value ModifyReplicationTaskAction DatabaseMigration ModifyReplicationTask action.
 * \value MoveReplicationTaskAction DatabaseMigration MoveReplicationTask action.
 * \value RebootReplicationInstanceAction DatabaseMigration RebootReplicationInstance action.
 * \value RefreshSchemasAction DatabaseMigration RefreshSchemas action.
 * \value ReloadTablesAction DatabaseMigration ReloadTables action.
 * \value RemoveTagsFromResourceAction DatabaseMigration RemoveTagsFromResource action.
 * \value RunFleetAdvisorLsaAnalysisAction DatabaseMigration RunFleetAdvisorLsaAnalysis action.
 * \value StartReplicationTaskAction DatabaseMigration StartReplicationTask action.
 * \value StartReplicationTaskAssessmentAction DatabaseMigration StartReplicationTaskAssessment action.
 * \value StartReplicationTaskAssessmentRunAction DatabaseMigration StartReplicationTaskAssessmentRun action.
 * \value StopReplicationTaskAction DatabaseMigration StopReplicationTask action.
 * \value TestConnectionAction DatabaseMigration TestConnection action.
 * \value UpdateSubscriptionsToEventBridgeAction DatabaseMigration UpdateSubscriptionsToEventBridge action.
 */

/*!
 * Constructs a DatabaseMigrationRequest object for DatabaseMigration \a action.
 */
DatabaseMigrationRequest::DatabaseMigrationRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DatabaseMigrationRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DatabaseMigrationRequest::DatabaseMigrationRequest(const DatabaseMigrationRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DatabaseMigrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DatabaseMigrationRequest object to be equal to \a other.
 */
DatabaseMigrationRequest& DatabaseMigrationRequest::operator=(const DatabaseMigrationRequest &other)
{
    Q_D(DatabaseMigrationRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DatabaseMigrationRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DatabaseMigrationRequestPrivate.
 */
DatabaseMigrationRequest::DatabaseMigrationRequest(DatabaseMigrationRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DatabaseMigration action to be performed by this request.
 */
DatabaseMigrationRequest::Action DatabaseMigrationRequest::action() const
{
    Q_D(const DatabaseMigrationRequest);
    return d->action;
}

/*!
 * Returns the name of the DatabaseMigration action to be performed by this request.
 */
QString DatabaseMigrationRequest::actionString() const
{
    return DatabaseMigrationRequestPrivate::toString(action());
}

/*!
 * Returns the DatabaseMigration API version implemented by this request.
 */
QString DatabaseMigrationRequest::apiVersion() const
{
    Q_D(const DatabaseMigrationRequest);
    return d->apiVersion;
}

/*!
 * Sets the DatabaseMigration action to be performed by this request to \a action.
 */
void DatabaseMigrationRequest::setAction(const Action action)
{
    Q_D(DatabaseMigrationRequest);
    d->action = action;
}

/*!
 * Sets the DatabaseMigration API version to include in this request to \a version.
 */
void DatabaseMigrationRequest::setApiVersion(const QString &version)
{
    Q_D(DatabaseMigrationRequest);
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
bool DatabaseMigrationRequest::operator==(const DatabaseMigrationRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DatabaseMigration queue name.
 *
 * @par From DatabaseMigration FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DatabaseMigration queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DatabaseMigrationRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DatabaseMigrationRequest::clearParameter(const QString &name)
{
    Q_D(DatabaseMigrationRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DatabaseMigrationRequest::clearParameters()
{
    Q_D(DatabaseMigrationRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DatabaseMigrationRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DatabaseMigrationRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DatabaseMigrationRequest::parameters() const
{
    Q_D(const DatabaseMigrationRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DatabaseMigrationRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DatabaseMigrationRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DatabaseMigrationRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DatabaseMigrationRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DatabaseMigration request using the given
 * \a endpoint.
 *
 * This DatabaseMigration implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DatabaseMigrationRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DatabaseMigrationRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DatabaseMigration::DatabaseMigrationRequestPrivate
 * \brief The DatabaseMigrationRequestPrivate class provides private implementation for DatabaseMigrationRequest.
 * \internal
 *
 * \inmodule QtAwsDatabaseMigration
 */

/*!
 * Constructs a DatabaseMigrationRequestPrivate object for DatabaseMigration \a action,
 * with public implementation \a q.
 */
DatabaseMigrationRequestPrivate::DatabaseMigrationRequestPrivate(const DatabaseMigrationRequest::Action action, DatabaseMigrationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-01-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DatabaseMigrationRequest class's copy constructor.
 */
DatabaseMigrationRequestPrivate::DatabaseMigrationRequestPrivate(const DatabaseMigrationRequestPrivate &other,
                                     DatabaseMigrationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DatabaseMigrationRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DatabaseMigration service's Action
 * query parameters.
 */
QString DatabaseMigrationRequestPrivate::toString(const DatabaseMigrationRequest::Action &action)
{
    #define ActionToString(action) \
        case DatabaseMigrationRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddTagsToResource);
        ActionToString(ApplyPendingMaintenanceAction);
        ActionToString(CancelReplicationTaskAssessmentRun);
        ActionToString(CreateEndpoint);
        ActionToString(CreateEventSubscription);
        ActionToString(CreateFleetAdvisorCollector);
        ActionToString(CreateReplicationInstance);
        ActionToString(CreateReplicationSubnetGroup);
        ActionToString(CreateReplicationTask);
        ActionToString(DeleteCertificate);
        ActionToString(DeleteConnection);
        ActionToString(DeleteEndpoint);
        ActionToString(DeleteEventSubscription);
        ActionToString(DeleteFleetAdvisorCollector);
        ActionToString(DeleteFleetAdvisorDatabases);
        ActionToString(DeleteReplicationInstance);
        ActionToString(DeleteReplicationSubnetGroup);
        ActionToString(DeleteReplicationTask);
        ActionToString(DeleteReplicationTaskAssessmentRun);
        ActionToString(DescribeAccountAttributes);
        ActionToString(DescribeApplicableIndividualAssessments);
        ActionToString(DescribeCertificates);
        ActionToString(DescribeConnections);
        ActionToString(DescribeEndpointSettings);
        ActionToString(DescribeEndpointTypes);
        ActionToString(DescribeEndpoints);
        ActionToString(DescribeEventCategories);
        ActionToString(DescribeEventSubscriptions);
        ActionToString(DescribeEvents);
        ActionToString(DescribeFleetAdvisorCollectors);
        ActionToString(DescribeFleetAdvisorDatabases);
        ActionToString(DescribeFleetAdvisorLsaAnalysis);
        ActionToString(DescribeFleetAdvisorSchemaObjectSummary);
        ActionToString(DescribeFleetAdvisorSchemas);
        ActionToString(DescribeOrderableReplicationInstances);
        ActionToString(DescribePendingMaintenanceActions);
        ActionToString(DescribeRefreshSchemasStatus);
        ActionToString(DescribeReplicationInstanceTaskLogs);
        ActionToString(DescribeReplicationInstances);
        ActionToString(DescribeReplicationSubnetGroups);
        ActionToString(DescribeReplicationTaskAssessmentResults);
        ActionToString(DescribeReplicationTaskAssessmentRuns);
        ActionToString(DescribeReplicationTaskIndividualAssessments);
        ActionToString(DescribeReplicationTasks);
        ActionToString(DescribeSchemas);
        ActionToString(DescribeTableStatistics);
        ActionToString(ImportCertificate);
        ActionToString(ListTagsForResource);
        ActionToString(ModifyEndpoint);
        ActionToString(ModifyEventSubscription);
        ActionToString(ModifyReplicationInstance);
        ActionToString(ModifyReplicationSubnetGroup);
        ActionToString(ModifyReplicationTask);
        ActionToString(MoveReplicationTask);
        ActionToString(RebootReplicationInstance);
        ActionToString(RefreshSchemas);
        ActionToString(ReloadTables);
        ActionToString(RemoveTagsFromResource);
        ActionToString(RunFleetAdvisorLsaAnalysis);
        ActionToString(StartReplicationTask);
        ActionToString(StartReplicationTaskAssessment);
        ActionToString(StartReplicationTaskAssessmentRun);
        ActionToString(StopReplicationTask);
        ActionToString(TestConnection);
        ActionToString(UpdateSubscriptionsToEventBridge);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DatabaseMigration
} // namespace QtAws

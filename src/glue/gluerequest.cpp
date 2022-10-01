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

#include "gluerequest.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GlueRequest
 * \brief The GlueRequest class provides an interface for Glue requests.
 *
 * \inmodule QtAwsGlue
 */

/*!
 * \enum GlueRequest::Action
 *
 * This enum describes the actions that can be performed as Glue
 * requests.
 *
 * \value BatchCreatePartitionAction Glue BatchCreatePartition action.
 * \value BatchDeleteConnectionAction Glue BatchDeleteConnection action.
 * \value BatchDeletePartitionAction Glue BatchDeletePartition action.
 * \value BatchDeleteTableAction Glue BatchDeleteTable action.
 * \value BatchDeleteTableVersionAction Glue BatchDeleteTableVersion action.
 * \value BatchGetBlueprintsAction Glue BatchGetBlueprints action.
 * \value BatchGetCrawlersAction Glue BatchGetCrawlers action.
 * \value BatchGetCustomEntityTypesAction Glue BatchGetCustomEntityTypes action.
 * \value BatchGetDevEndpointsAction Glue BatchGetDevEndpoints action.
 * \value BatchGetJobsAction Glue BatchGetJobs action.
 * \value BatchGetPartitionAction Glue BatchGetPartition action.
 * \value BatchGetTriggersAction Glue BatchGetTriggers action.
 * \value BatchGetWorkflowsAction Glue BatchGetWorkflows action.
 * \value BatchStopJobRunAction Glue BatchStopJobRun action.
 * \value BatchUpdatePartitionAction Glue BatchUpdatePartition action.
 * \value CancelMLTaskRunAction Glue CancelMLTaskRun action.
 * \value CancelStatementAction Glue CancelStatement action.
 * \value CheckSchemaVersionValidityAction Glue CheckSchemaVersionValidity action.
 * \value CreateBlueprintAction Glue CreateBlueprint action.
 * \value CreateClassifierAction Glue CreateClassifier action.
 * \value CreateConnectionAction Glue CreateConnection action.
 * \value CreateCrawlerAction Glue CreateCrawler action.
 * \value CreateCustomEntityTypeAction Glue CreateCustomEntityType action.
 * \value CreateDatabaseAction Glue CreateDatabase action.
 * \value CreateDevEndpointAction Glue CreateDevEndpoint action.
 * \value CreateJobAction Glue CreateJob action.
 * \value CreateMLTransformAction Glue CreateMLTransform action.
 * \value CreatePartitionAction Glue CreatePartition action.
 * \value CreatePartitionIndexAction Glue CreatePartitionIndex action.
 * \value CreateRegistryAction Glue CreateRegistry action.
 * \value CreateSchemaAction Glue CreateSchema action.
 * \value CreateScriptAction Glue CreateScript action.
 * \value CreateSecurityConfigurationAction Glue CreateSecurityConfiguration action.
 * \value CreateSessionAction Glue CreateSession action.
 * \value CreateTableAction Glue CreateTable action.
 * \value CreateTriggerAction Glue CreateTrigger action.
 * \value CreateUserDefinedFunctionAction Glue CreateUserDefinedFunction action.
 * \value CreateWorkflowAction Glue CreateWorkflow action.
 * \value DeleteBlueprintAction Glue DeleteBlueprint action.
 * \value DeleteClassifierAction Glue DeleteClassifier action.
 * \value DeleteColumnStatisticsForPartitionAction Glue DeleteColumnStatisticsForPartition action.
 * \value DeleteColumnStatisticsForTableAction Glue DeleteColumnStatisticsForTable action.
 * \value DeleteConnectionAction Glue DeleteConnection action.
 * \value DeleteCrawlerAction Glue DeleteCrawler action.
 * \value DeleteCustomEntityTypeAction Glue DeleteCustomEntityType action.
 * \value DeleteDatabaseAction Glue DeleteDatabase action.
 * \value DeleteDevEndpointAction Glue DeleteDevEndpoint action.
 * \value DeleteJobAction Glue DeleteJob action.
 * \value DeleteMLTransformAction Glue DeleteMLTransform action.
 * \value DeletePartitionAction Glue DeletePartition action.
 * \value DeletePartitionIndexAction Glue DeletePartitionIndex action.
 * \value DeleteRegistryAction Glue DeleteRegistry action.
 * \value DeleteResourcePolicyAction Glue DeleteResourcePolicy action.
 * \value DeleteSchemaAction Glue DeleteSchema action.
 * \value DeleteSchemaVersionsAction Glue DeleteSchemaVersions action.
 * \value DeleteSecurityConfigurationAction Glue DeleteSecurityConfiguration action.
 * \value DeleteSessionAction Glue DeleteSession action.
 * \value DeleteTableAction Glue DeleteTable action.
 * \value DeleteTableVersionAction Glue DeleteTableVersion action.
 * \value DeleteTriggerAction Glue DeleteTrigger action.
 * \value DeleteUserDefinedFunctionAction Glue DeleteUserDefinedFunction action.
 * \value DeleteWorkflowAction Glue DeleteWorkflow action.
 * \value GetBlueprintAction Glue GetBlueprint action.
 * \value GetBlueprintRunAction Glue GetBlueprintRun action.
 * \value GetBlueprintRunsAction Glue GetBlueprintRuns action.
 * \value GetCatalogImportStatusAction Glue GetCatalogImportStatus action.
 * \value GetClassifierAction Glue GetClassifier action.
 * \value GetClassifiersAction Glue GetClassifiers action.
 * \value GetColumnStatisticsForPartitionAction Glue GetColumnStatisticsForPartition action.
 * \value GetColumnStatisticsForTableAction Glue GetColumnStatisticsForTable action.
 * \value GetConnectionAction Glue GetConnection action.
 * \value GetConnectionsAction Glue GetConnections action.
 * \value GetCrawlerAction Glue GetCrawler action.
 * \value GetCrawlerMetricsAction Glue GetCrawlerMetrics action.
 * \value GetCrawlersAction Glue GetCrawlers action.
 * \value GetCustomEntityTypeAction Glue GetCustomEntityType action.
 * \value GetDataCatalogEncryptionSettingsAction Glue GetDataCatalogEncryptionSettings action.
 * \value GetDatabaseAction Glue GetDatabase action.
 * \value GetDatabasesAction Glue GetDatabases action.
 * \value GetDataflowGraphAction Glue GetDataflowGraph action.
 * \value GetDevEndpointAction Glue GetDevEndpoint action.
 * \value GetDevEndpointsAction Glue GetDevEndpoints action.
 * \value GetJobAction Glue GetJob action.
 * \value GetJobBookmarkAction Glue GetJobBookmark action.
 * \value GetJobRunAction Glue GetJobRun action.
 * \value GetJobRunsAction Glue GetJobRuns action.
 * \value GetJobsAction Glue GetJobs action.
 * \value GetMLTaskRunAction Glue GetMLTaskRun action.
 * \value GetMLTaskRunsAction Glue GetMLTaskRuns action.
 * \value GetMLTransformAction Glue GetMLTransform action.
 * \value GetMLTransformsAction Glue GetMLTransforms action.
 * \value GetMappingAction Glue GetMapping action.
 * \value GetPartitionAction Glue GetPartition action.
 * \value GetPartitionIndexesAction Glue GetPartitionIndexes action.
 * \value GetPartitionsAction Glue GetPartitions action.
 * \value GetPlanAction Glue GetPlan action.
 * \value GetRegistryAction Glue GetRegistry action.
 * \value GetResourcePoliciesAction Glue GetResourcePolicies action.
 * \value GetResourcePolicyAction Glue GetResourcePolicy action.
 * \value GetSchemaAction Glue GetSchema action.
 * \value GetSchemaByDefinitionAction Glue GetSchemaByDefinition action.
 * \value GetSchemaVersionAction Glue GetSchemaVersion action.
 * \value GetSchemaVersionsDiffAction Glue GetSchemaVersionsDiff action.
 * \value GetSecurityConfigurationAction Glue GetSecurityConfiguration action.
 * \value GetSecurityConfigurationsAction Glue GetSecurityConfigurations action.
 * \value GetSessionAction Glue GetSession action.
 * \value GetStatementAction Glue GetStatement action.
 * \value GetTableAction Glue GetTable action.
 * \value GetTableVersionAction Glue GetTableVersion action.
 * \value GetTableVersionsAction Glue GetTableVersions action.
 * \value GetTablesAction Glue GetTables action.
 * \value GetTagsAction Glue GetTags action.
 * \value GetTriggerAction Glue GetTrigger action.
 * \value GetTriggersAction Glue GetTriggers action.
 * \value GetUnfilteredPartitionMetadataAction Glue GetUnfilteredPartitionMetadata action.
 * \value GetUnfilteredPartitionsMetadataAction Glue GetUnfilteredPartitionsMetadata action.
 * \value GetUnfilteredTableMetadataAction Glue GetUnfilteredTableMetadata action.
 * \value GetUserDefinedFunctionAction Glue GetUserDefinedFunction action.
 * \value GetUserDefinedFunctionsAction Glue GetUserDefinedFunctions action.
 * \value GetWorkflowAction Glue GetWorkflow action.
 * \value GetWorkflowRunAction Glue GetWorkflowRun action.
 * \value GetWorkflowRunPropertiesAction Glue GetWorkflowRunProperties action.
 * \value GetWorkflowRunsAction Glue GetWorkflowRuns action.
 * \value ImportCatalogToGlueAction Glue ImportCatalogToGlue action.
 * \value ListBlueprintsAction Glue ListBlueprints action.
 * \value ListCrawlersAction Glue ListCrawlers action.
 * \value ListCrawlsAction Glue ListCrawls action.
 * \value ListCustomEntityTypesAction Glue ListCustomEntityTypes action.
 * \value ListDevEndpointsAction Glue ListDevEndpoints action.
 * \value ListJobsAction Glue ListJobs action.
 * \value ListMLTransformsAction Glue ListMLTransforms action.
 * \value ListRegistriesAction Glue ListRegistries action.
 * \value ListSchemaVersionsAction Glue ListSchemaVersions action.
 * \value ListSchemasAction Glue ListSchemas action.
 * \value ListSessionsAction Glue ListSessions action.
 * \value ListStatementsAction Glue ListStatements action.
 * \value ListTriggersAction Glue ListTriggers action.
 * \value ListWorkflowsAction Glue ListWorkflows action.
 * \value PutDataCatalogEncryptionSettingsAction Glue PutDataCatalogEncryptionSettings action.
 * \value PutResourcePolicyAction Glue PutResourcePolicy action.
 * \value PutSchemaVersionMetadataAction Glue PutSchemaVersionMetadata action.
 * \value PutWorkflowRunPropertiesAction Glue PutWorkflowRunProperties action.
 * \value QuerySchemaVersionMetadataAction Glue QuerySchemaVersionMetadata action.
 * \value RegisterSchemaVersionAction Glue RegisterSchemaVersion action.
 * \value RemoveSchemaVersionMetadataAction Glue RemoveSchemaVersionMetadata action.
 * \value ResetJobBookmarkAction Glue ResetJobBookmark action.
 * \value ResumeWorkflowRunAction Glue ResumeWorkflowRun action.
 * \value RunStatementAction Glue RunStatement action.
 * \value SearchTablesAction Glue SearchTables action.
 * \value StartBlueprintRunAction Glue StartBlueprintRun action.
 * \value StartCrawlerAction Glue StartCrawler action.
 * \value StartCrawlerScheduleAction Glue StartCrawlerSchedule action.
 * \value StartExportLabelsTaskRunAction Glue StartExportLabelsTaskRun action.
 * \value StartImportLabelsTaskRunAction Glue StartImportLabelsTaskRun action.
 * \value StartJobRunAction Glue StartJobRun action.
 * \value StartMLEvaluationTaskRunAction Glue StartMLEvaluationTaskRun action.
 * \value StartMLLabelingSetGenerationTaskRunAction Glue StartMLLabelingSetGenerationTaskRun action.
 * \value StartTriggerAction Glue StartTrigger action.
 * \value StartWorkflowRunAction Glue StartWorkflowRun action.
 * \value StopCrawlerAction Glue StopCrawler action.
 * \value StopCrawlerScheduleAction Glue StopCrawlerSchedule action.
 * \value StopSessionAction Glue StopSession action.
 * \value StopTriggerAction Glue StopTrigger action.
 * \value StopWorkflowRunAction Glue StopWorkflowRun action.
 * \value TagResourceAction Glue TagResource action.
 * \value UntagResourceAction Glue UntagResource action.
 * \value UpdateBlueprintAction Glue UpdateBlueprint action.
 * \value UpdateClassifierAction Glue UpdateClassifier action.
 * \value UpdateColumnStatisticsForPartitionAction Glue UpdateColumnStatisticsForPartition action.
 * \value UpdateColumnStatisticsForTableAction Glue UpdateColumnStatisticsForTable action.
 * \value UpdateConnectionAction Glue UpdateConnection action.
 * \value UpdateCrawlerAction Glue UpdateCrawler action.
 * \value UpdateCrawlerScheduleAction Glue UpdateCrawlerSchedule action.
 * \value UpdateDatabaseAction Glue UpdateDatabase action.
 * \value UpdateDevEndpointAction Glue UpdateDevEndpoint action.
 * \value UpdateJobAction Glue UpdateJob action.
 * \value UpdateMLTransformAction Glue UpdateMLTransform action.
 * \value UpdatePartitionAction Glue UpdatePartition action.
 * \value UpdateRegistryAction Glue UpdateRegistry action.
 * \value UpdateSchemaAction Glue UpdateSchema action.
 * \value UpdateTableAction Glue UpdateTable action.
 * \value UpdateTriggerAction Glue UpdateTrigger action.
 * \value UpdateUserDefinedFunctionAction Glue UpdateUserDefinedFunction action.
 * \value UpdateWorkflowAction Glue UpdateWorkflow action.
 */

/*!
 * Constructs a GlueRequest object for Glue \a action.
 */
GlueRequest::GlueRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GlueRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GlueRequest::GlueRequest(const GlueRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GlueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GlueRequest object to be equal to \a other.
 */
GlueRequest& GlueRequest::operator=(const GlueRequest &other)
{
    Q_D(GlueRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GlueRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GlueRequestPrivate.
 */
GlueRequest::GlueRequest(GlueRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Glue action to be performed by this request.
 */
GlueRequest::Action GlueRequest::action() const
{
    Q_D(const GlueRequest);
    return d->action;
}

/*!
 * Returns the name of the Glue action to be performed by this request.
 */
QString GlueRequest::actionString() const
{
    return GlueRequestPrivate::toString(action());
}

/*!
 * Returns the Glue API version implemented by this request.
 */
QString GlueRequest::apiVersion() const
{
    Q_D(const GlueRequest);
    return d->apiVersion;
}

/*!
 * Sets the Glue action to be performed by this request to \a action.
 */
void GlueRequest::setAction(const Action action)
{
    Q_D(GlueRequest);
    d->action = action;
}

/*!
 * Sets the Glue API version to include in this request to \a version.
 */
void GlueRequest::setApiVersion(const QString &version)
{
    Q_D(GlueRequest);
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
bool GlueRequest::operator==(const GlueRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Glue queue name.
 *
 * @par From Glue FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Glue queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GlueRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GlueRequest::clearParameter(const QString &name)
{
    Q_D(GlueRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GlueRequest::clearParameters()
{
    Q_D(GlueRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GlueRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GlueRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GlueRequest::parameters() const
{
    Q_D(const GlueRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GlueRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GlueRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GlueRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GlueRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Glue request using the given
 * \a endpoint.
 *
 * This Glue implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GlueRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GlueRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Glue::GlueRequestPrivate
 * \brief The GlueRequestPrivate class provides private implementation for GlueRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GlueRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GlueRequestPrivate::GlueRequestPrivate(const GlueRequest::Action action, GlueRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-03-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GlueRequest class's copy constructor.
 */
GlueRequestPrivate::GlueRequestPrivate(const GlueRequestPrivate &other,
                                     GlueRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GlueRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Glue service's Action
 * query parameters.
 */
QString GlueRequestPrivate::toString(const GlueRequest::Action &action)
{
    #define ActionToString(action) \
        case GlueRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(BatchCreatePartition);
        ActionToString(BatchDeleteConnection);
        ActionToString(BatchDeletePartition);
        ActionToString(BatchDeleteTable);
        ActionToString(BatchDeleteTableVersion);
        ActionToString(BatchGetBlueprints);
        ActionToString(BatchGetCrawlers);
        ActionToString(BatchGetCustomEntityTypes);
        ActionToString(BatchGetDevEndpoints);
        ActionToString(BatchGetJobs);
        ActionToString(BatchGetPartition);
        ActionToString(BatchGetTriggers);
        ActionToString(BatchGetWorkflows);
        ActionToString(BatchStopJobRun);
        ActionToString(BatchUpdatePartition);
        ActionToString(CancelMLTaskRun);
        ActionToString(CancelStatement);
        ActionToString(CheckSchemaVersionValidity);
        ActionToString(CreateBlueprint);
        ActionToString(CreateClassifier);
        ActionToString(CreateConnection);
        ActionToString(CreateCrawler);
        ActionToString(CreateCustomEntityType);
        ActionToString(CreateDatabase);
        ActionToString(CreateDevEndpoint);
        ActionToString(CreateJob);
        ActionToString(CreateMLTransform);
        ActionToString(CreatePartition);
        ActionToString(CreatePartitionIndex);
        ActionToString(CreateRegistry);
        ActionToString(CreateSchema);
        ActionToString(CreateScript);
        ActionToString(CreateSecurityConfiguration);
        ActionToString(CreateSession);
        ActionToString(CreateTable);
        ActionToString(CreateTrigger);
        ActionToString(CreateUserDefinedFunction);
        ActionToString(CreateWorkflow);
        ActionToString(DeleteBlueprint);
        ActionToString(DeleteClassifier);
        ActionToString(DeleteColumnStatisticsForPartition);
        ActionToString(DeleteColumnStatisticsForTable);
        ActionToString(DeleteConnection);
        ActionToString(DeleteCrawler);
        ActionToString(DeleteCustomEntityType);
        ActionToString(DeleteDatabase);
        ActionToString(DeleteDevEndpoint);
        ActionToString(DeleteJob);
        ActionToString(DeleteMLTransform);
        ActionToString(DeletePartition);
        ActionToString(DeletePartitionIndex);
        ActionToString(DeleteRegistry);
        ActionToString(DeleteResourcePolicy);
        ActionToString(DeleteSchema);
        ActionToString(DeleteSchemaVersions);
        ActionToString(DeleteSecurityConfiguration);
        ActionToString(DeleteSession);
        ActionToString(DeleteTable);
        ActionToString(DeleteTableVersion);
        ActionToString(DeleteTrigger);
        ActionToString(DeleteUserDefinedFunction);
        ActionToString(DeleteWorkflow);
        ActionToString(GetBlueprint);
        ActionToString(GetBlueprintRun);
        ActionToString(GetBlueprintRuns);
        ActionToString(GetCatalogImportStatus);
        ActionToString(GetClassifier);
        ActionToString(GetClassifiers);
        ActionToString(GetColumnStatisticsForPartition);
        ActionToString(GetColumnStatisticsForTable);
        ActionToString(GetConnection);
        ActionToString(GetConnections);
        ActionToString(GetCrawler);
        ActionToString(GetCrawlerMetrics);
        ActionToString(GetCrawlers);
        ActionToString(GetCustomEntityType);
        ActionToString(GetDataCatalogEncryptionSettings);
        ActionToString(GetDatabase);
        ActionToString(GetDatabases);
        ActionToString(GetDataflowGraph);
        ActionToString(GetDevEndpoint);
        ActionToString(GetDevEndpoints);
        ActionToString(GetJob);
        ActionToString(GetJobBookmark);
        ActionToString(GetJobRun);
        ActionToString(GetJobRuns);
        ActionToString(GetJobs);
        ActionToString(GetMLTaskRun);
        ActionToString(GetMLTaskRuns);
        ActionToString(GetMLTransform);
        ActionToString(GetMLTransforms);
        ActionToString(GetMapping);
        ActionToString(GetPartition);
        ActionToString(GetPartitionIndexes);
        ActionToString(GetPartitions);
        ActionToString(GetPlan);
        ActionToString(GetRegistry);
        ActionToString(GetResourcePolicies);
        ActionToString(GetResourcePolicy);
        ActionToString(GetSchema);
        ActionToString(GetSchemaByDefinition);
        ActionToString(GetSchemaVersion);
        ActionToString(GetSchemaVersionsDiff);
        ActionToString(GetSecurityConfiguration);
        ActionToString(GetSecurityConfigurations);
        ActionToString(GetSession);
        ActionToString(GetStatement);
        ActionToString(GetTable);
        ActionToString(GetTableVersion);
        ActionToString(GetTableVersions);
        ActionToString(GetTables);
        ActionToString(GetTags);
        ActionToString(GetTrigger);
        ActionToString(GetTriggers);
        ActionToString(GetUnfilteredPartitionMetadata);
        ActionToString(GetUnfilteredPartitionsMetadata);
        ActionToString(GetUnfilteredTableMetadata);
        ActionToString(GetUserDefinedFunction);
        ActionToString(GetUserDefinedFunctions);
        ActionToString(GetWorkflow);
        ActionToString(GetWorkflowRun);
        ActionToString(GetWorkflowRunProperties);
        ActionToString(GetWorkflowRuns);
        ActionToString(ImportCatalogToGlue);
        ActionToString(ListBlueprints);
        ActionToString(ListCrawlers);
        ActionToString(ListCrawls);
        ActionToString(ListCustomEntityTypes);
        ActionToString(ListDevEndpoints);
        ActionToString(ListJobs);
        ActionToString(ListMLTransforms);
        ActionToString(ListRegistries);
        ActionToString(ListSchemaVersions);
        ActionToString(ListSchemas);
        ActionToString(ListSessions);
        ActionToString(ListStatements);
        ActionToString(ListTriggers);
        ActionToString(ListWorkflows);
        ActionToString(PutDataCatalogEncryptionSettings);
        ActionToString(PutResourcePolicy);
        ActionToString(PutSchemaVersionMetadata);
        ActionToString(PutWorkflowRunProperties);
        ActionToString(QuerySchemaVersionMetadata);
        ActionToString(RegisterSchemaVersion);
        ActionToString(RemoveSchemaVersionMetadata);
        ActionToString(ResetJobBookmark);
        ActionToString(ResumeWorkflowRun);
        ActionToString(RunStatement);
        ActionToString(SearchTables);
        ActionToString(StartBlueprintRun);
        ActionToString(StartCrawler);
        ActionToString(StartCrawlerSchedule);
        ActionToString(StartExportLabelsTaskRun);
        ActionToString(StartImportLabelsTaskRun);
        ActionToString(StartJobRun);
        ActionToString(StartMLEvaluationTaskRun);
        ActionToString(StartMLLabelingSetGenerationTaskRun);
        ActionToString(StartTrigger);
        ActionToString(StartWorkflowRun);
        ActionToString(StopCrawler);
        ActionToString(StopCrawlerSchedule);
        ActionToString(StopSession);
        ActionToString(StopTrigger);
        ActionToString(StopWorkflowRun);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateBlueprint);
        ActionToString(UpdateClassifier);
        ActionToString(UpdateColumnStatisticsForPartition);
        ActionToString(UpdateColumnStatisticsForTable);
        ActionToString(UpdateConnection);
        ActionToString(UpdateCrawler);
        ActionToString(UpdateCrawlerSchedule);
        ActionToString(UpdateDatabase);
        ActionToString(UpdateDevEndpoint);
        ActionToString(UpdateJob);
        ActionToString(UpdateMLTransform);
        ActionToString(UpdatePartition);
        ActionToString(UpdateRegistry);
        ActionToString(UpdateSchema);
        ActionToString(UpdateTable);
        ActionToString(UpdateTrigger);
        ActionToString(UpdateUserDefinedFunction);
        ActionToString(UpdateWorkflow);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Glue
} // namespace QtAws

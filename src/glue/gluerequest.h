// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLUEREQUEST_H
#define QTAWS_GLUEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsglueglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Glue {

class GlueRequestPrivate;

class QTAWSGLUE_EXPORT GlueRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Glue.
    enum Action {
        BatchCreatePartitionAction,
        BatchDeleteConnectionAction,
        BatchDeletePartitionAction,
        BatchDeleteTableAction,
        BatchDeleteTableVersionAction,
        BatchGetBlueprintsAction,
        BatchGetCrawlersAction,
        BatchGetCustomEntityTypesAction,
        BatchGetDevEndpointsAction,
        BatchGetJobsAction,
        BatchGetPartitionAction,
        BatchGetTriggersAction,
        BatchGetWorkflowsAction,
        BatchStopJobRunAction,
        BatchUpdatePartitionAction,
        CancelMLTaskRunAction,
        CancelStatementAction,
        CheckSchemaVersionValidityAction,
        CreateBlueprintAction,
        CreateClassifierAction,
        CreateConnectionAction,
        CreateCrawlerAction,
        CreateCustomEntityTypeAction,
        CreateDatabaseAction,
        CreateDevEndpointAction,
        CreateJobAction,
        CreateMLTransformAction,
        CreatePartitionAction,
        CreatePartitionIndexAction,
        CreateRegistryAction,
        CreateSchemaAction,
        CreateScriptAction,
        CreateSecurityConfigurationAction,
        CreateSessionAction,
        CreateTableAction,
        CreateTriggerAction,
        CreateUserDefinedFunctionAction,
        CreateWorkflowAction,
        DeleteBlueprintAction,
        DeleteClassifierAction,
        DeleteColumnStatisticsForPartitionAction,
        DeleteColumnStatisticsForTableAction,
        DeleteConnectionAction,
        DeleteCrawlerAction,
        DeleteCustomEntityTypeAction,
        DeleteDatabaseAction,
        DeleteDevEndpointAction,
        DeleteJobAction,
        DeleteMLTransformAction,
        DeletePartitionAction,
        DeletePartitionIndexAction,
        DeleteRegistryAction,
        DeleteResourcePolicyAction,
        DeleteSchemaAction,
        DeleteSchemaVersionsAction,
        DeleteSecurityConfigurationAction,
        DeleteSessionAction,
        DeleteTableAction,
        DeleteTableVersionAction,
        DeleteTriggerAction,
        DeleteUserDefinedFunctionAction,
        DeleteWorkflowAction,
        GetBlueprintAction,
        GetBlueprintRunAction,
        GetBlueprintRunsAction,
        GetCatalogImportStatusAction,
        GetClassifierAction,
        GetClassifiersAction,
        GetColumnStatisticsForPartitionAction,
        GetColumnStatisticsForTableAction,
        GetConnectionAction,
        GetConnectionsAction,
        GetCrawlerAction,
        GetCrawlerMetricsAction,
        GetCrawlersAction,
        GetCustomEntityTypeAction,
        GetDataCatalogEncryptionSettingsAction,
        GetDatabaseAction,
        GetDatabasesAction,
        GetDataflowGraphAction,
        GetDevEndpointAction,
        GetDevEndpointsAction,
        GetJobAction,
        GetJobBookmarkAction,
        GetJobRunAction,
        GetJobRunsAction,
        GetJobsAction,
        GetMLTaskRunAction,
        GetMLTaskRunsAction,
        GetMLTransformAction,
        GetMLTransformsAction,
        GetMappingAction,
        GetPartitionAction,
        GetPartitionIndexesAction,
        GetPartitionsAction,
        GetPlanAction,
        GetRegistryAction,
        GetResourcePoliciesAction,
        GetResourcePolicyAction,
        GetSchemaAction,
        GetSchemaByDefinitionAction,
        GetSchemaVersionAction,
        GetSchemaVersionsDiffAction,
        GetSecurityConfigurationAction,
        GetSecurityConfigurationsAction,
        GetSessionAction,
        GetStatementAction,
        GetTableAction,
        GetTableVersionAction,
        GetTableVersionsAction,
        GetTablesAction,
        GetTagsAction,
        GetTriggerAction,
        GetTriggersAction,
        GetUnfilteredPartitionMetadataAction,
        GetUnfilteredPartitionsMetadataAction,
        GetUnfilteredTableMetadataAction,
        GetUserDefinedFunctionAction,
        GetUserDefinedFunctionsAction,
        GetWorkflowAction,
        GetWorkflowRunAction,
        GetWorkflowRunPropertiesAction,
        GetWorkflowRunsAction,
        ImportCatalogToGlueAction,
        ListBlueprintsAction,
        ListCrawlersAction,
        ListCrawlsAction,
        ListCustomEntityTypesAction,
        ListDevEndpointsAction,
        ListJobsAction,
        ListMLTransformsAction,
        ListRegistriesAction,
        ListSchemaVersionsAction,
        ListSchemasAction,
        ListSessionsAction,
        ListStatementsAction,
        ListTriggersAction,
        ListWorkflowsAction,
        PutDataCatalogEncryptionSettingsAction,
        PutResourcePolicyAction,
        PutSchemaVersionMetadataAction,
        PutWorkflowRunPropertiesAction,
        QuerySchemaVersionMetadataAction,
        RegisterSchemaVersionAction,
        RemoveSchemaVersionMetadataAction,
        ResetJobBookmarkAction,
        ResumeWorkflowRunAction,
        RunStatementAction,
        SearchTablesAction,
        StartBlueprintRunAction,
        StartCrawlerAction,
        StartCrawlerScheduleAction,
        StartExportLabelsTaskRunAction,
        StartImportLabelsTaskRunAction,
        StartJobRunAction,
        StartMLEvaluationTaskRunAction,
        StartMLLabelingSetGenerationTaskRunAction,
        StartTriggerAction,
        StartWorkflowRunAction,
        StopCrawlerAction,
        StopCrawlerScheduleAction,
        StopSessionAction,
        StopTriggerAction,
        StopWorkflowRunAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateBlueprintAction,
        UpdateClassifierAction,
        UpdateColumnStatisticsForPartitionAction,
        UpdateColumnStatisticsForTableAction,
        UpdateConnectionAction,
        UpdateCrawlerAction,
        UpdateCrawlerScheduleAction,
        UpdateDatabaseAction,
        UpdateDevEndpointAction,
        UpdateJobAction,
        UpdateMLTransformAction,
        UpdatePartitionAction,
        UpdateRegistryAction,
        UpdateSchemaAction,
        UpdateTableAction,
        UpdateTriggerAction,
        UpdateUserDefinedFunctionAction,
        UpdateWorkflowAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GlueRequest(const Action action);
    GlueRequest(const GlueRequest &other);
    GlueRequest &operator=(const GlueRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GlueRequest &other) const;


protected:
    /// @cond internal
    explicit GlueRequest(GlueRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlueRequest)

};

} // namespace Glue
} // namespace QtAws

#endif

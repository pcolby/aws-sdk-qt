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
        BatchGetCrawlersAction,
        BatchGetDevEndpointsAction,
        BatchGetJobsAction,
        BatchGetPartitionAction,
        BatchGetTriggersAction,
        BatchGetWorkflowsAction,
        BatchStopJobRunAction,
        BatchUpdatePartitionAction,
        CancelMLTaskRunAction,
        CheckSchemaVersionValidityAction,
        CreateClassifierAction,
        CreateConnectionAction,
        CreateCrawlerAction,
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
        CreateTableAction,
        CreateTriggerAction,
        CreateUserDefinedFunctionAction,
        CreateWorkflowAction,
        DeleteClassifierAction,
        DeleteColumnStatisticsForPartitionAction,
        DeleteColumnStatisticsForTableAction,
        DeleteConnectionAction,
        DeleteCrawlerAction,
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
        DeleteTableAction,
        DeleteTableVersionAction,
        DeleteTriggerAction,
        DeleteUserDefinedFunctionAction,
        DeleteWorkflowAction,
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
        GetTableAction,
        GetTableVersionAction,
        GetTableVersionsAction,
        GetTablesAction,
        GetTagsAction,
        GetTriggerAction,
        GetTriggersAction,
        GetUserDefinedFunctionAction,
        GetUserDefinedFunctionsAction,
        GetWorkflowAction,
        GetWorkflowRunAction,
        GetWorkflowRunPropertiesAction,
        GetWorkflowRunsAction,
        ImportCatalogToGlueAction,
        ListCrawlersAction,
        ListDevEndpointsAction,
        ListJobsAction,
        ListMLTransformsAction,
        ListRegistriesAction,
        ListSchemaVersionsAction,
        ListSchemasAction,
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
        SearchTablesAction,
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
        StopTriggerAction,
        StopWorkflowRunAction,
        TagResourceAction,
        UntagResourceAction,
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
    GlueRequest(GlueRequestPrivate * const d);
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

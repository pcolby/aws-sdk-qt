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

#ifndef QTAWS_GLUEREQUEST_H
#define QTAWS_GLUEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Glue {

class GlueRequestPrivate;

class QTAWS_EXPORT GlueRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Glue.
    enum Action {
        BatchCreatePartitionAction,
        BatchDeleteConnectionAction,
        BatchDeletePartitionAction,
        BatchDeleteTableAction,
        BatchDeleteTableVersionAction,
        BatchGetPartitionAction,
        BatchStopJobRunAction,
        CreateClassifierAction,
        CreateConnectionAction,
        CreateCrawlerAction,
        CreateDatabaseAction,
        CreateDevEndpointAction,
        CreateJobAction,
        CreatePartitionAction,
        CreateScriptAction,
        CreateSecurityConfigurationAction,
        CreateTableAction,
        CreateTriggerAction,
        CreateUserDefinedFunctionAction,
        DeleteClassifierAction,
        DeleteConnectionAction,
        DeleteCrawlerAction,
        DeleteDatabaseAction,
        DeleteDevEndpointAction,
        DeleteJobAction,
        DeletePartitionAction,
        DeleteResourcePolicyAction,
        DeleteSecurityConfigurationAction,
        DeleteTableAction,
        DeleteTableVersionAction,
        DeleteTriggerAction,
        DeleteUserDefinedFunctionAction,
        GetCatalogImportStatusAction,
        GetClassifierAction,
        GetClassifiersAction,
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
        GetJobRunAction,
        GetJobRunsAction,
        GetJobsAction,
        GetMappingAction,
        GetPartitionAction,
        GetPartitionsAction,
        GetPlanAction,
        GetResourcePolicyAction,
        GetSecurityConfigurationAction,
        GetSecurityConfigurationsAction,
        GetTableAction,
        GetTableVersionAction,
        GetTableVersionsAction,
        GetTablesAction,
        GetTriggerAction,
        GetTriggersAction,
        GetUserDefinedFunctionAction,
        GetUserDefinedFunctionsAction,
        ImportCatalogToGlueAction,
        PutDataCatalogEncryptionSettingsAction,
        PutResourcePolicyAction,
        ResetJobBookmarkAction,
        StartCrawlerAction,
        StartCrawlerScheduleAction,
        StartJobRunAction,
        StartTriggerAction,
        StopCrawlerAction,
        StopCrawlerScheduleAction,
        StopTriggerAction,
        UpdateClassifierAction,
        UpdateConnectionAction,
        UpdateCrawlerAction,
        UpdateCrawlerScheduleAction,
        UpdateDatabaseAction,
        UpdateDevEndpointAction,
        UpdateJobAction,
        UpdatePartitionAction,
        UpdateTableAction,
        UpdateTriggerAction,
        UpdateUserDefinedFunctionAction,
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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABASEMIGRATIONREQUEST_H
#define QTAWS_DATABASEMIGRATIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdatabasemigrationglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DatabaseMigration {

class DatabaseMigrationRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DatabaseMigrationRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DatabaseMigration.
    enum Action {
        AddTagsToResourceAction,
        ApplyPendingMaintenanceActionAction,
        CancelReplicationTaskAssessmentRunAction,
        CreateEndpointAction,
        CreateEventSubscriptionAction,
        CreateFleetAdvisorCollectorAction,
        CreateReplicationInstanceAction,
        CreateReplicationSubnetGroupAction,
        CreateReplicationTaskAction,
        DeleteCertificateAction,
        DeleteConnectionAction,
        DeleteEndpointAction,
        DeleteEventSubscriptionAction,
        DeleteFleetAdvisorCollectorAction,
        DeleteFleetAdvisorDatabasesAction,
        DeleteReplicationInstanceAction,
        DeleteReplicationSubnetGroupAction,
        DeleteReplicationTaskAction,
        DeleteReplicationTaskAssessmentRunAction,
        DescribeAccountAttributesAction,
        DescribeApplicableIndividualAssessmentsAction,
        DescribeCertificatesAction,
        DescribeConnectionsAction,
        DescribeEndpointSettingsAction,
        DescribeEndpointTypesAction,
        DescribeEndpointsAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
        DescribeFleetAdvisorCollectorsAction,
        DescribeFleetAdvisorDatabasesAction,
        DescribeFleetAdvisorLsaAnalysisAction,
        DescribeFleetAdvisorSchemaObjectSummaryAction,
        DescribeFleetAdvisorSchemasAction,
        DescribeOrderableReplicationInstancesAction,
        DescribePendingMaintenanceActionsAction,
        DescribeRefreshSchemasStatusAction,
        DescribeReplicationInstanceTaskLogsAction,
        DescribeReplicationInstancesAction,
        DescribeReplicationSubnetGroupsAction,
        DescribeReplicationTaskAssessmentResultsAction,
        DescribeReplicationTaskAssessmentRunsAction,
        DescribeReplicationTaskIndividualAssessmentsAction,
        DescribeReplicationTasksAction,
        DescribeSchemasAction,
        DescribeTableStatisticsAction,
        ImportCertificateAction,
        ListTagsForResourceAction,
        ModifyEndpointAction,
        ModifyEventSubscriptionAction,
        ModifyReplicationInstanceAction,
        ModifyReplicationSubnetGroupAction,
        ModifyReplicationTaskAction,
        MoveReplicationTaskAction,
        RebootReplicationInstanceAction,
        RefreshSchemasAction,
        ReloadTablesAction,
        RemoveTagsFromResourceAction,
        RunFleetAdvisorLsaAnalysisAction,
        StartReplicationTaskAction,
        StartReplicationTaskAssessmentAction,
        StartReplicationTaskAssessmentRunAction,
        StopReplicationTaskAction,
        TestConnectionAction,
        UpdateSubscriptionsToEventBridgeAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DatabaseMigrationRequest(const Action action);
    DatabaseMigrationRequest(const DatabaseMigrationRequest &other);
    DatabaseMigrationRequest &operator=(const DatabaseMigrationRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DatabaseMigrationRequest &other) const;


protected:
    /// @cond internal
    explicit DatabaseMigrationRequest(DatabaseMigrationRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif

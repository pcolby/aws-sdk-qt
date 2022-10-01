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

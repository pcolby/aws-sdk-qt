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

#ifndef QTAWS_DATABASEMIGRATIONSERVICEREQUEST_H
#define QTAWS_DATABASEMIGRATIONSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdatabasemigrationserviceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DatabaseMigrationService {

class DatabaseMigrationServiceRequestPrivate;

class QTAWSDATABASEMIGRATIONSERVICE_EXPORT DatabaseMigrationServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DatabaseMigrationService.
    enum Action {
        AddTagsToResourceAction,
        ApplyPendingMaintenanceActionAction,
        CancelReplicationTaskAssessmentRunAction,
        CreateEndpointAction,
        CreateEventSubscriptionAction,
        CreateReplicationInstanceAction,
        CreateReplicationSubnetGroupAction,
        CreateReplicationTaskAction,
        DeleteCertificateAction,
        DeleteConnectionAction,
        DeleteEndpointAction,
        DeleteEventSubscriptionAction,
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
        StartReplicationTaskAction,
        StartReplicationTaskAssessmentAction,
        StartReplicationTaskAssessmentRunAction,
        StopReplicationTaskAction,
        TestConnectionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DatabaseMigrationServiceRequest(const Action action);
    DatabaseMigrationServiceRequest(const DatabaseMigrationServiceRequest &other);
    DatabaseMigrationServiceRequest &operator=(const DatabaseMigrationServiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DatabaseMigrationServiceRequest &other) const;


protected:
    /// @cond internal
    DatabaseMigrationServiceRequest(DatabaseMigrationServiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationServiceRequest)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif

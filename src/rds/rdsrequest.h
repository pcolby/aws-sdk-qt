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

#ifndef QTAWS_RDSREQUEST_H
#define QTAWS_RDSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrdsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RDS {

class RdsRequestPrivate;

class QTAWSRDS_EXPORT RdsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RDS.
    enum Action {
        AddRoleToDBClusterAction,
        AddRoleToDBInstanceAction,
        AddSourceIdentifierToSubscriptionAction,
        AddTagsToResourceAction,
        ApplyPendingMaintenanceActionAction,
        AuthorizeDBSecurityGroupIngressAction,
        BacktrackDBClusterAction,
        CancelExportTaskAction,
        CopyDBClusterParameterGroupAction,
        CopyDBClusterSnapshotAction,
        CopyDBParameterGroupAction,
        CopyDBSnapshotAction,
        CopyOptionGroupAction,
        CreateCustomAvailabilityZoneAction,
        CreateDBClusterAction,
        CreateDBClusterEndpointAction,
        CreateDBClusterParameterGroupAction,
        CreateDBClusterSnapshotAction,
        CreateDBInstanceAction,
        CreateDBInstanceReadReplicaAction,
        CreateDBParameterGroupAction,
        CreateDBProxyAction,
        CreateDBProxyEndpointAction,
        CreateDBSecurityGroupAction,
        CreateDBSnapshotAction,
        CreateDBSubnetGroupAction,
        CreateEventSubscriptionAction,
        CreateGlobalClusterAction,
        CreateOptionGroupAction,
        DeleteCustomAvailabilityZoneAction,
        DeleteDBClusterAction,
        DeleteDBClusterEndpointAction,
        DeleteDBClusterParameterGroupAction,
        DeleteDBClusterSnapshotAction,
        DeleteDBInstanceAction,
        DeleteDBInstanceAutomatedBackupAction,
        DeleteDBParameterGroupAction,
        DeleteDBProxyAction,
        DeleteDBProxyEndpointAction,
        DeleteDBSecurityGroupAction,
        DeleteDBSnapshotAction,
        DeleteDBSubnetGroupAction,
        DeleteEventSubscriptionAction,
        DeleteGlobalClusterAction,
        DeleteInstallationMediaAction,
        DeleteOptionGroupAction,
        DeregisterDBProxyTargetsAction,
        DescribeAccountAttributesAction,
        DescribeCertificatesAction,
        DescribeCustomAvailabilityZonesAction,
        DescribeDBClusterBacktracksAction,
        DescribeDBClusterEndpointsAction,
        DescribeDBClusterParameterGroupsAction,
        DescribeDBClusterParametersAction,
        DescribeDBClusterSnapshotAttributesAction,
        DescribeDBClusterSnapshotsAction,
        DescribeDBClustersAction,
        DescribeDBEngineVersionsAction,
        DescribeDBInstanceAutomatedBackupsAction,
        DescribeDBInstancesAction,
        DescribeDBLogFilesAction,
        DescribeDBParameterGroupsAction,
        DescribeDBParametersAction,
        DescribeDBProxiesAction,
        DescribeDBProxyEndpointsAction,
        DescribeDBProxyTargetGroupsAction,
        DescribeDBProxyTargetsAction,
        DescribeDBSecurityGroupsAction,
        DescribeDBSnapshotAttributesAction,
        DescribeDBSnapshotsAction,
        DescribeDBSubnetGroupsAction,
        DescribeEngineDefaultClusterParametersAction,
        DescribeEngineDefaultParametersAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
        DescribeExportTasksAction,
        DescribeGlobalClustersAction,
        DescribeInstallationMediaAction,
        DescribeOptionGroupOptionsAction,
        DescribeOptionGroupsAction,
        DescribeOrderableDBInstanceOptionsAction,
        DescribePendingMaintenanceActionsAction,
        DescribeReservedDBInstancesAction,
        DescribeReservedDBInstancesOfferingsAction,
        DescribeSourceRegionsAction,
        DescribeValidDBInstanceModificationsAction,
        DownloadDBLogFilePortionAction,
        FailoverDBClusterAction,
        FailoverGlobalClusterAction,
        ImportInstallationMediaAction,
        ListTagsForResourceAction,
        ModifyCertificatesAction,
        ModifyCurrentDBClusterCapacityAction,
        ModifyDBClusterAction,
        ModifyDBClusterEndpointAction,
        ModifyDBClusterParameterGroupAction,
        ModifyDBClusterSnapshotAttributeAction,
        ModifyDBInstanceAction,
        ModifyDBParameterGroupAction,
        ModifyDBProxyAction,
        ModifyDBProxyEndpointAction,
        ModifyDBProxyTargetGroupAction,
        ModifyDBSnapshotAction,
        ModifyDBSnapshotAttributeAction,
        ModifyDBSubnetGroupAction,
        ModifyEventSubscriptionAction,
        ModifyGlobalClusterAction,
        ModifyOptionGroupAction,
        PromoteReadReplicaAction,
        PromoteReadReplicaDBClusterAction,
        PurchaseReservedDBInstancesOfferingAction,
        RebootDBInstanceAction,
        RegisterDBProxyTargetsAction,
        RemoveFromGlobalClusterAction,
        RemoveRoleFromDBClusterAction,
        RemoveRoleFromDBInstanceAction,
        RemoveSourceIdentifierFromSubscriptionAction,
        RemoveTagsFromResourceAction,
        ResetDBClusterParameterGroupAction,
        ResetDBParameterGroupAction,
        RestoreDBClusterFromS3Action,
        RestoreDBClusterFromSnapshotAction,
        RestoreDBClusterToPointInTimeAction,
        RestoreDBInstanceFromDBSnapshotAction,
        RestoreDBInstanceFromS3Action,
        RestoreDBInstanceToPointInTimeAction,
        RevokeDBSecurityGroupIngressAction,
        StartActivityStreamAction,
        StartDBClusterAction,
        StartDBInstanceAction,
        StartDBInstanceAutomatedBackupsReplicationAction,
        StartExportTaskAction,
        StopActivityStreamAction,
        StopDBClusterAction,
        StopDBInstanceAction,
        StopDBInstanceAutomatedBackupsReplicationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RdsRequest(const Action action);
    RdsRequest(const RdsRequest &other);
    RdsRequest &operator=(const RdsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RdsRequest &other) const;


protected:
    /// @cond internal
    RdsRequestPrivate * const d_ptr; ///< Internal d-pointer.
    RdsRequest(RdsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RdsRequest)

};

} // namespace RDS
} // namespace QtAws

#endif

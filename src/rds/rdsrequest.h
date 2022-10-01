// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSREQUEST_H
#define QTAWS_RDSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsrdsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Rds {

class RdsRequestPrivate;

class QTAWSRDS_EXPORT RdsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Rds.
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
        CreateCustomDBEngineVersionAction,
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
        DeleteCustomDBEngineVersionAction,
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
        DeleteOptionGroupAction,
        DeregisterDBProxyTargetsAction,
        DescribeAccountAttributesAction,
        DescribeCertificatesAction,
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
        ListTagsForResourceAction,
        ModifyActivityStreamAction,
        ModifyCertificatesAction,
        ModifyCurrentDBClusterCapacityAction,
        ModifyCustomDBEngineVersionAction,
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
        RebootDBClusterAction,
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
        SwitchoverReadReplicaAction,
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
    explicit RdsRequest(RdsRequestPrivate * const d);
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

} // namespace Rds
} // namespace QtAws

#endif

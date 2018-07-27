/*
    Copyright 2013-2018 Paul Colby

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

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RDS {

class RdsRequestPrivate;

class QTAWS_EXPORT RdsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RDS.
    enum Action {
        AddRoleToDBClusterAction,
        AddSourceIdentifierToSubscriptionAction,
        AddTagsToResourceAction,
        ApplyPendingMaintenanceActionAction,
        AuthorizeDBSecurityGroupIngressAction,
        BacktrackDBClusterAction,
        CopyDBClusterParameterGroupAction,
        CopyDBClusterSnapshotAction,
        CopyDBParameterGroupAction,
        CopyDBSnapshotAction,
        CopyOptionGroupAction,
        CreateDBClusterAction,
        CreateDBClusterParameterGroupAction,
        CreateDBClusterSnapshotAction,
        CreateDBInstanceAction,
        CreateDBInstanceReadReplicaAction,
        CreateDBParameterGroupAction,
        CreateDBSecurityGroupAction,
        CreateDBSnapshotAction,
        CreateDBSubnetGroupAction,
        CreateEventSubscriptionAction,
        CreateOptionGroupAction,
        DeleteDBClusterAction,
        DeleteDBClusterParameterGroupAction,
        DeleteDBClusterSnapshotAction,
        DeleteDBInstanceAction,
        DeleteDBParameterGroupAction,
        DeleteDBSecurityGroupAction,
        DeleteDBSnapshotAction,
        DeleteDBSubnetGroupAction,
        DeleteEventSubscriptionAction,
        DeleteOptionGroupAction,
        DescribeAccountAttributesAction,
        DescribeCertificatesAction,
        DescribeDBClusterBacktracksAction,
        DescribeDBClusterParameterGroupsAction,
        DescribeDBClusterParametersAction,
        DescribeDBClusterSnapshotAttributesAction,
        DescribeDBClusterSnapshotsAction,
        DescribeDBClustersAction,
        DescribeDBEngineVersionsAction,
        DescribeDBInstancesAction,
        DescribeDBLogFilesAction,
        DescribeDBParameterGroupsAction,
        DescribeDBParametersAction,
        DescribeDBSecurityGroupsAction,
        DescribeDBSnapshotAttributesAction,
        DescribeDBSnapshotsAction,
        DescribeDBSubnetGroupsAction,
        DescribeEngineDefaultClusterParametersAction,
        DescribeEngineDefaultParametersAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
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
        ListTagsForResourceAction,
        ModifyDBClusterAction,
        ModifyDBClusterParameterGroupAction,
        ModifyDBClusterSnapshotAttributeAction,
        ModifyDBInstanceAction,
        ModifyDBParameterGroupAction,
        ModifyDBSnapshotAction,
        ModifyDBSnapshotAttributeAction,
        ModifyDBSubnetGroupAction,
        ModifyEventSubscriptionAction,
        ModifyOptionGroupAction,
        PromoteReadReplicaAction,
        PromoteReadReplicaDBClusterAction,
        PurchaseReservedDBInstancesOfferingAction,
        RebootDBInstanceAction,
        RemoveRoleFromDBClusterAction,
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
        StartDBInstanceAction,
        StopDBInstanceAction,
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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NEPTUNEREQUEST_H
#define QTAWS_NEPTUNEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsneptuneglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Neptune {

class NeptuneRequestPrivate;

class QTAWSNEPTUNE_EXPORT NeptuneRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Neptune.
    enum Action {
        AddRoleToDBClusterAction,
        AddSourceIdentifierToSubscriptionAction,
        AddTagsToResourceAction,
        ApplyPendingMaintenanceActionAction,
        CopyDBClusterParameterGroupAction,
        CopyDBClusterSnapshotAction,
        CopyDBParameterGroupAction,
        CreateDBClusterAction,
        CreateDBClusterEndpointAction,
        CreateDBClusterParameterGroupAction,
        CreateDBClusterSnapshotAction,
        CreateDBInstanceAction,
        CreateDBParameterGroupAction,
        CreateDBSubnetGroupAction,
        CreateEventSubscriptionAction,
        CreateGlobalClusterAction,
        DeleteDBClusterAction,
        DeleteDBClusterEndpointAction,
        DeleteDBClusterParameterGroupAction,
        DeleteDBClusterSnapshotAction,
        DeleteDBInstanceAction,
        DeleteDBParameterGroupAction,
        DeleteDBSubnetGroupAction,
        DeleteEventSubscriptionAction,
        DeleteGlobalClusterAction,
        DescribeDBClusterEndpointsAction,
        DescribeDBClusterParameterGroupsAction,
        DescribeDBClusterParametersAction,
        DescribeDBClusterSnapshotAttributesAction,
        DescribeDBClusterSnapshotsAction,
        DescribeDBClustersAction,
        DescribeDBEngineVersionsAction,
        DescribeDBInstancesAction,
        DescribeDBParameterGroupsAction,
        DescribeDBParametersAction,
        DescribeDBSubnetGroupsAction,
        DescribeEngineDefaultClusterParametersAction,
        DescribeEngineDefaultParametersAction,
        DescribeEventCategoriesAction,
        DescribeEventSubscriptionsAction,
        DescribeEventsAction,
        DescribeGlobalClustersAction,
        DescribeOrderableDBInstanceOptionsAction,
        DescribePendingMaintenanceActionsAction,
        DescribeValidDBInstanceModificationsAction,
        FailoverDBClusterAction,
        FailoverGlobalClusterAction,
        ListTagsForResourceAction,
        ModifyDBClusterAction,
        ModifyDBClusterEndpointAction,
        ModifyDBClusterParameterGroupAction,
        ModifyDBClusterSnapshotAttributeAction,
        ModifyDBInstanceAction,
        ModifyDBParameterGroupAction,
        ModifyDBSubnetGroupAction,
        ModifyEventSubscriptionAction,
        ModifyGlobalClusterAction,
        PromoteReadReplicaDBClusterAction,
        RebootDBInstanceAction,
        RemoveFromGlobalClusterAction,
        RemoveRoleFromDBClusterAction,
        RemoveSourceIdentifierFromSubscriptionAction,
        RemoveTagsFromResourceAction,
        ResetDBClusterParameterGroupAction,
        ResetDBParameterGroupAction,
        RestoreDBClusterFromSnapshotAction,
        RestoreDBClusterToPointInTimeAction,
        StartDBClusterAction,
        StopDBClusterAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    NeptuneRequest(const Action action);
    NeptuneRequest(const NeptuneRequest &other);
    NeptuneRequest &operator=(const NeptuneRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const NeptuneRequest &other) const;


protected:
    /// @cond internal
    explicit NeptuneRequest(NeptuneRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NeptuneRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif

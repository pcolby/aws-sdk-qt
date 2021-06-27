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

#ifndef QTAWS_NEPTUNEREQUEST_H
#define QTAWS_NEPTUNEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Neptune {

class NeptuneRequestPrivate;

class QTAWS_EXPORT NeptuneRequest : public QtAws::Core::AwsAbstractRequest {

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
        DeleteDBClusterAction,
        DeleteDBClusterEndpointAction,
        DeleteDBClusterParameterGroupAction,
        DeleteDBClusterSnapshotAction,
        DeleteDBInstanceAction,
        DeleteDBParameterGroupAction,
        DeleteDBSubnetGroupAction,
        DeleteEventSubscriptionAction,
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
        DescribeOrderableDBInstanceOptionsAction,
        DescribePendingMaintenanceActionsAction,
        DescribeValidDBInstanceModificationsAction,
        FailoverDBClusterAction,
        ListTagsForResourceAction,
        ModifyDBClusterAction,
        ModifyDBClusterEndpointAction,
        ModifyDBClusterParameterGroupAction,
        ModifyDBClusterSnapshotAttributeAction,
        ModifyDBInstanceAction,
        ModifyDBParameterGroupAction,
        ModifyDBSubnetGroupAction,
        ModifyEventSubscriptionAction,
        PromoteReadReplicaDBClusterAction,
        RebootDBInstanceAction,
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
    NeptuneRequestPrivate * const d_ptr; ///< Internal d-pointer.
    NeptuneRequest(NeptuneRequestPrivate * const d);
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

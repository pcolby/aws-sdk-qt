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

#ifndef QTAWS_ELASTICACHEREQUEST_H
#define QTAWS_ELASTICACHEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticacheglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElastiCache {

class ElastiCacheRequestPrivate;

class QTAWSELASTICACHE_EXPORT ElastiCacheRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElastiCache.
    enum Action {
        AddTagsToResourceAction,
        AuthorizeCacheSecurityGroupIngressAction,
        BatchApplyUpdateActionAction,
        BatchStopUpdateActionAction,
        CompleteMigrationAction,
        CopySnapshotAction,
        CreateCacheClusterAction,
        CreateCacheParameterGroupAction,
        CreateCacheSecurityGroupAction,
        CreateCacheSubnetGroupAction,
        CreateGlobalReplicationGroupAction,
        CreateReplicationGroupAction,
        CreateSnapshotAction,
        CreateUserAction,
        CreateUserGroupAction,
        DecreaseNodeGroupsInGlobalReplicationGroupAction,
        DecreaseReplicaCountAction,
        DeleteCacheClusterAction,
        DeleteCacheParameterGroupAction,
        DeleteCacheSecurityGroupAction,
        DeleteCacheSubnetGroupAction,
        DeleteGlobalReplicationGroupAction,
        DeleteReplicationGroupAction,
        DeleteSnapshotAction,
        DeleteUserAction,
        DeleteUserGroupAction,
        DescribeCacheClustersAction,
        DescribeCacheEngineVersionsAction,
        DescribeCacheParameterGroupsAction,
        DescribeCacheParametersAction,
        DescribeCacheSecurityGroupsAction,
        DescribeCacheSubnetGroupsAction,
        DescribeEngineDefaultParametersAction,
        DescribeEventsAction,
        DescribeGlobalReplicationGroupsAction,
        DescribeReplicationGroupsAction,
        DescribeReservedCacheNodesAction,
        DescribeReservedCacheNodesOfferingsAction,
        DescribeServiceUpdatesAction,
        DescribeSnapshotsAction,
        DescribeUpdateActionsAction,
        DescribeUserGroupsAction,
        DescribeUsersAction,
        DisassociateGlobalReplicationGroupAction,
        FailoverGlobalReplicationGroupAction,
        IncreaseNodeGroupsInGlobalReplicationGroupAction,
        IncreaseReplicaCountAction,
        ListAllowedNodeTypeModificationsAction,
        ListTagsForResourceAction,
        ModifyCacheClusterAction,
        ModifyCacheParameterGroupAction,
        ModifyCacheSubnetGroupAction,
        ModifyGlobalReplicationGroupAction,
        ModifyReplicationGroupAction,
        ModifyReplicationGroupShardConfigurationAction,
        ModifyUserAction,
        ModifyUserGroupAction,
        PurchaseReservedCacheNodesOfferingAction,
        RebalanceSlotsInGlobalReplicationGroupAction,
        RebootCacheClusterAction,
        RemoveTagsFromResourceAction,
        ResetCacheParameterGroupAction,
        RevokeCacheSecurityGroupIngressAction,
        StartMigrationAction,
        TestFailoverAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElastiCacheRequest(const Action action);
    ElastiCacheRequest(const ElastiCacheRequest &other);
    ElastiCacheRequest &operator=(const ElastiCacheRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElastiCacheRequest &other) const;


protected:
    /// @cond internal
    ElastiCacheRequest(ElastiCacheRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElastiCacheRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif

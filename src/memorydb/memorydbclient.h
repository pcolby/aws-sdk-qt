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

#ifndef QTAWS_MEMORYDBCLIENT_H
#define QTAWS_MEMORYDBCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmemorydbglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MemoryDb {

class MemoryDbClientPrivate;
class BatchUpdateClusterRequest;
class BatchUpdateClusterResponse;
class CopySnapshotRequest;
class CopySnapshotResponse;
class CreateACLRequest;
class CreateACLResponse;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateParameterGroupRequest;
class CreateParameterGroupResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateSubnetGroupRequest;
class CreateSubnetGroupResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteACLRequest;
class DeleteACLResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteParameterGroupRequest;
class DeleteParameterGroupResponse;
class DeleteSnapshotRequest;
class DeleteSnapshotResponse;
class DeleteSubnetGroupRequest;
class DeleteSubnetGroupResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeACLsRequest;
class DescribeACLsResponse;
class DescribeClustersRequest;
class DescribeClustersResponse;
class DescribeEngineVersionsRequest;
class DescribeEngineVersionsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeParameterGroupsRequest;
class DescribeParameterGroupsResponse;
class DescribeParametersRequest;
class DescribeParametersResponse;
class DescribeServiceUpdatesRequest;
class DescribeServiceUpdatesResponse;
class DescribeSnapshotsRequest;
class DescribeSnapshotsResponse;
class DescribeSubnetGroupsRequest;
class DescribeSubnetGroupsResponse;
class DescribeUsersRequest;
class DescribeUsersResponse;
class FailoverShardRequest;
class FailoverShardResponse;
class ListAllowedNodeTypeUpdatesRequest;
class ListAllowedNodeTypeUpdatesResponse;
class ListTagsRequest;
class ListTagsResponse;
class ResetParameterGroupRequest;
class ResetParameterGroupResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateACLRequest;
class UpdateACLResponse;
class UpdateClusterRequest;
class UpdateClusterResponse;
class UpdateParameterGroupRequest;
class UpdateParameterGroupResponse;
class UpdateSubnetGroupRequest;
class UpdateSubnetGroupResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWSMEMORYDB_EXPORT MemoryDbClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MemoryDbClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MemoryDbClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchUpdateClusterResponse * batchUpdateCluster(const BatchUpdateClusterRequest &request);
    CopySnapshotResponse * copySnapshot(const CopySnapshotRequest &request);
    CreateACLResponse * createACL(const CreateACLRequest &request);
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateParameterGroupResponse * createParameterGroup(const CreateParameterGroupRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateSubnetGroupResponse * createSubnetGroup(const CreateSubnetGroupRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteACLResponse * deleteACL(const DeleteACLRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteParameterGroupResponse * deleteParameterGroup(const DeleteParameterGroupRequest &request);
    DeleteSnapshotResponse * deleteSnapshot(const DeleteSnapshotRequest &request);
    DeleteSubnetGroupResponse * deleteSubnetGroup(const DeleteSubnetGroupRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeACLsResponse * describeACLs(const DescribeACLsRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    DescribeEngineVersionsResponse * describeEngineVersions(const DescribeEngineVersionsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeParameterGroupsResponse * describeParameterGroups(const DescribeParameterGroupsRequest &request);
    DescribeParametersResponse * describeParameters(const DescribeParametersRequest &request);
    DescribeServiceUpdatesResponse * describeServiceUpdates(const DescribeServiceUpdatesRequest &request);
    DescribeSnapshotsResponse * describeSnapshots(const DescribeSnapshotsRequest &request);
    DescribeSubnetGroupsResponse * describeSubnetGroups(const DescribeSubnetGroupsRequest &request);
    DescribeUsersResponse * describeUsers(const DescribeUsersRequest &request);
    FailoverShardResponse * failoverShard(const FailoverShardRequest &request);
    ListAllowedNodeTypeUpdatesResponse * listAllowedNodeTypeUpdates(const ListAllowedNodeTypeUpdatesRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    ResetParameterGroupResponse * resetParameterGroup(const ResetParameterGroupRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateACLResponse * updateACL(const UpdateACLRequest &request);
    UpdateClusterResponse * updateCluster(const UpdateClusterRequest &request);
    UpdateParameterGroupResponse * updateParameterGroup(const UpdateParameterGroupRequest &request);
    UpdateSubnetGroupResponse * updateSubnetGroup(const UpdateSubnetGroupRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(MemoryDbClient)
    Q_DISABLE_COPY(MemoryDbClient)

};

} // namespace MemoryDb
} // namespace QtAws

#endif

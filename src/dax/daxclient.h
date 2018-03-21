/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DAXCLIENT_H
#define QTAWS_DAXCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace DAX {

class DaxClientPrivate;
class CreateClusterRequest;
class CreateClusterResponse;
class CreateParameterGroupRequest;
class CreateParameterGroupResponse;
class CreateSubnetGroupRequest;
class CreateSubnetGroupResponse;
class DecreaseReplicationFactorRequest;
class DecreaseReplicationFactorResponse;
class DeleteClusterRequest;
class DeleteClusterResponse;
class DeleteParameterGroupRequest;
class DeleteParameterGroupResponse;
class DeleteSubnetGroupRequest;
class DeleteSubnetGroupResponse;
class DescribeClustersRequest;
class DescribeClustersResponse;
class DescribeDefaultParametersRequest;
class DescribeDefaultParametersResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeParameterGroupsRequest;
class DescribeParameterGroupsResponse;
class DescribeParametersRequest;
class DescribeParametersResponse;
class DescribeSubnetGroupsRequest;
class DescribeSubnetGroupsResponse;
class IncreaseReplicationFactorRequest;
class IncreaseReplicationFactorResponse;
class ListTagsRequest;
class ListTagsResponse;
class RebootNodeRequest;
class RebootNodeResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateClusterRequest;
class UpdateClusterResponse;
class UpdateParameterGroupRequest;
class UpdateParameterGroupResponse;
class UpdateSubnetGroupRequest;
class UpdateSubnetGroupResponse;

class QTAWS_EXPORT DaxClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DaxClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DaxClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateClusterResponse * createCluster(const CreateClusterRequest &request);
    CreateParameterGroupResponse * createParameterGroup(const CreateParameterGroupRequest &request);
    CreateSubnetGroupResponse * createSubnetGroup(const CreateSubnetGroupRequest &request);
    DecreaseReplicationFactorResponse * decreaseReplicationFactor(const DecreaseReplicationFactorRequest &request);
    DeleteClusterResponse * deleteCluster(const DeleteClusterRequest &request);
    DeleteParameterGroupResponse * deleteParameterGroup(const DeleteParameterGroupRequest &request);
    DeleteSubnetGroupResponse * deleteSubnetGroup(const DeleteSubnetGroupRequest &request);
    DescribeClustersResponse * describeClusters(const DescribeClustersRequest &request);
    DescribeDefaultParametersResponse * describeDefaultParameters(const DescribeDefaultParametersRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeParameterGroupsResponse * describeParameterGroups(const DescribeParameterGroupsRequest &request);
    DescribeParametersResponse * describeParameters(const DescribeParametersRequest &request);
    DescribeSubnetGroupsResponse * describeSubnetGroups(const DescribeSubnetGroupsRequest &request);
    IncreaseReplicationFactorResponse * increaseReplicationFactor(const IncreaseReplicationFactorRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    RebootNodeResponse * rebootNode(const RebootNodeRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateClusterResponse * updateCluster(const UpdateClusterRequest &request);
    UpdateParameterGroupResponse * updateParameterGroup(const UpdateParameterGroupRequest &request);
    UpdateSubnetGroupResponse * updateSubnetGroup(const UpdateSubnetGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(DaxClient)
    Q_DISABLE_COPY(DaxClient)

};

} // namespace DAX
} // namespace AWS

#endif

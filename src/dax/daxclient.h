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
class CreateClusterResponse;
class CreateParameterGroupResponse;
class CreateSubnetGroupResponse;
class DecreaseReplicationFactorResponse;
class DeleteClusterResponse;
class DeleteParameterGroupResponse;
class DeleteSubnetGroupResponse;
class DescribeClustersResponse;
class DescribeDefaultParametersResponse;
class DescribeEventsResponse;
class DescribeParameterGroupsResponse;
class DescribeParametersResponse;
class DescribeSubnetGroupsResponse;
class IncreaseReplicationFactorResponse;
class ListTagsResponse;
class RebootNodeResponse;
class TagResourceResponse;
class UntagResourceResponse;
class UpdateClusterResponse;
class UpdateParameterGroupResponse;
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

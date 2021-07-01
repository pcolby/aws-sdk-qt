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

#ifndef QTAWS_DAXCLIENT_H
#define QTAWS_DAXCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdaxglobal.h"

class QNetworkReply;

namespace QtAws {
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

class QTAWSDAX_EXPORT DaxClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DaxClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DaxClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif

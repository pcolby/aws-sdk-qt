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

#ifndef QTAWS_APPFLOWCLIENT_H
#define QTAWS_APPFLOWCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappflowglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Appflow {

class AppflowClientPrivate;
class CreateConnectorProfileRequest;
class CreateConnectorProfileResponse;
class CreateFlowRequest;
class CreateFlowResponse;
class DeleteConnectorProfileRequest;
class DeleteConnectorProfileResponse;
class DeleteFlowRequest;
class DeleteFlowResponse;
class DescribeConnectorEntityRequest;
class DescribeConnectorEntityResponse;
class DescribeConnectorProfilesRequest;
class DescribeConnectorProfilesResponse;
class DescribeConnectorsRequest;
class DescribeConnectorsResponse;
class DescribeFlowRequest;
class DescribeFlowResponse;
class DescribeFlowExecutionRecordsRequest;
class DescribeFlowExecutionRecordsResponse;
class ListConnectorEntitiesRequest;
class ListConnectorEntitiesResponse;
class ListFlowsRequest;
class ListFlowsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartFlowRequest;
class StartFlowResponse;
class StopFlowRequest;
class StopFlowResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConnectorProfileRequest;
class UpdateConnectorProfileResponse;
class UpdateFlowRequest;
class UpdateFlowResponse;

class QTAWSAPPFLOW_EXPORT AppflowClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppflowClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppflowClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateConnectorProfileResponse * createConnectorProfile(const CreateConnectorProfileRequest &request);
    CreateFlowResponse * createFlow(const CreateFlowRequest &request);
    DeleteConnectorProfileResponse * deleteConnectorProfile(const DeleteConnectorProfileRequest &request);
    DeleteFlowResponse * deleteFlow(const DeleteFlowRequest &request);
    DescribeConnectorEntityResponse * describeConnectorEntity(const DescribeConnectorEntityRequest &request);
    DescribeConnectorProfilesResponse * describeConnectorProfiles(const DescribeConnectorProfilesRequest &request);
    DescribeConnectorsResponse * describeConnectors(const DescribeConnectorsRequest &request);
    DescribeFlowResponse * describeFlow(const DescribeFlowRequest &request);
    DescribeFlowExecutionRecordsResponse * describeFlowExecutionRecords(const DescribeFlowExecutionRecordsRequest &request);
    ListConnectorEntitiesResponse * listConnectorEntities(const ListConnectorEntitiesRequest &request);
    ListFlowsResponse * listFlows(const ListFlowsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartFlowResponse * startFlow(const StartFlowRequest &request);
    StopFlowResponse * stopFlow(const StopFlowRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConnectorProfileResponse * updateConnectorProfile(const UpdateConnectorProfileRequest &request);
    UpdateFlowResponse * updateFlow(const UpdateFlowRequest &request);

private:
    Q_DECLARE_PRIVATE(AppflowClient)
    Q_DISABLE_COPY(AppflowClient)

};

} // namespace Appflow
} // namespace QtAws

#endif

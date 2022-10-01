// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
class DescribeConnectorRequest;
class DescribeConnectorResponse;
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
class ListConnectorsRequest;
class ListConnectorsResponse;
class ListFlowsRequest;
class ListFlowsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RegisterConnectorRequest;
class RegisterConnectorResponse;
class StartFlowRequest;
class StartFlowResponse;
class StopFlowRequest;
class StopFlowResponse;
class TagResourceRequest;
class TagResourceResponse;
class UnregisterConnectorRequest;
class UnregisterConnectorResponse;
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
    DescribeConnectorResponse * describeConnector(const DescribeConnectorRequest &request);
    DescribeConnectorEntityResponse * describeConnectorEntity(const DescribeConnectorEntityRequest &request);
    DescribeConnectorProfilesResponse * describeConnectorProfiles(const DescribeConnectorProfilesRequest &request);
    DescribeConnectorsResponse * describeConnectors(const DescribeConnectorsRequest &request);
    DescribeFlowResponse * describeFlow(const DescribeFlowRequest &request);
    DescribeFlowExecutionRecordsResponse * describeFlowExecutionRecords(const DescribeFlowExecutionRecordsRequest &request);
    ListConnectorEntitiesResponse * listConnectorEntities(const ListConnectorEntitiesRequest &request);
    ListConnectorsResponse * listConnectors(const ListConnectorsRequest &request);
    ListFlowsResponse * listFlows(const ListFlowsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterConnectorResponse * registerConnector(const RegisterConnectorRequest &request);
    StartFlowResponse * startFlow(const StartFlowRequest &request);
    StopFlowResponse * stopFlow(const StopFlowRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UnregisterConnectorResponse * unregisterConnector(const UnregisterConnectorRequest &request);
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

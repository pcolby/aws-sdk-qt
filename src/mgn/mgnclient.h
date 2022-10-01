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

#ifndef QTAWS_MGNCLIENT_H
#define QTAWS_MGNCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmgnglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Mgn {

class MgnClientPrivate;
class ChangeServerLifeCycleStateRequest;
class ChangeServerLifeCycleStateResponse;
class CreateLaunchConfigurationTemplateRequest;
class CreateLaunchConfigurationTemplateResponse;
class CreateReplicationConfigurationTemplateRequest;
class CreateReplicationConfigurationTemplateResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeleteLaunchConfigurationTemplateRequest;
class DeleteLaunchConfigurationTemplateResponse;
class DeleteReplicationConfigurationTemplateRequest;
class DeleteReplicationConfigurationTemplateResponse;
class DeleteSourceServerRequest;
class DeleteSourceServerResponse;
class DeleteVcenterClientRequest;
class DeleteVcenterClientResponse;
class DescribeJobLogItemsRequest;
class DescribeJobLogItemsResponse;
class DescribeJobsRequest;
class DescribeJobsResponse;
class DescribeLaunchConfigurationTemplatesRequest;
class DescribeLaunchConfigurationTemplatesResponse;
class DescribeReplicationConfigurationTemplatesRequest;
class DescribeReplicationConfigurationTemplatesResponse;
class DescribeSourceServersRequest;
class DescribeSourceServersResponse;
class DescribeVcenterClientsRequest;
class DescribeVcenterClientsResponse;
class DisconnectFromServiceRequest;
class DisconnectFromServiceResponse;
class FinalizeCutoverRequest;
class FinalizeCutoverResponse;
class GetLaunchConfigurationRequest;
class GetLaunchConfigurationResponse;
class GetReplicationConfigurationRequest;
class GetReplicationConfigurationResponse;
class InitializeServiceRequest;
class InitializeServiceResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class MarkAsArchivedRequest;
class MarkAsArchivedResponse;
class RetryDataReplicationRequest;
class RetryDataReplicationResponse;
class StartCutoverRequest;
class StartCutoverResponse;
class StartReplicationRequest;
class StartReplicationResponse;
class StartTestRequest;
class StartTestResponse;
class TagResourceRequest;
class TagResourceResponse;
class TerminateTargetInstancesRequest;
class TerminateTargetInstancesResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLaunchConfigurationRequest;
class UpdateLaunchConfigurationResponse;
class UpdateLaunchConfigurationTemplateRequest;
class UpdateLaunchConfigurationTemplateResponse;
class UpdateReplicationConfigurationRequest;
class UpdateReplicationConfigurationResponse;
class UpdateReplicationConfigurationTemplateRequest;
class UpdateReplicationConfigurationTemplateResponse;
class UpdateSourceServerReplicationTypeRequest;
class UpdateSourceServerReplicationTypeResponse;

class QTAWSMGN_EXPORT MgnClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MgnClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MgnClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ChangeServerLifeCycleStateResponse * changeServerLifeCycleState(const ChangeServerLifeCycleStateRequest &request);
    CreateLaunchConfigurationTemplateResponse * createLaunchConfigurationTemplate(const CreateLaunchConfigurationTemplateRequest &request);
    CreateReplicationConfigurationTemplateResponse * createReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteLaunchConfigurationTemplateResponse * deleteLaunchConfigurationTemplate(const DeleteLaunchConfigurationTemplateRequest &request);
    DeleteReplicationConfigurationTemplateResponse * deleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest &request);
    DeleteSourceServerResponse * deleteSourceServer(const DeleteSourceServerRequest &request);
    DeleteVcenterClientResponse * deleteVcenterClient(const DeleteVcenterClientRequest &request);
    DescribeJobLogItemsResponse * describeJobLogItems(const DescribeJobLogItemsRequest &request);
    DescribeJobsResponse * describeJobs(const DescribeJobsRequest &request);
    DescribeLaunchConfigurationTemplatesResponse * describeLaunchConfigurationTemplates(const DescribeLaunchConfigurationTemplatesRequest &request);
    DescribeReplicationConfigurationTemplatesResponse * describeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest &request);
    DescribeSourceServersResponse * describeSourceServers(const DescribeSourceServersRequest &request);
    DescribeVcenterClientsResponse * describeVcenterClients(const DescribeVcenterClientsRequest &request);
    DisconnectFromServiceResponse * disconnectFromService(const DisconnectFromServiceRequest &request);
    FinalizeCutoverResponse * finalizeCutover(const FinalizeCutoverRequest &request);
    GetLaunchConfigurationResponse * getLaunchConfiguration(const GetLaunchConfigurationRequest &request);
    GetReplicationConfigurationResponse * getReplicationConfiguration(const GetReplicationConfigurationRequest &request);
    InitializeServiceResponse * initializeService(const InitializeServiceRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    MarkAsArchivedResponse * markAsArchived(const MarkAsArchivedRequest &request);
    RetryDataReplicationResponse * retryDataReplication(const RetryDataReplicationRequest &request);
    StartCutoverResponse * startCutover(const StartCutoverRequest &request);
    StartReplicationResponse * startReplication(const StartReplicationRequest &request);
    StartTestResponse * startTest(const StartTestRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TerminateTargetInstancesResponse * terminateTargetInstances(const TerminateTargetInstancesRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLaunchConfigurationResponse * updateLaunchConfiguration(const UpdateLaunchConfigurationRequest &request);
    UpdateLaunchConfigurationTemplateResponse * updateLaunchConfigurationTemplate(const UpdateLaunchConfigurationTemplateRequest &request);
    UpdateReplicationConfigurationResponse * updateReplicationConfiguration(const UpdateReplicationConfigurationRequest &request);
    UpdateReplicationConfigurationTemplateResponse * updateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest &request);
    UpdateSourceServerReplicationTypeResponse * updateSourceServerReplicationType(const UpdateSourceServerReplicationTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(MgnClient)
    Q_DISABLE_COPY(MgnClient)

};

} // namespace Mgn
} // namespace QtAws

#endif

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
namespace mgn {

class mgnClientPrivate;
class ChangeServerLifeCycleStateRequest;
class ChangeServerLifeCycleStateResponse;
class CreateReplicationConfigurationTemplateRequest;
class CreateReplicationConfigurationTemplateResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeleteReplicationConfigurationTemplateRequest;
class DeleteReplicationConfigurationTemplateResponse;
class DeleteSourceServerRequest;
class DeleteSourceServerResponse;
class DescribeJobLogItemsRequest;
class DescribeJobLogItemsResponse;
class DescribeJobsRequest;
class DescribeJobsResponse;
class DescribeReplicationConfigurationTemplatesRequest;
class DescribeReplicationConfigurationTemplatesResponse;
class DescribeSourceServersRequest;
class DescribeSourceServersResponse;
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
class UpdateReplicationConfigurationRequest;
class UpdateReplicationConfigurationResponse;
class UpdateReplicationConfigurationTemplateRequest;
class UpdateReplicationConfigurationTemplateResponse;

class QTAWSMGN_EXPORT mgnClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    mgnClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    mgnClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ChangeServerLifeCycleStateResponse * changeServerLifeCycleState(const ChangeServerLifeCycleStateRequest &request);
    CreateReplicationConfigurationTemplateResponse * createReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteReplicationConfigurationTemplateResponse * deleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest &request);
    DeleteSourceServerResponse * deleteSourceServer(const DeleteSourceServerRequest &request);
    DescribeJobLogItemsResponse * describeJobLogItems(const DescribeJobLogItemsRequest &request);
    DescribeJobsResponse * describeJobs(const DescribeJobsRequest &request);
    DescribeReplicationConfigurationTemplatesResponse * describeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest &request);
    DescribeSourceServersResponse * describeSourceServers(const DescribeSourceServersRequest &request);
    DisconnectFromServiceResponse * disconnectFromService(const DisconnectFromServiceRequest &request);
    FinalizeCutoverResponse * finalizeCutover(const FinalizeCutoverRequest &request);
    GetLaunchConfigurationResponse * getLaunchConfiguration(const GetLaunchConfigurationRequest &request);
    GetReplicationConfigurationResponse * getReplicationConfiguration(const GetReplicationConfigurationRequest &request);
    InitializeServiceResponse * initializeService(const InitializeServiceRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    MarkAsArchivedResponse * markAsArchived(const MarkAsArchivedRequest &request);
    RetryDataReplicationResponse * retryDataReplication(const RetryDataReplicationRequest &request);
    StartCutoverResponse * startCutover(const StartCutoverRequest &request);
    StartTestResponse * startTest(const StartTestRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TerminateTargetInstancesResponse * terminateTargetInstances(const TerminateTargetInstancesRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLaunchConfigurationResponse * updateLaunchConfiguration(const UpdateLaunchConfigurationRequest &request);
    UpdateReplicationConfigurationResponse * updateReplicationConfiguration(const UpdateReplicationConfigurationRequest &request);
    UpdateReplicationConfigurationTemplateResponse * updateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest &request);

protected:
    /// @cond internal
    mgnClientPrivate * const d_ptr; ///< Internal d-pointer.
    mgnClient(mgnClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(mgnClient)
    Q_DISABLE_COPY(mgnClient)

};

} // namespace mgn
} // namespace QtAws

#endif

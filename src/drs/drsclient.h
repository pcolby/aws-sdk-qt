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

#ifndef QTAWS_DRSCLIENT_H
#define QTAWS_DRSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdrsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Drs {

class DrsClientPrivate;
class CreateExtendedSourceServerRequest;
class CreateExtendedSourceServerResponse;
class CreateReplicationConfigurationTemplateRequest;
class CreateReplicationConfigurationTemplateResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeleteRecoveryInstanceRequest;
class DeleteRecoveryInstanceResponse;
class DeleteReplicationConfigurationTemplateRequest;
class DeleteReplicationConfigurationTemplateResponse;
class DeleteSourceServerRequest;
class DeleteSourceServerResponse;
class DescribeJobLogItemsRequest;
class DescribeJobLogItemsResponse;
class DescribeJobsRequest;
class DescribeJobsResponse;
class DescribeRecoveryInstancesRequest;
class DescribeRecoveryInstancesResponse;
class DescribeRecoverySnapshotsRequest;
class DescribeRecoverySnapshotsResponse;
class DescribeReplicationConfigurationTemplatesRequest;
class DescribeReplicationConfigurationTemplatesResponse;
class DescribeSourceServersRequest;
class DescribeSourceServersResponse;
class DisconnectRecoveryInstanceRequest;
class DisconnectRecoveryInstanceResponse;
class DisconnectSourceServerRequest;
class DisconnectSourceServerResponse;
class GetFailbackReplicationConfigurationRequest;
class GetFailbackReplicationConfigurationResponse;
class GetLaunchConfigurationRequest;
class GetLaunchConfigurationResponse;
class GetReplicationConfigurationRequest;
class GetReplicationConfigurationResponse;
class InitializeServiceRequest;
class InitializeServiceResponse;
class ListExtensibleSourceServersRequest;
class ListExtensibleSourceServersResponse;
class ListStagingAccountsRequest;
class ListStagingAccountsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RetryDataReplicationRequest;
class RetryDataReplicationResponse;
class StartFailbackLaunchRequest;
class StartFailbackLaunchResponse;
class StartRecoveryRequest;
class StartRecoveryResponse;
class StopFailbackRequest;
class StopFailbackResponse;
class TagResourceRequest;
class TagResourceResponse;
class TerminateRecoveryInstancesRequest;
class TerminateRecoveryInstancesResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFailbackReplicationConfigurationRequest;
class UpdateFailbackReplicationConfigurationResponse;
class UpdateLaunchConfigurationRequest;
class UpdateLaunchConfigurationResponse;
class UpdateReplicationConfigurationRequest;
class UpdateReplicationConfigurationResponse;
class UpdateReplicationConfigurationTemplateRequest;
class UpdateReplicationConfigurationTemplateResponse;

class QTAWSDRS_EXPORT DrsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DrsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DrsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateExtendedSourceServerResponse * createExtendedSourceServer(const CreateExtendedSourceServerRequest &request);
    CreateReplicationConfigurationTemplateResponse * createReplicationConfigurationTemplate(const CreateReplicationConfigurationTemplateRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteRecoveryInstanceResponse * deleteRecoveryInstance(const DeleteRecoveryInstanceRequest &request);
    DeleteReplicationConfigurationTemplateResponse * deleteReplicationConfigurationTemplate(const DeleteReplicationConfigurationTemplateRequest &request);
    DeleteSourceServerResponse * deleteSourceServer(const DeleteSourceServerRequest &request);
    DescribeJobLogItemsResponse * describeJobLogItems(const DescribeJobLogItemsRequest &request);
    DescribeJobsResponse * describeJobs(const DescribeJobsRequest &request);
    DescribeRecoveryInstancesResponse * describeRecoveryInstances(const DescribeRecoveryInstancesRequest &request);
    DescribeRecoverySnapshotsResponse * describeRecoverySnapshots(const DescribeRecoverySnapshotsRequest &request);
    DescribeReplicationConfigurationTemplatesResponse * describeReplicationConfigurationTemplates(const DescribeReplicationConfigurationTemplatesRequest &request);
    DescribeSourceServersResponse * describeSourceServers(const DescribeSourceServersRequest &request);
    DisconnectRecoveryInstanceResponse * disconnectRecoveryInstance(const DisconnectRecoveryInstanceRequest &request);
    DisconnectSourceServerResponse * disconnectSourceServer(const DisconnectSourceServerRequest &request);
    GetFailbackReplicationConfigurationResponse * getFailbackReplicationConfiguration(const GetFailbackReplicationConfigurationRequest &request);
    GetLaunchConfigurationResponse * getLaunchConfiguration(const GetLaunchConfigurationRequest &request);
    GetReplicationConfigurationResponse * getReplicationConfiguration(const GetReplicationConfigurationRequest &request);
    InitializeServiceResponse * initializeService(const InitializeServiceRequest &request);
    ListExtensibleSourceServersResponse * listExtensibleSourceServers(const ListExtensibleSourceServersRequest &request);
    ListStagingAccountsResponse * listStagingAccounts(const ListStagingAccountsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RetryDataReplicationResponse * retryDataReplication(const RetryDataReplicationRequest &request);
    StartFailbackLaunchResponse * startFailbackLaunch(const StartFailbackLaunchRequest &request);
    StartRecoveryResponse * startRecovery(const StartRecoveryRequest &request);
    StopFailbackResponse * stopFailback(const StopFailbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TerminateRecoveryInstancesResponse * terminateRecoveryInstances(const TerminateRecoveryInstancesRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFailbackReplicationConfigurationResponse * updateFailbackReplicationConfiguration(const UpdateFailbackReplicationConfigurationRequest &request);
    UpdateLaunchConfigurationResponse * updateLaunchConfiguration(const UpdateLaunchConfigurationRequest &request);
    UpdateReplicationConfigurationResponse * updateReplicationConfiguration(const UpdateReplicationConfigurationRequest &request);
    UpdateReplicationConfigurationTemplateResponse * updateReplicationConfigurationTemplate(const UpdateReplicationConfigurationTemplateRequest &request);

private:
    Q_DECLARE_PRIVATE(DrsClient)
    Q_DISABLE_COPY(DrsClient)

};

} // namespace Drs
} // namespace QtAws

#endif

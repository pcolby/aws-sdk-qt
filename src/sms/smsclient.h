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

#ifndef QTAWS_SMSCLIENT_H
#define QTAWS_SMSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SMS {

class SmsClientPrivate;
class CreateAppRequest;
class CreateAppResponse;
class CreateReplicationJobRequest;
class CreateReplicationJobResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteAppLaunchConfigurationRequest;
class DeleteAppLaunchConfigurationResponse;
class DeleteAppReplicationConfigurationRequest;
class DeleteAppReplicationConfigurationResponse;
class DeleteAppValidationConfigurationRequest;
class DeleteAppValidationConfigurationResponse;
class DeleteReplicationJobRequest;
class DeleteReplicationJobResponse;
class DeleteServerCatalogRequest;
class DeleteServerCatalogResponse;
class DisassociateConnectorRequest;
class DisassociateConnectorResponse;
class GenerateChangeSetRequest;
class GenerateChangeSetResponse;
class GenerateTemplateRequest;
class GenerateTemplateResponse;
class GetAppRequest;
class GetAppResponse;
class GetAppLaunchConfigurationRequest;
class GetAppLaunchConfigurationResponse;
class GetAppReplicationConfigurationRequest;
class GetAppReplicationConfigurationResponse;
class GetAppValidationConfigurationRequest;
class GetAppValidationConfigurationResponse;
class GetAppValidationOutputRequest;
class GetAppValidationOutputResponse;
class GetConnectorsRequest;
class GetConnectorsResponse;
class GetReplicationJobsRequest;
class GetReplicationJobsResponse;
class GetReplicationRunsRequest;
class GetReplicationRunsResponse;
class GetServersRequest;
class GetServersResponse;
class ImportAppCatalogRequest;
class ImportAppCatalogResponse;
class ImportServerCatalogRequest;
class ImportServerCatalogResponse;
class LaunchAppRequest;
class LaunchAppResponse;
class ListAppsRequest;
class ListAppsResponse;
class NotifyAppValidationOutputRequest;
class NotifyAppValidationOutputResponse;
class PutAppLaunchConfigurationRequest;
class PutAppLaunchConfigurationResponse;
class PutAppReplicationConfigurationRequest;
class PutAppReplicationConfigurationResponse;
class PutAppValidationConfigurationRequest;
class PutAppValidationConfigurationResponse;
class StartAppReplicationRequest;
class StartAppReplicationResponse;
class StartOnDemandAppReplicationRequest;
class StartOnDemandAppReplicationResponse;
class StartOnDemandReplicationRunRequest;
class StartOnDemandReplicationRunResponse;
class StopAppReplicationRequest;
class StopAppReplicationResponse;
class TerminateAppRequest;
class TerminateAppResponse;
class UpdateAppRequest;
class UpdateAppResponse;
class UpdateReplicationJobRequest;
class UpdateReplicationJobResponse;

class QTAWS_EXPORT SmsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SmsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SmsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateReplicationJobResponse * createReplicationJob(const CreateReplicationJobRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteAppLaunchConfigurationResponse * deleteAppLaunchConfiguration(const DeleteAppLaunchConfigurationRequest &request);
    DeleteAppReplicationConfigurationResponse * deleteAppReplicationConfiguration(const DeleteAppReplicationConfigurationRequest &request);
    DeleteAppValidationConfigurationResponse * deleteAppValidationConfiguration(const DeleteAppValidationConfigurationRequest &request);
    DeleteReplicationJobResponse * deleteReplicationJob(const DeleteReplicationJobRequest &request);
    DeleteServerCatalogResponse * deleteServerCatalog(const DeleteServerCatalogRequest &request);
    DisassociateConnectorResponse * disassociateConnector(const DisassociateConnectorRequest &request);
    GenerateChangeSetResponse * generateChangeSet(const GenerateChangeSetRequest &request);
    GenerateTemplateResponse * generateTemplate(const GenerateTemplateRequest &request);
    GetAppResponse * getApp(const GetAppRequest &request);
    GetAppLaunchConfigurationResponse * getAppLaunchConfiguration(const GetAppLaunchConfigurationRequest &request);
    GetAppReplicationConfigurationResponse * getAppReplicationConfiguration(const GetAppReplicationConfigurationRequest &request);
    GetAppValidationConfigurationResponse * getAppValidationConfiguration(const GetAppValidationConfigurationRequest &request);
    GetAppValidationOutputResponse * getAppValidationOutput(const GetAppValidationOutputRequest &request);
    GetConnectorsResponse * getConnectors(const GetConnectorsRequest &request);
    GetReplicationJobsResponse * getReplicationJobs(const GetReplicationJobsRequest &request);
    GetReplicationRunsResponse * getReplicationRuns(const GetReplicationRunsRequest &request);
    GetServersResponse * getServers(const GetServersRequest &request);
    ImportAppCatalogResponse * importAppCatalog(const ImportAppCatalogRequest &request);
    ImportServerCatalogResponse * importServerCatalog(const ImportServerCatalogRequest &request);
    LaunchAppResponse * launchApp(const LaunchAppRequest &request);
    ListAppsResponse * listApps(const ListAppsRequest &request);
    NotifyAppValidationOutputResponse * notifyAppValidationOutput(const NotifyAppValidationOutputRequest &request);
    PutAppLaunchConfigurationResponse * putAppLaunchConfiguration(const PutAppLaunchConfigurationRequest &request);
    PutAppReplicationConfigurationResponse * putAppReplicationConfiguration(const PutAppReplicationConfigurationRequest &request);
    PutAppValidationConfigurationResponse * putAppValidationConfiguration(const PutAppValidationConfigurationRequest &request);
    StartAppReplicationResponse * startAppReplication(const StartAppReplicationRequest &request);
    StartOnDemandAppReplicationResponse * startOnDemandAppReplication(const StartOnDemandAppReplicationRequest &request);
    StartOnDemandReplicationRunResponse * startOnDemandReplicationRun(const StartOnDemandReplicationRunRequest &request);
    StopAppReplicationResponse * stopAppReplication(const StopAppReplicationRequest &request);
    TerminateAppResponse * terminateApp(const TerminateAppRequest &request);
    UpdateAppResponse * updateApp(const UpdateAppRequest &request);
    UpdateReplicationJobResponse * updateReplicationJob(const UpdateReplicationJobRequest &request);

private:
    Q_DECLARE_PRIVATE(SmsClient)
    Q_DISABLE_COPY(SmsClient)

};

} // namespace SMS
} // namespace QtAws

#endif

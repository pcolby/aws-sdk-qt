// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SMSCLIENT_H
#define QTAWS_SMSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssmsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Sms {

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

class QTAWSSMS_EXPORT SmsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SmsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SmsClient(
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

} // namespace Sms
} // namespace QtAws

#endif

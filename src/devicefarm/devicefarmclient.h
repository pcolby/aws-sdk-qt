/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DEVICEFARMCLIENT_H
#define QTAWS_DEVICEFARMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace DeviceFarm {

class DeviceFarmClientPrivate;
class CreateDevicePoolRequest;
class CreateDevicePoolResponse;
class CreateNetworkProfileRequest;
class CreateNetworkProfileResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateRemoteAccessSessionRequest;
class CreateRemoteAccessSessionResponse;
class CreateUploadRequest;
class CreateUploadResponse;
class DeleteDevicePoolRequest;
class DeleteDevicePoolResponse;
class DeleteNetworkProfileRequest;
class DeleteNetworkProfileResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteRemoteAccessSessionRequest;
class DeleteRemoteAccessSessionResponse;
class DeleteRunRequest;
class DeleteRunResponse;
class DeleteUploadRequest;
class DeleteUploadResponse;
class GetAccountSettingsRequest;
class GetAccountSettingsResponse;
class GetDeviceRequest;
class GetDeviceResponse;
class GetDevicePoolRequest;
class GetDevicePoolResponse;
class GetDevicePoolCompatibilityRequest;
class GetDevicePoolCompatibilityResponse;
class GetJobRequest;
class GetJobResponse;
class GetNetworkProfileRequest;
class GetNetworkProfileResponse;
class GetOfferingStatusRequest;
class GetOfferingStatusResponse;
class GetProjectRequest;
class GetProjectResponse;
class GetRemoteAccessSessionRequest;
class GetRemoteAccessSessionResponse;
class GetRunRequest;
class GetRunResponse;
class GetSuiteRequest;
class GetSuiteResponse;
class GetTestRequest;
class GetTestResponse;
class GetUploadRequest;
class GetUploadResponse;
class InstallToRemoteAccessSessionRequest;
class InstallToRemoteAccessSessionResponse;
class ListArtifactsRequest;
class ListArtifactsResponse;
class ListDevicePoolsRequest;
class ListDevicePoolsResponse;
class ListDevicesRequest;
class ListDevicesResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListNetworkProfilesRequest;
class ListNetworkProfilesResponse;
class ListOfferingPromotionsRequest;
class ListOfferingPromotionsResponse;
class ListOfferingTransactionsRequest;
class ListOfferingTransactionsResponse;
class ListOfferingsRequest;
class ListOfferingsResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListRemoteAccessSessionsRequest;
class ListRemoteAccessSessionsResponse;
class ListRunsRequest;
class ListRunsResponse;
class ListSamplesRequest;
class ListSamplesResponse;
class ListSuitesRequest;
class ListSuitesResponse;
class ListTestsRequest;
class ListTestsResponse;
class ListUniqueProblemsRequest;
class ListUniqueProblemsResponse;
class ListUploadsRequest;
class ListUploadsResponse;
class PurchaseOfferingRequest;
class PurchaseOfferingResponse;
class RenewOfferingRequest;
class RenewOfferingResponse;
class ScheduleRunRequest;
class ScheduleRunResponse;
class StopRemoteAccessSessionRequest;
class StopRemoteAccessSessionResponse;
class StopRunRequest;
class StopRunResponse;
class UpdateDevicePoolRequest;
class UpdateDevicePoolResponse;
class UpdateNetworkProfileRequest;
class UpdateNetworkProfileResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;

class QTAWS_EXPORT DeviceFarmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DeviceFarmClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DeviceFarmClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDevicePoolResponse * createDevicePool(const CreateDevicePoolRequest &request);
    CreateNetworkProfileResponse * createNetworkProfile(const CreateNetworkProfileRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateRemoteAccessSessionResponse * createRemoteAccessSession(const CreateRemoteAccessSessionRequest &request);
    CreateUploadResponse * createUpload(const CreateUploadRequest &request);
    DeleteDevicePoolResponse * deleteDevicePool(const DeleteDevicePoolRequest &request);
    DeleteNetworkProfileResponse * deleteNetworkProfile(const DeleteNetworkProfileRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteRemoteAccessSessionResponse * deleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest &request);
    DeleteRunResponse * deleteRun(const DeleteRunRequest &request);
    DeleteUploadResponse * deleteUpload(const DeleteUploadRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetDeviceResponse * getDevice(const GetDeviceRequest &request);
    GetDevicePoolResponse * getDevicePool(const GetDevicePoolRequest &request);
    GetDevicePoolCompatibilityResponse * getDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetNetworkProfileResponse * getNetworkProfile(const GetNetworkProfileRequest &request);
    GetOfferingStatusResponse * getOfferingStatus(const GetOfferingStatusRequest &request);
    GetProjectResponse * getProject(const GetProjectRequest &request);
    GetRemoteAccessSessionResponse * getRemoteAccessSession(const GetRemoteAccessSessionRequest &request);
    GetRunResponse * getRun(const GetRunRequest &request);
    GetSuiteResponse * getSuite(const GetSuiteRequest &request);
    GetTestResponse * getTest(const GetTestRequest &request);
    GetUploadResponse * getUpload(const GetUploadRequest &request);
    InstallToRemoteAccessSessionResponse * installToRemoteAccessSession(const InstallToRemoteAccessSessionRequest &request);
    ListArtifactsResponse * listArtifacts(const ListArtifactsRequest &request);
    ListDevicePoolsResponse * listDevicePools(const ListDevicePoolsRequest &request);
    ListDevicesResponse * listDevices(const ListDevicesRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListNetworkProfilesResponse * listNetworkProfiles(const ListNetworkProfilesRequest &request);
    ListOfferingPromotionsResponse * listOfferingPromotions(const ListOfferingPromotionsRequest &request);
    ListOfferingTransactionsResponse * listOfferingTransactions(const ListOfferingTransactionsRequest &request);
    ListOfferingsResponse * listOfferings(const ListOfferingsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListRemoteAccessSessionsResponse * listRemoteAccessSessions(const ListRemoteAccessSessionsRequest &request);
    ListRunsResponse * listRuns(const ListRunsRequest &request);
    ListSamplesResponse * listSamples(const ListSamplesRequest &request);
    ListSuitesResponse * listSuites(const ListSuitesRequest &request);
    ListTestsResponse * listTests(const ListTestsRequest &request);
    ListUniqueProblemsResponse * listUniqueProblems(const ListUniqueProblemsRequest &request);
    ListUploadsResponse * listUploads(const ListUploadsRequest &request);
    PurchaseOfferingResponse * purchaseOffering(const PurchaseOfferingRequest &request);
    RenewOfferingResponse * renewOffering(const RenewOfferingRequest &request);
    ScheduleRunResponse * scheduleRun(const ScheduleRunRequest &request);
    StopRemoteAccessSessionResponse * stopRemoteAccessSession(const StopRemoteAccessSessionRequest &request);
    StopRunResponse * stopRun(const StopRunRequest &request);
    UpdateDevicePoolResponse * updateDevicePool(const UpdateDevicePoolRequest &request);
    UpdateNetworkProfileResponse * updateNetworkProfile(const UpdateNetworkProfileRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(DeviceFarmClient)
    Q_DISABLE_COPY(DeviceFarmClient)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif

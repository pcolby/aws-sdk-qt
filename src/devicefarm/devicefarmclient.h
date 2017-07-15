/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_DEVICEFARMCLIENT_H
#define QTAWS_DEVICEFARMCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace DeviceFarm {

class DeviceFarmClientPrivate;

class QTAWS_EXPORT DeviceFarmClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DeviceFarmClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DeviceFarmClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateDevicePoolResponse * createDevicePool(const CreateDevicePoolRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateRemoteAccessSessionResponse * createRemoteAccessSession(const CreateRemoteAccessSessionRequest &request);
    CreateUploadResponse * createUpload(const CreateUploadRequest &request);
    DeleteDevicePoolResponse * deleteDevicePool(const DeleteDevicePoolRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteRemoteAccessSessionResponse * deleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest &request);
    DeleteRunResponse * deleteRun(const DeleteRunRequest &request);
    DeleteUploadResponse * deleteUpload(const DeleteUploadRequest &request);
    GetAccountSettingsResponse * getAccountSettings(const GetAccountSettingsRequest &request);
    GetDeviceResponse * getDevice(const GetDeviceRequest &request);
    GetDevicePoolResponse * getDevicePool(const GetDevicePoolRequest &request);
    GetDevicePoolCompatibilityResponse * getDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
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
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(DeviceFarmClient)
    Q_DISABLE_COPY(DeviceFarmClient)

};

} // namespace DeviceFarm
} // namespace AWS

#endif

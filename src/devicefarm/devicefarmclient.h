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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    DeviceFarmCreateDevicePoolResponse * createDevicePool(const DeviceFarmCreateDevicePoolRequest &request);
    DeviceFarmCreateProjectResponse * createProject(const DeviceFarmCreateProjectRequest &request);
    DeviceFarmCreateRemoteAccessSessionResponse * createRemoteAccessSession(const DeviceFarmCreateRemoteAccessSessionRequest &request);
    DeviceFarmCreateUploadResponse * createUpload(const DeviceFarmCreateUploadRequest &request);
    DeviceFarmDeleteDevicePoolResponse * deleteDevicePool(const DeviceFarmDeleteDevicePoolRequest &request);
    DeviceFarmDeleteProjectResponse * deleteProject(const DeviceFarmDeleteProjectRequest &request);
    DeviceFarmDeleteRemoteAccessSessionResponse * deleteRemoteAccessSession(const DeviceFarmDeleteRemoteAccessSessionRequest &request);
    DeviceFarmDeleteRunResponse * deleteRun(const DeviceFarmDeleteRunRequest &request);
    DeviceFarmDeleteUploadResponse * deleteUpload(const DeviceFarmDeleteUploadRequest &request);
    DeviceFarmGetAccountSettingsResponse * getAccountSettings(const DeviceFarmGetAccountSettingsRequest &request);
    DeviceFarmGetDeviceResponse * getDevice(const DeviceFarmGetDeviceRequest &request);
    DeviceFarmGetDevicePoolResponse * getDevicePool(const DeviceFarmGetDevicePoolRequest &request);
    DeviceFarmGetDevicePoolCompatibilityResponse * getDevicePoolCompatibility(const DeviceFarmGetDevicePoolCompatibilityRequest &request);
    DeviceFarmGetJobResponse * getJob(const DeviceFarmGetJobRequest &request);
    DeviceFarmGetOfferingStatusResponse * getOfferingStatus(const DeviceFarmGetOfferingStatusRequest &request);
    DeviceFarmGetProjectResponse * getProject(const DeviceFarmGetProjectRequest &request);
    DeviceFarmGetRemoteAccessSessionResponse * getRemoteAccessSession(const DeviceFarmGetRemoteAccessSessionRequest &request);
    DeviceFarmGetRunResponse * getRun(const DeviceFarmGetRunRequest &request);
    DeviceFarmGetSuiteResponse * getSuite(const DeviceFarmGetSuiteRequest &request);
    DeviceFarmGetTestResponse * getTest(const DeviceFarmGetTestRequest &request);
    DeviceFarmGetUploadResponse * getUpload(const DeviceFarmGetUploadRequest &request);
    DeviceFarmInstallToRemoteAccessSessionResponse * installToRemoteAccessSession(const DeviceFarmInstallToRemoteAccessSessionRequest &request);
    DeviceFarmListArtifactsResponse * listArtifacts(const DeviceFarmListArtifactsRequest &request);
    DeviceFarmListDevicePoolsResponse * listDevicePools(const DeviceFarmListDevicePoolsRequest &request);
    DeviceFarmListDevicesResponse * listDevices(const DeviceFarmListDevicesRequest &request);
    DeviceFarmListJobsResponse * listJobs(const DeviceFarmListJobsRequest &request);
    DeviceFarmListOfferingTransactionsResponse * listOfferingTransactions(const DeviceFarmListOfferingTransactionsRequest &request);
    DeviceFarmListOfferingsResponse * listOfferings(const DeviceFarmListOfferingsRequest &request);
    DeviceFarmListProjectsResponse * listProjects(const DeviceFarmListProjectsRequest &request);
    DeviceFarmListRemoteAccessSessionsResponse * listRemoteAccessSessions(const DeviceFarmListRemoteAccessSessionsRequest &request);
    DeviceFarmListRunsResponse * listRuns(const DeviceFarmListRunsRequest &request);
    DeviceFarmListSamplesResponse * listSamples(const DeviceFarmListSamplesRequest &request);
    DeviceFarmListSuitesResponse * listSuites(const DeviceFarmListSuitesRequest &request);
    DeviceFarmListTestsResponse * listTests(const DeviceFarmListTestsRequest &request);
    DeviceFarmListUniqueProblemsResponse * listUniqueProblems(const DeviceFarmListUniqueProblemsRequest &request);
    DeviceFarmListUploadsResponse * listUploads(const DeviceFarmListUploadsRequest &request);
    DeviceFarmPurchaseOfferingResponse * purchaseOffering(const DeviceFarmPurchaseOfferingRequest &request);
    DeviceFarmRenewOfferingResponse * renewOffering(const DeviceFarmRenewOfferingRequest &request);
    DeviceFarmScheduleRunResponse * scheduleRun(const DeviceFarmScheduleRunRequest &request);
    DeviceFarmStopRemoteAccessSessionResponse * stopRemoteAccessSession(const DeviceFarmStopRemoteAccessSessionRequest &request);
    DeviceFarmStopRunResponse * stopRun(const DeviceFarmStopRunRequest &request);
    DeviceFarmUpdateDevicePoolResponse * updateDevicePool(const DeviceFarmUpdateDevicePoolRequest &request);
    DeviceFarmUpdateProjectResponse * updateProject(const DeviceFarmUpdateProjectRequest &request);

private:
    Q_DECLARE_PRIVATE(DeviceFarmClient)
    Q_DISABLE_COPY(DeviceFarmClient)

};

QTAWS_END_NAMESPACE

#endif

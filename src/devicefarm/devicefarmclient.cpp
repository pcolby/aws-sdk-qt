/*
    Copyright 2013-2018 Paul Colby

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

#include "devicefarmclient.h"
#include "devicefarmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  DeviceFarmClient
 *
 * @brief  Client for AWS Device Farm
 *
 * AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 * phones, tablets, and other devices in the
 */

/**
 * @brief  Constructs a new DeviceFarmClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DeviceFarmClient::DeviceFarmClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DeviceFarmClientPrivate(this), parent)
{
    Q_D(DeviceFarmClient);
    d->apiVersion = QStringLiteral("2015-06-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("devicefarm");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Device Farm");
    d->serviceName = QStringLiteral("devicefarm");
}

/**
 * @brief  Constructs a new DeviceFarmClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
DeviceFarmClient::DeviceFarmClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DeviceFarmClientPrivate(this), parent)
{
    Q_D(DeviceFarmClient);
    d->apiVersion = QStringLiteral("2015-06-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("devicefarm");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Device Farm");
    d->serviceName = QStringLiteral("devicefarm");
}

/**
 * Creates a device
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDevicePoolResponse * DeviceFarmClient::createDevicePool(const CreateDevicePoolRequest &request)
{
    return qobject_cast<CreateDevicePoolResponse *>(send(request));
}

/**
 * Creates a network
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateNetworkProfileResponse * DeviceFarmClient::createNetworkProfile(const CreateNetworkProfileRequest &request)
{
    return qobject_cast<CreateNetworkProfileResponse *>(send(request));
}

/**
 * Creates a new
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProjectResponse * DeviceFarmClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/**
 * Specifies and starts a remote access
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRemoteAccessSessionResponse * DeviceFarmClient::createRemoteAccessSession(const CreateRemoteAccessSessionRequest &request)
{
    return qobject_cast<CreateRemoteAccessSessionResponse *>(send(request));
}

/**
 * Uploads an app or test
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUploadResponse * DeviceFarmClient::createUpload(const CreateUploadRequest &request)
{
    return qobject_cast<CreateUploadResponse *>(send(request));
}

/**
 * Deletes a device pool given the pool ARN. Does not allow deletion of curated pools owned by the
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDevicePoolResponse * DeviceFarmClient::deleteDevicePool(const DeleteDevicePoolRequest &request)
{
    return qobject_cast<DeleteDevicePoolResponse *>(send(request));
}

/**
 * Deletes a network
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteNetworkProfileResponse * DeviceFarmClient::deleteNetworkProfile(const DeleteNetworkProfileRequest &request)
{
    return qobject_cast<DeleteNetworkProfileResponse *>(send(request));
}

/**
 * Deletes an AWS Device Farm project, given the project
 *
 * ARN>
 *
 * <b>Note</b> Deleting this resource does not stop an in-progress
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProjectResponse * DeviceFarmClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/**
 * Deletes a completed remote access session and its
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRemoteAccessSessionResponse * DeviceFarmClient::deleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest &request)
{
    return qobject_cast<DeleteRemoteAccessSessionResponse *>(send(request));
}

/**
 * Deletes the run, given the run
 *
 * ARN>
 *
 * <b>Note</b> Deleting this resource does not stop an in-progress
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRunResponse * DeviceFarmClient::deleteRun(const DeleteRunRequest &request)
{
    return qobject_cast<DeleteRunResponse *>(send(request));
}

/**
 * Deletes an upload given the upload
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUploadResponse * DeviceFarmClient::deleteUpload(const DeleteUploadRequest &request)
{
    return qobject_cast<DeleteUploadResponse *>(send(request));
}

/**
 * Returns the number of unmetered iOS and/or unmetered Android devices that have been purchased by the
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAccountSettingsResponse * DeviceFarmClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/**
 * Gets information about a unique device
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceResponse * DeviceFarmClient::getDevice(const GetDeviceRequest &request)
{
    return qobject_cast<GetDeviceResponse *>(send(request));
}

/**
 * Gets information about a device
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDevicePoolResponse * DeviceFarmClient::getDevicePool(const GetDevicePoolRequest &request)
{
    return qobject_cast<GetDevicePoolResponse *>(send(request));
}

/**
 * Gets information about compatibility with a device
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDevicePoolCompatibilityResponse * DeviceFarmClient::getDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest &request)
{
    return qobject_cast<GetDevicePoolCompatibilityResponse *>(send(request));
}

/**
 * Gets information about a
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobResponse * DeviceFarmClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/**
 * Returns information about a network
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetNetworkProfileResponse * DeviceFarmClient::getNetworkProfile(const GetNetworkProfileRequest &request)
{
    return qobject_cast<GetNetworkProfileResponse *>(send(request));
}

/**
 * Gets the current status and future status of all offerings purchased by an AWS account. The response indicates how many
 * offerings are currently available and the offerings that will be available in the next period. The API returns a
 * <code>NotEligible</code> error if the user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetOfferingStatusResponse * DeviceFarmClient::getOfferingStatus(const GetOfferingStatusRequest &request)
{
    return qobject_cast<GetOfferingStatusResponse *>(send(request));
}

/**
 * Gets information about a
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetProjectResponse * DeviceFarmClient::getProject(const GetProjectRequest &request)
{
    return qobject_cast<GetProjectResponse *>(send(request));
}

/**
 * Returns a link to a currently running remote access
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRemoteAccessSessionResponse * DeviceFarmClient::getRemoteAccessSession(const GetRemoteAccessSessionRequest &request)
{
    return qobject_cast<GetRemoteAccessSessionResponse *>(send(request));
}

/**
 * Gets information about a
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRunResponse * DeviceFarmClient::getRun(const GetRunRequest &request)
{
    return qobject_cast<GetRunResponse *>(send(request));
}

/**
 * Gets information about a
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSuiteResponse * DeviceFarmClient::getSuite(const GetSuiteRequest &request)
{
    return qobject_cast<GetSuiteResponse *>(send(request));
}

/**
 * Gets information about a
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTestResponse * DeviceFarmClient::getTest(const GetTestRequest &request)
{
    return qobject_cast<GetTestResponse *>(send(request));
}

/**
 * Gets information about an
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetUploadResponse * DeviceFarmClient::getUpload(const GetUploadRequest &request)
{
    return qobject_cast<GetUploadResponse *>(send(request));
}

/**
 * Installs an application to the device in a remote access session. For Android applications, the file must be in .apk
 * format. For iOS applications, the file must be in .ipa
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InstallToRemoteAccessSessionResponse * DeviceFarmClient::installToRemoteAccessSession(const InstallToRemoteAccessSessionRequest &request)
{
    return qobject_cast<InstallToRemoteAccessSessionResponse *>(send(request));
}

/**
 * Gets information about
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListArtifactsResponse * DeviceFarmClient::listArtifacts(const ListArtifactsRequest &request)
{
    return qobject_cast<ListArtifactsResponse *>(send(request));
}

/**
 * Gets information about device
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDevicePoolsResponse * DeviceFarmClient::listDevicePools(const ListDevicePoolsRequest &request)
{
    return qobject_cast<ListDevicePoolsResponse *>(send(request));
}

/**
 * Gets information about unique device
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDevicesResponse * DeviceFarmClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/**
 * Gets information about jobs for a given test
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsResponse * DeviceFarmClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/**
 * Returns the list of available network
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListNetworkProfilesResponse * DeviceFarmClient::listNetworkProfiles(const ListNetworkProfilesRequest &request)
{
    return qobject_cast<ListNetworkProfilesResponse *>(send(request));
}

/**
 * Returns a list of offering promotions. Each offering promotion record contains the ID and description of the promotion.
 * The API returns a <code>NotEligible</code> error if the caller is not permitted to invoke the operation. Contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOfferingPromotionsResponse * DeviceFarmClient::listOfferingPromotions(const ListOfferingPromotionsRequest &request)
{
    return qobject_cast<ListOfferingPromotionsResponse *>(send(request));
}

/**
 * Returns a list of all historical purchases, renewals, and system renewal transactions for an AWS account. The list is
 * paginated and ordered by a descending timestamp (most recent transactions are first). The API returns a
 * <code>NotEligible</code> error if the user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOfferingTransactionsResponse * DeviceFarmClient::listOfferingTransactions(const ListOfferingTransactionsRequest &request)
{
    return qobject_cast<ListOfferingTransactionsResponse *>(send(request));
}

/**
 * Returns a list of products or offerings that the user can manage through the API. Each offering record indicates the
 * recurring price per unit and the frequency for that offering. The API returns a <code>NotEligible</code> error if the
 * user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListOfferingsResponse * DeviceFarmClient::listOfferings(const ListOfferingsRequest &request)
{
    return qobject_cast<ListOfferingsResponse *>(send(request));
}

/**
 * Gets information about
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProjectsResponse * DeviceFarmClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/**
 * Returns a list of all currently running remote access
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRemoteAccessSessionsResponse * DeviceFarmClient::listRemoteAccessSessions(const ListRemoteAccessSessionsRequest &request)
{
    return qobject_cast<ListRemoteAccessSessionsResponse *>(send(request));
}

/**
 * Gets information about runs, given an AWS Device Farm project
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRunsResponse * DeviceFarmClient::listRuns(const ListRunsRequest &request)
{
    return qobject_cast<ListRunsResponse *>(send(request));
}

/**
 * Gets information about samples, given an AWS Device Farm project
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSamplesResponse * DeviceFarmClient::listSamples(const ListSamplesRequest &request)
{
    return qobject_cast<ListSamplesResponse *>(send(request));
}

/**
 * Gets information about test suites for a given
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSuitesResponse * DeviceFarmClient::listSuites(const ListSuitesRequest &request)
{
    return qobject_cast<ListSuitesResponse *>(send(request));
}

/**
 * Gets information about tests in a given test
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTestsResponse * DeviceFarmClient::listTests(const ListTestsRequest &request)
{
    return qobject_cast<ListTestsResponse *>(send(request));
}

/**
 * Gets information about unique
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUniqueProblemsResponse * DeviceFarmClient::listUniqueProblems(const ListUniqueProblemsRequest &request)
{
    return qobject_cast<ListUniqueProblemsResponse *>(send(request));
}

/**
 * Gets information about uploads, given an AWS Device Farm project
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListUploadsResponse * DeviceFarmClient::listUploads(const ListUploadsRequest &request)
{
    return qobject_cast<ListUploadsResponse *>(send(request));
}

/**
 * Immediately purchases offerings for an AWS account. Offerings renew with the latest total purchased quantity for an
 * offering, unless the renewal was overridden. The API returns a <code>NotEligible</code> error if the user is not
 * permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PurchaseOfferingResponse * DeviceFarmClient::purchaseOffering(const PurchaseOfferingRequest &request)
{
    return qobject_cast<PurchaseOfferingResponse *>(send(request));
}

/**
 * Explicitly sets the quantity of devices to renew for an offering, starting from the <code>effectiveDate</code> of the
 * next period. The API returns a <code>NotEligible</code> error if the user is not permitted to invoke the operation.
 * Please contact <a href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe
 * that you should be able to invoke this
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RenewOfferingResponse * DeviceFarmClient::renewOffering(const RenewOfferingRequest &request)
{
    return qobject_cast<RenewOfferingResponse *>(send(request));
}

/**
 * Schedules a
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ScheduleRunResponse * DeviceFarmClient::scheduleRun(const ScheduleRunRequest &request)
{
    return qobject_cast<ScheduleRunResponse *>(send(request));
}

/**
 * Ends a specified remote access
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopRemoteAccessSessionResponse * DeviceFarmClient::stopRemoteAccessSession(const StopRemoteAccessSessionRequest &request)
{
    return qobject_cast<StopRemoteAccessSessionResponse *>(send(request));
}

/**
 * Initiates a stop request for the current test run. AWS Device Farm will immediately stop the run on devices where tests
 * have not started executing, and you will not be billed for these devices. On devices where tests have started executing,
 * Setup Suite and Teardown Suite tests will run to completion before stopping execution on those devices. You will be
 * billed for Setup, Teardown, and any tests that were in progress or already
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopRunResponse * DeviceFarmClient::stopRun(const StopRunRequest &request)
{
    return qobject_cast<StopRunResponse *>(send(request));
}

/**
 * Modifies the name, description, and rules in a device pool given the attributes and the pool ARN. Rule updates are
 * all-or-nothing, meaning they can only be updated as a whole (or not at
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDevicePoolResponse * DeviceFarmClient::updateDevicePool(const UpdateDevicePoolRequest &request)
{
    return qobject_cast<UpdateDevicePoolResponse *>(send(request));
}

/**
 * Updates the network profile with specific
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateNetworkProfileResponse * DeviceFarmClient::updateNetworkProfile(const UpdateNetworkProfileRequest &request)
{
    return qobject_cast<UpdateNetworkProfileResponse *>(send(request));
}

/**
 * Modifies the specified project name, given the project ARN and a new
 *
 * @param  request Request to send to AWS Device Farm.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProjectResponse * DeviceFarmClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  DeviceFarmClientPrivate
 *
 * @brief  Private implementation for DeviceFarmClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeviceFarmClientPrivate object.
 *
 * @param  q  Pointer to this object's public DeviceFarmClient instance.
 */
DeviceFarmClientPrivate::DeviceFarmClientPrivate(DeviceFarmClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace DeviceFarm
} // namespace AWS

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
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Creates a device
 */
CreateDevicePoolResponse * DeviceFarmClient::createDevicePool(const CreateDevicePoolRequest &request)
{

}

/**
 * Creates a network
 */
CreateNetworkProfileResponse * DeviceFarmClient::createNetworkProfile(const CreateNetworkProfileRequest &request)
{

}

/**
 * Creates a new
 */
CreateProjectResponse * DeviceFarmClient::createProject(const CreateProjectRequest &request)
{

}

/**
 * Specifies and starts a remote access
 */
CreateRemoteAccessSessionResponse * DeviceFarmClient::createRemoteAccessSession(const CreateRemoteAccessSessionRequest &request)
{

}

/**
 * Uploads an app or test
 */
CreateUploadResponse * DeviceFarmClient::createUpload(const CreateUploadRequest &request)
{

}

/**
 * Deletes a device pool given the pool ARN. Does not allow deletion of curated pools owned by the
 */
DeleteDevicePoolResponse * DeviceFarmClient::deleteDevicePool(const DeleteDevicePoolRequest &request)
{

}

/**
 * Deletes a network
 */
DeleteNetworkProfileResponse * DeviceFarmClient::deleteNetworkProfile(const DeleteNetworkProfileRequest &request)
{

}

/**
 * Deletes an AWS Device Farm project, given the project
 *
 * ARN>
 *
 * <b>Note</b> Deleting this resource does not stop an in-progress
 */
DeleteProjectResponse * DeviceFarmClient::deleteProject(const DeleteProjectRequest &request)
{

}

/**
 * Deletes a completed remote access session and its
 */
DeleteRemoteAccessSessionResponse * DeviceFarmClient::deleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest &request)
{

}

/**
 * Deletes the run, given the run
 *
 * ARN>
 *
 * <b>Note</b> Deleting this resource does not stop an in-progress
 */
DeleteRunResponse * DeviceFarmClient::deleteRun(const DeleteRunRequest &request)
{

}

/**
 * Deletes an upload given the upload
 */
DeleteUploadResponse * DeviceFarmClient::deleteUpload(const DeleteUploadRequest &request)
{

}

/**
 * Returns the number of unmetered iOS and/or unmetered Android devices that have been purchased by the
 */
GetAccountSettingsResponse * DeviceFarmClient::getAccountSettings(const GetAccountSettingsRequest &request)
{

}

/**
 * Gets information about a unique device
 */
GetDeviceResponse * DeviceFarmClient::getDevice(const GetDeviceRequest &request)
{

}

/**
 * Gets information about a device
 */
GetDevicePoolResponse * DeviceFarmClient::getDevicePool(const GetDevicePoolRequest &request)
{

}

/**
 * Gets information about compatibility with a device
 */
GetDevicePoolCompatibilityResponse * DeviceFarmClient::getDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest &request)
{

}

/**
 * Gets information about a
 */
GetJobResponse * DeviceFarmClient::getJob(const GetJobRequest &request)
{

}

/**
 * Returns information about a network
 */
GetNetworkProfileResponse * DeviceFarmClient::getNetworkProfile(const GetNetworkProfileRequest &request)
{

}

/**
 * Gets the current status and future status of all offerings purchased by an AWS account. The response indicates how many
 * offerings are currently available and the offerings that will be available in the next period. The API returns a
 * <code>NotEligible</code> error if the user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
GetOfferingStatusResponse * DeviceFarmClient::getOfferingStatus(const GetOfferingStatusRequest &request)
{

}

/**
 * Gets information about a
 */
GetProjectResponse * DeviceFarmClient::getProject(const GetProjectRequest &request)
{

}

/**
 * Returns a link to a currently running remote access
 */
GetRemoteAccessSessionResponse * DeviceFarmClient::getRemoteAccessSession(const GetRemoteAccessSessionRequest &request)
{

}

/**
 * Gets information about a
 */
GetRunResponse * DeviceFarmClient::getRun(const GetRunRequest &request)
{

}

/**
 * Gets information about a
 */
GetSuiteResponse * DeviceFarmClient::getSuite(const GetSuiteRequest &request)
{

}

/**
 * Gets information about a
 */
GetTestResponse * DeviceFarmClient::getTest(const GetTestRequest &request)
{

}

/**
 * Gets information about an
 */
GetUploadResponse * DeviceFarmClient::getUpload(const GetUploadRequest &request)
{

}

/**
 * Installs an application to the device in a remote access session. For Android applications, the file must be in .apk
 * format. For iOS applications, the file must be in .ipa
 */
InstallToRemoteAccessSessionResponse * DeviceFarmClient::installToRemoteAccessSession(const InstallToRemoteAccessSessionRequest &request)
{

}

/**
 * Gets information about
 */
ListArtifactsResponse * DeviceFarmClient::listArtifacts(const ListArtifactsRequest &request)
{

}

/**
 * Gets information about device
 */
ListDevicePoolsResponse * DeviceFarmClient::listDevicePools(const ListDevicePoolsRequest &request)
{

}

/**
 * Gets information about unique device
 */
ListDevicesResponse * DeviceFarmClient::listDevices(const ListDevicesRequest &request)
{

}

/**
 * Gets information about jobs for a given test
 */
ListJobsResponse * DeviceFarmClient::listJobs(const ListJobsRequest &request)
{

}

/**
 * Returns the list of available network
 */
ListNetworkProfilesResponse * DeviceFarmClient::listNetworkProfiles(const ListNetworkProfilesRequest &request)
{

}

/**
 * Returns a list of offering promotions. Each offering promotion record contains the ID and description of the promotion.
 * The API returns a <code>NotEligible</code> error if the caller is not permitted to invoke the operation. Contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
ListOfferingPromotionsResponse * DeviceFarmClient::listOfferingPromotions(const ListOfferingPromotionsRequest &request)
{

}

/**
 * Returns a list of all historical purchases, renewals, and system renewal transactions for an AWS account. The list is
 * paginated and ordered by a descending timestamp (most recent transactions are first). The API returns a
 * <code>NotEligible</code> error if the user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
ListOfferingTransactionsResponse * DeviceFarmClient::listOfferingTransactions(const ListOfferingTransactionsRequest &request)
{

}

/**
 * Returns a list of products or offerings that the user can manage through the API. Each offering record indicates the
 * recurring price per unit and the frequency for that offering. The API returns a <code>NotEligible</code> error if the
 * user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
ListOfferingsResponse * DeviceFarmClient::listOfferings(const ListOfferingsRequest &request)
{

}

/**
 * Gets information about
 */
ListProjectsResponse * DeviceFarmClient::listProjects(const ListProjectsRequest &request)
{

}

/**
 * Returns a list of all currently running remote access
 */
ListRemoteAccessSessionsResponse * DeviceFarmClient::listRemoteAccessSessions(const ListRemoteAccessSessionsRequest &request)
{

}

/**
 * Gets information about runs, given an AWS Device Farm project
 */
ListRunsResponse * DeviceFarmClient::listRuns(const ListRunsRequest &request)
{

}

/**
 * Gets information about samples, given an AWS Device Farm project
 */
ListSamplesResponse * DeviceFarmClient::listSamples(const ListSamplesRequest &request)
{

}

/**
 * Gets information about test suites for a given
 */
ListSuitesResponse * DeviceFarmClient::listSuites(const ListSuitesRequest &request)
{

}

/**
 * Gets information about tests in a given test
 */
ListTestsResponse * DeviceFarmClient::listTests(const ListTestsRequest &request)
{

}

/**
 * Gets information about unique
 */
ListUniqueProblemsResponse * DeviceFarmClient::listUniqueProblems(const ListUniqueProblemsRequest &request)
{

}

/**
 * Gets information about uploads, given an AWS Device Farm project
 */
ListUploadsResponse * DeviceFarmClient::listUploads(const ListUploadsRequest &request)
{

}

/**
 * Immediately purchases offerings for an AWS account. Offerings renew with the latest total purchased quantity for an
 * offering, unless the renewal was overridden. The API returns a <code>NotEligible</code> error if the user is not
 * permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
PurchaseOfferingResponse * DeviceFarmClient::purchaseOffering(const PurchaseOfferingRequest &request)
{

}

/**
 * Explicitly sets the quantity of devices to renew for an offering, starting from the <code>effectiveDate</code> of the
 * next period. The API returns a <code>NotEligible</code> error if the user is not permitted to invoke the operation.
 * Please contact <a href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe
 * that you should be able to invoke this
 */
RenewOfferingResponse * DeviceFarmClient::renewOffering(const RenewOfferingRequest &request)
{

}

/**
 * Schedules a
 */
ScheduleRunResponse * DeviceFarmClient::scheduleRun(const ScheduleRunRequest &request)
{

}

/**
 * Ends a specified remote access
 */
StopRemoteAccessSessionResponse * DeviceFarmClient::stopRemoteAccessSession(const StopRemoteAccessSessionRequest &request)
{

}

/**
 * Initiates a stop request for the current test run. AWS Device Farm will immediately stop the run on devices where tests
 * have not started executing, and you will not be billed for these devices. On devices where tests have started executing,
 * Setup Suite and Teardown Suite tests will run to completion before stopping execution on those devices. You will be
 * billed for Setup, Teardown, and any tests that were in progress or already
 */
StopRunResponse * DeviceFarmClient::stopRun(const StopRunRequest &request)
{

}

/**
 * Modifies the name, description, and rules in a device pool given the attributes and the pool ARN. Rule updates are
 * all-or-nothing, meaning they can only be updated as a whole (or not at
 */
UpdateDevicePoolResponse * DeviceFarmClient::updateDevicePool(const UpdateDevicePoolRequest &request)
{

}

/**
 * Updates the network profile with specific
 */
UpdateNetworkProfileResponse * DeviceFarmClient::updateNetworkProfile(const UpdateNetworkProfileRequest &request)
{

}

/**
 * Modifies the specified project name, given the project ARN and a new
 */
UpdateProjectResponse * DeviceFarmClient::updateProject(const UpdateProjectRequest &request)
{

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

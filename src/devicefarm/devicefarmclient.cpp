/*
    Copyright 2013-2018 Paul Colby

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

#include "devicefarmclient.h"
#include "devicefarmclient_p.h"

#include "core/awssignaturev4.h"
#include "createdevicepoolrequest.h"
#include "createdevicepoolresponse.h"
#include "createinstanceprofilerequest.h"
#include "createinstanceprofileresponse.h"
#include "createnetworkprofilerequest.h"
#include "createnetworkprofileresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createremoteaccesssessionrequest.h"
#include "createremoteaccesssessionresponse.h"
#include "createuploadrequest.h"
#include "createuploadresponse.h"
#include "createvpceconfigurationrequest.h"
#include "createvpceconfigurationresponse.h"
#include "deletedevicepoolrequest.h"
#include "deletedevicepoolresponse.h"
#include "deleteinstanceprofilerequest.h"
#include "deleteinstanceprofileresponse.h"
#include "deletenetworkprofilerequest.h"
#include "deletenetworkprofileresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deleteremoteaccesssessionrequest.h"
#include "deleteremoteaccesssessionresponse.h"
#include "deleterunrequest.h"
#include "deleterunresponse.h"
#include "deleteuploadrequest.h"
#include "deleteuploadresponse.h"
#include "deletevpceconfigurationrequest.h"
#include "deletevpceconfigurationresponse.h"
#include "getaccountsettingsrequest.h"
#include "getaccountsettingsresponse.h"
#include "getdevicerequest.h"
#include "getdeviceresponse.h"
#include "getdeviceinstancerequest.h"
#include "getdeviceinstanceresponse.h"
#include "getdevicepoolrequest.h"
#include "getdevicepoolresponse.h"
#include "getdevicepoolcompatibilityrequest.h"
#include "getdevicepoolcompatibilityresponse.h"
#include "getinstanceprofilerequest.h"
#include "getinstanceprofileresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getnetworkprofilerequest.h"
#include "getnetworkprofileresponse.h"
#include "getofferingstatusrequest.h"
#include "getofferingstatusresponse.h"
#include "getprojectrequest.h"
#include "getprojectresponse.h"
#include "getremoteaccesssessionrequest.h"
#include "getremoteaccesssessionresponse.h"
#include "getrunrequest.h"
#include "getrunresponse.h"
#include "getsuiterequest.h"
#include "getsuiteresponse.h"
#include "gettestrequest.h"
#include "gettestresponse.h"
#include "getuploadrequest.h"
#include "getuploadresponse.h"
#include "getvpceconfigurationrequest.h"
#include "getvpceconfigurationresponse.h"
#include "installtoremoteaccesssessionrequest.h"
#include "installtoremoteaccesssessionresponse.h"
#include "listartifactsrequest.h"
#include "listartifactsresponse.h"
#include "listdeviceinstancesrequest.h"
#include "listdeviceinstancesresponse.h"
#include "listdevicepoolsrequest.h"
#include "listdevicepoolsresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listnetworkprofilesrequest.h"
#include "listnetworkprofilesresponse.h"
#include "listofferingpromotionsrequest.h"
#include "listofferingpromotionsresponse.h"
#include "listofferingtransactionsrequest.h"
#include "listofferingtransactionsresponse.h"
#include "listofferingsrequest.h"
#include "listofferingsresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listremoteaccesssessionsrequest.h"
#include "listremoteaccesssessionsresponse.h"
#include "listrunsrequest.h"
#include "listrunsresponse.h"
#include "listsamplesrequest.h"
#include "listsamplesresponse.h"
#include "listsuitesrequest.h"
#include "listsuitesresponse.h"
#include "listtestsrequest.h"
#include "listtestsresponse.h"
#include "listuniqueproblemsrequest.h"
#include "listuniqueproblemsresponse.h"
#include "listuploadsrequest.h"
#include "listuploadsresponse.h"
#include "listvpceconfigurationsrequest.h"
#include "listvpceconfigurationsresponse.h"
#include "purchaseofferingrequest.h"
#include "purchaseofferingresponse.h"
#include "renewofferingrequest.h"
#include "renewofferingresponse.h"
#include "schedulerunrequest.h"
#include "schedulerunresponse.h"
#include "stopjobrequest.h"
#include "stopjobresponse.h"
#include "stopremoteaccesssessionrequest.h"
#include "stopremoteaccesssessionresponse.h"
#include "stoprunrequest.h"
#include "stoprunresponse.h"
#include "updatedeviceinstancerequest.h"
#include "updatedeviceinstanceresponse.h"
#include "updatedevicepoolrequest.h"
#include "updatedevicepoolresponse.h"
#include "updateinstanceprofilerequest.h"
#include "updateinstanceprofileresponse.h"
#include "updatenetworkprofilerequest.h"
#include "updatenetworkprofileresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"
#include "updateuploadrequest.h"
#include "updateuploadresponse.h"
#include "updatevpceconfigurationrequest.h"
#include "updatevpceconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DeviceFarm
 * \brief Contains classess for accessing AWS Device Farm.
 *
 * \inmodule QtAwsDeviceFarm
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeviceFarmClient
 * \brief The DeviceFarmClient class provides access to the AWS Device Farm service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 */

/*!
 * \brief Constructs a DeviceFarmClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DeviceFarmClient::DeviceFarmClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DeviceFarmClientPrivate(this), parent)
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

/*!
 * \overload DeviceFarmClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DeviceFarmClient::DeviceFarmClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DeviceFarmClientPrivate(this), parent)
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

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateDevicePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a device
 */
CreateDevicePoolResponse * DeviceFarmClient::createDevicePool(const CreateDevicePoolRequest &request)
{
    return qobject_cast<CreateDevicePoolResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a profile that can be applied to one or more private fleet device
 */
CreateInstanceProfileResponse * DeviceFarmClient::createInstanceProfile(const CreateInstanceProfileRequest &request)
{
    return qobject_cast<CreateInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateNetworkProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a network
 */
CreateNetworkProfileResponse * DeviceFarmClient::createNetworkProfile(const CreateNetworkProfileRequest &request)
{
    return qobject_cast<CreateNetworkProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new
 */
CreateProjectResponse * DeviceFarmClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateRemoteAccessSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies and starts a remote access
 */
CreateRemoteAccessSessionResponse * DeviceFarmClient::createRemoteAccessSession(const CreateRemoteAccessSessionRequest &request)
{
    return qobject_cast<CreateRemoteAccessSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads an app or test
 */
CreateUploadResponse * DeviceFarmClient::createUpload(const CreateUploadRequest &request)
{
    return qobject_cast<CreateUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * CreateVPCEConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a configuration record in Device Farm for your Amazon Virtual Private Cloud (VPC)
 */
CreateVPCEConfigurationResponse * DeviceFarmClient::createVPCEConfiguration(const CreateVPCEConfigurationRequest &request)
{
    return qobject_cast<CreateVPCEConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteDevicePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a device pool given the pool ARN. Does not allow deletion of curated pools owned by the
 */
DeleteDevicePoolResponse * DeviceFarmClient::deleteDevicePool(const DeleteDevicePoolRequest &request)
{
    return qobject_cast<DeleteDevicePoolResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a profile that can be applied to one or more private device
 */
DeleteInstanceProfileResponse * DeviceFarmClient::deleteInstanceProfile(const DeleteInstanceProfileRequest &request)
{
    return qobject_cast<DeleteInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteNetworkProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a network
 */
DeleteNetworkProfileResponse * DeviceFarmClient::deleteNetworkProfile(const DeleteNetworkProfileRequest &request)
{
    return qobject_cast<DeleteNetworkProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Device Farm project, given the project
 *
 * ARN>
 *
 * <b>Note</b> Deleting this resource does not stop an in-progress
 */
DeleteProjectResponse * DeviceFarmClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteRemoteAccessSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a completed remote access session and its
 */
DeleteRemoteAccessSessionResponse * DeviceFarmClient::deleteRemoteAccessSession(const DeleteRemoteAccessSessionRequest &request)
{
    return qobject_cast<DeleteRemoteAccessSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the run, given the run
 *
 * ARN>
 *
 * <b>Note</b> Deleting this resource does not stop an in-progress
 */
DeleteRunResponse * DeviceFarmClient::deleteRun(const DeleteRunRequest &request)
{
    return qobject_cast<DeleteRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an upload given the upload
 */
DeleteUploadResponse * DeviceFarmClient::deleteUpload(const DeleteUploadRequest &request)
{
    return qobject_cast<DeleteUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * DeleteVPCEConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a configuration for your Amazon Virtual Private Cloud (VPC)
 */
DeleteVPCEConfigurationResponse * DeviceFarmClient::deleteVPCEConfiguration(const DeleteVPCEConfigurationRequest &request)
{
    return qobject_cast<DeleteVPCEConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetAccountSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of unmetered iOS and/or unmetered Android devices that have been purchased by the
 */
GetAccountSettingsResponse * DeviceFarmClient::getAccountSettings(const GetAccountSettingsRequest &request)
{
    return qobject_cast<GetAccountSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a unique device
 */
GetDeviceResponse * DeviceFarmClient::getDevice(const GetDeviceRequest &request)
{
    return qobject_cast<GetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetDeviceInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a device instance belonging to a private device
 */
GetDeviceInstanceResponse * DeviceFarmClient::getDeviceInstance(const GetDeviceInstanceRequest &request)
{
    return qobject_cast<GetDeviceInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetDevicePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a device
 */
GetDevicePoolResponse * DeviceFarmClient::getDevicePool(const GetDevicePoolRequest &request)
{
    return qobject_cast<GetDevicePoolResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetDevicePoolCompatibilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about compatibility with a device
 */
GetDevicePoolCompatibilityResponse * DeviceFarmClient::getDevicePoolCompatibility(const GetDevicePoolCompatibilityRequest &request)
{
    return qobject_cast<GetDevicePoolCompatibilityResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the specified instance
 */
GetInstanceProfileResponse * DeviceFarmClient::getInstanceProfile(const GetInstanceProfileRequest &request)
{
    return qobject_cast<GetInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetJobResponse * DeviceFarmClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetNetworkProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a network
 */
GetNetworkProfileResponse * DeviceFarmClient::getNetworkProfile(const GetNetworkProfileRequest &request)
{
    return qobject_cast<GetNetworkProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetOfferingStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the current status and future status of all offerings purchased by an AWS account. The response indicates how many
 * offerings are currently available and the offerings that will be available in the next period. The API returns a
 * <code>NotEligible</code> error if the user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
GetOfferingStatusResponse * DeviceFarmClient::getOfferingStatus(const GetOfferingStatusRequest &request)
{
    return qobject_cast<GetOfferingStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetProjectResponse * DeviceFarmClient::getProject(const GetProjectRequest &request)
{
    return qobject_cast<GetProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetRemoteAccessSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a link to a currently running remote access
 */
GetRemoteAccessSessionResponse * DeviceFarmClient::getRemoteAccessSession(const GetRemoteAccessSessionRequest &request)
{
    return qobject_cast<GetRemoteAccessSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetRunResponse * DeviceFarmClient::getRun(const GetRunRequest &request)
{
    return qobject_cast<GetRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetSuiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetSuiteResponse * DeviceFarmClient::getSuite(const GetSuiteRequest &request)
{
    return qobject_cast<GetSuiteResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetTestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetTestResponse * DeviceFarmClient::getTest(const GetTestRequest &request)
{
    return qobject_cast<GetTestResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an
 */
GetUploadResponse * DeviceFarmClient::getUpload(const GetUploadRequest &request)
{
    return qobject_cast<GetUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * GetVPCEConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the configuration settings for your Amazon Virtual Private Cloud (VPC)
 */
GetVPCEConfigurationResponse * DeviceFarmClient::getVPCEConfiguration(const GetVPCEConfigurationRequest &request)
{
    return qobject_cast<GetVPCEConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * InstallToRemoteAccessSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Installs an application to the device in a remote access session. For Android applications, the file must be in .apk
 * format. For iOS applications, the file must be in .ipa
 */
InstallToRemoteAccessSessionResponse * DeviceFarmClient::installToRemoteAccessSession(const InstallToRemoteAccessSessionRequest &request)
{
    return qobject_cast<InstallToRemoteAccessSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListArtifactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about
 */
ListArtifactsResponse * DeviceFarmClient::listArtifacts(const ListArtifactsRequest &request)
{
    return qobject_cast<ListArtifactsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListDeviceInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the private device instances associated with one or more AWS
 */
ListDeviceInstancesResponse * DeviceFarmClient::listDeviceInstances(const ListDeviceInstancesRequest &request)
{
    return qobject_cast<ListDeviceInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListDevicePoolsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about device
 */
ListDevicePoolsResponse * DeviceFarmClient::listDevicePools(const ListDevicePoolsRequest &request)
{
    return qobject_cast<ListDevicePoolsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about unique device
 */
ListDevicesResponse * DeviceFarmClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListInstanceProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all the instance profiles in an AWS
 */
ListInstanceProfilesResponse * DeviceFarmClient::listInstanceProfiles(const ListInstanceProfilesRequest &request)
{
    return qobject_cast<ListInstanceProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about jobs for a given test
 */
ListJobsResponse * DeviceFarmClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListNetworkProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of available network
 */
ListNetworkProfilesResponse * DeviceFarmClient::listNetworkProfiles(const ListNetworkProfilesRequest &request)
{
    return qobject_cast<ListNetworkProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListOfferingPromotionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of offering promotions. Each offering promotion record contains the ID and description of the promotion.
 * The API returns a <code>NotEligible</code> error if the caller is not permitted to invoke the operation. Contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
ListOfferingPromotionsResponse * DeviceFarmClient::listOfferingPromotions(const ListOfferingPromotionsRequest &request)
{
    return qobject_cast<ListOfferingPromotionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListOfferingTransactionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all historical purchases, renewals, and system renewal transactions for an AWS account. The list is
 * paginated and ordered by a descending timestamp (most recent transactions are first). The API returns a
 * <code>NotEligible</code> error if the user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
ListOfferingTransactionsResponse * DeviceFarmClient::listOfferingTransactions(const ListOfferingTransactionsRequest &request)
{
    return qobject_cast<ListOfferingTransactionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of products or offerings that the user can manage through the API. Each offering record indicates the
 * recurring price per unit and the frequency for that offering. The API returns a <code>NotEligible</code> error if the
 * user is not permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
ListOfferingsResponse * DeviceFarmClient::listOfferings(const ListOfferingsRequest &request)
{
    return qobject_cast<ListOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about
 */
ListProjectsResponse * DeviceFarmClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListRemoteAccessSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all currently running remote access
 */
ListRemoteAccessSessionsResponse * DeviceFarmClient::listRemoteAccessSessions(const ListRemoteAccessSessionsRequest &request)
{
    return qobject_cast<ListRemoteAccessSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about runs, given an AWS Device Farm project
 */
ListRunsResponse * DeviceFarmClient::listRuns(const ListRunsRequest &request)
{
    return qobject_cast<ListRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListSamplesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about samples, given an AWS Device Farm job
 */
ListSamplesResponse * DeviceFarmClient::listSamples(const ListSamplesRequest &request)
{
    return qobject_cast<ListSamplesResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListSuitesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about test suites for a given
 */
ListSuitesResponse * DeviceFarmClient::listSuites(const ListSuitesRequest &request)
{
    return qobject_cast<ListSuitesResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListTestsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about tests in a given test
 */
ListTestsResponse * DeviceFarmClient::listTests(const ListTestsRequest &request)
{
    return qobject_cast<ListTestsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListUniqueProblemsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about unique
 */
ListUniqueProblemsResponse * DeviceFarmClient::listUniqueProblems(const ListUniqueProblemsRequest &request)
{
    return qobject_cast<ListUniqueProblemsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListUploadsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about uploads, given an AWS Device Farm project
 */
ListUploadsResponse * DeviceFarmClient::listUploads(const ListUploadsRequest &request)
{
    return qobject_cast<ListUploadsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ListVPCEConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about all Amazon Virtual Private Cloud (VPC) endpoint configurations in the AWS
 */
ListVPCEConfigurationsResponse * DeviceFarmClient::listVPCEConfigurations(const ListVPCEConfigurationsRequest &request)
{
    return qobject_cast<ListVPCEConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * PurchaseOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Immediately purchases offerings for an AWS account. Offerings renew with the latest total purchased quantity for an
 * offering, unless the renewal was overridden. The API returns a <code>NotEligible</code> error if the user is not
 * permitted to invoke the operation. Please contact <a
 * href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe that you should be
 * able to invoke this
 */
PurchaseOfferingResponse * DeviceFarmClient::purchaseOffering(const PurchaseOfferingRequest &request)
{
    return qobject_cast<PurchaseOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * RenewOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Explicitly sets the quantity of devices to renew for an offering, starting from the <code>effectiveDate</code> of the
 * next period. The API returns a <code>NotEligible</code> error if the user is not permitted to invoke the operation.
 * Please contact <a href="mailto:aws-devicefarm-support@amazon.com">aws-devicefarm-support@amazon.com</a> if you believe
 * that you should be able to invoke this
 */
RenewOfferingResponse * DeviceFarmClient::renewOffering(const RenewOfferingRequest &request)
{
    return qobject_cast<RenewOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * ScheduleRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Schedules a
 */
ScheduleRunResponse * DeviceFarmClient::scheduleRun(const ScheduleRunRequest &request)
{
    return qobject_cast<ScheduleRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * StopJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a stop request for the current job. AWS Device Farm will immediately stop the job on the device where tests
 * have not started executing, and you will not be billed for this device. On the device where tests have started
 * executing, Setup Suite and Teardown Suite tests will run to completion before stopping execution on the device. You will
 * be billed for Setup, Teardown, and any tests that were in progress or already
 */
StopJobResponse * DeviceFarmClient::stopJob(const StopJobRequest &request)
{
    return qobject_cast<StopJobResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * StopRemoteAccessSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends a specified remote access
 */
StopRemoteAccessSessionResponse * DeviceFarmClient::stopRemoteAccessSession(const StopRemoteAccessSessionRequest &request)
{
    return qobject_cast<StopRemoteAccessSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * StopRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a stop request for the current test run. AWS Device Farm will immediately stop the run on devices where tests
 * have not started executing, and you will not be billed for these devices. On devices where tests have started executing,
 * Setup Suite and Teardown Suite tests will run to completion before stopping execution on those devices. You will be
 * billed for Setup, Teardown, and any tests that were in progress or already
 */
StopRunResponse * DeviceFarmClient::stopRun(const StopRunRequest &request)
{
    return qobject_cast<StopRunResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateDeviceInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about an existing private device
 */
UpdateDeviceInstanceResponse * DeviceFarmClient::updateDeviceInstance(const UpdateDeviceInstanceRequest &request)
{
    return qobject_cast<UpdateDeviceInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateDevicePoolResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the name, description, and rules in a device pool given the attributes and the pool ARN. Rule updates are
 * all-or-nothing, meaning they can only be updated as a whole (or not at
 */
UpdateDevicePoolResponse * DeviceFarmClient::updateDevicePool(const UpdateDevicePoolRequest &request)
{
    return qobject_cast<UpdateDevicePoolResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateInstanceProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about an existing private device instance
 */
UpdateInstanceProfileResponse * DeviceFarmClient::updateInstanceProfile(const UpdateInstanceProfileRequest &request)
{
    return qobject_cast<UpdateInstanceProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateNetworkProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the network profile with specific
 */
UpdateNetworkProfileResponse * DeviceFarmClient::updateNetworkProfile(const UpdateNetworkProfileRequest &request)
{
    return qobject_cast<UpdateNetworkProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified project name, given the project ARN and a new
 */
UpdateProjectResponse * DeviceFarmClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update an uploaded test specification (test
 */
UpdateUploadResponse * DeviceFarmClient::updateUpload(const UpdateUploadRequest &request)
{
    return qobject_cast<UpdateUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the DeviceFarmClient service, and returns a pointer to an
 * UpdateVPCEConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates information about an existing Amazon Virtual Private Cloud (VPC) endpoint
 */
UpdateVPCEConfigurationResponse * DeviceFarmClient::updateVPCEConfiguration(const UpdateVPCEConfigurationRequest &request)
{
    return qobject_cast<UpdateVPCEConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::DeviceFarm::DeviceFarmClientPrivate
 * \brief The DeviceFarmClientPrivate class provides private implementation for DeviceFarmClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeviceFarmClientPrivate object with public implementation \a q.
 */
DeviceFarmClientPrivate::DeviceFarmClientPrivate(DeviceFarmClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DeviceFarm
} // namespace QtAws

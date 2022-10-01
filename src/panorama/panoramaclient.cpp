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

#include "panoramaclient.h"
#include "panoramaclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationinstancerequest.h"
#include "createapplicationinstanceresponse.h"
#include "createjobfordevicesrequest.h"
#include "createjobfordevicesresponse.h"
#include "createnodefromtemplatejobrequest.h"
#include "createnodefromtemplatejobresponse.h"
#include "createpackagerequest.h"
#include "createpackageresponse.h"
#include "createpackageimportjobrequest.h"
#include "createpackageimportjobresponse.h"
#include "deletedevicerequest.h"
#include "deletedeviceresponse.h"
#include "deletepackagerequest.h"
#include "deletepackageresponse.h"
#include "deregisterpackageversionrequest.h"
#include "deregisterpackageversionresponse.h"
#include "describeapplicationinstancerequest.h"
#include "describeapplicationinstanceresponse.h"
#include "describeapplicationinstancedetailsrequest.h"
#include "describeapplicationinstancedetailsresponse.h"
#include "describedevicerequest.h"
#include "describedeviceresponse.h"
#include "describedevicejobrequest.h"
#include "describedevicejobresponse.h"
#include "describenoderequest.h"
#include "describenoderesponse.h"
#include "describenodefromtemplatejobrequest.h"
#include "describenodefromtemplatejobresponse.h"
#include "describepackagerequest.h"
#include "describepackageresponse.h"
#include "describepackageimportjobrequest.h"
#include "describepackageimportjobresponse.h"
#include "describepackageversionrequest.h"
#include "describepackageversionresponse.h"
#include "listapplicationinstancedependenciesrequest.h"
#include "listapplicationinstancedependenciesresponse.h"
#include "listapplicationinstancenodeinstancesrequest.h"
#include "listapplicationinstancenodeinstancesresponse.h"
#include "listapplicationinstancesrequest.h"
#include "listapplicationinstancesresponse.h"
#include "listdevicesrequest.h"
#include "listdevicesresponse.h"
#include "listdevicesjobsrequest.h"
#include "listdevicesjobsresponse.h"
#include "listnodefromtemplatejobsrequest.h"
#include "listnodefromtemplatejobsresponse.h"
#include "listnodesrequest.h"
#include "listnodesresponse.h"
#include "listpackageimportjobsrequest.h"
#include "listpackageimportjobsresponse.h"
#include "listpackagesrequest.h"
#include "listpackagesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "provisiondevicerequest.h"
#include "provisiondeviceresponse.h"
#include "registerpackageversionrequest.h"
#include "registerpackageversionresponse.h"
#include "removeapplicationinstancerequest.h"
#include "removeapplicationinstanceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedevicemetadatarequest.h"
#include "updatedevicemetadataresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Panorama
 * \brief Contains classess for accessing AWS Panorama.
 *
 * \inmodule QtAwsPanorama
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::PanoramaClient
 * \brief The PanoramaClient class provides access to the AWS Panorama service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 */

/*!
 * \brief Constructs a PanoramaClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PanoramaClient::PanoramaClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PanoramaClientPrivate(this), parent)
{
    Q_D(PanoramaClient);
    d->apiVersion = QStringLiteral("2019-07-24");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Panorama");
    d->serviceName = QStringLiteral("panorama");
}

/*!
 * \overload PanoramaClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PanoramaClient::PanoramaClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PanoramaClientPrivate(this), parent)
{
    Q_D(PanoramaClient);
    d->apiVersion = QStringLiteral("2019-07-24");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Panorama");
    d->serviceName = QStringLiteral("panorama");
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * CreateApplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an application instance and deploys it to a
 */
CreateApplicationInstanceResponse * PanoramaClient::createApplicationInstance(const CreateApplicationInstanceRequest &request)
{
    return qobject_cast<CreateApplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * CreateJobForDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job to run on one or more
 */
CreateJobForDevicesResponse * PanoramaClient::createJobForDevices(const CreateJobForDevicesRequest &request)
{
    return qobject_cast<CreateJobForDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * CreateNodeFromTemplateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a camera stream
 */
CreateNodeFromTemplateJobResponse * PanoramaClient::createNodeFromTemplateJob(const CreateNodeFromTemplateJobRequest &request)
{
    return qobject_cast<CreateNodeFromTemplateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * CreatePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a package and storage location in an Amazon S3 access
 */
CreatePackageResponse * PanoramaClient::createPackage(const CreatePackageRequest &request)
{
    return qobject_cast<CreatePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * CreatePackageImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a node
 */
CreatePackageImportJobResponse * PanoramaClient::createPackageImportJob(const CreatePackageImportJobRequest &request)
{
    return qobject_cast<CreatePackageImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DeleteDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 */
DeleteDeviceResponse * PanoramaClient::deleteDevice(const DeleteDeviceRequest &request)
{
    return qobject_cast<DeleteDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DeletePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a
 *
 * package> <note>
 *
 * To delete a package, you need permission to call <code>s3:DeleteObject</code> in addition to permissions for the AWS
 * Panorama
 */
DeletePackageResponse * PanoramaClient::deletePackage(const DeletePackageRequest &request)
{
    return qobject_cast<DeletePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DeregisterPackageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters a package
 */
DeregisterPackageVersionResponse * PanoramaClient::deregisterPackageVersion(const DeregisterPackageVersionRequest &request)
{
    return qobject_cast<DeregisterPackageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribeApplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an application instance on a
 */
DescribeApplicationInstanceResponse * PanoramaClient::describeApplicationInstance(const DescribeApplicationInstanceRequest &request)
{
    return qobject_cast<DescribeApplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribeApplicationInstanceDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an application instance's configuration
 */
DescribeApplicationInstanceDetailsResponse * PanoramaClient::describeApplicationInstanceDetails(const DescribeApplicationInstanceDetailsRequest &request)
{
    return qobject_cast<DescribeApplicationInstanceDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribeDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a
 */
DescribeDeviceResponse * PanoramaClient::describeDevice(const DescribeDeviceRequest &request)
{
    return qobject_cast<DescribeDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribeDeviceJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a device
 */
DescribeDeviceJobResponse * PanoramaClient::describeDeviceJob(const DescribeDeviceJobRequest &request)
{
    return qobject_cast<DescribeDeviceJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribeNodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a
 */
DescribeNodeResponse * PanoramaClient::describeNode(const DescribeNodeRequest &request)
{
    return qobject_cast<DescribeNodeResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribeNodeFromTemplateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a job to create a camera stream
 */
DescribeNodeFromTemplateJobResponse * PanoramaClient::describeNodeFromTemplateJob(const DescribeNodeFromTemplateJobRequest &request)
{
    return qobject_cast<DescribeNodeFromTemplateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribePackageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a
 */
DescribePackageResponse * PanoramaClient::describePackage(const DescribePackageRequest &request)
{
    return qobject_cast<DescribePackageResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribePackageImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a package import
 */
DescribePackageImportJobResponse * PanoramaClient::describePackageImportJob(const DescribePackageImportJobRequest &request)
{
    return qobject_cast<DescribePackageImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * DescribePackageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a package
 */
DescribePackageVersionResponse * PanoramaClient::describePackageVersion(const DescribePackageVersionRequest &request)
{
    return qobject_cast<DescribePackageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListApplicationInstanceDependenciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of application instance
 */
ListApplicationInstanceDependenciesResponse * PanoramaClient::listApplicationInstanceDependencies(const ListApplicationInstanceDependenciesRequest &request)
{
    return qobject_cast<ListApplicationInstanceDependenciesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListApplicationInstanceNodeInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of application node
 */
ListApplicationInstanceNodeInstancesResponse * PanoramaClient::listApplicationInstanceNodeInstances(const ListApplicationInstanceNodeInstancesRequest &request)
{
    return qobject_cast<ListApplicationInstanceNodeInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListApplicationInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of application
 */
ListApplicationInstancesResponse * PanoramaClient::listApplicationInstances(const ListApplicationInstancesRequest &request)
{
    return qobject_cast<ListApplicationInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListDevicesResponse * PanoramaClient::listDevices(const ListDevicesRequest &request)
{
    return qobject_cast<ListDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListDevicesJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListDevicesJobsResponse * PanoramaClient::listDevicesJobs(const ListDevicesJobsRequest &request)
{
    return qobject_cast<ListDevicesJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListNodeFromTemplateJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of camera stream node
 */
ListNodeFromTemplateJobsResponse * PanoramaClient::listNodeFromTemplateJobs(const ListNodeFromTemplateJobsRequest &request)
{
    return qobject_cast<ListNodeFromTemplateJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListNodesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListNodesResponse * PanoramaClient::listNodes(const ListNodesRequest &request)
{
    return qobject_cast<ListNodesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListPackageImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of package import
 */
ListPackageImportJobsResponse * PanoramaClient::listPackageImportJobs(const ListPackageImportJobsRequest &request)
{
    return qobject_cast<ListPackageImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListPackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of
 */
ListPackagesResponse * PanoramaClient::listPackages(const ListPackagesRequest &request)
{
    return qobject_cast<ListPackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags for a
 */
ListTagsForResourceResponse * PanoramaClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * ProvisionDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a device and returns a configuration archive. The configuration archive is a ZIP file that contains a
 * provisioning certificate that is valid for 5 minutes. Name the configuration archive
 * <code>certificates-omni_<i>device-name</i>.zip</code> and transfer it to the device within 5 minutes. Use the included
 * USB storage device and connect it to the USB 3.0 port next to the HDMI
 */
ProvisionDeviceResponse * PanoramaClient::provisionDevice(const ProvisionDeviceRequest &request)
{
    return qobject_cast<ProvisionDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * RegisterPackageVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a package
 */
RegisterPackageVersionResponse * PanoramaClient::registerPackageVersion(const RegisterPackageVersionRequest &request)
{
    return qobject_cast<RegisterPackageVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * RemoveApplicationInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an application
 */
RemoveApplicationInstanceResponse * PanoramaClient::removeApplicationInstance(const RemoveApplicationInstanceRequest &request)
{
    return qobject_cast<RemoveApplicationInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags a
 */
TagResourceResponse * PanoramaClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a
 */
UntagResourceResponse * PanoramaClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PanoramaClient service, and returns a pointer to an
 * UpdateDeviceMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a device's
 */
UpdateDeviceMetadataResponse * PanoramaClient::updateDeviceMetadata(const UpdateDeviceMetadataRequest &request)
{
    return qobject_cast<UpdateDeviceMetadataResponse *>(send(request));
}

/*!
 * \class QtAws::Panorama::PanoramaClientPrivate
 * \brief The PanoramaClientPrivate class provides private implementation for PanoramaClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a PanoramaClientPrivate object with public implementation \a q.
 */
PanoramaClientPrivate::PanoramaClientPrivate(PanoramaClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Panorama
} // namespace QtAws

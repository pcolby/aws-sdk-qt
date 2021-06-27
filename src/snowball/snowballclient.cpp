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

#include "snowballclient.h"
#include "snowballclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelclusterrequest.h"
#include "cancelclusterresponse.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "createaddressrequest.h"
#include "createaddressresponse.h"
#include "createclusterrequest.h"
#include "createclusterresponse.h"
#include "createjobrequest.h"
#include "createjobresponse.h"
#include "createlongtermpricingrequest.h"
#include "createlongtermpricingresponse.h"
#include "createreturnshippinglabelrequest.h"
#include "createreturnshippinglabelresponse.h"
#include "describeaddressrequest.h"
#include "describeaddressresponse.h"
#include "describeaddressesrequest.h"
#include "describeaddressesresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "describejobrequest.h"
#include "describejobresponse.h"
#include "describereturnshippinglabelrequest.h"
#include "describereturnshippinglabelresponse.h"
#include "getjobmanifestrequest.h"
#include "getjobmanifestresponse.h"
#include "getjobunlockcoderequest.h"
#include "getjobunlockcoderesponse.h"
#include "getsnowballusagerequest.h"
#include "getsnowballusageresponse.h"
#include "getsoftwareupdatesrequest.h"
#include "getsoftwareupdatesresponse.h"
#include "listclusterjobsrequest.h"
#include "listclusterjobsresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listcompatibleimagesrequest.h"
#include "listcompatibleimagesresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listlongtermpricingrequest.h"
#include "listlongtermpricingresponse.h"
#include "updateclusterrequest.h"
#include "updateclusterresponse.h"
#include "updatejobrequest.h"
#include "updatejobresponse.h"
#include "updatejobshipmentstaterequest.h"
#include "updatejobshipmentstateresponse.h"
#include "updatelongtermpricingrequest.h"
#include "updatelongtermpricingresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Snowball
 * \brief Contains classess for accessing Amazon Import/Export Snowball.
 *
 * \inmodule QtAwsSnowball
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::SnowballClient
 * \brief The SnowballClient class provides access to the Amazon Import/Export Snowball service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSnowball
 *
 *  AWS Snow Family is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snow commands described here
 *  provide access to the same functionality that is available in the AWS Snow Family Management Console, which enables you
 *  to create and manage jobs for a Snow device. To transfer data locally with a Snow device, you'll need to use the
 *  Snowball Edge client or the Amazon S3 API Interface for Snowball or AWS OpsHub for Snow Family. For more information,
 *  see the <a href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 */

/*!
 * \brief Constructs a SnowballClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SnowballClient::SnowballClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-06-30"),
    QStringLiteral("snowball"),
    QStringLiteral("Amazon Import/Export Snowball"),
    QStringLiteral("snowball"),
    parent), d_ptr(new SnowballClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload SnowballClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SnowballClient::SnowballClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-06-30"),
    QStringLiteral("snowball"),
    QStringLiteral("Amazon Import/Export Snowball"),
    QStringLiteral("snowball"),
    parent), d_ptr(new SnowballClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CancelClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a cluster job. You can only cancel a cluster job while it's in the <code>AwaitingQuorum</code> status. You'll
 * have at least an hour after creating a cluster job to cancel
 */
CancelClusterResponse * SnowballClient::cancelCluster(const CancelClusterRequest &request)
{
    return qobject_cast<CancelClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the specified job. You can only cancel a job before its <code>JobState</code> value changes to
 * <code>PreparingAppliance</code>. Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action returns a job's
 * <code>JobState</code> as part of the response element data
 */
CancelJobResponse * SnowballClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CreateAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an address for a Snow device to be shipped to. In most regions, addresses are validated at the time of creation.
 * The address you provide must be located within the serviceable area of your region. If the address is invalid or
 * unsupported, then an exception is
 */
CreateAddressResponse * SnowballClient::createAddress(const CreateAddressRequest &request)
{
    return qobject_cast<CreateAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CreateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty cluster. Each cluster supports five nodes. You use the <a>CreateJob</a> action separately to create the
 * jobs for each of these nodes. The cluster does not ship until these five node jobs have been
 */
CreateClusterResponse * SnowballClient::createCluster(const CreateClusterRequest &request)
{
    return qobject_cast<CreateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CreateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job to import or export data between Amazon S3 and your on-premises data center. Your AWS account must have
 * the right trust policies and permissions in place to create a job for a Snow device. If you're creating a job for a node
 * in a cluster, you only need to provide the <code>clusterId</code> value; the other job attributes are inherited from the
 * cluster.
 *
 * </p <note>
 *
 * Only the Snowball; Edge device type is supported when ordering clustered
 *
 * jobs>
 *
 * The device capacity is
 *
 * optional>
 *
 * Availability of device types differ by AWS Region. For more information about region availability, see <a
 * href="https://aws.amazon.com/about-aws/global-infrastructure/regional-product-services/?p=ngi&amp;loc=4">AWS Regional
 *
 * Services</a>> </note> <p/> <p class="title"> <b>AWS Snow Family device types and their capacities.</b>
 *
 * </p <ul> <li>
 *
 * Snow Family device type: <b>SNC1_SSD</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T1> </li> <li>
 *
 * Description: Snowcone
 *
 * </p </li> </ul> <p/> </li> <li>
 *
 * Snow Family device type: <b>SNC1_HDD</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T> </li> <li>
 *
 * Description: Snowcone
 *
 * </p </li> </ul> <p/> </li> <li>
 *
 * Device type: <b>EDGE_S</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T9> </li> <li>
 *
 * Description: Snowball Edge Storage Optimized for data transfer only
 *
 * </p </li> </ul> <p/> </li> <li>
 *
 * Device type: <b>EDGE_CG</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T4> </li> <li>
 *
 * Description: Snowball Edge Compute Optimized with
 *
 * GP> </li> </ul> <p/> </li> <li>
 *
 * Device type: <b>EDGE_C</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T4> </li> <li>
 *
 * Description: Snowball Edge Compute Optimized without
 *
 * GP> </li> </ul> <p/> </li> <li>
 *
 * Device type: <b>EDGE</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T10> </li> <li>
 *
 * Description: Snowball Edge Storage Optimized with EC2
 *
 * Comput> </li> </ul> <p/> </li> <li>
 *
 * Device type: <b>STANDARD</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T5> </li> <li>
 *
 * Description: Original Snowball
 *
 * devic> <note>
 *
 * This device is only available in the Ningxia, Beijing, and Singapore AWS Regions.
 *
 * </p </note> </li> </ul> <p/> </li> <li>
 *
 * Device type: <b>STANDARD</b>
 *
 * </p <ul> <li>
 *
 * Capacity:
 *
 * T8> </li> <li>
 *
 * Description: Original Snowball
 *
 * devic> <note>
 *
 * This device is only available in the Ningxia, Beijing, and Singapore AWS Regions.
 */
CreateJobResponse * SnowballClient::createJob(const CreateJobRequest &request)
{
    return qobject_cast<CreateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CreateLongTermPricingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a job with long term usage option for a device. The long term usage is a one year or three year long term
 * pricing type for the device. You are billed upfront and AWS give discounts for long term pricing. For detailed
 * information see
 */
CreateLongTermPricingResponse * SnowballClient::createLongTermPricing(const CreateLongTermPricingRequest &request)
{
    return qobject_cast<CreateLongTermPricingResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * CreateReturnShippingLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a shipping label that will be used to return the Snow device to
 */
CreateReturnShippingLabelResponse * SnowballClient::createReturnShippingLabel(const CreateReturnShippingLabelRequest &request)
{
    return qobject_cast<CreateReturnShippingLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * DescribeAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Takes an <code>AddressId</code> and returns specific details about that address in the form of an <code>Address</code>
 */
DescribeAddressResponse * SnowballClient::describeAddress(const DescribeAddressRequest &request)
{
    return qobject_cast<DescribeAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * DescribeAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a specified number of <code>ADDRESS</code> objects. Calling this API in one of the US regions will return
 * addresses from the list of all addresses associated with this account in all US
 */
DescribeAddressesResponse * SnowballClient::describeAddresses(const DescribeAddressesRequest &request)
{
    return qobject_cast<DescribeAddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * DescribeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific cluster including shipping information, cluster status, and other important
 */
DescribeClusterResponse * SnowballClient::describeCluster(const DescribeClusterRequest &request)
{
    return qobject_cast<DescribeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * DescribeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific job including shipping information, job status, and other important metadata.
 */
DescribeJobResponse * SnowballClient::describeJob(const DescribeJobRequest &request)
{
    return qobject_cast<DescribeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * DescribeReturnShippingLabelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Information on the shipping label of a Snow device that is being returned to
 */
DescribeReturnShippingLabelResponse * SnowballClient::describeReturnShippingLabel(const DescribeReturnShippingLabelRequest &request)
{
    return qobject_cast<DescribeReturnShippingLabelResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * GetJobManifestResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a link to an Amazon S3 presigned URL for the manifest file associated with the specified <code>JobId</code>
 * value. You can access the manifest file for up to 60 minutes after this request has been made. To access the manifest
 * file after 60 minutes have passed, you'll have to make another call to the <code>GetJobManifest</code>
 *
 * action>
 *
 * The manifest is an encrypted file that you can download after your job enters the <code>WithCustomer</code> status. The
 * manifest is decrypted by using the <code>UnlockCode</code> code value, when you pass both values to the Snow device
 * through the Snowball client when the client is started for the first
 *
 * time>
 *
 * As a best practice, we recommend that you don't save a copy of an <code>UnlockCode</code> value in the same location as
 * the manifest file for that job. Saving these separately helps prevent unauthorized parties from gaining access to the
 * Snow device associated with that
 *
 * job>
 *
 * The credentials of a given job, including its manifest file and unlock code, expire 360 days after the job is
 */
GetJobManifestResponse * SnowballClient::getJobManifest(const GetJobManifestRequest &request)
{
    return qobject_cast<GetJobManifestResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * GetJobUnlockCodeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the <code>UnlockCode</code> code value for the specified job. A particular <code>UnlockCode</code> value can be
 * accessed for up to 360 days after the associated job has been
 *
 * created>
 *
 * The <code>UnlockCode</code> value is a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
 * used to decrypt the manifest file when it is passed along with the manifest to the Snow device through the Snowball
 * client when the client is started for the first
 *
 * time>
 *
 * As a best practice, we recommend that you don't save a copy of the <code>UnlockCode</code> in the same location as the
 * manifest file for that job. Saving these separately helps prevent unauthorized parties from gaining access to the Snow
 * device associated with that
 */
GetJobUnlockCodeResponse * SnowballClient::getJobUnlockCode(const GetJobUnlockCodeRequest &request)
{
    return qobject_cast<GetJobUnlockCodeResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * GetSnowballUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the Snow Family service limit for your account, and also the number of Snow devices your
 * account has in
 *
 * use>
 *
 * The default service limit for the number of Snow devices that you can have at one time is 1. If you want to increase
 * your service limit, contact AWS
 */
GetSnowballUsageResponse * SnowballClient::getSnowballUsage(const GetSnowballUsageRequest &request)
{
    return qobject_cast<GetSnowballUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * GetSoftwareUpdatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an Amazon S3 presigned URL for an update file associated with a specified
 */
GetSoftwareUpdatesResponse * SnowballClient::getSoftwareUpdates(const GetSoftwareUpdatesRequest &request)
{
    return qobject_cast<GetSoftwareUpdatesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * ListClusterJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>JobListEntry</code> objects of the specified length. Each <code>JobListEntry</code> object is
 * for a job in the specified cluster and contains a job's state, a job's ID, and other
 */
ListClusterJobsResponse * SnowballClient::listClusterJobs(const ListClusterJobsRequest &request)
{
    return qobject_cast<ListClusterJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>ClusterListEntry</code> objects of the specified length. Each <code>ClusterListEntry</code>
 * object contains a cluster's state, a cluster's ID, and other important status
 */
ListClustersResponse * SnowballClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * ListCompatibleImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This action returns a list of the different Amazon EC2 Amazon Machine Images (AMIs) that are owned by your AWS account
 * that would be supported for use on a Snow device. Currently, supported AMIs are based on the CentOS 7 (x86_64) - with
 * Updates HVM, Ubuntu Server 14.04 LTS (HVM), and Ubuntu 16.04 LTS - Xenial (HVM) images, available on the AWS
 */
ListCompatibleImagesResponse * SnowballClient::listCompatibleImages(const ListCompatibleImagesRequest &request)
{
    return qobject_cast<ListCompatibleImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>JobListEntry</code> objects of the specified length. Each <code>JobListEntry</code> object
 * contains a job's state, a job's ID, and a value that indicates whether the job is a job part, in the case of export
 * jobs. Calling this API action in one of the US regions will return jobs from the list of all jobs associated with this
 * account in all US
 */
ListJobsResponse * SnowballClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * ListLongTermPricingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all long term pricing
 */
ListLongTermPricingResponse * SnowballClient::listLongTermPricing(const ListLongTermPricingRequest &request)
{
    return qobject_cast<ListLongTermPricingResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * UpdateClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * While a cluster's <code>ClusterState</code> value is in the <code>AwaitingQuorum</code> state, you can update some of
 * the information associated with a cluster. Once the cluster changes to a different job state, usually 60 minutes after
 * the cluster being created, this action is no longer
 */
UpdateClusterResponse * SnowballClient::updateCluster(const UpdateClusterRequest &request)
{
    return qobject_cast<UpdateClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * UpdateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * While a job's <code>JobState</code> value is <code>New</code>, you can update some of the information associated with a
 * job. Once the job changes to a different job state, usually within 60 minutes of the job being created, this action is
 * no longer
 */
UpdateJobResponse * SnowballClient::updateJob(const UpdateJobRequest &request)
{
    return qobject_cast<UpdateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * UpdateJobShipmentStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the state when a the shipment states changes to a different
 */
UpdateJobShipmentStateResponse * SnowballClient::updateJobShipmentState(const UpdateJobShipmentStateRequest &request)
{
    return qobject_cast<UpdateJobShipmentStateResponse *>(send(request));
}

/*!
 * Sends \a request to the SnowballClient service, and returns a pointer to an
 * UpdateLongTermPricingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the long term pricing
 */
UpdateLongTermPricingResponse * SnowballClient::updateLongTermPricing(const UpdateLongTermPricingRequest &request)
{
    return qobject_cast<UpdateLongTermPricingResponse *>(send(request));
}

/*!
 * \class QtAws::Snowball::SnowballClientPrivate
 * \brief The SnowballClientPrivate class provides private implementation for SnowballClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a SnowballClientPrivate object with public implementation \a q.
 */
SnowballClientPrivate::SnowballClientPrivate(SnowballClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Snowball
} // namespace QtAws

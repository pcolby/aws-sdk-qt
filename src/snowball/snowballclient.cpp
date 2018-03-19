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

#include "snowballclient.h"
#include "snowballclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Snowball {

/**
 * @class  SnowballClient
 *
 * @brief  Client for Amazon Import/Export Snowball
 *
 * AWS Snowball is a petabyte-scale data transport solution that uses secure appliances to transfer large amounts of data
 * between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 * here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 * you to create and manage jobs for Snowball. To transfer data locally with a Snowball appliance, you'll need to use the
 * Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 * href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 */

/**
 * @brief  Constructs a new SnowballClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SnowballClient::SnowballClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SnowballClientPrivate(this), parent)
{
    Q_D(SnowballClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("snowball");
}

/**
 * @brief  Constructs a new SnowballClient object.
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
SnowballClient::SnowballClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SnowballClientPrivate(this), parent)
{
    Q_D(SnowballClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("snowball");
}

/// @todo override getEndpoint() to use snowball.

/**
 * Cancels a cluster job. You can only cancel a cluster job while it's in the <code>AwaitingQuorum</code> status. You'll
 * have at least an hour after creating a cluster job to cancel
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelClusterResponse * SnowballClient::cancelCluster(const CancelClusterRequest &request)
{

}

/**
 * Cancels the specified job. You can only cancel a job before its <code>JobState</code> value changes to
 * <code>PreparingAppliance</code>. Requesting the <code>ListJobs</code> or <code>DescribeJob</code> action will return a
 * job's <code>JobState</code> as part of the response element data
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelJobResponse * SnowballClient::cancelJob(const CancelJobRequest &request)
{

}

/**
 * Creates an address for a Snowball to be shipped to. In most regions, addresses are validated at the time of creation.
 * The address you provide must be located within the serviceable area of your region. If the address is invalid or
 * unsupported, then an exception is
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAddressResponse * SnowballClient::createAddress(const CreateAddressRequest &request)
{

}

/**
 * Creates an empty cluster. Each cluster supports five nodes. You use the <a>CreateJob</a> action separately to create the
 * jobs for each of these nodes. The cluster does not ship until these five node jobs have been
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateClusterResponse * SnowballClient::createCluster(const CreateClusterRequest &request)
{

}

/**
 * Creates a job to import or export data between Amazon S3 and your on-premises data center. Your AWS account must have
 * the right trust policies and permissions in place to create a job for Snowball. If you're creating a job for a node in a
 * cluster, you only need to provide the <code>clusterId</code> value; the other job attributes are inherited from the
 * cluster.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobResponse * SnowballClient::createJob(const CreateJobRequest &request)
{

}

/**
 * Takes an <code>AddressId</code> and returns specific details about that address in the form of an <code>Address</code>
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAddressResponse * SnowballClient::describeAddress(const DescribeAddressRequest &request)
{

}

/**
 * Returns a specified number of <code>ADDRESS</code> objects. Calling this API in one of the US regions will return
 * addresses from the list of all addresses associated with this account in all US
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAddressesResponse * SnowballClient::describeAddresses(const DescribeAddressesRequest &request)
{

}

/**
 * Returns information about a specific cluster including shipping information, cluster status, and other important
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeClusterResponse * SnowballClient::describeCluster(const DescribeClusterRequest &request)
{

}

/**
 * Returns information about a specific job including shipping information, job status, and other important metadata.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobResponse * SnowballClient::describeJob(const DescribeJobRequest &request)
{

}

/**
 * Returns a link to an Amazon S3 presigned URL for the manifest file associated with the specified <code>JobId</code>
 * value. You can access the manifest file for up to 60 minutes after this request has been made. To access the manifest
 * file after 60 minutes have passed, you'll have to make another call to the <code>GetJobManifest</code>
 *
 * action>
 *
 * The manifest is an encrypted file that you can download after your job enters the <code>WithCustomer</code> status. The
 * manifest is decrypted by using the <code>UnlockCode</code> code value, when you pass both values to the Snowball through
 * the Snowball client when the client is started for the first
 *
 * time>
 *
 * As a best practice, we recommend that you don't save a copy of an <code>UnlockCode</code> value in the same location as
 * the manifest file for that job. Saving these separately helps prevent unauthorized parties from gaining access to the
 * Snowball associated with that
 *
 * job>
 *
 * The credentials of a given job, including its manifest file and unlock code, expire 90 days after the job is
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobManifestResponse * SnowballClient::getJobManifest(const GetJobManifestRequest &request)
{

}

/**
 * Returns the <code>UnlockCode</code> code value for the specified job. A particular <code>UnlockCode</code> value can be
 * accessed for up to 90 days after the associated job has been
 *
 * created>
 *
 * The <code>UnlockCode</code> value is a 29-character code with 25 alphanumeric characters and 4 hyphens. This code is
 * used to decrypt the manifest file when it is passed along with the manifest to the Snowball through the Snowball client
 * when the client is started for the first
 *
 * time>
 *
 * As a best practice, we recommend that you don't save a copy of the <code>UnlockCode</code> in the same location as the
 * manifest file for that job. Saving these separately helps prevent unauthorized parties from gaining access to the
 * Snowball associated with that
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetJobUnlockCodeResponse * SnowballClient::getJobUnlockCode(const GetJobUnlockCodeRequest &request)
{

}

/**
 * Returns information about the Snowball service limit for your account, and also the number of Snowballs your account has
 * in
 *
 * use>
 *
 * The default service limit for the number of Snowballs that you can have at one time is 1. If you want to increase your
 * service limit, contact AWS
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSnowballUsageResponse * SnowballClient::getSnowballUsage(const GetSnowballUsageRequest &request)
{

}

/**
 * Returns an array of <code>JobListEntry</code> objects of the specified length. Each <code>JobListEntry</code> object is
 * for a job in the specified cluster and contains a job's state, a job's ID, and other
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListClusterJobsResponse * SnowballClient::listClusterJobs(const ListClusterJobsRequest &request)
{

}

/**
 * Returns an array of <code>ClusterListEntry</code> objects of the specified length. Each <code>ClusterListEntry</code>
 * object contains a cluster's state, a cluster's ID, and other important status
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListClustersResponse * SnowballClient::listClusters(const ListClustersRequest &request)
{

}

/**
 * Returns an array of <code>JobListEntry</code> objects of the specified length. Each <code>JobListEntry</code> object
 * contains a job's state, a job's ID, and a value that indicates whether the job is a job part, in the case of export
 * jobs. Calling this API action in one of the US regions will return jobs from the list of all jobs associated with this
 * account in all US
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsResponse * SnowballClient::listJobs(const ListJobsRequest &request)
{

}

/**
 * While a cluster's <code>ClusterState</code> value is in the <code>AwaitingQuorum</code> state, you can update some of
 * the information associated with a cluster. Once the cluster changes to a different job state, usually 60 minutes after
 * the cluster being created, this action is no longer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateClusterResponse * SnowballClient::updateCluster(const UpdateClusterRequest &request)
{

}

/**
 * While a job's <code>JobState</code> value is <code>New</code>, you can update some of the information associated with a
 * job. Once the job changes to a different job state, usually within 60 minutes of the job being created, this action is
 * no longer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateJobResponse * SnowballClient::updateJob(const UpdateJobRequest &request)
{

}

/**
 * @internal
 *
 * @class  SnowballClientPrivate
 *
 * @brief  Private implementation for SnowballClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SnowballClientPrivate object.
 *
 * @param  q  Pointer to this object's public SnowballClient instance.
 */
SnowballClientPrivate::SnowballClientPrivate(SnowballClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Snowball
} // namespace AWS

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

#include "s3client.h"
#include "s3client_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace S3 {

/**
 * @class  S3Client
 *
 * @brief  Client for Amazon Simple Storage Service ( S3)
 *
 */

/**
 * @brief  Constructs a new S3Client object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
S3Client::S3Client(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new S3ClientPrivate(this), parent)
{
    Q_D(S3Client);
    d->apiVersion = QStringLiteral("2006-03-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("s3");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Simple Storage Service");
    d->serviceName = QStringLiteral("s3");
}

/**
 * @brief  Constructs a new S3Client object.
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
S3Client::S3Client(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new S3ClientPrivate(this), parent)
{
    Q_D(S3Client);
    d->apiVersion = QStringLiteral("2006-03-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("s3");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Simple Storage Service");
    d->serviceName = QStringLiteral("s3");
}

/**
 * Aborts a multipart upload.</p><p>To verify that all parts have been removed, so you don't get charged for the part
 * storage, you should call the List Parts operation and ensure the parts list is
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AbortMultipartUploadResponse * S3Client::abortMultipartUpload(const AbortMultipartUploadRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CompleteMultipartUploadResponse * S3Client::completeMultipartUpload(const CompleteMultipartUploadRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CopyObjectResponse * S3Client::copyObject(const CopyObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBucketResponse * S3Client::createBucket(const CreateBucketRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Initiates a multipart upload and returns an upload ID.</p><p><b>Note:</b> After you initiate multipart upload and upload
 * one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of
 * the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and
 * stops charging you for the parts
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateMultipartUploadResponse * S3Client::createMultipartUpload(const CreateMultipartUploadRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the bucket. All objects (including all object versions and Delete Markers) in the bucket must be deleted before
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketResponse * S3Client::deleteBucket(const DeleteBucketRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketAnalyticsConfigurationResponse * S3Client::deleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketCorsResponse * S3Client::deleteBucketCors(const DeleteBucketCorsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketEncryptionResponse * S3Client::deleteBucketEncryption(const DeleteBucketEncryptionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketInventoryConfigurationResponse * S3Client::deleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketLifecycleResponse * S3Client::deleteBucketLifecycle(const DeleteBucketLifecycleRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketMetricsConfigurationResponse * S3Client::deleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketPolicyResponse * S3Client::deleteBucketPolicy(const DeleteBucketPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketReplicationResponse * S3Client::deleteBucketReplication(const DeleteBucketReplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketTaggingResponse * S3Client::deleteBucketTagging(const DeleteBucketTaggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBucketWebsiteResponse * S3Client::deleteBucketWebsite(const DeleteBucketWebsiteRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes the null version (if there is one) of an object and inserts a delete marker, which becomes the latest version of
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteObjectResponse * S3Client::deleteObject(const DeleteObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteObjectTaggingResponse * S3Client::deleteObjectTagging(const DeleteObjectTaggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * This operation enables you to delete multiple objects from a bucket using a single HTTP request. You may specify up to
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteObjectsResponse * S3Client::deleteObjects(const DeleteObjectsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketAccelerateConfigurationResponse * S3Client::getBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketAclResponse * S3Client::getBucketAcl(const GetBucketAclRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketAnalyticsConfigurationResponse * S3Client::getBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketCorsResponse * S3Client::getBucketCors(const GetBucketCorsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketEncryptionResponse * S3Client::getBucketEncryption(const GetBucketEncryptionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketInventoryConfigurationResponse * S3Client::getBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketLifecycleResponse * S3Client::getBucketLifecycle(const GetBucketLifecycleRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketLifecycleConfigurationResponse * S3Client::getBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketLocationResponse * S3Client::getBucketLocation(const GetBucketLocationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns the logging status of a bucket and the permissions users have to view and modify that status. To use GET, you
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketLoggingResponse * S3Client::getBucketLogging(const GetBucketLoggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketMetricsConfigurationResponse * S3Client::getBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketNotificationResponse * S3Client::getBucketNotification(const GetBucketNotificationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketNotificationConfigurationResponse * S3Client::getBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketPolicyResponse * S3Client::getBucketPolicy(const GetBucketPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketReplicationResponse * S3Client::getBucketReplication(const GetBucketReplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketRequestPaymentResponse * S3Client::getBucketRequestPayment(const GetBucketRequestPaymentRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketTaggingResponse * S3Client::getBucketTagging(const GetBucketTaggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketVersioningResponse * S3Client::getBucketVersioning(const GetBucketVersioningRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBucketWebsiteResponse * S3Client::getBucketWebsite(const GetBucketWebsiteRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetObjectResponse * S3Client::getObject(const GetObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetObjectAclResponse * S3Client::getObjectAcl(const GetObjectAclRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetObjectTaggingResponse * S3Client::getObjectTagging(const GetObjectTaggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetObjectTorrentResponse * S3Client::getObjectTorrent(const GetObjectTorrentRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
HeadBucketResponse * S3Client::headBucket(const HeadBucketRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * The HEAD operation retrieves metadata from an object without returning the object itself. This operation is useful if
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
HeadObjectResponse * S3Client::headObject(const HeadObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBucketAnalyticsConfigurationsResponse * S3Client::listBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBucketInventoryConfigurationsResponse * S3Client::listBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBucketMetricsConfigurationsResponse * S3Client::listBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBucketsResponse * S3Client::listBuckets()
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListMultipartUploadsResponse * S3Client::listMultipartUploads(const ListMultipartUploadsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectVersionsResponse * S3Client::listObjectVersions(const ListObjectVersionsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectsResponse * S3Client::listObjects(const ListObjectsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to
 * return a subset of the objects in a bucket. Note: ListObjectsV2 is the revised List Objects API and we recommend you use
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListObjectsV2Response * S3Client::listObjectsV2(const ListObjectsV2Request &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListPartsResponse * S3Client::listParts(const ListPartsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketAccelerateConfigurationResponse * S3Client::putBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketAclResponse * S3Client::putBucketAcl(const PutBucketAclRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketAnalyticsConfigurationResponse * S3Client::putBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketCorsResponse * S3Client::putBucketCors(const PutBucketCorsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketEncryptionResponse * S3Client::putBucketEncryption(const PutBucketEncryptionRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketInventoryConfigurationResponse * S3Client::putBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketLifecycleResponse * S3Client::putBucketLifecycle(const PutBucketLifecycleRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketLifecycleConfigurationResponse * S3Client::putBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Set the logging parameters for a bucket and to specify permissions for who can view and modify the logging parameters.
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketLoggingResponse * S3Client::putBucketLogging(const PutBucketLoggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketMetricsConfigurationResponse * S3Client::putBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketNotificationResponse * S3Client::putBucketNotification(const PutBucketNotificationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketNotificationConfigurationResponse * S3Client::putBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketPolicyResponse * S3Client::putBucketPolicy(const PutBucketPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketReplicationResponse * S3Client::putBucketReplication(const PutBucketReplicationRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Sets the request payment configuration for a bucket. By default, the bucket owner pays for downloads from the bucket.
 * This configuration parameter enables the bucket owner (only) to specify that the person requesting the download will be
 * charged for the download. Documentation on requester pays buckets can be found at
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketRequestPaymentResponse * S3Client::putBucketRequestPayment(const PutBucketRequestPaymentRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketTaggingResponse * S3Client::putBucketTagging(const PutBucketTaggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketVersioningResponse * S3Client::putBucketVersioning(const PutBucketVersioningRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutBucketWebsiteResponse * S3Client::putBucketWebsite(const PutBucketWebsiteRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutObjectResponse * S3Client::putObject(const PutObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutObjectAclResponse * S3Client::putObjectAcl(const PutObjectAclRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutObjectTaggingResponse * S3Client::putObjectTagging(const PutObjectTaggingRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RestoreObjectResponse * S3Client::restoreObject(const RestoreObjectRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Uploads a part in a multipart upload.</p><p><b>Note:</b> After you initiate multipart upload and upload one or more
 * parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded
 * parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging
 * you for the parts
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UploadPartResponse * S3Client::uploadPart(const UploadPartRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 *
 * @param  request Request to send to Amazon Simple Storage Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UploadPartCopyResponse * S3Client::uploadPartCopy(const UploadPartCopyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  S3ClientPrivate
 *
 * @brief  Private implementation for S3Client.
 */

/**
 * @internal
 *
 * @brief  Constructs a new S3ClientPrivate object.
 *
 * @param  q  Pointer to this object's public S3Client instance.
 */
S3ClientPrivate::S3ClientPrivate(S3Client * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureS3();
}

} // namespace S3
} // namespace AWS

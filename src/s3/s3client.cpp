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
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Aborts a multipart upload.</p><p>To verify that all parts have been removed, so you don't get charged for the part
 * storage, you should call the List Parts operation and ensure the parts list is
 */
AbortMultipartUploadResponse * S3Client::abortMultipartUpload(const AbortMultipartUploadRequest &request)
{

}

/**
 */
CompleteMultipartUploadResponse * S3Client::completeMultipartUpload(const CompleteMultipartUploadRequest &request)
{

}

/**
 */
CopyObjectResponse * S3Client::copyObject(const CopyObjectRequest &request)
{

}

/**
 */
CreateBucketResponse * S3Client::createBucket(const CreateBucketRequest &request)
{

}

/**
 * Initiates a multipart upload and returns an upload ID.</p><p><b>Note:</b> After you initiate multipart upload and upload
 * one or more parts, you must either complete or abort multipart upload in order to stop getting charged for storage of
 * the uploaded parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and
 * stops charging you for the parts
 */
CreateMultipartUploadResponse * S3Client::createMultipartUpload(const CreateMultipartUploadRequest &request)
{

}

/**
 * Deletes the bucket. All objects (including all object versions and Delete Markers) in the bucket must be deleted before
 */
DeleteBucketResponse * S3Client::deleteBucket(const DeleteBucketRequest &request)
{

}

/**
 */
DeleteBucketAnalyticsConfigurationResponse * S3Client::deleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest &request)
{

}

/**
 */
DeleteBucketCorsResponse * S3Client::deleteBucketCors(const DeleteBucketCorsRequest &request)
{

}

/**
 */
DeleteBucketEncryptionResponse * S3Client::deleteBucketEncryption(const DeleteBucketEncryptionRequest &request)
{

}

/**
 */
DeleteBucketInventoryConfigurationResponse * S3Client::deleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest &request)
{

}

/**
 */
DeleteBucketLifecycleResponse * S3Client::deleteBucketLifecycle(const DeleteBucketLifecycleRequest &request)
{

}

/**
 */
DeleteBucketMetricsConfigurationResponse * S3Client::deleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest &request)
{

}

/**
 */
DeleteBucketPolicyResponse * S3Client::deleteBucketPolicy(const DeleteBucketPolicyRequest &request)
{

}

/**
 */
DeleteBucketReplicationResponse * S3Client::deleteBucketReplication(const DeleteBucketReplicationRequest &request)
{

}

/**
 */
DeleteBucketTaggingResponse * S3Client::deleteBucketTagging(const DeleteBucketTaggingRequest &request)
{

}

/**
 */
DeleteBucketWebsiteResponse * S3Client::deleteBucketWebsite(const DeleteBucketWebsiteRequest &request)
{

}

/**
 * Removes the null version (if there is one) of an object and inserts a delete marker, which becomes the latest version of
 */
DeleteObjectResponse * S3Client::deleteObject(const DeleteObjectRequest &request)
{

}

/**
 */
DeleteObjectTaggingResponse * S3Client::deleteObjectTagging(const DeleteObjectTaggingRequest &request)
{

}

/**
 * This operation enables you to delete multiple objects from a bucket using a single HTTP request. You may specify up to
 */
DeleteObjectsResponse * S3Client::deleteObjects(const DeleteObjectsRequest &request)
{

}

/**
 */
GetBucketAccelerateConfigurationResponse * S3Client::getBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest &request)
{

}

/**
 */
GetBucketAclResponse * S3Client::getBucketAcl(const GetBucketAclRequest &request)
{

}

/**
 */
GetBucketAnalyticsConfigurationResponse * S3Client::getBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest &request)
{

}

/**
 */
GetBucketCorsResponse * S3Client::getBucketCors(const GetBucketCorsRequest &request)
{

}

/**
 */
GetBucketEncryptionResponse * S3Client::getBucketEncryption(const GetBucketEncryptionRequest &request)
{

}

/**
 */
GetBucketInventoryConfigurationResponse * S3Client::getBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest &request)
{

}

/**
 */
GetBucketLifecycleResponse * S3Client::getBucketLifecycle(const GetBucketLifecycleRequest &request)
{

}

/**
 */
GetBucketLifecycleConfigurationResponse * S3Client::getBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest &request)
{

}

/**
 */
GetBucketLocationResponse * S3Client::getBucketLocation(const GetBucketLocationRequest &request)
{

}

/**
 * Returns the logging status of a bucket and the permissions users have to view and modify that status. To use GET, you
 */
GetBucketLoggingResponse * S3Client::getBucketLogging(const GetBucketLoggingRequest &request)
{

}

/**
 */
GetBucketMetricsConfigurationResponse * S3Client::getBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest &request)
{

}

/**
 */
GetBucketNotificationResponse * S3Client::getBucketNotification(const GetBucketNotificationRequest &request)
{

}

/**
 */
GetBucketNotificationConfigurationResponse * S3Client::getBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest &request)
{

}

/**
 */
GetBucketPolicyResponse * S3Client::getBucketPolicy(const GetBucketPolicyRequest &request)
{

}

/**
 */
GetBucketReplicationResponse * S3Client::getBucketReplication(const GetBucketReplicationRequest &request)
{

}

/**
 */
GetBucketRequestPaymentResponse * S3Client::getBucketRequestPayment(const GetBucketRequestPaymentRequest &request)
{

}

/**
 */
GetBucketTaggingResponse * S3Client::getBucketTagging(const GetBucketTaggingRequest &request)
{

}

/**
 */
GetBucketVersioningResponse * S3Client::getBucketVersioning(const GetBucketVersioningRequest &request)
{

}

/**
 */
GetBucketWebsiteResponse * S3Client::getBucketWebsite(const GetBucketWebsiteRequest &request)
{

}

/**
 */
GetObjectResponse * S3Client::getObject(const GetObjectRequest &request)
{

}

/**
 */
GetObjectAclResponse * S3Client::getObjectAcl(const GetObjectAclRequest &request)
{

}

/**
 */
GetObjectTaggingResponse * S3Client::getObjectTagging(const GetObjectTaggingRequest &request)
{

}

/**
 */
GetObjectTorrentResponse * S3Client::getObjectTorrent(const GetObjectTorrentRequest &request)
{

}

/**
 */
HeadBucketResponse * S3Client::headBucket(const HeadBucketRequest &request)
{

}

/**
 * The HEAD operation retrieves metadata from an object without returning the object itself. This operation is useful if
 */
HeadObjectResponse * S3Client::headObject(const HeadObjectRequest &request)
{

}

/**
 */
ListBucketAnalyticsConfigurationsResponse * S3Client::listBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest &request)
{

}

/**
 */
ListBucketInventoryConfigurationsResponse * S3Client::listBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest &request)
{

}

/**
 */
ListBucketMetricsConfigurationsResponse * S3Client::listBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest &request)
{

}

/**
 */
ListBucketsResponse * S3Client::listBuckets()
{

}

/**
 */
ListMultipartUploadsResponse * S3Client::listMultipartUploads(const ListMultipartUploadsRequest &request)
{

}

/**
 */
ListObjectVersionsResponse * S3Client::listObjectVersions(const ListObjectVersionsRequest &request)
{

}

/**
 * Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to
 */
ListObjectsResponse * S3Client::listObjects(const ListObjectsRequest &request)
{

}

/**
 * Returns some or all (up to 1000) of the objects in a bucket. You can use the request parameters as selection criteria to
 * return a subset of the objects in a bucket. Note: ListObjectsV2 is the revised List Objects API and we recommend you use
 */
ListObjectsV2Response * S3Client::listObjectsV2(const ListObjectsV2Request &request)
{

}

/**
 */
ListPartsResponse * S3Client::listParts(const ListPartsRequest &request)
{

}

/**
 */
PutBucketAccelerateConfigurationResponse * S3Client::putBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest &request)
{

}

/**
 */
PutBucketAclResponse * S3Client::putBucketAcl(const PutBucketAclRequest &request)
{

}

/**
 */
PutBucketAnalyticsConfigurationResponse * S3Client::putBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest &request)
{

}

/**
 */
PutBucketCorsResponse * S3Client::putBucketCors(const PutBucketCorsRequest &request)
{

}

/**
 */
PutBucketEncryptionResponse * S3Client::putBucketEncryption(const PutBucketEncryptionRequest &request)
{

}

/**
 */
PutBucketInventoryConfigurationResponse * S3Client::putBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest &request)
{

}

/**
 */
PutBucketLifecycleResponse * S3Client::putBucketLifecycle(const PutBucketLifecycleRequest &request)
{

}

/**
 */
PutBucketLifecycleConfigurationResponse * S3Client::putBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest &request)
{

}

/**
 * Set the logging parameters for a bucket and to specify permissions for who can view and modify the logging parameters.
 */
PutBucketLoggingResponse * S3Client::putBucketLogging(const PutBucketLoggingRequest &request)
{

}

/**
 */
PutBucketMetricsConfigurationResponse * S3Client::putBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest &request)
{

}

/**
 */
PutBucketNotificationResponse * S3Client::putBucketNotification(const PutBucketNotificationRequest &request)
{

}

/**
 */
PutBucketNotificationConfigurationResponse * S3Client::putBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest &request)
{

}

/**
 */
PutBucketPolicyResponse * S3Client::putBucketPolicy(const PutBucketPolicyRequest &request)
{

}

/**
 */
PutBucketReplicationResponse * S3Client::putBucketReplication(const PutBucketReplicationRequest &request)
{

}

/**
 * Sets the request payment configuration for a bucket. By default, the bucket owner pays for downloads from the bucket.
 * This configuration parameter enables the bucket owner (only) to specify that the person requesting the download will be
 * charged for the download. Documentation on requester pays buckets can be found at
 */
PutBucketRequestPaymentResponse * S3Client::putBucketRequestPayment(const PutBucketRequestPaymentRequest &request)
{

}

/**
 */
PutBucketTaggingResponse * S3Client::putBucketTagging(const PutBucketTaggingRequest &request)
{

}

/**
 */
PutBucketVersioningResponse * S3Client::putBucketVersioning(const PutBucketVersioningRequest &request)
{

}

/**
 */
PutBucketWebsiteResponse * S3Client::putBucketWebsite(const PutBucketWebsiteRequest &request)
{

}

/**
 */
PutObjectResponse * S3Client::putObject(const PutObjectRequest &request)
{

}

/**
 */
PutObjectAclResponse * S3Client::putObjectAcl(const PutObjectAclRequest &request)
{

}

/**
 */
PutObjectTaggingResponse * S3Client::putObjectTagging(const PutObjectTaggingRequest &request)
{

}

/**
 */
RestoreObjectResponse * S3Client::restoreObject(const RestoreObjectRequest &request)
{

}

/**
 * Uploads a part in a multipart upload.</p><p><b>Note:</b> After you initiate multipart upload and upload one or more
 * parts, you must either complete or abort multipart upload in order to stop getting charged for storage of the uploaded
 * parts. Only after you either complete or abort multipart upload, Amazon S3 frees up the parts storage and stops charging
 * you for the parts
 */
UploadPartResponse * S3Client::uploadPart(const UploadPartRequest &request)
{

}

/**
 */
UploadPartCopyResponse * S3Client::uploadPartCopy(const UploadPartCopyRequest &request)
{

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

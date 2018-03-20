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

#ifndef QTAWS_S3CLIENT_H
#define QTAWS_S3CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace S3 {

class S3ClientPrivate;
class AbortMultipartUploadResponse;
class CompleteMultipartUploadResponse;
class CopyObjectResponse;
class CreateBucketResponse;
class CreateMultipartUploadResponse;
class DeleteBucketResponse;
class DeleteBucketAnalyticsConfigurationResponse;
class DeleteBucketCorsResponse;
class DeleteBucketEncryptionResponse;
class DeleteBucketInventoryConfigurationResponse;
class DeleteBucketLifecycleResponse;
class DeleteBucketMetricsConfigurationResponse;
class DeleteBucketPolicyResponse;
class DeleteBucketReplicationResponse;
class DeleteBucketTaggingResponse;
class DeleteBucketWebsiteResponse;
class DeleteObjectResponse;
class DeleteObjectTaggingResponse;
class DeleteObjectsResponse;
class GetBucketAccelerateConfigurationResponse;
class GetBucketAclResponse;
class GetBucketAnalyticsConfigurationResponse;
class GetBucketCorsResponse;
class GetBucketEncryptionResponse;
class GetBucketInventoryConfigurationResponse;
class GetBucketLifecycleResponse;
class GetBucketLifecycleConfigurationResponse;
class GetBucketLocationResponse;
class GetBucketLoggingResponse;
class GetBucketMetricsConfigurationResponse;
class GetBucketNotificationResponse;
class GetBucketNotificationConfigurationResponse;
class GetBucketPolicyResponse;
class GetBucketReplicationResponse;
class GetBucketRequestPaymentResponse;
class GetBucketTaggingResponse;
class GetBucketVersioningResponse;
class GetBucketWebsiteResponse;
class GetObjectResponse;
class GetObjectAclResponse;
class GetObjectTaggingResponse;
class GetObjectTorrentResponse;
class HeadBucketResponse;
class HeadObjectResponse;
class ListBucketAnalyticsConfigurationsResponse;
class ListBucketInventoryConfigurationsResponse;
class ListBucketMetricsConfigurationsResponse;
class ListBucketsResponse;
class ListMultipartUploadsResponse;
class ListObjectVersionsResponse;
class ListObjectsResponse;
class ListObjectsV2Response;
class ListPartsResponse;
class PutBucketAccelerateConfigurationResponse;
class PutBucketAclResponse;
class PutBucketAnalyticsConfigurationResponse;
class PutBucketCorsResponse;
class PutBucketEncryptionResponse;
class PutBucketInventoryConfigurationResponse;
class PutBucketLifecycleResponse;
class PutBucketLifecycleConfigurationResponse;
class PutBucketLoggingResponse;
class PutBucketMetricsConfigurationResponse;
class PutBucketNotificationResponse;
class PutBucketNotificationConfigurationResponse;
class PutBucketPolicyResponse;
class PutBucketReplicationResponse;
class PutBucketRequestPaymentResponse;
class PutBucketTaggingResponse;
class PutBucketVersioningResponse;
class PutBucketWebsiteResponse;
class PutObjectResponse;
class PutObjectAclResponse;
class PutObjectTaggingResponse;
class RestoreObjectResponse;
class UploadPartResponse;
class UploadPartCopyResponse;

class QTAWS_EXPORT S3Client : public AwsAbstractClient {
    Q_OBJECT

public:
    S3Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    S3Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AbortMultipartUploadResponse * abortMultipartUpload(const AbortMultipartUploadRequest &request);
    CompleteMultipartUploadResponse * completeMultipartUpload(const CompleteMultipartUploadRequest &request);
    CopyObjectResponse * copyObject(const CopyObjectRequest &request);
    CreateBucketResponse * createBucket(const CreateBucketRequest &request);
    CreateMultipartUploadResponse * createMultipartUpload(const CreateMultipartUploadRequest &request);
    DeleteBucketResponse * deleteBucket(const DeleteBucketRequest &request);
    DeleteBucketAnalyticsConfigurationResponse * deleteBucketAnalyticsConfiguration(const DeleteBucketAnalyticsConfigurationRequest &request);
    DeleteBucketCorsResponse * deleteBucketCors(const DeleteBucketCorsRequest &request);
    DeleteBucketEncryptionResponse * deleteBucketEncryption(const DeleteBucketEncryptionRequest &request);
    DeleteBucketInventoryConfigurationResponse * deleteBucketInventoryConfiguration(const DeleteBucketInventoryConfigurationRequest &request);
    DeleteBucketLifecycleResponse * deleteBucketLifecycle(const DeleteBucketLifecycleRequest &request);
    DeleteBucketMetricsConfigurationResponse * deleteBucketMetricsConfiguration(const DeleteBucketMetricsConfigurationRequest &request);
    DeleteBucketPolicyResponse * deleteBucketPolicy(const DeleteBucketPolicyRequest &request);
    DeleteBucketReplicationResponse * deleteBucketReplication(const DeleteBucketReplicationRequest &request);
    DeleteBucketTaggingResponse * deleteBucketTagging(const DeleteBucketTaggingRequest &request);
    DeleteBucketWebsiteResponse * deleteBucketWebsite(const DeleteBucketWebsiteRequest &request);
    DeleteObjectResponse * deleteObject(const DeleteObjectRequest &request);
    DeleteObjectTaggingResponse * deleteObjectTagging(const DeleteObjectTaggingRequest &request);
    DeleteObjectsResponse * deleteObjects(const DeleteObjectsRequest &request);
    GetBucketAccelerateConfigurationResponse * getBucketAccelerateConfiguration(const GetBucketAccelerateConfigurationRequest &request);
    GetBucketAclResponse * getBucketAcl(const GetBucketAclRequest &request);
    GetBucketAnalyticsConfigurationResponse * getBucketAnalyticsConfiguration(const GetBucketAnalyticsConfigurationRequest &request);
    GetBucketCorsResponse * getBucketCors(const GetBucketCorsRequest &request);
    GetBucketEncryptionResponse * getBucketEncryption(const GetBucketEncryptionRequest &request);
    GetBucketInventoryConfigurationResponse * getBucketInventoryConfiguration(const GetBucketInventoryConfigurationRequest &request);
    GetBucketLifecycleResponse * getBucketLifecycle(const GetBucketLifecycleRequest &request);
    GetBucketLifecycleConfigurationResponse * getBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest &request);
    GetBucketLocationResponse * getBucketLocation(const GetBucketLocationRequest &request);
    GetBucketLoggingResponse * getBucketLogging(const GetBucketLoggingRequest &request);
    GetBucketMetricsConfigurationResponse * getBucketMetricsConfiguration(const GetBucketMetricsConfigurationRequest &request);
    GetBucketNotificationResponse * getBucketNotification(const GetBucketNotificationRequest &request);
    GetBucketNotificationConfigurationResponse * getBucketNotificationConfiguration(const GetBucketNotificationConfigurationRequest &request);
    GetBucketPolicyResponse * getBucketPolicy(const GetBucketPolicyRequest &request);
    GetBucketReplicationResponse * getBucketReplication(const GetBucketReplicationRequest &request);
    GetBucketRequestPaymentResponse * getBucketRequestPayment(const GetBucketRequestPaymentRequest &request);
    GetBucketTaggingResponse * getBucketTagging(const GetBucketTaggingRequest &request);
    GetBucketVersioningResponse * getBucketVersioning(const GetBucketVersioningRequest &request);
    GetBucketWebsiteResponse * getBucketWebsite(const GetBucketWebsiteRequest &request);
    GetObjectResponse * getObject(const GetObjectRequest &request);
    GetObjectAclResponse * getObjectAcl(const GetObjectAclRequest &request);
    GetObjectTaggingResponse * getObjectTagging(const GetObjectTaggingRequest &request);
    GetObjectTorrentResponse * getObjectTorrent(const GetObjectTorrentRequest &request);
    HeadBucketResponse * headBucket(const HeadBucketRequest &request);
    HeadObjectResponse * headObject(const HeadObjectRequest &request);
    ListBucketAnalyticsConfigurationsResponse * listBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest &request);
    ListBucketInventoryConfigurationsResponse * listBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest &request);
    ListBucketMetricsConfigurationsResponse * listBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest &request);
    ListBucketsResponse * listBuckets();
    ListMultipartUploadsResponse * listMultipartUploads(const ListMultipartUploadsRequest &request);
    ListObjectVersionsResponse * listObjectVersions(const ListObjectVersionsRequest &request);
    ListObjectsResponse * listObjects(const ListObjectsRequest &request);
    ListObjectsV2Response * listObjectsV2(const ListObjectsV2Request &request);
    ListPartsResponse * listParts(const ListPartsRequest &request);
    PutBucketAccelerateConfigurationResponse * putBucketAccelerateConfiguration(const PutBucketAccelerateConfigurationRequest &request);
    PutBucketAclResponse * putBucketAcl(const PutBucketAclRequest &request);
    PutBucketAnalyticsConfigurationResponse * putBucketAnalyticsConfiguration(const PutBucketAnalyticsConfigurationRequest &request);
    PutBucketCorsResponse * putBucketCors(const PutBucketCorsRequest &request);
    PutBucketEncryptionResponse * putBucketEncryption(const PutBucketEncryptionRequest &request);
    PutBucketInventoryConfigurationResponse * putBucketInventoryConfiguration(const PutBucketInventoryConfigurationRequest &request);
    PutBucketLifecycleResponse * putBucketLifecycle(const PutBucketLifecycleRequest &request);
    PutBucketLifecycleConfigurationResponse * putBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest &request);
    PutBucketLoggingResponse * putBucketLogging(const PutBucketLoggingRequest &request);
    PutBucketMetricsConfigurationResponse * putBucketMetricsConfiguration(const PutBucketMetricsConfigurationRequest &request);
    PutBucketNotificationResponse * putBucketNotification(const PutBucketNotificationRequest &request);
    PutBucketNotificationConfigurationResponse * putBucketNotificationConfiguration(const PutBucketNotificationConfigurationRequest &request);
    PutBucketPolicyResponse * putBucketPolicy(const PutBucketPolicyRequest &request);
    PutBucketReplicationResponse * putBucketReplication(const PutBucketReplicationRequest &request);
    PutBucketRequestPaymentResponse * putBucketRequestPayment(const PutBucketRequestPaymentRequest &request);
    PutBucketTaggingResponse * putBucketTagging(const PutBucketTaggingRequest &request);
    PutBucketVersioningResponse * putBucketVersioning(const PutBucketVersioningRequest &request);
    PutBucketWebsiteResponse * putBucketWebsite(const PutBucketWebsiteRequest &request);
    PutObjectResponse * putObject(const PutObjectRequest &request);
    PutObjectAclResponse * putObjectAcl(const PutObjectAclRequest &request);
    PutObjectTaggingResponse * putObjectTagging(const PutObjectTaggingRequest &request);
    RestoreObjectResponse * restoreObject(const RestoreObjectRequest &request);
    UploadPartResponse * uploadPart(const UploadPartRequest &request);
    UploadPartCopyResponse * uploadPartCopy(const UploadPartCopyRequest &request);

private:
    Q_DECLARE_PRIVATE(S3Client)
    Q_DISABLE_COPY(S3Client)

};

} // namespace S3
} // namespace AWS

#endif

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

#ifndef QTAWS_S3CLIENT_H
#define QTAWS_S3CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace S3 {

class S3ClientPrivate;
class AbortMultipartUploadRequest;
class AbortMultipartUploadResponse;
class CompleteMultipartUploadRequest;
class CompleteMultipartUploadResponse;
class CopyObjectRequest;
class CopyObjectResponse;
class CreateBucketRequest;
class CreateBucketResponse;
class CreateMultipartUploadRequest;
class CreateMultipartUploadResponse;
class DeleteBucketRequest;
class DeleteBucketResponse;
class DeleteBucketAnalyticsConfigurationRequest;
class DeleteBucketAnalyticsConfigurationResponse;
class DeleteBucketCorsRequest;
class DeleteBucketCorsResponse;
class DeleteBucketEncryptionRequest;
class DeleteBucketEncryptionResponse;
class DeleteBucketInventoryConfigurationRequest;
class DeleteBucketInventoryConfigurationResponse;
class DeleteBucketLifecycleRequest;
class DeleteBucketLifecycleResponse;
class DeleteBucketMetricsConfigurationRequest;
class DeleteBucketMetricsConfigurationResponse;
class DeleteBucketPolicyRequest;
class DeleteBucketPolicyResponse;
class DeleteBucketReplicationRequest;
class DeleteBucketReplicationResponse;
class DeleteBucketTaggingRequest;
class DeleteBucketTaggingResponse;
class DeleteBucketWebsiteRequest;
class DeleteBucketWebsiteResponse;
class DeleteObjectRequest;
class DeleteObjectResponse;
class DeleteObjectTaggingRequest;
class DeleteObjectTaggingResponse;
class DeleteObjectsRequest;
class DeleteObjectsResponse;
class DeletePublicAccessBlockRequest;
class DeletePublicAccessBlockResponse;
class GetBucketAccelerateConfigurationRequest;
class GetBucketAccelerateConfigurationResponse;
class GetBucketAclRequest;
class GetBucketAclResponse;
class GetBucketAnalyticsConfigurationRequest;
class GetBucketAnalyticsConfigurationResponse;
class GetBucketCorsRequest;
class GetBucketCorsResponse;
class GetBucketEncryptionRequest;
class GetBucketEncryptionResponse;
class GetBucketInventoryConfigurationRequest;
class GetBucketInventoryConfigurationResponse;
class GetBucketLifecycleRequest;
class GetBucketLifecycleResponse;
class GetBucketLifecycleConfigurationRequest;
class GetBucketLifecycleConfigurationResponse;
class GetBucketLocationRequest;
class GetBucketLocationResponse;
class GetBucketLoggingRequest;
class GetBucketLoggingResponse;
class GetBucketMetricsConfigurationRequest;
class GetBucketMetricsConfigurationResponse;
class GetBucketNotificationRequest;
class GetBucketNotificationResponse;
class GetBucketNotificationConfigurationRequest;
class GetBucketNotificationConfigurationResponse;
class GetBucketPolicyRequest;
class GetBucketPolicyResponse;
class GetBucketPolicyStatusRequest;
class GetBucketPolicyStatusResponse;
class GetBucketReplicationRequest;
class GetBucketReplicationResponse;
class GetBucketRequestPaymentRequest;
class GetBucketRequestPaymentResponse;
class GetBucketTaggingRequest;
class GetBucketTaggingResponse;
class GetBucketVersioningRequest;
class GetBucketVersioningResponse;
class GetBucketWebsiteRequest;
class GetBucketWebsiteResponse;
class GetObjectRequest;
class GetObjectResponse;
class GetObjectAclRequest;
class GetObjectAclResponse;
class GetObjectLegalHoldRequest;
class GetObjectLegalHoldResponse;
class GetObjectLockConfigurationRequest;
class GetObjectLockConfigurationResponse;
class GetObjectRetentionRequest;
class GetObjectRetentionResponse;
class GetObjectTaggingRequest;
class GetObjectTaggingResponse;
class GetObjectTorrentRequest;
class GetObjectTorrentResponse;
class GetPublicAccessBlockRequest;
class GetPublicAccessBlockResponse;
class HeadBucketRequest;
class HeadBucketResponse;
class HeadObjectRequest;
class HeadObjectResponse;
class ListBucketAnalyticsConfigurationsRequest;
class ListBucketAnalyticsConfigurationsResponse;
class ListBucketInventoryConfigurationsRequest;
class ListBucketInventoryConfigurationsResponse;
class ListBucketMetricsConfigurationsRequest;
class ListBucketMetricsConfigurationsResponse;
class ListBucketsRequest;
class ListBucketsResponse;
class ListMultipartUploadsRequest;
class ListMultipartUploadsResponse;
class ListObjectVersionsRequest;
class ListObjectVersionsResponse;
class ListObjectsRequest;
class ListObjectsResponse;
class ListObjectsV2Request;
class ListObjectsV2Response;
class ListPartsRequest;
class ListPartsResponse;
class PutBucketAccelerateConfigurationRequest;
class PutBucketAccelerateConfigurationResponse;
class PutBucketAclRequest;
class PutBucketAclResponse;
class PutBucketAnalyticsConfigurationRequest;
class PutBucketAnalyticsConfigurationResponse;
class PutBucketCorsRequest;
class PutBucketCorsResponse;
class PutBucketEncryptionRequest;
class PutBucketEncryptionResponse;
class PutBucketInventoryConfigurationRequest;
class PutBucketInventoryConfigurationResponse;
class PutBucketLifecycleRequest;
class PutBucketLifecycleResponse;
class PutBucketLifecycleConfigurationRequest;
class PutBucketLifecycleConfigurationResponse;
class PutBucketLoggingRequest;
class PutBucketLoggingResponse;
class PutBucketMetricsConfigurationRequest;
class PutBucketMetricsConfigurationResponse;
class PutBucketNotificationRequest;
class PutBucketNotificationResponse;
class PutBucketNotificationConfigurationRequest;
class PutBucketNotificationConfigurationResponse;
class PutBucketPolicyRequest;
class PutBucketPolicyResponse;
class PutBucketReplicationRequest;
class PutBucketReplicationResponse;
class PutBucketRequestPaymentRequest;
class PutBucketRequestPaymentResponse;
class PutBucketTaggingRequest;
class PutBucketTaggingResponse;
class PutBucketVersioningRequest;
class PutBucketVersioningResponse;
class PutBucketWebsiteRequest;
class PutBucketWebsiteResponse;
class PutObjectRequest;
class PutObjectResponse;
class PutObjectAclRequest;
class PutObjectAclResponse;
class PutObjectLegalHoldRequest;
class PutObjectLegalHoldResponse;
class PutObjectLockConfigurationRequest;
class PutObjectLockConfigurationResponse;
class PutObjectRetentionRequest;
class PutObjectRetentionResponse;
class PutObjectTaggingRequest;
class PutObjectTaggingResponse;
class PutPublicAccessBlockRequest;
class PutPublicAccessBlockResponse;
class RestoreObjectRequest;
class RestoreObjectResponse;
class SelectObjectContentRequest;
class SelectObjectContentResponse;
class UploadPartRequest;
class UploadPartResponse;
class UploadPartCopyRequest;
class UploadPartCopyResponse;

class QTAWS_EXPORT S3Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    S3Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    S3Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    DeletePublicAccessBlockResponse * deletePublicAccessBlock(const DeletePublicAccessBlockRequest &request);
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
    GetBucketPolicyStatusResponse * getBucketPolicyStatus(const GetBucketPolicyStatusRequest &request);
    GetBucketReplicationResponse * getBucketReplication(const GetBucketReplicationRequest &request);
    GetBucketRequestPaymentResponse * getBucketRequestPayment(const GetBucketRequestPaymentRequest &request);
    GetBucketTaggingResponse * getBucketTagging(const GetBucketTaggingRequest &request);
    GetBucketVersioningResponse * getBucketVersioning(const GetBucketVersioningRequest &request);
    GetBucketWebsiteResponse * getBucketWebsite(const GetBucketWebsiteRequest &request);
    GetObjectResponse * getObject(const GetObjectRequest &request);
    GetObjectAclResponse * getObjectAcl(const GetObjectAclRequest &request);
    GetObjectLegalHoldResponse * getObjectLegalHold(const GetObjectLegalHoldRequest &request);
    GetObjectLockConfigurationResponse * getObjectLockConfiguration(const GetObjectLockConfigurationRequest &request);
    GetObjectRetentionResponse * getObjectRetention(const GetObjectRetentionRequest &request);
    GetObjectTaggingResponse * getObjectTagging(const GetObjectTaggingRequest &request);
    GetObjectTorrentResponse * getObjectTorrent(const GetObjectTorrentRequest &request);
    GetPublicAccessBlockResponse * getPublicAccessBlock(const GetPublicAccessBlockRequest &request);
    HeadBucketResponse * headBucket(const HeadBucketRequest &request);
    HeadObjectResponse * headObject(const HeadObjectRequest &request);
    ListBucketAnalyticsConfigurationsResponse * listBucketAnalyticsConfigurations(const ListBucketAnalyticsConfigurationsRequest &request);
    ListBucketInventoryConfigurationsResponse * listBucketInventoryConfigurations(const ListBucketInventoryConfigurationsRequest &request);
    ListBucketMetricsConfigurationsResponse * listBucketMetricsConfigurations(const ListBucketMetricsConfigurationsRequest &request);
    ListBucketsResponse * listBuckets(const ListBucketsRequest &request);
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
    PutObjectLegalHoldResponse * putObjectLegalHold(const PutObjectLegalHoldRequest &request);
    PutObjectLockConfigurationResponse * putObjectLockConfiguration(const PutObjectLockConfigurationRequest &request);
    PutObjectRetentionResponse * putObjectRetention(const PutObjectRetentionRequest &request);
    PutObjectTaggingResponse * putObjectTagging(const PutObjectTaggingRequest &request);
    PutPublicAccessBlockResponse * putPublicAccessBlock(const PutPublicAccessBlockRequest &request);
    RestoreObjectResponse * restoreObject(const RestoreObjectRequest &request);
    SelectObjectContentResponse * selectObjectContent(const SelectObjectContentRequest &request);
    UploadPartResponse * uploadPart(const UploadPartRequest &request);
    UploadPartCopyResponse * uploadPartCopy(const UploadPartCopyRequest &request);

private:
    Q_DECLARE_PRIVATE(S3Client)
    Q_DISABLE_COPY(S3Client)

};

} // namespace S3
} // namespace QtAws

#endif

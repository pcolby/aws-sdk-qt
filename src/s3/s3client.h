/*
    Copyright 2013-2016 Paul Colby

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

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class S3ClientPrivate;

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
    S3AbortMultipartUploadResponse * abortMultipartUpload(const S3AbortMultipartUploadRequest &request);
    S3CompleteMultipartUploadResponse * completeMultipartUpload(const S3CompleteMultipartUploadRequest &request);
    S3CopyObjectResponse * copyObject(const S3CopyObjectRequest &request);
    S3CreateBucketResponse * createBucket(const S3CreateBucketRequest &request);
    S3CreateMultipartUploadResponse * createMultipartUpload(const S3CreateMultipartUploadRequest &request);
    S3DeleteBucketResponse * deleteBucket(const S3DeleteBucketRequest &request);
    S3DeleteBucketCorsResponse * deleteBucketCors(const S3DeleteBucketCorsRequest &request);
    S3DeleteBucketLifecycleResponse * deleteBucketLifecycle(const S3DeleteBucketLifecycleRequest &request);
    S3DeleteBucketPolicyResponse * deleteBucketPolicy(const S3DeleteBucketPolicyRequest &request);
    S3DeleteBucketReplicationResponse * deleteBucketReplication(const S3DeleteBucketReplicationRequest &request);
    S3DeleteBucketTaggingResponse * deleteBucketTagging(const S3DeleteBucketTaggingRequest &request);
    S3DeleteBucketWebsiteResponse * deleteBucketWebsite(const S3DeleteBucketWebsiteRequest &request);
    S3DeleteObjectResponse * deleteObject(const S3DeleteObjectRequest &request);
    S3DeleteObjectsResponse * deleteObjects(const S3DeleteObjectsRequest &request);
    S3GetBucketAccelerateConfigurationResponse * getBucketAccelerateConfiguration(const S3GetBucketAccelerateConfigurationRequest &request);
    S3GetBucketAclResponse * getBucketAcl(const S3GetBucketAclRequest &request);
    S3GetBucketCorsResponse * getBucketCors(const S3GetBucketCorsRequest &request);
    S3GetBucketLifecycleResponse * getBucketLifecycle(const S3GetBucketLifecycleRequest &request);
    S3GetBucketLifecycleConfigurationResponse * getBucketLifecycleConfiguration(const S3GetBucketLifecycleConfigurationRequest &request);
    S3GetBucketLocationResponse * getBucketLocation(const S3GetBucketLocationRequest &request);
    S3GetBucketLoggingResponse * getBucketLogging(const S3GetBucketLoggingRequest &request);
    S3GetBucketNotificationResponse * getBucketNotification(const S3GetBucketNotificationRequest &request);
    S3GetBucketNotificationConfigurationResponse * getBucketNotificationConfiguration(const S3GetBucketNotificationConfigurationRequest &request);
    S3GetBucketPolicyResponse * getBucketPolicy(const S3GetBucketPolicyRequest &request);
    S3GetBucketReplicationResponse * getBucketReplication(const S3GetBucketReplicationRequest &request);
    S3GetBucketRequestPaymentResponse * getBucketRequestPayment(const S3GetBucketRequestPaymentRequest &request);
    S3GetBucketTaggingResponse * getBucketTagging(const S3GetBucketTaggingRequest &request);
    S3GetBucketVersioningResponse * getBucketVersioning(const S3GetBucketVersioningRequest &request);
    S3GetBucketWebsiteResponse * getBucketWebsite(const S3GetBucketWebsiteRequest &request);
    S3GetObjectResponse * getObject(const S3GetObjectRequest &request);
    S3GetObjectAclResponse * getObjectAcl(const S3GetObjectAclRequest &request);
    S3GetObjectTorrentResponse * getObjectTorrent(const S3GetObjectTorrentRequest &request);
    S3HeadBucketResponse * headBucket(const S3HeadBucketRequest &request);
    S3HeadObjectResponse * headObject(const S3HeadObjectRequest &request);
    S3ListBucketsResponse * listBuckets();
    S3ListMultipartUploadsResponse * listMultipartUploads(const S3ListMultipartUploadsRequest &request);
    S3ListObjectVersionsResponse * listObjectVersions(const S3ListObjectVersionsRequest &request);
    S3ListObjectsResponse * listObjects(const S3ListObjectsRequest &request);
    S3ListObjectsV2Response * listObjectsV2(const S3ListObjectsV2Request &request);
    S3ListPartsResponse * listParts(const S3ListPartsRequest &request);
    S3PutBucketAccelerateConfigurationResponse * putBucketAccelerateConfiguration(const S3PutBucketAccelerateConfigurationRequest &request);
    S3PutBucketAclResponse * putBucketAcl(const S3PutBucketAclRequest &request);
    S3PutBucketCorsResponse * putBucketCors(const S3PutBucketCorsRequest &request);
    S3PutBucketLifecycleResponse * putBucketLifecycle(const S3PutBucketLifecycleRequest &request);
    S3PutBucketLifecycleConfigurationResponse * putBucketLifecycleConfiguration(const S3PutBucketLifecycleConfigurationRequest &request);
    S3PutBucketLoggingResponse * putBucketLogging(const S3PutBucketLoggingRequest &request);
    S3PutBucketNotificationResponse * putBucketNotification(const S3PutBucketNotificationRequest &request);
    S3PutBucketNotificationConfigurationResponse * putBucketNotificationConfiguration(const S3PutBucketNotificationConfigurationRequest &request);
    S3PutBucketPolicyResponse * putBucketPolicy(const S3PutBucketPolicyRequest &request);
    S3PutBucketReplicationResponse * putBucketReplication(const S3PutBucketReplicationRequest &request);
    S3PutBucketRequestPaymentResponse * putBucketRequestPayment(const S3PutBucketRequestPaymentRequest &request);
    S3PutBucketTaggingResponse * putBucketTagging(const S3PutBucketTaggingRequest &request);
    S3PutBucketVersioningResponse * putBucketVersioning(const S3PutBucketVersioningRequest &request);
    S3PutBucketWebsiteResponse * putBucketWebsite(const S3PutBucketWebsiteRequest &request);
    S3PutObjectResponse * putObject(const S3PutObjectRequest &request);
    S3PutObjectAclResponse * putObjectAcl(const S3PutObjectAclRequest &request);
    S3RestoreObjectResponse * restoreObject(const S3RestoreObjectRequest &request);
    S3UploadPartResponse * uploadPart(const S3UploadPartRequest &request);
    S3UploadPartCopyResponse * uploadPartCopy(const S3UploadPartCopyRequest &request);

private:
    Q_DECLARE_PRIVATE(S3Client)
    Q_DISABLE_COPY(S3Client)

};

QTAWS_END_NAMESPACE

#endif

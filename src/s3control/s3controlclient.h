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

#ifndef QTAWS_S3CONTROLCLIENT_H
#define QTAWS_S3CONTROLCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawss3controlglobal.h"

class QNetworkReply;

namespace QtAws {
namespace S3Control {

class S3ControlClientPrivate;
class CreateAccessPointRequest;
class CreateAccessPointResponse;
class CreateAccessPointForObjectLambdaRequest;
class CreateAccessPointForObjectLambdaResponse;
class CreateBucketRequest;
class CreateBucketResponse;
class CreateJobRequest;
class CreateJobResponse;
class DeleteAccessPointRequest;
class DeleteAccessPointResponse;
class DeleteAccessPointForObjectLambdaRequest;
class DeleteAccessPointForObjectLambdaResponse;
class DeleteAccessPointPolicyRequest;
class DeleteAccessPointPolicyResponse;
class DeleteAccessPointPolicyForObjectLambdaRequest;
class DeleteAccessPointPolicyForObjectLambdaResponse;
class DeleteBucketRequest;
class DeleteBucketResponse;
class DeleteBucketLifecycleConfigurationRequest;
class DeleteBucketLifecycleConfigurationResponse;
class DeleteBucketPolicyRequest;
class DeleteBucketPolicyResponse;
class DeleteBucketTaggingRequest;
class DeleteBucketTaggingResponse;
class DeleteJobTaggingRequest;
class DeleteJobTaggingResponse;
class DeletePublicAccessBlockRequest;
class DeletePublicAccessBlockResponse;
class DeleteStorageLensConfigurationRequest;
class DeleteStorageLensConfigurationResponse;
class DeleteStorageLensConfigurationTaggingRequest;
class DeleteStorageLensConfigurationTaggingResponse;
class DescribeJobRequest;
class DescribeJobResponse;
class GetAccessPointRequest;
class GetAccessPointResponse;
class GetAccessPointConfigurationForObjectLambdaRequest;
class GetAccessPointConfigurationForObjectLambdaResponse;
class GetAccessPointForObjectLambdaRequest;
class GetAccessPointForObjectLambdaResponse;
class GetAccessPointPolicyRequest;
class GetAccessPointPolicyResponse;
class GetAccessPointPolicyForObjectLambdaRequest;
class GetAccessPointPolicyForObjectLambdaResponse;
class GetAccessPointPolicyStatusRequest;
class GetAccessPointPolicyStatusResponse;
class GetAccessPointPolicyStatusForObjectLambdaRequest;
class GetAccessPointPolicyStatusForObjectLambdaResponse;
class GetBucketRequest;
class GetBucketResponse;
class GetBucketLifecycleConfigurationRequest;
class GetBucketLifecycleConfigurationResponse;
class GetBucketPolicyRequest;
class GetBucketPolicyResponse;
class GetBucketTaggingRequest;
class GetBucketTaggingResponse;
class GetJobTaggingRequest;
class GetJobTaggingResponse;
class GetPublicAccessBlockRequest;
class GetPublicAccessBlockResponse;
class GetStorageLensConfigurationRequest;
class GetStorageLensConfigurationResponse;
class GetStorageLensConfigurationTaggingRequest;
class GetStorageLensConfigurationTaggingResponse;
class ListAccessPointsRequest;
class ListAccessPointsResponse;
class ListAccessPointsForObjectLambdaRequest;
class ListAccessPointsForObjectLambdaResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListRegionalBucketsRequest;
class ListRegionalBucketsResponse;
class ListStorageLensConfigurationsRequest;
class ListStorageLensConfigurationsResponse;
class PutAccessPointConfigurationForObjectLambdaRequest;
class PutAccessPointConfigurationForObjectLambdaResponse;
class PutAccessPointPolicyRequest;
class PutAccessPointPolicyResponse;
class PutAccessPointPolicyForObjectLambdaRequest;
class PutAccessPointPolicyForObjectLambdaResponse;
class PutBucketLifecycleConfigurationRequest;
class PutBucketLifecycleConfigurationResponse;
class PutBucketPolicyRequest;
class PutBucketPolicyResponse;
class PutBucketTaggingRequest;
class PutBucketTaggingResponse;
class PutJobTaggingRequest;
class PutJobTaggingResponse;
class PutPublicAccessBlockRequest;
class PutPublicAccessBlockResponse;
class PutStorageLensConfigurationRequest;
class PutStorageLensConfigurationResponse;
class PutStorageLensConfigurationTaggingRequest;
class PutStorageLensConfigurationTaggingResponse;
class UpdateJobPriorityRequest;
class UpdateJobPriorityResponse;
class UpdateJobStatusRequest;
class UpdateJobStatusResponse;

class QTAWSS3CONTROL_EXPORT S3ControlClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    S3ControlClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    S3ControlClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAccessPointResponse * createAccessPoint(const CreateAccessPointRequest &request);
    CreateAccessPointForObjectLambdaResponse * createAccessPointForObjectLambda(const CreateAccessPointForObjectLambdaRequest &request);
    CreateBucketResponse * createBucket(const CreateBucketRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    DeleteAccessPointResponse * deleteAccessPoint(const DeleteAccessPointRequest &request);
    DeleteAccessPointForObjectLambdaResponse * deleteAccessPointForObjectLambda(const DeleteAccessPointForObjectLambdaRequest &request);
    DeleteAccessPointPolicyResponse * deleteAccessPointPolicy(const DeleteAccessPointPolicyRequest &request);
    DeleteAccessPointPolicyForObjectLambdaResponse * deleteAccessPointPolicyForObjectLambda(const DeleteAccessPointPolicyForObjectLambdaRequest &request);
    DeleteBucketResponse * deleteBucket(const DeleteBucketRequest &request);
    DeleteBucketLifecycleConfigurationResponse * deleteBucketLifecycleConfiguration(const DeleteBucketLifecycleConfigurationRequest &request);
    DeleteBucketPolicyResponse * deleteBucketPolicy(const DeleteBucketPolicyRequest &request);
    DeleteBucketTaggingResponse * deleteBucketTagging(const DeleteBucketTaggingRequest &request);
    DeleteJobTaggingResponse * deleteJobTagging(const DeleteJobTaggingRequest &request);
    DeletePublicAccessBlockResponse * deletePublicAccessBlock(const DeletePublicAccessBlockRequest &request);
    DeleteStorageLensConfigurationResponse * deleteStorageLensConfiguration(const DeleteStorageLensConfigurationRequest &request);
    DeleteStorageLensConfigurationTaggingResponse * deleteStorageLensConfigurationTagging(const DeleteStorageLensConfigurationTaggingRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    GetAccessPointResponse * getAccessPoint(const GetAccessPointRequest &request);
    GetAccessPointConfigurationForObjectLambdaResponse * getAccessPointConfigurationForObjectLambda(const GetAccessPointConfigurationForObjectLambdaRequest &request);
    GetAccessPointForObjectLambdaResponse * getAccessPointForObjectLambda(const GetAccessPointForObjectLambdaRequest &request);
    GetAccessPointPolicyResponse * getAccessPointPolicy(const GetAccessPointPolicyRequest &request);
    GetAccessPointPolicyForObjectLambdaResponse * getAccessPointPolicyForObjectLambda(const GetAccessPointPolicyForObjectLambdaRequest &request);
    GetAccessPointPolicyStatusResponse * getAccessPointPolicyStatus(const GetAccessPointPolicyStatusRequest &request);
    GetAccessPointPolicyStatusForObjectLambdaResponse * getAccessPointPolicyStatusForObjectLambda(const GetAccessPointPolicyStatusForObjectLambdaRequest &request);
    GetBucketResponse * getBucket(const GetBucketRequest &request);
    GetBucketLifecycleConfigurationResponse * getBucketLifecycleConfiguration(const GetBucketLifecycleConfigurationRequest &request);
    GetBucketPolicyResponse * getBucketPolicy(const GetBucketPolicyRequest &request);
    GetBucketTaggingResponse * getBucketTagging(const GetBucketTaggingRequest &request);
    GetJobTaggingResponse * getJobTagging(const GetJobTaggingRequest &request);
    GetPublicAccessBlockResponse * getPublicAccessBlock(const GetPublicAccessBlockRequest &request);
    GetStorageLensConfigurationResponse * getStorageLensConfiguration(const GetStorageLensConfigurationRequest &request);
    GetStorageLensConfigurationTaggingResponse * getStorageLensConfigurationTagging(const GetStorageLensConfigurationTaggingRequest &request);
    ListAccessPointsResponse * listAccessPoints(const ListAccessPointsRequest &request);
    ListAccessPointsForObjectLambdaResponse * listAccessPointsForObjectLambda(const ListAccessPointsForObjectLambdaRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListRegionalBucketsResponse * listRegionalBuckets(const ListRegionalBucketsRequest &request);
    ListStorageLensConfigurationsResponse * listStorageLensConfigurations(const ListStorageLensConfigurationsRequest &request);
    PutAccessPointConfigurationForObjectLambdaResponse * putAccessPointConfigurationForObjectLambda(const PutAccessPointConfigurationForObjectLambdaRequest &request);
    PutAccessPointPolicyResponse * putAccessPointPolicy(const PutAccessPointPolicyRequest &request);
    PutAccessPointPolicyForObjectLambdaResponse * putAccessPointPolicyForObjectLambda(const PutAccessPointPolicyForObjectLambdaRequest &request);
    PutBucketLifecycleConfigurationResponse * putBucketLifecycleConfiguration(const PutBucketLifecycleConfigurationRequest &request);
    PutBucketPolicyResponse * putBucketPolicy(const PutBucketPolicyRequest &request);
    PutBucketTaggingResponse * putBucketTagging(const PutBucketTaggingRequest &request);
    PutJobTaggingResponse * putJobTagging(const PutJobTaggingRequest &request);
    PutPublicAccessBlockResponse * putPublicAccessBlock(const PutPublicAccessBlockRequest &request);
    PutStorageLensConfigurationResponse * putStorageLensConfiguration(const PutStorageLensConfigurationRequest &request);
    PutStorageLensConfigurationTaggingResponse * putStorageLensConfigurationTagging(const PutStorageLensConfigurationTaggingRequest &request);
    UpdateJobPriorityResponse * updateJobPriority(const UpdateJobPriorityRequest &request);
    UpdateJobStatusResponse * updateJobStatus(const UpdateJobStatusRequest &request);

protected:
    /// @cond internal
    S3ControlClientPrivate * const d_ptr; ///< Internal d-pointer.
    S3ControlClient(S3ControlClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(S3ControlClient)
    Q_DISABLE_COPY(S3ControlClient)

};

} // namespace S3Control
} // namespace QtAws

#endif

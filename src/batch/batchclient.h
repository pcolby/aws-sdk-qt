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

#ifndef QTAWS_BATCHCLIENT_H
#define QTAWS_BATCHCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsbatchglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Batch {

class BatchClientPrivate;
class CancelJobRequest;
class CancelJobResponse;
class CreateComputeEnvironmentRequest;
class CreateComputeEnvironmentResponse;
class CreateJobQueueRequest;
class CreateJobQueueResponse;
class CreateSchedulingPolicyRequest;
class CreateSchedulingPolicyResponse;
class DeleteComputeEnvironmentRequest;
class DeleteComputeEnvironmentResponse;
class DeleteJobQueueRequest;
class DeleteJobQueueResponse;
class DeleteSchedulingPolicyRequest;
class DeleteSchedulingPolicyResponse;
class DeregisterJobDefinitionRequest;
class DeregisterJobDefinitionResponse;
class DescribeComputeEnvironmentsRequest;
class DescribeComputeEnvironmentsResponse;
class DescribeJobDefinitionsRequest;
class DescribeJobDefinitionsResponse;
class DescribeJobQueuesRequest;
class DescribeJobQueuesResponse;
class DescribeJobsRequest;
class DescribeJobsResponse;
class DescribeSchedulingPoliciesRequest;
class DescribeSchedulingPoliciesResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListSchedulingPoliciesRequest;
class ListSchedulingPoliciesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RegisterJobDefinitionRequest;
class RegisterJobDefinitionResponse;
class SubmitJobRequest;
class SubmitJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class TerminateJobRequest;
class TerminateJobResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateComputeEnvironmentRequest;
class UpdateComputeEnvironmentResponse;
class UpdateJobQueueRequest;
class UpdateJobQueueResponse;
class UpdateSchedulingPolicyRequest;
class UpdateSchedulingPolicyResponse;

class QTAWSBATCH_EXPORT BatchClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    BatchClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit BatchClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateComputeEnvironmentResponse * createComputeEnvironment(const CreateComputeEnvironmentRequest &request);
    CreateJobQueueResponse * createJobQueue(const CreateJobQueueRequest &request);
    CreateSchedulingPolicyResponse * createSchedulingPolicy(const CreateSchedulingPolicyRequest &request);
    DeleteComputeEnvironmentResponse * deleteComputeEnvironment(const DeleteComputeEnvironmentRequest &request);
    DeleteJobQueueResponse * deleteJobQueue(const DeleteJobQueueRequest &request);
    DeleteSchedulingPolicyResponse * deleteSchedulingPolicy(const DeleteSchedulingPolicyRequest &request);
    DeregisterJobDefinitionResponse * deregisterJobDefinition(const DeregisterJobDefinitionRequest &request);
    DescribeComputeEnvironmentsResponse * describeComputeEnvironments(const DescribeComputeEnvironmentsRequest &request);
    DescribeJobDefinitionsResponse * describeJobDefinitions(const DescribeJobDefinitionsRequest &request);
    DescribeJobQueuesResponse * describeJobQueues(const DescribeJobQueuesRequest &request);
    DescribeJobsResponse * describeJobs(const DescribeJobsRequest &request);
    DescribeSchedulingPoliciesResponse * describeSchedulingPolicies(const DescribeSchedulingPoliciesRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListSchedulingPoliciesResponse * listSchedulingPolicies(const ListSchedulingPoliciesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterJobDefinitionResponse * registerJobDefinition(const RegisterJobDefinitionRequest &request);
    SubmitJobResponse * submitJob(const SubmitJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TerminateJobResponse * terminateJob(const TerminateJobRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateComputeEnvironmentResponse * updateComputeEnvironment(const UpdateComputeEnvironmentRequest &request);
    UpdateJobQueueResponse * updateJobQueue(const UpdateJobQueueRequest &request);
    UpdateSchedulingPolicyResponse * updateSchedulingPolicy(const UpdateSchedulingPolicyRequest &request);

private:
    Q_DECLARE_PRIVATE(BatchClient)
    Q_DISABLE_COPY(BatchClient)

};

} // namespace Batch
} // namespace QtAws

#endif

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

#include "batchclient.h"
#include "batchclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Batch {

/**
 * @class  BatchClient
 *
 * @brief  Client for AWS Batch
 *
 * AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 * scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 * lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 * batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 * eliminate capacity constraints, reduce compute costs, and deliver results
 *
 * quickly>
 *
 * As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 * any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 * quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 * which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 * time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 * AWS
 */

/**
 * @brief  Constructs a new BatchClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
BatchClient::BatchClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new BatchClientPrivate(this), parent)
{
    Q_D(BatchClient);
    d->apiVersion = QStringLiteral("2016-08-10");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("batch");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Batch");
    d->serviceName = QStringLiteral("batch");
}

/**
 * @brief  Constructs a new BatchClient object.
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
BatchClient::BatchClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new BatchClientPrivate(this), parent)
{
    Q_D(BatchClient);
    d->apiVersion = QStringLiteral("2016-08-10");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("batch");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Batch");
    d->serviceName = QStringLiteral("batch");
}

/**
 * Cancels a job in an AWS Batch job queue. Jobs that are in the <code>SUBMITTED</code>, <code>PENDING</code>, or
 * <code>RUNNABLE</code> state are cancelled. Jobs that have progressed to <code>STARTING</code> or <code>RUNNING</code>
 * are not cancelled (but the API operation still succeeds, even if no job is cancelled); these jobs must be terminated
 * with the <a>TerminateJob</a>
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelJobResponse * BatchClient::cancelJob(const CancelJobRequest &request)
{

}

/**
 * Creates an AWS Batch compute environment. You can create <code>MANAGED</code> or <code>UNMANAGED</code> compute
 *
 * environments>
 *
 * In a managed compute environment, AWS Batch manages the compute resources within the environment, based on the compute
 * resources that you specify. Instances launched into a managed compute environment use a recent, approved version of the
 * Amazon ECS-optimized AMI. You can choose to use Amazon EC2 On-Demand Instances in your managed compute environment, or
 * you can use Amazon EC2 Spot Instances that only launch when the Spot bid price is below a specified percentage of the
 * On-Demand
 *
 * price>
 *
 * In an unmanaged compute environment, you can manage your own compute resources. This provides more compute resource
 * configuration options, such as using a custom AMI, but you must ensure that your AMI meets the Amazon ECS container
 * instance AMI specification. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">Container Instance
 * AMIs</a> in the <i>Amazon Elastic Container Service Developer Guide</i>. After you have created your unmanaged compute
 * environment, you can use the <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS cluster that is
 * associated with it and then manually launch your container instances into that Amazon ECS cluster. For more information,
 * see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching an
 * Amazon ECS Container Instance</a> in the <i>Amazon Elastic Container Service Developer
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateComputeEnvironmentResponse * BatchClient::createComputeEnvironment(const CreateComputeEnvironmentRequest &request)
{

}

/**
 * Creates an AWS Batch job queue. When you create a job queue, you associate one or more compute environments to the queue
 * and assign an order of preference for the compute
 *
 * environments>
 *
 * You also set a priority to the job queue that determines the order in which the AWS Batch scheduler places jobs onto its
 * associated compute environments. For example, if a compute environment is associated with more than one job queue, the
 * job queue with a higher priority is given preference for scheduling jobs to that compute
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateJobQueueResponse * BatchClient::createJobQueue(const CreateJobQueueRequest &request)
{

}

/**
 * Deletes an AWS Batch compute
 *
 * environment>
 *
 * Before you can delete a compute environment, you must set its state to <code>DISABLED</code> with the
 * <a>UpdateComputeEnvironment</a> API operation and disassociate it from any job queues with the <a>UpdateJobQueue</a> API
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteComputeEnvironmentResponse * BatchClient::deleteComputeEnvironment(const DeleteComputeEnvironmentRequest &request)
{

}

/**
 * Deletes the specified job queue. You must first disable submissions for a queue with the <a>UpdateJobQueue</a>
 * operation. All jobs in the queue are terminated when you delete a job
 *
 * queue>
 *
 * It is not necessary to disassociate compute environments from a queue before submitting a <code>DeleteJobQueue</code>
 * request.
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteJobQueueResponse * BatchClient::deleteJobQueue(const DeleteJobQueueRequest &request)
{

}

/**
 * Deregisters an AWS Batch job
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeregisterJobDefinitionResponse * BatchClient::deregisterJobDefinition(const DeregisterJobDefinitionRequest &request)
{

}

/**
 * Describes one or more of your compute
 *
 * environments>
 *
 * If you are using an unmanaged compute environment, you can use the <code>DescribeComputeEnvironment</code> operation to
 * determine the <code>ecsClusterArn</code> that you should launch your Amazon ECS container instances
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeComputeEnvironmentsResponse * BatchClient::describeComputeEnvironments(const DescribeComputeEnvironmentsRequest &request)
{

}

/**
 * Describes a list of job definitions. You can specify a <code>status</code> (such as <code>ACTIVE</code>) to only return
 * job definitions that match that
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobDefinitionsResponse * BatchClient::describeJobDefinitions(const DescribeJobDefinitionsRequest &request)
{

}

/**
 * Describes one or more of your job
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobQueuesResponse * BatchClient::describeJobQueues(const DescribeJobQueuesRequest &request)
{

}

/**
 * Describes a list of AWS Batch
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeJobsResponse * BatchClient::describeJobs(const DescribeJobsRequest &request)
{

}

/**
 * Returns a list of task jobs for a specified job queue. You can filter the results by job status with the
 * <code>jobStatus</code> parameter. If you do not specify a status, only <code>RUNNING</code> jobs are
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListJobsResponse * BatchClient::listJobs(const ListJobsRequest &request)
{

}

/**
 * Registers an AWS Batch job definition.
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterJobDefinitionResponse * BatchClient::registerJobDefinition(const RegisterJobDefinitionRequest &request)
{

}

/**
 * Submits an AWS Batch job from a job definition. Parameters specified during <a>SubmitJob</a> override parameters defined
 * in the job definition.
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SubmitJobResponse * BatchClient::submitJob(const SubmitJobRequest &request)
{

}

/**
 * Terminates a job in a job queue. Jobs that are in the <code>STARTING</code> or <code>RUNNING</code> state are
 * terminated, which causes them to transition to <code>FAILED</code>. Jobs that have not progressed to the
 * <code>STARTING</code> state are
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TerminateJobResponse * BatchClient::terminateJob(const TerminateJobRequest &request)
{

}

/**
 * Updates an AWS Batch compute
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateComputeEnvironmentResponse * BatchClient::updateComputeEnvironment(const UpdateComputeEnvironmentRequest &request)
{

}

/**
 * Updates a job
 *
 * @param  request Request to send to AWS Batch.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateJobQueueResponse * BatchClient::updateJobQueue(const UpdateJobQueueRequest &request)
{

}

/**
 * @internal
 *
 * @class  BatchClientPrivate
 *
 * @brief  Private implementation for BatchClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchClientPrivate object.
 *
 * @param  q  Pointer to this object's public BatchClient instance.
 */
BatchClientPrivate::BatchClientPrivate(BatchClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Batch
} // namespace AWS

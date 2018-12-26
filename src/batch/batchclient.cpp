/*
    Copyright 2013-2018 Paul Colby

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

#include "batchclient.h"
#include "batchclient_p.h"

#include "core/awssignaturev4.h"
#include "canceljobrequest.h"
#include "canceljobresponse.h"
#include "createcomputeenvironmentrequest.h"
#include "createcomputeenvironmentresponse.h"
#include "createjobqueuerequest.h"
#include "createjobqueueresponse.h"
#include "deletecomputeenvironmentrequest.h"
#include "deletecomputeenvironmentresponse.h"
#include "deletejobqueuerequest.h"
#include "deletejobqueueresponse.h"
#include "deregisterjobdefinitionrequest.h"
#include "deregisterjobdefinitionresponse.h"
#include "describecomputeenvironmentsrequest.h"
#include "describecomputeenvironmentsresponse.h"
#include "describejobdefinitionsrequest.h"
#include "describejobdefinitionsresponse.h"
#include "describejobqueuesrequest.h"
#include "describejobqueuesresponse.h"
#include "describejobsrequest.h"
#include "describejobsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "registerjobdefinitionrequest.h"
#include "registerjobdefinitionresponse.h"
#include "submitjobrequest.h"
#include "submitjobresponse.h"
#include "terminatejobrequest.h"
#include "terminatejobresponse.h"
#include "updatecomputeenvironmentrequest.h"
#include "updatecomputeenvironmentresponse.h"
#include "updatejobqueuerequest.h"
#include "updatejobqueueresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Batch
 * \brief Contains classess for accessing AWS Batch.
 *
 * \inmodule QtAwsBatch
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::BatchClient
 * \brief The BatchClient class provides access to the AWS Batch service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBatch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 */

/*!
 * \brief Constructs a BatchClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
BatchClient::BatchClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BatchClientPrivate(this), parent)
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

/*!
 * \overload BatchClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
BatchClient::BatchClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new BatchClientPrivate(this), parent)
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

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * CancelJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a job in an AWS Batch job queue. Jobs that are in the <code>SUBMITTED</code>, <code>PENDING</code>, or
 * <code>RUNNABLE</code> state are cancelled. Jobs that have progressed to <code>STARTING</code> or <code>RUNNING</code>
 * are not cancelled (but the API operation still succeeds, even if no job is cancelled); these jobs must be terminated
 * with the <a>TerminateJob</a>
 */
CancelJobResponse * BatchClient::cancelJob(const CancelJobRequest &request)
{
    return qobject_cast<CancelJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * CreateComputeEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS Batch compute environment. You can create <code>MANAGED</code> or <code>UNMANAGED</code> compute
 *
 * environments>
 *
 * In a managed compute environment, AWS Batch manages the capacity and instance types of the compute resources within the
 * environment. This is based on the compute resource specification that you define or the <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-launch-templates.html">launch template</a> that you specify
 * when you create the compute environment. You can choose to use Amazon EC2 On-Demand Instances or Spot Instances in your
 * managed compute environment. You can optionally set a maximum price so that Spot Instances only launch when the Spot
 * Instance price is below a specified percentage of the On-Demand
 *
 * price> <note>
 *
 * Multi-node parallel jobs are not supported on Spot
 *
 * Instances> </note>
 *
 * In an unmanaged compute environment, you can manage your own compute resources. This provides more compute resource
 * configuration options, such as using a custom AMI, but you must ensure that your AMI meets the Amazon ECS container
 * instance AMI specification. For more information, see <a
 * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/container_instance_AMIs.html">Container Instance
 * AMIs</a> in the <i>Amazon Elastic Container Service Developer Guide</i>. After you have created your unmanaged compute
 * environment, you can use the <a>DescribeComputeEnvironments</a> operation to find the Amazon ECS cluster that is
 * associated with it. Then, manually launch your container instances into that Amazon ECS cluster. For more information,
 * see <a href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_container_instance.html">Launching an
 * Amazon ECS Container Instance</a> in the <i>Amazon Elastic Container Service Developer
 *
 * Guide</i>> <note>
 *
 * AWS Batch does not upgrade the AMIs in a compute environment after it is created (for example, when a newer version of
 * the Amazon ECS-optimized AMI is available). You are responsible for the management of the guest operating system
 * (including updates and security patches) and any additional application software or utilities that you install on the
 * compute resources. To use a new AMI for your AWS Batch
 *
 * jobs> <ol> <li>
 *
 * Create a new compute environment with the new
 *
 * AMI> </li> <li>
 *
 * Add the compute environment to an existing job
 *
 * queue> </li> <li>
 *
 * Remove the old compute environment from your job
 *
 * queue> </li> <li>
 *
 * Delete the old compute
 */
CreateComputeEnvironmentResponse * BatchClient::createComputeEnvironment(const CreateComputeEnvironmentRequest &request)
{
    return qobject_cast<CreateComputeEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * CreateJobQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an AWS Batch job queue. When you create a job queue, you associate one or more compute environments to the queue
 * and assign an order of preference for the compute
 *
 * environments>
 *
 * You also set a priority to the job queue that determines the order in which the AWS Batch scheduler places jobs onto its
 * associated compute environments. For example, if a compute environment is associated with more than one job queue, the
 * job queue with a higher priority is given preference for scheduling jobs to that compute
 */
CreateJobQueueResponse * BatchClient::createJobQueue(const CreateJobQueueRequest &request)
{
    return qobject_cast<CreateJobQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DeleteComputeEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an AWS Batch compute
 *
 * environment>
 *
 * Before you can delete a compute environment, you must set its state to <code>DISABLED</code> with the
 * <a>UpdateComputeEnvironment</a> API operation and disassociate it from any job queues with the <a>UpdateJobQueue</a> API
 */
DeleteComputeEnvironmentResponse * BatchClient::deleteComputeEnvironment(const DeleteComputeEnvironmentRequest &request)
{
    return qobject_cast<DeleteComputeEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DeleteJobQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified job queue. You must first disable submissions for a queue with the <a>UpdateJobQueue</a>
 * operation. All jobs in the queue are terminated when you delete a job
 *
 * queue>
 *
 * It is not necessary to disassociate compute environments from a queue before submitting a <code>DeleteJobQueue</code>
 * request.
 */
DeleteJobQueueResponse * BatchClient::deleteJobQueue(const DeleteJobQueueRequest &request)
{
    return qobject_cast<DeleteJobQueueResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DeregisterJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters an AWS Batch job
 */
DeregisterJobDefinitionResponse * BatchClient::deregisterJobDefinition(const DeregisterJobDefinitionRequest &request)
{
    return qobject_cast<DeregisterJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DescribeComputeEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your compute
 *
 * environments>
 *
 * If you are using an unmanaged compute environment, you can use the <code>DescribeComputeEnvironment</code> operation to
 * determine the <code>ecsClusterArn</code> that you should launch your Amazon ECS container instances
 */
DescribeComputeEnvironmentsResponse * BatchClient::describeComputeEnvironments(const DescribeComputeEnvironmentsRequest &request)
{
    return qobject_cast<DescribeComputeEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DescribeJobDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a list of job definitions. You can specify a <code>status</code> (such as <code>ACTIVE</code>) to only return
 * job definitions that match that
 */
DescribeJobDefinitionsResponse * BatchClient::describeJobDefinitions(const DescribeJobDefinitionsRequest &request)
{
    return qobject_cast<DescribeJobDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DescribeJobQueuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more of your job
 */
DescribeJobQueuesResponse * BatchClient::describeJobQueues(const DescribeJobQueuesRequest &request)
{
    return qobject_cast<DescribeJobQueuesResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * DescribeJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a list of AWS Batch
 */
DescribeJobsResponse * BatchClient::describeJobs(const DescribeJobsRequest &request)
{
    return qobject_cast<DescribeJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of AWS Batch
 *
 * jobs>
 *
 * You must specify only one of the
 *
 * following> <ul> <li>
 *
 * a job queue ID to return a list of jobs in that job
 *
 * queu> </li> <li>
 *
 * a multi-node parallel job ID to return a list of that job's
 *
 * node> </li> <li>
 *
 * an array job ID to return a list of that job's
 *
 * childre> </li> </ul>
 *
 * You can filter the results by job status with the <code>jobStatus</code> parameter. If you do not specify a status, only
 * <code>RUNNING</code> jobs are
 */
ListJobsResponse * BatchClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * RegisterJobDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an AWS Batch job definition.
 */
RegisterJobDefinitionResponse * BatchClient::registerJobDefinition(const RegisterJobDefinitionRequest &request)
{
    return qobject_cast<RegisterJobDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * SubmitJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits an AWS Batch job from a job definition. Parameters specified during <a>SubmitJob</a> override parameters defined
 * in the job definition.
 */
SubmitJobResponse * BatchClient::submitJob(const SubmitJobRequest &request)
{
    return qobject_cast<SubmitJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * TerminateJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Terminates a job in a job queue. Jobs that are in the <code>STARTING</code> or <code>RUNNING</code> state are
 * terminated, which causes them to transition to <code>FAILED</code>. Jobs that have not progressed to the
 * <code>STARTING</code> state are
 */
TerminateJobResponse * BatchClient::terminateJob(const TerminateJobRequest &request)
{
    return qobject_cast<TerminateJobResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * UpdateComputeEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an AWS Batch compute
 */
UpdateComputeEnvironmentResponse * BatchClient::updateComputeEnvironment(const UpdateComputeEnvironmentRequest &request)
{
    return qobject_cast<UpdateComputeEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the BatchClient service, and returns a pointer to an
 * UpdateJobQueueResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a job
 */
UpdateJobQueueResponse * BatchClient::updateJobQueue(const UpdateJobQueueRequest &request)
{
    return qobject_cast<UpdateJobQueueResponse *>(send(request));
}

/*!
 * \class QtAws::Batch::BatchClientPrivate
 * \brief The BatchClientPrivate class provides private implementation for BatchClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsBatch
 */

/*!
 * Constructs a BatchClientPrivate object with public implementation \a q.
 */
BatchClientPrivate::BatchClientPrivate(BatchClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Batch
} // namespace QtAws

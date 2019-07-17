/*
    Copyright 2013-2019 Paul Colby

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

#include "emrclient.h"
#include "emrclient_p.h"

#include "core/awssignaturev4.h"
#include "addinstancefleetrequest.h"
#include "addinstancefleetresponse.h"
#include "addinstancegroupsrequest.h"
#include "addinstancegroupsresponse.h"
#include "addjobflowstepsrequest.h"
#include "addjobflowstepsresponse.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "cancelstepsrequest.h"
#include "cancelstepsresponse.h"
#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationresponse.h"
#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationresponse.h"
#include "describeclusterrequest.h"
#include "describeclusterresponse.h"
#include "describejobflowsrequest.h"
#include "describejobflowsresponse.h"
#include "describesecurityconfigurationrequest.h"
#include "describesecurityconfigurationresponse.h"
#include "describesteprequest.h"
#include "describestepresponse.h"
#include "listbootstrapactionsrequest.h"
#include "listbootstrapactionsresponse.h"
#include "listclustersrequest.h"
#include "listclustersresponse.h"
#include "listinstancefleetsrequest.h"
#include "listinstancefleetsresponse.h"
#include "listinstancegroupsrequest.h"
#include "listinstancegroupsresponse.h"
#include "listinstancesrequest.h"
#include "listinstancesresponse.h"
#include "listsecurityconfigurationsrequest.h"
#include "listsecurityconfigurationsresponse.h"
#include "liststepsrequest.h"
#include "liststepsresponse.h"
#include "modifyinstancefleetrequest.h"
#include "modifyinstancefleetresponse.h"
#include "modifyinstancegroupsrequest.h"
#include "modifyinstancegroupsresponse.h"
#include "putautoscalingpolicyrequest.h"
#include "putautoscalingpolicyresponse.h"
#include "removeautoscalingpolicyrequest.h"
#include "removeautoscalingpolicyresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "runjobflowrequest.h"
#include "runjobflowresponse.h"
#include "setterminationprotectionrequest.h"
#include "setterminationprotectionresponse.h"
#include "setvisibletoallusersrequest.h"
#include "setvisibletoallusersresponse.h"
#include "terminatejobflowsrequest.h"
#include "terminatejobflowsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::EMR
 * \brief Contains classess for accessing Amazon Elastic MapReduce ( EMR).
 *
 * \inmodule QtAwsEmr
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::EmrClient
 * \brief The EmrClient class provides access to the Amazon Elastic MapReduce ( EMR) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 */

/*!
 * \brief Constructs a EmrClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EmrClient::EmrClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EmrClientPrivate(this), parent)
{
    Q_D(EmrClient);
    d->apiVersion = QStringLiteral("2009-03-31");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("elasticmapreduce");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic MapReduce");
    d->serviceName = QStringLiteral("elasticmapreduce");
}

/*!
 * \overload EmrClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EmrClient::EmrClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EmrClientPrivate(this), parent)
{
    Q_D(EmrClient);
    d->apiVersion = QStringLiteral("2009-03-31");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("elasticmapreduce");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic MapReduce");
    d->serviceName = QStringLiteral("elasticmapreduce");
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * AddInstanceFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an instance fleet to a running
 *
 * cluster> <note>
 *
 * The instance fleet configuration is available only in Amazon EMR versions 4.8.0 and later, excluding
 */
AddInstanceFleetResponse * EmrClient::addInstanceFleet(const AddInstanceFleetRequest &request)
{
    return qobject_cast<AddInstanceFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * AddInstanceGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more instance groups to a running
 */
AddInstanceGroupsResponse * EmrClient::addInstanceGroups(const AddInstanceGroupsRequest &request)
{
    return qobject_cast<AddInstanceGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * AddJobFlowStepsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * AddJobFlowSteps adds new steps to a running cluster. A maximum of 256 steps are allowed in each job
 *
 * flow>
 *
 * If your cluster is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to
 * process your data. You can bypass the 256-step limitation in various ways, including using SSH to connect to the master
 * node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For more
 * information on how to do this, see <a
 * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a
 * Cluster</a> in the <i>Amazon EMR Management
 *
 * Guide</i>>
 *
 * A step specifies the location of a JAR file stored either on the master node of the cluster or in Amazon S3. Each step
 * is performed by the main function of the main class of the JAR file. The main class can be specified either in the
 * manifest of the JAR or by using the MainFunction parameter of the
 *
 * step>
 *
 * Amazon EMR executes each step in the order listed. For a step to be considered complete, the main function must exit
 * with a zero exit code and all Hadoop jobs started while the step was running must have completed and run
 *
 * successfully>
 *
 * You can only add steps to a cluster that is in one of the following states: STARTING, BOOTSTRAPPING, RUNNING, or
 */
AddJobFlowStepsResponse * EmrClient::addJobFlowSteps(const AddJobFlowStepsRequest &request)
{
    return qobject_cast<AddJobFlowStepsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping
 * clusters to track your Amazon EMR resource allocation costs. For more information, see <a
 * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag Clusters</a>.
 */
AddTagsResponse * EmrClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * CancelStepsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels a pending step or steps in a running cluster. Available only in Amazon EMR versions 4.8.0 and later, excluding
 * version 5.0.0. A maximum of 256 steps are allowed in each CancelSteps request. CancelSteps is idempotent but
 * asynchronous; it does not guarantee a step will be canceled, even if the request is successfully submitted. You can only
 * cancel steps that are in a <code>PENDING</code>
 */
CancelStepsResponse * EmrClient::cancelSteps(const CancelStepsRequest &request)
{
    return qobject_cast<CancelStepsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * CreateSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a security configuration, which is stored in the service and can be specified when a cluster is
 */
CreateSecurityConfigurationResponse * EmrClient::createSecurityConfiguration(const CreateSecurityConfigurationRequest &request)
{
    return qobject_cast<CreateSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * DeleteSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a security
 */
DeleteSecurityConfigurationResponse * EmrClient::deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request)
{
    return qobject_cast<DeleteSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * DescribeClusterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides cluster-level details including status, hardware and software configuration, VPC settings, and so on.
 */
DescribeClusterResponse * EmrClient::describeCluster(const DescribeClusterRequest &request)
{
    return qobject_cast<DescribeClusterResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * DescribeJobFlowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This API is deprecated and will eventually be removed. We recommend you use <a>ListClusters</a>, <a>DescribeCluster</a>,
 * <a>ListSteps</a>, <a>ListInstanceGroups</a> and <a>ListBootstrapActions</a>
 *
 * instead>
 *
 * DescribeJobFlows returns a list of job flows that match all of the supplied parameters. The parameters can include a
 * list of job flow IDs, job flow states, and restrictions on job flow creation date and
 *
 * time>
 *
 * Regardless of supplied parameters, only job flows created within the last two months are
 *
 * returned>
 *
 * If no parameters are supplied, then job flows matching either of the following criteria are
 *
 * returned> <ul> <li>
 *
 * Job flows created and completed in the last two
 *
 * week> </li> <li>
 *
 * Job flows created within the last two months that are in one of the following states: <code>RUNNING</code>,
 * <code>WAITING</code>, <code>SHUTTING_DOWN</code>, <code>STARTING</code>
 *
 * </p </li> </ul>
 *
 * Amazon EMR can return a maximum of 512 job flow
 */
DescribeJobFlowsResponse * EmrClient::describeJobFlows(const DescribeJobFlowsRequest &request)
{
    return qobject_cast<DescribeJobFlowsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * DescribeSecurityConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the details of a security configuration by returning the configuration
 */
DescribeSecurityConfigurationResponse * EmrClient::describeSecurityConfiguration(const DescribeSecurityConfigurationRequest &request)
{
    return qobject_cast<DescribeSecurityConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * DescribeStepResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides more detail about the cluster
 */
DescribeStepResponse * EmrClient::describeStep(const DescribeStepRequest &request)
{
    return qobject_cast<DescribeStepResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListBootstrapActionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information about the bootstrap actions associated with a
 */
ListBootstrapActionsResponse * EmrClient::listBootstrapActions(const ListBootstrapActionsRequest &request)
{
    return qobject_cast<ListBootstrapActionsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListClustersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides the status of all clusters visible to this AWS account. Allows you to filter the list of clusters based on
 * certain criteria; for example, filtering by cluster creation date and time or by status. This call returns a maximum of
 * 50 clusters per call, but returns a marker to track the paging of the cluster list across multiple ListClusters
 */
ListClustersResponse * EmrClient::listClusters(const ListClustersRequest &request)
{
    return qobject_cast<ListClustersResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListInstanceFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all available details about the instance fleets in a
 *
 * cluster> <note>
 *
 * The instance fleet configuration is available only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x
 */
ListInstanceFleetsResponse * EmrClient::listInstanceFleets(const ListInstanceFleetsRequest &request)
{
    return qobject_cast<ListInstanceFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListInstanceGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides all available details about the instance groups in a
 */
ListInstanceGroupsResponse * EmrClient::listInstanceGroups(const ListInstanceGroupsRequest &request)
{
    return qobject_cast<ListInstanceGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides information for all active EC2 instances and EC2 instances terminated in the last 30 days, up to a maximum of
 * 2,000. EC2 instances in any of the following states are considered active: AWAITING_FULFILLMENT, PROVISIONING,
 * BOOTSTRAPPING,
 */
ListInstancesResponse * EmrClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListSecurityConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the security configurations visible to this account, providing their creation dates and times, and their
 * names. This call returns a maximum of 50 clusters per call, but returns a marker to track the paging of the cluster list
 * across multiple ListSecurityConfigurations
 */
ListSecurityConfigurationsResponse * EmrClient::listSecurityConfigurations(const ListSecurityConfigurationsRequest &request)
{
    return qobject_cast<ListSecurityConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ListStepsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides a list of steps for the cluster in reverse order unless you specify stepIds with the
 */
ListStepsResponse * EmrClient::listSteps(const ListStepsRequest &request)
{
    return qobject_cast<ListStepsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ModifyInstanceFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the target On-Demand and target Spot capacities for the instance fleet with the specified InstanceFleetID
 * within the cluster specified using ClusterID. The call either succeeds or fails
 *
 * atomically> <note>
 *
 * The instance fleet configuration is available only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x
 */
ModifyInstanceFleetResponse * EmrClient::modifyInstanceFleet(const ModifyInstanceFleetRequest &request)
{
    return qobject_cast<ModifyInstanceFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * ModifyInstanceGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * ModifyInstanceGroups modifies the number of nodes and configuration settings of an instance group. The input parameters
 * include the new target instance count for the group and the instance group ID. The call will either succeed or fail
 */
ModifyInstanceGroupsResponse * EmrClient::modifyInstanceGroups(const ModifyInstanceGroupsRequest &request)
{
    return qobject_cast<ModifyInstanceGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * PutAutoScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an automatic scaling policy for a core instance group or task instance group in an Amazon EMR
 * cluster. The automatic scaling policy defines how an instance group dynamically adds and terminates EC2 instances in
 * response to the value of a CloudWatch
 */
PutAutoScalingPolicyResponse * EmrClient::putAutoScalingPolicy(const PutAutoScalingPolicyRequest &request)
{
    return qobject_cast<PutAutoScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * RemoveAutoScalingPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an automatic scaling policy from a specified instance group within an EMR
 */
RemoveAutoScalingPolicyResponse * EmrClient::removeAutoScalingPolicy(const RemoveAutoScalingPolicyRequest &request)
{
    return qobject_cast<RemoveAutoScalingPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from an Amazon EMR resource. Tags make it easier to associate clusters in various ways, such as grouping
 * clusters to track your Amazon EMR resource allocation costs. For more information, see <a
 * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-tags.html">Tag Clusters</a>.
 *
 * </p
 *
 * The following example removes the stack tag with value Prod from a
 */
RemoveTagsResponse * EmrClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * RunJobFlowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * RunJobFlow creates and starts running a new cluster (job flow). The cluster runs the steps specified. After the steps
 * complete, the cluster stops and the HDFS partition is lost. To prevent loss of data, configure the last step of the job
 * flow to store results in Amazon S3. If the <a>JobFlowInstancesConfig</a> <code>KeepJobFlowAliveWhenNoSteps</code>
 * parameter is set to <code>TRUE</code>, the cluster transitions to the WAITING state rather than shutting down after the
 * steps have completed.
 *
 * </p
 *
 * For additional protection, you can set the <a>JobFlowInstancesConfig</a> <code>TerminationProtected</code> parameter to
 * <code>TRUE</code> to lock the cluster and prevent it from being terminated by API call, user intervention, or in the
 * event of a job flow
 *
 * error>
 *
 * A maximum of 256 steps are allowed in each job
 *
 * flow>
 *
 * If your cluster is long-running (such as a Hive data warehouse) or complex, you may require more than 256 steps to
 * process your data. You can bypass the 256-step limitation in various ways, including using the SSH shell to connect to
 * the master node and submitting queries directly to the software running on the master node, such as Hive and Hadoop. For
 * more information on how to do this, see <a
 * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/AddMoreThan256Steps.html">Add More than 256 Steps to a
 * Cluster</a> in the <i>Amazon EMR Management
 *
 * Guide</i>>
 *
 * For long running clusters, we recommend that you periodically store your
 *
 * results> <note>
 *
 * The instance fleets configuration is available only in Amazon EMR versions 4.8.0 and later, excluding 5.0.x versions.
 * The RunJobFlow request can contain InstanceFleets parameters or InstanceGroups parameters, but not
 */
RunJobFlowResponse * EmrClient::runJobFlow(const RunJobFlowRequest &request)
{
    return qobject_cast<RunJobFlowResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * SetTerminationProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * SetTerminationProtection locks a cluster (job flow) so the EC2 instances in the cluster cannot be terminated by user
 * intervention, an API call, or in the event of a job-flow error. The cluster still terminates upon successful completion
 * of the job flow. Calling <code>SetTerminationProtection</code> on a cluster is similar to calling the Amazon EC2
 * <code>DisableAPITermination</code> API on all EC2 instances in a
 *
 * cluster>
 *
 * <code>SetTerminationProtection</code> is used to prevent accidental termination of a cluster and to ensure that in the
 * event of an error, the instances persist so that you can recover any data stored in their ephemeral instance
 *
 * storage>
 *
 * To terminate a cluster that has been locked by setting <code>SetTerminationProtection</code> to <code>true</code>, you
 * must first unlock the job flow by a subsequent call to <code>SetTerminationProtection</code> in which you set the value
 * to <code>false</code>.
 *
 * </p
 *
 * For more information, see<a
 * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/UsingEMR_TerminationProtection.html">Managing Cluster
 * Termination</a> in the <i>Amazon EMR Management Guide</i>.
 */
SetTerminationProtectionResponse * EmrClient::setTerminationProtection(const SetTerminationProtectionRequest &request)
{
    return qobject_cast<SetTerminationProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * SetVisibleToAllUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets whether all AWS Identity and Access Management (IAM) users under your account can access the specified clusters
 * (job flows). This action works on running clusters. You can also set the visibility of a cluster when you launch it
 * using the <code>VisibleToAllUsers</code> parameter of <a>RunJobFlow</a>. The SetVisibleToAllUsers action can be called
 * only by an IAM user who created the cluster or the AWS account that owns the
 */
SetVisibleToAllUsersResponse * EmrClient::setVisibleToAllUsers(const SetVisibleToAllUsersRequest &request)
{
    return qobject_cast<SetVisibleToAllUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the EmrClient service, and returns a pointer to an
 * TerminateJobFlowsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * TerminateJobFlows shuts a list of clusters (job flows) down. When a job flow is shut down, any step not yet completed is
 * canceled and the EC2 instances on which the cluster is running are stopped. Any log files not already saved are uploaded
 * to Amazon S3 if a LogUri was specified when the cluster was
 *
 * created>
 *
 * The maximum number of clusters allowed is 10. The call to <code>TerminateJobFlows</code> is asynchronous. Depending on
 * the configuration of the cluster, it may take up to 1-5 minutes for the cluster to completely terminate and release
 * allocated resources, such as Amazon EC2
 */
TerminateJobFlowsResponse * EmrClient::terminateJobFlows(const TerminateJobFlowsRequest &request)
{
    return qobject_cast<TerminateJobFlowsResponse *>(send(request));
}

/*!
 * \class QtAws::EMR::EmrClientPrivate
 * \brief The EmrClientPrivate class provides private implementation for EmrClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a EmrClientPrivate object with public implementation \a q.
 */
EmrClientPrivate::EmrClientPrivate(EmrClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace EMR
} // namespace QtAws

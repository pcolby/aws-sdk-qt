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

#include "cloudformationclient.h"
#include "cloudformationclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CloudFormation {

/**
 * @class  CloudFormationClient
 *
 * @brief  Client for AWS CloudFormation
 *
 * <fullname>AWS CloudFormation</fullname>
 *
 * AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 * use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 * Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 * cost-effective applications without creating or configuring the underlying AWS
 *
 * infrastructure>
 *
 * With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 * collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 * the stack together and manages all dependencies between the resources for
 *
 * you>
 *
 * For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 * CloudFormation Product
 *
 * Page</a>>
 *
 * Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 * product, you can find the product's technical documentation at <a
 */

/**
 * @brief  Constructs a new CloudFormationClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CloudFormationClient::CloudFormationClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudFormationClientPrivate(this), parent)
{
    Q_D(CloudFormationClient);
    d->apiVersion = QStringLiteral("2010-05-15");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cloudformation");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CloudFormation");
    d->serviceName = QStringLiteral("cloudformation");
}

/**
 * @brief  Constructs a new CloudFormationClient object.
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
CloudFormationClient::CloudFormationClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CloudFormationClientPrivate(this), parent)
{
    Q_D(CloudFormationClient);
    d->apiVersion = QStringLiteral("2010-05-15");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cloudformation");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CloudFormation");
    d->serviceName = QStringLiteral("cloudformation");
}

/**
 * Cancels an update on the specified stack. If the call completes successfully, the stack rolls back the update and
 * reverts to the previous stack
 *
 * configuration> <note>
 *
 * You can cancel only stacks that are in the UPDATE_IN_PROGRESS
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CancelUpdateStackResponse * CloudFormationClient::cancelUpdateStack(const CancelUpdateStackRequest &request)
{

}

/**
 * For a specified stack that is in the <code>UPDATE_ROLLBACK_FAILED</code> state, continues rolling it back to the
 * <code>UPDATE_ROLLBACK_COMPLETE</code> state. Depending on the cause of the failure, you can manually <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
 * fix the error</a> and continue the rollback. By continuing the rollback, you can return your stack to a working state
 * (the <code>UPDATE_ROLLBACK_COMPLETE</code> state), and then try to update the stack
 *
 * again>
 *
 * A stack goes into the <code>UPDATE_ROLLBACK_FAILED</code> state when AWS CloudFormation cannot roll back all changes
 * after a failed stack update. For example, you might have a stack that is rolling back to an old database instance that
 * was deleted outside of AWS CloudFormation. Because AWS CloudFormation doesn't know the database was deleted, it assumes
 * that the database instance still exists and attempts to roll back to it, causing the update rollback to
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ContinueUpdateRollbackResponse * CloudFormationClient::continueUpdateRollback(const ContinueUpdateRollbackRequest &request)
{

}

/**
 * Creates a list of changes that will be applied to a stack so that you can review the changes before executing them. You
 * can create a change set for a stack that doesn't exist or an existing stack. If you create a change set for a stack that
 * doesn't exist, the change set shows all of the resources that AWS CloudFormation will create. If you create a change set
 * for an existing stack, AWS CloudFormation compares the stack's information with the information that you submit in the
 * change set and lists the differences. Use change sets to understand which resources AWS CloudFormation will create or
 * change, and how it will change resources in an existing stack, before you create or update a
 *
 * stack>
 *
 * To create a change set for a stack that doesn't exist, for the <code>ChangeSetType</code> parameter, specify
 * <code>CREATE</code>. To create a change set for an existing stack, specify <code>UPDATE</code> for the
 * <code>ChangeSetType</code> parameter. After the <code>CreateChangeSet</code> call successfully completes, AWS
 * CloudFormation starts creating the change set. To check the status of the change set or to review it, use the
 * <a>DescribeChangeSet</a>
 *
 * action>
 *
 * When you are satisfied with the changes the change set will make, execute the change set by using the
 * <a>ExecuteChangeSet</a> action. AWS CloudFormation doesn't make changes until you execute the change
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateChangeSetResponse * CloudFormationClient::createChangeSet(const CreateChangeSetRequest &request)
{

}

/**
 * Creates a stack as specified in the template. After the call completes successfully, the stack creation starts. You can
 * check the status of the stack via the <a>DescribeStacks</a>
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStackResponse * CloudFormationClient::createStack(const CreateStackRequest &request)
{

}

/**
 * Creates stack instances for the specified accounts, within the specified regions. A stack instance refers to a stack in
 * a specific account and region. <code>Accounts</code> and <code>Regions</code> are required parameters—you must specify
 * at least one account and one region.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStackInstancesResponse * CloudFormationClient::createStackInstances(const CreateStackInstancesRequest &request)
{

}

/**
 * Creates a stack
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateStackSetResponse * CloudFormationClient::createStackSet(const CreateStackSetRequest &request)
{

}

/**
 * Deletes the specified change set. Deleting change sets ensures that no one executes the wrong change
 *
 * set>
 *
 * If the call successfully completes, AWS CloudFormation successfully deleted the change
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteChangeSetResponse * CloudFormationClient::deleteChangeSet(const DeleteChangeSetRequest &request)
{

}

/**
 * Deletes a specified stack. Once the call completes successfully, stack deletion starts. Deleted stacks do not show up in
 * the <a>DescribeStacks</a> API if the deletion has been completed
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStackResponse * CloudFormationClient::deleteStack(const DeleteStackRequest &request)
{

}

/**
 * Deletes stack instances for the specified accounts, in the specified regions.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStackInstancesResponse * CloudFormationClient::deleteStackInstances(const DeleteStackInstancesRequest &request)
{

}

/**
 * Deletes a stack set. Before you can delete a stack set, all of its member stack instances must be deleted. For more
 * information about how to do this, see <a>DeleteStackInstances</a>.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteStackSetResponse * CloudFormationClient::deleteStackSet(const DeleteStackSetRequest &request)
{

}

/**
 * Retrieves your account's AWS CloudFormation limits, such as the maximum number of stacks that you can create in your
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAccountLimitsResponse * CloudFormationClient::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{

}

/**
 * Returns the inputs for the change set and a list of changes that AWS CloudFormation will make if you execute the change
 * set. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
 * Stacks Using Change Sets</a> in the AWS CloudFormation User
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeChangeSetResponse * CloudFormationClient::describeChangeSet(const DescribeChangeSetRequest &request)
{

}

/**
 * Returns all stack related events for a specified stack in reverse chronological order. For more information about a
 * stack's event history, go to <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a> in the AWS
 * CloudFormation User
 *
 * Guide> <note>
 *
 * You can list events for stacks that have failed to create or have been deleted by specifying the unique stack identifier
 * (stack
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStackEventsResponse * CloudFormationClient::describeStackEvents(const DescribeStackEventsRequest &request)
{

}

/**
 * Returns the stack instance that's associated with the specified stack set, AWS account, and
 *
 * region>
 *
 * For a list of stack instances that are associated with a specific stack set, use
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStackInstanceResponse * CloudFormationClient::describeStackInstance(const DescribeStackInstanceRequest &request)
{

}

/**
 * Returns a description of the specified resource in the specified
 *
 * stack>
 *
 * For deleted stacks, DescribeStackResource returns resource information for up to 90 days after the stack has been
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStackResourceResponse * CloudFormationClient::describeStackResource(const DescribeStackResourceRequest &request)
{

}

/**
 * Returns AWS resource descriptions for running and deleted stacks. If <code>StackName</code> is specified, all the
 * associated resources that are part of the stack are returned. If <code>PhysicalResourceId</code> is specified, the
 * associated resources of the stack that the resource belongs to are
 *
 * returned> <note>
 *
 * Only the first 100 resources will be returned. If your stack has more resources than this, you should use
 * <code>ListStackResources</code>
 *
 * instead> </note>
 *
 * For deleted stacks, <code>DescribeStackResources</code> returns resource information for up to 90 days after the stack
 * has been
 *
 * deleted>
 *
 * You must specify either <code>StackName</code> or <code>PhysicalResourceId</code>, but not both. In addition, you can
 * specify <code>LogicalResourceId</code> to filter the returned result. For more information about resources, the
 * <code>LogicalResourceId</code> and <code>PhysicalResourceId</code>, go to the <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">AWS CloudFormation User
 *
 * Guide</a>> <note>
 *
 * A <code>ValidationError</code> is returned if you specify both <code>StackName</code> and
 * <code>PhysicalResourceId</code> in the same
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStackResourcesResponse * CloudFormationClient::describeStackResources(const DescribeStackResourcesRequest &request)
{

}

/**
 * Returns the description of the specified stack set.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStackSetResponse * CloudFormationClient::describeStackSet(const DescribeStackSetRequest &request)
{

}

/**
 * Returns the description of the specified stack set operation.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStackSetOperationResponse * CloudFormationClient::describeStackSetOperation(const DescribeStackSetOperationRequest &request)
{

}

/**
 * Returns the description for the specified stack; if no stack name was specified, then it returns the description for all
 * the stacks
 *
 * created> <note>
 *
 * If the stack does not exist, an <code>AmazonCloudFormationException</code> is
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeStacksResponse * CloudFormationClient::describeStacks(const DescribeStacksRequest &request)
{

}

/**
 * Returns the estimated monthly cost of a template. The return value is an AWS Simple Monthly Calculator URL with a query
 * string that describes the resources required to run the
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EstimateTemplateCostResponse * CloudFormationClient::estimateTemplateCost(const EstimateTemplateCostRequest &request)
{

}

/**
 * Updates a stack using the input information that was provided when the specified change set was created. After the call
 * successfully completes, AWS CloudFormation starts updating the stack. Use the <a>DescribeStacks</a> action to view the
 * status of the
 *
 * update>
 *
 * When you execute a change set, AWS CloudFormation deletes all other change sets associated with the stack because they
 * aren't valid for the updated
 *
 * stack>
 *
 * If a stack policy is associated with the stack, AWS CloudFormation enforces the policy during the update. You can't
 * specify a temporary stack policy that overrides the current
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ExecuteChangeSetResponse * CloudFormationClient::executeChangeSet(const ExecuteChangeSetRequest &request)
{

}

/**
 * Returns the stack policy for a specified stack. If a stack doesn't have a policy, a null value is
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetStackPolicyResponse * CloudFormationClient::getStackPolicy(const GetStackPolicyRequest &request)
{

}

/**
 * Returns the template body for a specified stack. You can get the template for running or deleted
 *
 * stacks>
 *
 * For deleted stacks, GetTemplate returns the template for up to 90 days after the stack has been
 *
 * deleted> <note>
 *
 * If the template does not exist, a <code>ValidationError</code> is returned.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTemplateResponse * CloudFormationClient::getTemplate(const GetTemplateRequest &request)
{

}

/**
 * Returns information about a new or existing template. The <code>GetTemplateSummary</code> action is useful for viewing
 * parameter information, such as default parameter values and parameter types, before you create or update a stack or
 * stack
 *
 * set>
 *
 * You can use the <code>GetTemplateSummary</code> action when you submit a template, or you can get template information
 * for a stack set, or a running or deleted
 *
 * stack>
 *
 * For deleted stacks, <code>GetTemplateSummary</code> returns the template information for up to 90 days after the stack
 * has been deleted. If the template does not exist, a <code>ValidationError</code> is
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTemplateSummaryResponse * CloudFormationClient::getTemplateSummary(const GetTemplateSummaryRequest &request)
{

}

/**
 * Returns the ID and status of each active change set for a stack. For example, AWS CloudFormation lists change sets that
 * are in the <code>CREATE_IN_PROGRESS</code> or <code>CREATE_PENDING</code>
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListChangeSetsResponse * CloudFormationClient::listChangeSets(const ListChangeSetsRequest &request)
{

}

/**
 * Lists all exported output values in the account and region in which you call this action. Use this action to see the
 * exported output values that you can import into other stacks. To import values, use the <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
 * <code>Fn::ImportValue</code> </a> function.
 *
 * </p
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html"> AWS CloudFormation
 * Export Stack Output
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListExportsResponse * CloudFormationClient::listExports(const ListExportsRequest &request)
{

}

/**
 * Lists all stacks that are importing an exported output value. To modify or remove an exported output value, first use
 * this action to see which stacks are using it. To see the exported output values in your account, see <a>ListExports</a>.
 *
 * </p
 *
 * For more information about importing an exported output value, see the <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
 * <code>Fn::ImportValue</code> </a> function.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListImportsResponse * CloudFormationClient::listImports(const ListImportsRequest &request)
{

}

/**
 * Returns summary information about stack instances that are associated with the specified stack set. You can filter for
 * stack instances that are associated with a specific AWS account name or
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStackInstancesResponse * CloudFormationClient::listStackInstances(const ListStackInstancesRequest &request)
{

}

/**
 * Returns descriptions of all resources of the specified
 *
 * stack>
 *
 * For deleted stacks, ListStackResources returns resource information for up to 90 days after the stack has been
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStackResourcesResponse * CloudFormationClient::listStackResources(const ListStackResourcesRequest &request)
{

}

/**
 * Returns summary information about the results of a stack set operation.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStackSetOperationResultsResponse * CloudFormationClient::listStackSetOperationResults(const ListStackSetOperationResultsRequest &request)
{

}

/**
 * Returns summary information about operations performed on a stack set.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStackSetOperationsResponse * CloudFormationClient::listStackSetOperations(const ListStackSetOperationsRequest &request)
{

}

/**
 * Returns summary information about stack sets that are associated with the
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStackSetsResponse * CloudFormationClient::listStackSets(const ListStackSetsRequest &request)
{

}

/**
 * Returns the summary information for stacks whose status matches the specified StackStatusFilter. Summary information for
 * stacks that have been deleted is kept for 90 days after the stack is deleted. If no StackStatusFilter is specified,
 * summary information for all stacks is returned (including existing stacks and stacks that have been
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListStacksResponse * CloudFormationClient::listStacks(const ListStacksRequest &request)
{

}

/**
 * Sets a stack policy for a specified
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetStackPolicyResponse * CloudFormationClient::setStackPolicy(const SetStackPolicyRequest &request)
{

}

/**
 * Sends a signal to the specified resource with a success or failure status. You can use the SignalResource API in
 * conjunction with a creation policy or update policy. AWS CloudFormation doesn't proceed with a stack creation or update
 * until resources receive the required number of signals or the timeout period is exceeded. The SignalResource API is
 * useful in cases where you want to send signals from anywhere other than an Amazon EC2
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SignalResourceResponse * CloudFormationClient::signalResource(const SignalResourceRequest &request)
{

}

/**
 * Stops an in-progress operation on a stack set and its associated stack instances.
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopStackSetOperationResponse * CloudFormationClient::stopStackSetOperation(const StopStackSetOperationRequest &request)
{

}

/**
 * Updates a stack as specified in the template. After the call completes successfully, the stack update starts. You can
 * check the status of the stack via the <a>DescribeStacks</a>
 *
 * action>
 *
 * To get a copy of the template for an existing stack, you can use the <a>GetTemplate</a>
 *
 * action>
 *
 * For more information about creating an update template, updating a stack, and monitoring the progress of the update, see
 * <a href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating a
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStackResponse * CloudFormationClient::updateStack(const UpdateStackRequest &request)
{

}

/**
 * Updates the parameter values for stack instances for the specified accounts, within the specified regions. A stack
 * instance refers to a stack in a specific account and region.
 *
 * </p
 *
 * You can only update stack instances in regions and accounts where they already exist; to create additional stack
 * instances, use <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>.
 *
 * </p
 *
 * During stack set updates, any parameters overridden for a stack instance are not updated, but retain their overridden
 *
 * value>
 *
 * You can only update the parameter <i>values</i> that are specified in the stack set; to add or delete a parameter
 * itself, use <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a> to
 * update the stack set template. If you add a parameter to a template, before you can override the parameter value
 * specified in the stack set you must first use <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a> to
 * update all stack instances with the updated template and parameter value specified in the stack set. Once a stack
 * instance has been updated with the new parameter, you can then override the parameter value using
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStackInstancesResponse * CloudFormationClient::updateStackInstances(const UpdateStackInstancesRequest &request)
{

}

/**
 * Updates the stack set and <i>all</i> associated stack
 *
 * instances>
 *
 * Even if the stack set operation created by updating the stack set fails (completely or partially, below or above a
 * specified failure tolerance), the stack set is updated with your changes. Subsequent <a>CreateStackInstances</a> calls
 * on the specified stack set use the updated stack
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateStackSetResponse * CloudFormationClient::updateStackSet(const UpdateStackSetRequest &request)
{

}

/**
 * Updates termination protection for the specified stack. If a user attempts to delete a stack with termination protection
 * enabled, the operation fails and the stack remains unchanged. For more information, see <a
 * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting a Stack
 * From Being Deleted</a> in the <i>AWS CloudFormation User
 *
 * Guide</i>>
 *
 * For <a href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
 * stacks</a>, termination protection is set on the root stack and cannot be changed directly on the nested
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateTerminationProtectionResponse * CloudFormationClient::updateTerminationProtection(const UpdateTerminationProtectionRequest &request)
{

}

/**
 * Validates a specified template. AWS CloudFormation first checks if the template is valid JSON. If it isn't, AWS
 * CloudFormation checks if the template is valid YAML. If both these checks fail, AWS CloudFormation returns a template
 * validation
 *
 * @param  request Request to send to AWS CloudFormation.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ValidateTemplateResponse * CloudFormationClient::validateTemplate(const ValidateTemplateRequest &request)
{

}

/**
 * @internal
 *
 * @class  CloudFormationClientPrivate
 *
 * @brief  Private implementation for CloudFormationClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudFormationClientPrivate object.
 *
 * @param  q  Pointer to this object's public CloudFormationClient instance.
 */
CloudFormationClientPrivate::CloudFormationClientPrivate(CloudFormationClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CloudFormation
} // namespace AWS

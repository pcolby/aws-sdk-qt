/*
    Copyright 2013-2020 Paul Colby

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

#include "cloudformationclient.h"
#include "cloudformationclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelupdatestackrequest.h"
#include "cancelupdatestackresponse.h"
#include "continueupdaterollbackrequest.h"
#include "continueupdaterollbackresponse.h"
#include "createchangesetrequest.h"
#include "createchangesetresponse.h"
#include "createstackrequest.h"
#include "createstackresponse.h"
#include "createstackinstancesrequest.h"
#include "createstackinstancesresponse.h"
#include "createstacksetrequest.h"
#include "createstacksetresponse.h"
#include "deletechangesetrequest.h"
#include "deletechangesetresponse.h"
#include "deletestackrequest.h"
#include "deletestackresponse.h"
#include "deletestackinstancesrequest.h"
#include "deletestackinstancesresponse.h"
#include "deletestacksetrequest.h"
#include "deletestacksetresponse.h"
#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsresponse.h"
#include "describechangesetrequest.h"
#include "describechangesetresponse.h"
#include "describestackdriftdetectionstatusrequest.h"
#include "describestackdriftdetectionstatusresponse.h"
#include "describestackeventsrequest.h"
#include "describestackeventsresponse.h"
#include "describestackinstancerequest.h"
#include "describestackinstanceresponse.h"
#include "describestackresourcerequest.h"
#include "describestackresourceresponse.h"
#include "describestackresourcedriftsrequest.h"
#include "describestackresourcedriftsresponse.h"
#include "describestackresourcesrequest.h"
#include "describestackresourcesresponse.h"
#include "describestacksetrequest.h"
#include "describestacksetresponse.h"
#include "describestacksetoperationrequest.h"
#include "describestacksetoperationresponse.h"
#include "describestacksrequest.h"
#include "describestacksresponse.h"
#include "detectstackdriftrequest.h"
#include "detectstackdriftresponse.h"
#include "detectstackresourcedriftrequest.h"
#include "detectstackresourcedriftresponse.h"
#include "estimatetemplatecostrequest.h"
#include "estimatetemplatecostresponse.h"
#include "executechangesetrequest.h"
#include "executechangesetresponse.h"
#include "getstackpolicyrequest.h"
#include "getstackpolicyresponse.h"
#include "gettemplaterequest.h"
#include "gettemplateresponse.h"
#include "gettemplatesummaryrequest.h"
#include "gettemplatesummaryresponse.h"
#include "listchangesetsrequest.h"
#include "listchangesetsresponse.h"
#include "listexportsrequest.h"
#include "listexportsresponse.h"
#include "listimportsrequest.h"
#include "listimportsresponse.h"
#include "liststackinstancesrequest.h"
#include "liststackinstancesresponse.h"
#include "liststackresourcesrequest.h"
#include "liststackresourcesresponse.h"
#include "liststacksetoperationresultsrequest.h"
#include "liststacksetoperationresultsresponse.h"
#include "liststacksetoperationsrequest.h"
#include "liststacksetoperationsresponse.h"
#include "liststacksetsrequest.h"
#include "liststacksetsresponse.h"
#include "liststacksrequest.h"
#include "liststacksresponse.h"
#include "setstackpolicyrequest.h"
#include "setstackpolicyresponse.h"
#include "signalresourcerequest.h"
#include "signalresourceresponse.h"
#include "stopstacksetoperationrequest.h"
#include "stopstacksetoperationresponse.h"
#include "updatestackrequest.h"
#include "updatestackresponse.h"
#include "updatestackinstancesrequest.h"
#include "updatestackinstancesresponse.h"
#include "updatestacksetrequest.h"
#include "updatestacksetresponse.h"
#include "updateterminationprotectionrequest.h"
#include "updateterminationprotectionresponse.h"
#include "validatetemplaterequest.h"
#include "validatetemplateresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CloudFormation
 * \brief Contains classess for accessing AWS CloudFormation.
 *
 * \inmodule QtAwsCloudFormation
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::CloudFormationClient
 * \brief The CloudFormationClient class provides access to the AWS CloudFormation service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 */

/*!
 * \brief Constructs a CloudFormationClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CloudFormationClient::CloudFormationClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFormationClientPrivate(this), parent)
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

/*!
 * \overload CloudFormationClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CloudFormationClient::CloudFormationClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CloudFormationClientPrivate(this), parent)
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

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * CancelUpdateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels an update on the specified stack. If the call completes successfully, the stack rolls back the update and
 * reverts to the previous stack
 *
 * configuration> <note>
 *
 * You can cancel only stacks that are in the UPDATE_IN_PROGRESS
 */
CancelUpdateStackResponse * CloudFormationClient::cancelUpdateStack(const CancelUpdateStackRequest &request)
{
    return qobject_cast<CancelUpdateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ContinueUpdateRollbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For a specified stack that is in the <code>UPDATE_ROLLBACK_FAILED</code> state, continues rolling it back to the
 * <code>UPDATE_ROLLBACK_COMPLETE</code> state. Depending on the cause of the failure, you can manually <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
 * fix the error</a> and continue the rollback. By continuing the rollback, you can return your stack to a working state
 * (the <code>UPDATE_ROLLBACK_COMPLETE</code> state), and then try to update the stack
 *
 * again>
 *
 * A stack goes into the <code>UPDATE_ROLLBACK_FAILED</code> state when AWS CloudFormation cannot roll back all changes
 * after a failed stack update. For example, you might have a stack that is rolling back to an old database instance that
 * was deleted outside of AWS CloudFormation. Because AWS CloudFormation doesn't know the database was deleted, it assumes
 * that the database instance still exists and attempts to roll back to it, causing the update rollback to
 */
ContinueUpdateRollbackResponse * CloudFormationClient::continueUpdateRollback(const ContinueUpdateRollbackRequest &request)
{
    return qobject_cast<ContinueUpdateRollbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * CreateChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
CreateChangeSetResponse * CloudFormationClient::createChangeSet(const CreateChangeSetRequest &request)
{
    return qobject_cast<CreateChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * CreateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a stack as specified in the template. After the call completes successfully, the stack creation starts. You can
 * check the status of the stack via the <a>DescribeStacks</a>
 */
CreateStackResponse * CloudFormationClient::createStack(const CreateStackRequest &request)
{
    return qobject_cast<CreateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * CreateStackInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates stack instances for the specified accounts, within the specified regions. A stack instance refers to a stack in
 * a specific account and region. <code>Accounts</code> and <code>Regions</code> are required parameters—you must specify
 * at least one account and one region.
 */
CreateStackInstancesResponse * CloudFormationClient::createStackInstances(const CreateStackInstancesRequest &request)
{
    return qobject_cast<CreateStackInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * CreateStackSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a stack
 */
CreateStackSetResponse * CloudFormationClient::createStackSet(const CreateStackSetRequest &request)
{
    return qobject_cast<CreateStackSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DeleteChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified change set. Deleting change sets ensures that no one executes the wrong change
 *
 * set>
 *
 * If the call successfully completes, AWS CloudFormation successfully deleted the change
 */
DeleteChangeSetResponse * CloudFormationClient::deleteChangeSet(const DeleteChangeSetRequest &request)
{
    return qobject_cast<DeleteChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DeleteStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified stack. Once the call completes successfully, stack deletion starts. Deleted stacks do not show up in
 * the <a>DescribeStacks</a> API if the deletion has been completed
 */
DeleteStackResponse * CloudFormationClient::deleteStack(const DeleteStackRequest &request)
{
    return qobject_cast<DeleteStackResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DeleteStackInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes stack instances for the specified accounts, in the specified regions.
 */
DeleteStackInstancesResponse * CloudFormationClient::deleteStackInstances(const DeleteStackInstancesRequest &request)
{
    return qobject_cast<DeleteStackInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DeleteStackSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a stack set. Before you can delete a stack set, all of its member stack instances must be deleted. For more
 * information about how to do this, see <a>DeleteStackInstances</a>.
 */
DeleteStackSetResponse * CloudFormationClient::deleteStackSet(const DeleteStackSetRequest &request)
{
    return qobject_cast<DeleteStackSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves your account's AWS CloudFormation limits, such as the maximum number of stacks that you can create in your
 * account. For more information about account limits, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">AWS CloudFormation
 * Limits</a> in the <i>AWS CloudFormation User
 */
DescribeAccountLimitsResponse * CloudFormationClient::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    return qobject_cast<DescribeAccountLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the inputs for the change set and a list of changes that AWS CloudFormation will make if you execute the change
 * set. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
 * Stacks Using Change Sets</a> in the AWS CloudFormation User
 */
DescribeChangeSetResponse * CloudFormationClient::describeChangeSet(const DescribeChangeSetRequest &request)
{
    return qobject_cast<DescribeChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackDriftDetectionStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a stack drift detection operation. A stack drift detection operation detects whether a stack's
 * actual configuration differs, or has <i>drifted</i>, from it's expected configuration, as defined in the stack template
 * and any values specified as template parameters. A stack is considered to have drifted if one or more of its resources
 * have drifted. For more information on stack and resource drift, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting Unregulated
 * Configuration Changes to Stacks and
 *
 * Resources</a>>
 *
 * Use <a>DetectStackDrift</a> to initiate a stack drift detection operation. <code>DetectStackDrift</code> returns a
 * <code>StackDriftDetectionId</code> you can use to monitor the progress of the operation using
 * <code>DescribeStackDriftDetectionStatus</code>. Once the drift detection operation has completed, use
 * <a>DescribeStackResourceDrifts</a> to return drift information about the stack and its
 */
DescribeStackDriftDetectionStatusResponse * CloudFormationClient::describeStackDriftDetectionStatus(const DescribeStackDriftDetectionStatusRequest &request)
{
    return qobject_cast<DescribeStackDriftDetectionStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns all stack related events for a specified stack in reverse chronological order. For more information about a
 * stack's event history, go to <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a> in the AWS
 * CloudFormation User
 *
 * Guide> <note>
 *
 * You can list events for stacks that have failed to create or have been deleted by specifying the unique stack identifier
 * (stack
 */
DescribeStackEventsResponse * CloudFormationClient::describeStackEvents(const DescribeStackEventsRequest &request)
{
    return qobject_cast<DescribeStackEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the stack instance that's associated with the specified stack set, AWS account, and
 *
 * region>
 *
 * For a list of stack instances that are associated with a specific stack set, use
 */
DescribeStackInstanceResponse * CloudFormationClient::describeStackInstance(const DescribeStackInstanceRequest &request)
{
    return qobject_cast<DescribeStackInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a description of the specified resource in the specified
 *
 * stack>
 *
 * For deleted stacks, DescribeStackResource returns resource information for up to 90 days after the stack has been
 */
DescribeStackResourceResponse * CloudFormationClient::describeStackResource(const DescribeStackResourceRequest &request)
{
    return qobject_cast<DescribeStackResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackResourceDriftsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns drift information for the resources that have been checked for drift in the specified stack. This includes
 * actual and expected configuration values for resources where AWS CloudFormation detects configuration
 *
 * drift>
 *
 * For a given stack, there will be one <code>StackResourceDrift</code> for each stack resource that has been checked for
 * drift. Resources that have not yet been checked for drift are not included. Resources that do not currently support
 * drift detection are not checked, and so not included. For a list of resources that support drift detection, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
 * that Support Drift
 *
 * Detection</a>>
 *
 * Use <a>DetectStackResourceDrift</a> to detect drift on individual resources, or <a>DetectStackDrift</a> to detect drift
 * on all supported resources for a given
 */
DescribeStackResourceDriftsResponse * CloudFormationClient::describeStackResourceDrifts(const DescribeStackResourceDriftsRequest &request)
{
    return qobject_cast<DescribeStackResourceDriftsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">AWS CloudFormation User
 *
 * Guide</a>> <note>
 *
 * A <code>ValidationError</code> is returned if you specify both <code>StackName</code> and
 * <code>PhysicalResourceId</code> in the same
 */
DescribeStackResourcesResponse * CloudFormationClient::describeStackResources(const DescribeStackResourcesRequest &request)
{
    return qobject_cast<DescribeStackResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of the specified stack set.
 */
DescribeStackSetResponse * CloudFormationClient::describeStackSet(const DescribeStackSetRequest &request)
{
    return qobject_cast<DescribeStackSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStackSetOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description of the specified stack set operation.
 */
DescribeStackSetOperationResponse * CloudFormationClient::describeStackSetOperation(const DescribeStackSetOperationRequest &request)
{
    return qobject_cast<DescribeStackSetOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the description for the specified stack; if no stack name was specified, then it returns the description for all
 * the stacks
 *
 * created> <note>
 *
 * If the stack does not exist, an <code>AmazonCloudFormationException</code> is
 */
DescribeStacksResponse * CloudFormationClient::describeStacks(const DescribeStacksRequest &request)
{
    return qobject_cast<DescribeStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DetectStackDriftResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects whether a stack's actual configuration differs, or has <i>drifted</i>, from it's expected configuration, as
 * defined in the stack template and any values specified as template parameters. For each resource in the stack that
 * supports drift detection, AWS CloudFormation compares the actual configuration of the resource with its expected
 * template configuration. Only resource properties explicitly defined in the stack template are checked for drift. A stack
 * is considered to have drifted if one or more of its resources differ from their expected template configurations. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting Unregulated
 * Configuration Changes to Stacks and
 *
 * Resources</a>>
 *
 * Use <code>DetectStackDrift</code> to detect drift on all supported resources for a given stack, or
 * <a>DetectStackResourceDrift</a> to detect drift on individual
 *
 * resources>
 *
 * For a list of stack resources that currently support drift detection, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
 * that Support Drift
 *
 * Detection</a>>
 *
 * <code>DetectStackDrift</code> can take up to several minutes, depending on the number of resources contained within the
 * stack. Use <a>DescribeStackDriftDetectionStatus</a> to monitor the progress of a detect stack drift operation. Once the
 * drift detection operation has completed, use <a>DescribeStackResourceDrifts</a> to return drift information about the
 * stack and its
 *
 * resources>
 *
 * When detecting drift on a stack, AWS CloudFormation does not detect drift on any nested stacks belonging to that stack.
 * Perform <code>DetectStackDrift</code> directly on the nested stack
 */
DetectStackDriftResponse * CloudFormationClient::detectStackDrift(const DetectStackDriftRequest &request)
{
    return qobject_cast<DetectStackDriftResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DetectStackResourceDriftResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about whether a resource's actual configuration differs, or has <i>drifted</i>, from it's expected
 * configuration, as defined in the stack template and any values specified as template parameters. This information
 * includes actual and expected property values for resources in which AWS CloudFormation detects drift. Only resource
 * properties explicitly defined in the stack template are checked for drift. For more information about stack and resource
 * drift, see <a href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift.html">Detecting
 * Unregulated Configuration Changes to Stacks and
 *
 * Resources</a>>
 *
 * Use <code>DetectStackResourceDrift</code> to detect drift on individual resources, or <a>DetectStackDrift</a> to detect
 * drift on all resources in a given stack that support drift
 *
 * detection>
 *
 * Resources that do not currently support drift detection cannot be checked. For a list of resources that support drift
 * detection, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
 * that Support Drift
 */
DetectStackResourceDriftResponse * CloudFormationClient::detectStackResourceDrift(const DetectStackResourceDriftRequest &request)
{
    return qobject_cast<DetectStackResourceDriftResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * EstimateTemplateCostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the estimated monthly cost of a template. The return value is an AWS Simple Monthly Calculator URL with a query
 * string that describes the resources required to run the
 */
EstimateTemplateCostResponse * CloudFormationClient::estimateTemplateCost(const EstimateTemplateCostRequest &request)
{
    return qobject_cast<EstimateTemplateCostResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ExecuteChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
ExecuteChangeSetResponse * CloudFormationClient::executeChangeSet(const ExecuteChangeSetRequest &request)
{
    return qobject_cast<ExecuteChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * GetStackPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the stack policy for a specified stack. If a stack doesn't have a policy, a null value is
 */
GetStackPolicyResponse * CloudFormationClient::getStackPolicy(const GetStackPolicyRequest &request)
{
    return qobject_cast<GetStackPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * GetTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the template body for a specified stack. You can get the template for running or deleted
 *
 * stacks>
 *
 * For deleted stacks, GetTemplate returns the template for up to 90 days after the stack has been
 *
 * deleted> <note>
 *
 * If the template does not exist, a <code>ValidationError</code> is returned.
 */
GetTemplateResponse * CloudFormationClient::getTemplate(const GetTemplateRequest &request)
{
    return qobject_cast<GetTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * GetTemplateSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
GetTemplateSummaryResponse * CloudFormationClient::getTemplateSummary(const GetTemplateSummaryRequest &request)
{
    return qobject_cast<GetTemplateSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListChangeSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the ID and status of each active change set for a stack. For example, AWS CloudFormation lists change sets that
 * are in the <code>CREATE_IN_PROGRESS</code> or <code>CREATE_PENDING</code>
 */
ListChangeSetsResponse * CloudFormationClient::listChangeSets(const ListChangeSetsRequest &request)
{
    return qobject_cast<ListChangeSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListExportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all exported output values in the account and region in which you call this action. Use this action to see the
 * exported output values that you can import into other stacks. To import values, use the <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
 * <code>Fn::ImportValue</code> </a> function.
 *
 * </p
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html"> AWS CloudFormation
 * Export Stack Output
 */
ListExportsResponse * CloudFormationClient::listExports(const ListExportsRequest &request)
{
    return qobject_cast<ListExportsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListImportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all stacks that are importing an exported output value. To modify or remove an exported output value, first use
 * this action to see which stacks are using it. To see the exported output values in your account, see <a>ListExports</a>.
 *
 * </p
 *
 * For more information about importing an exported output value, see the <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
 * <code>Fn::ImportValue</code> </a> function.
 */
ListImportsResponse * CloudFormationClient::listImports(const ListImportsRequest &request)
{
    return qobject_cast<ListImportsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListStackInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about stack instances that are associated with the specified stack set. You can filter for
 * stack instances that are associated with a specific AWS account name or
 */
ListStackInstancesResponse * CloudFormationClient::listStackInstances(const ListStackInstancesRequest &request)
{
    return qobject_cast<ListStackInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListStackResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns descriptions of all resources of the specified
 *
 * stack>
 *
 * For deleted stacks, ListStackResources returns resource information for up to 90 days after the stack has been
 */
ListStackResourcesResponse * CloudFormationClient::listStackResources(const ListStackResourcesRequest &request)
{
    return qobject_cast<ListStackResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListStackSetOperationResultsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about the results of a stack set operation.
 */
ListStackSetOperationResultsResponse * CloudFormationClient::listStackSetOperationResults(const ListStackSetOperationResultsRequest &request)
{
    return qobject_cast<ListStackSetOperationResultsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListStackSetOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about operations performed on a stack set.
 */
ListStackSetOperationsResponse * CloudFormationClient::listStackSetOperations(const ListStackSetOperationsRequest &request)
{
    return qobject_cast<ListStackSetOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListStackSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about stack sets that are associated with the
 */
ListStackSetsResponse * CloudFormationClient::listStackSets(const ListStackSetsRequest &request)
{
    return qobject_cast<ListStackSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the summary information for stacks whose status matches the specified StackStatusFilter. Summary information for
 * stacks that have been deleted is kept for 90 days after the stack is deleted. If no StackStatusFilter is specified,
 * summary information for all stacks is returned (including existing stacks and stacks that have been
 */
ListStacksResponse * CloudFormationClient::listStacks(const ListStacksRequest &request)
{
    return qobject_cast<ListStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * SetStackPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets a stack policy for a specified
 */
SetStackPolicyResponse * CloudFormationClient::setStackPolicy(const SetStackPolicyRequest &request)
{
    return qobject_cast<SetStackPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * SignalResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a signal to the specified resource with a success or failure status. You can use the SignalResource API in
 * conjunction with a creation policy or update policy. AWS CloudFormation doesn't proceed with a stack creation or update
 * until resources receive the required number of signals or the timeout period is exceeded. The SignalResource API is
 * useful in cases where you want to send signals from anywhere other than an Amazon EC2
 */
SignalResourceResponse * CloudFormationClient::signalResource(const SignalResourceRequest &request)
{
    return qobject_cast<SignalResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * StopStackSetOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops an in-progress operation on a stack set and its associated stack instances.
 */
StopStackSetOperationResponse * CloudFormationClient::stopStackSetOperation(const StopStackSetOperationRequest &request)
{
    return qobject_cast<StopStackSetOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * UpdateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * <a href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks.html">Updating a
 */
UpdateStackResponse * CloudFormationClient::updateStack(const UpdateStackRequest &request)
{
    return qobject_cast<UpdateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * UpdateStackInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the parameter values for stack instances for the specified accounts, within the specified regions. A stack
 * instance refers to a stack in a specific account and region.
 *
 * </p
 *
 * You can only update stack instances in regions and accounts where they already exist; to create additional stack
 * instances, use <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>.
 *
 * </p
 *
 * During stack set updates, any parameters overridden for a stack instance are not updated, but retain their overridden
 *
 * value>
 *
 * You can only update the parameter <i>values</i> that are specified in the stack set; to add or delete a parameter
 * itself, use <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a> to
 * update the stack set template. If you add a parameter to a template, before you can override the parameter value
 * specified in the stack set you must first use <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_UpdateStackSet.html">UpdateStackSet</a> to
 * update all stack instances with the updated template and parameter value specified in the stack set. Once a stack
 * instance has been updated with the new parameter, you can then override the parameter value using
 */
UpdateStackInstancesResponse * CloudFormationClient::updateStackInstances(const UpdateStackInstancesRequest &request)
{
    return qobject_cast<UpdateStackInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * UpdateStackSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the stack set, and associated stack instances in the specified accounts and
 *
 * regions>
 *
 * Even if the stack set operation created by updating the stack set fails (completely or partially, below or above a
 * specified failure tolerance), the stack set is updated with your changes. Subsequent <a>CreateStackInstances</a> calls
 * on the specified stack set use the updated stack
 */
UpdateStackSetResponse * CloudFormationClient::updateStackSet(const UpdateStackSetRequest &request)
{
    return qobject_cast<UpdateStackSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * UpdateTerminationProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates termination protection for the specified stack. If a user attempts to delete a stack with termination protection
 * enabled, the operation fails and the stack remains unchanged. For more information, see <a
 * href="AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting a Stack From Being Deleted</a> in the
 * <i>AWS CloudFormation User
 *
 * Guide</i>>
 *
 * For <a href="AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested stacks</a>, termination protection
 * is set on the root stack and cannot be changed directly on the nested
 */
UpdateTerminationProtectionResponse * CloudFormationClient::updateTerminationProtection(const UpdateTerminationProtectionRequest &request)
{
    return qobject_cast<UpdateTerminationProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ValidateTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Validates a specified template. AWS CloudFormation first checks if the template is valid JSON. If it isn't, AWS
 * CloudFormation checks if the template is valid YAML. If both these checks fail, AWS CloudFormation returns a template
 * validation
 */
ValidateTemplateResponse * CloudFormationClient::validateTemplate(const ValidateTemplateRequest &request)
{
    return qobject_cast<ValidateTemplateResponse *>(send(request));
}

/*!
 * \class QtAws::CloudFormation::CloudFormationClientPrivate
 * \brief The CloudFormationClientPrivate class provides private implementation for CloudFormationClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CloudFormationClientPrivate object with public implementation \a q.
 */
CloudFormationClientPrivate::CloudFormationClientPrivate(CloudFormationClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CloudFormation
} // namespace QtAws

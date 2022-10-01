// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cloudformationclient.h"
#include "cloudformationclient_p.h"

#include "core/awssignaturev4.h"
#include "activatetyperequest.h"
#include "activatetyperesponse.h"
#include "batchdescribetypeconfigurationsrequest.h"
#include "batchdescribetypeconfigurationsresponse.h"
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
#include "deactivatetyperequest.h"
#include "deactivatetyperesponse.h"
#include "deletechangesetrequest.h"
#include "deletechangesetresponse.h"
#include "deletestackrequest.h"
#include "deletestackresponse.h"
#include "deletestackinstancesrequest.h"
#include "deletestackinstancesresponse.h"
#include "deletestacksetrequest.h"
#include "deletestacksetresponse.h"
#include "deregistertyperequest.h"
#include "deregistertyperesponse.h"
#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsresponse.h"
#include "describechangesetrequest.h"
#include "describechangesetresponse.h"
#include "describechangesethooksrequest.h"
#include "describechangesethooksresponse.h"
#include "describepublisherrequest.h"
#include "describepublisherresponse.h"
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
#include "describetyperequest.h"
#include "describetyperesponse.h"
#include "describetyperegistrationrequest.h"
#include "describetyperegistrationresponse.h"
#include "detectstackdriftrequest.h"
#include "detectstackdriftresponse.h"
#include "detectstackresourcedriftrequest.h"
#include "detectstackresourcedriftresponse.h"
#include "detectstacksetdriftrequest.h"
#include "detectstacksetdriftresponse.h"
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
#include "importstackstostacksetrequest.h"
#include "importstackstostacksetresponse.h"
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
#include "listtyperegistrationsrequest.h"
#include "listtyperegistrationsresponse.h"
#include "listtypeversionsrequest.h"
#include "listtypeversionsresponse.h"
#include "listtypesrequest.h"
#include "listtypesresponse.h"
#include "publishtyperequest.h"
#include "publishtyperesponse.h"
#include "recordhandlerprogressrequest.h"
#include "recordhandlerprogressresponse.h"
#include "registerpublisherrequest.h"
#include "registerpublisherresponse.h"
#include "registertyperequest.h"
#include "registertyperesponse.h"
#include "rollbackstackrequest.h"
#include "rollbackstackresponse.h"
#include "setstackpolicyrequest.h"
#include "setstackpolicyresponse.h"
#include "settypeconfigurationrequest.h"
#include "settypeconfigurationresponse.h"
#include "settypedefaultversionrequest.h"
#include "settypedefaultversionresponse.h"
#include "signalresourcerequest.h"
#include "signalresourceresponse.h"
#include "stopstacksetoperationrequest.h"
#include "stopstacksetoperationresponse.h"
#include "testtyperequest.h"
#include "testtyperesponse.h"
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
 *  <fullname>CloudFormation</fullname>
 * 
 *  CloudFormation allows you to create and manage Amazon Web Services infrastructure deployments predictably and
 *  repeatedly. You can use CloudFormation to leverage Amazon Web Services products, such as Amazon Elastic Compute Cloud,
 *  Amazon Elastic Block Store, Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly
 *  reliable, highly scalable, cost-effective applications without creating or configuring the underlying Amazon Web
 *  Services
 * 
 *  infrastructure>
 * 
 *  With CloudFormation, you declare all your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. CloudFormation creates and deletes all member resources of the
 *  stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">CloudFormation
 *  product
 * 
 *  page</a>>
 * 
 *  CloudFormation makes use of other Amazon Web Services products. If you need additional technical information about a
 *  specific Amazon Web Services product, you can find the product's technical documentation at <a
 *  href="https://docs.aws.amazon.com/"> <code>docs.aws.amazon.com</code>
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
 * ActivateTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Activates a public third-party extension, making it available for use in stack templates. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-public.html">Using public extensions</a>
 * in the <i>CloudFormation User
 *
 * Guide</i>>
 *
 * Once you have activated a public third-party extension in your account and region, use <a
 * href="AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a> to specify
 * configuration properties for the extension. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
 * extensions at the account level</a> in the <i>CloudFormation User
 */
ActivateTypeResponse * CloudFormationClient::activateType(const ActivateTypeRequest &request)
{
    return qobject_cast<ActivateTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * BatchDescribeTypeConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns configuration data for the specified CloudFormation extensions, from the CloudFormation registry for the account
 * and
 *
 * region>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
 * extensions at the account level</a> in the <i>CloudFormation User
 */
BatchDescribeTypeConfigurationsResponse * CloudFormationClient::batchDescribeTypeConfigurations(const BatchDescribeTypeConfigurationsRequest &request)
{
    return qobject_cast<BatchDescribeTypeConfigurationsResponse *>(send(request));
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
 * You can cancel only stacks that are in the <code>UPDATE_IN_PROGRESS</code>
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
 * For a specified stack that's in the <code>UPDATE_ROLLBACK_FAILED</code> state, continues rolling it back to the
 * <code>UPDATE_ROLLBACK_COMPLETE</code> state. Depending on the cause of the failure, you can manually <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/troubleshooting.html#troubleshooting-errors-update-rollback-failed">
 * fix the error</a> and continue the rollback. By continuing the rollback, you can return your stack to a working state
 * (the <code>UPDATE_ROLLBACK_COMPLETE</code> state), and then try to update the stack
 *
 * again>
 *
 * A stack goes into the <code>UPDATE_ROLLBACK_FAILED</code> state when CloudFormation can't roll back all changes after a
 * failed stack update. For example, you might have a stack that's rolling back to an old database instance that was
 * deleted outside of CloudFormation. Because CloudFormation doesn't know the database was deleted, it assumes that the
 * database instance still exists and attempts to roll back to it, causing the update rollback to
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
 * doesn't exist, the change set shows all of the resources that CloudFormation will create. If you create a change set for
 * an existing stack, CloudFormation compares the stack's information with the information that you submit in the change
 * set and lists the differences. Use change sets to understand which resources CloudFormation will create or change, and
 * how it will change resources in an existing stack, before you create or update a
 *
 * stack>
 *
 * To create a change set for a stack that doesn't exist, for the <code>ChangeSetType</code> parameter, specify
 * <code>CREATE</code>. To create a change set for an existing stack, specify <code>UPDATE</code> for the
 * <code>ChangeSetType</code> parameter. To create a change set for an import operation, specify <code>IMPORT</code> for
 * the <code>ChangeSetType</code> parameter. After the <code>CreateChangeSet</code> call successfully completes,
 * CloudFormation starts creating the change set. To check the status of the change set or to review it, use the
 * <a>DescribeChangeSet</a>
 *
 * action>
 *
 * When you are satisfied with the changes the change set will make, execute the change set by using the
 * <a>ExecuteChangeSet</a> action. CloudFormation doesn't make changes until you execute the change
 *
 * set>
 *
 * To create a change set for the entire stack hierarchy, set <code>IncludeNestedStacks</code> to
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
 * check the status of the stack through the
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
 * Creates stack instances for the specified accounts, within the specified Amazon Web Services Regions. A stack instance
 * refers to a stack in a specific account and Region. You must specify at least one value for either <code>Accounts</code>
 * or <code>DeploymentTargets</code>, and you must specify at least one value for
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
 * DeactivateTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deactivates a public extension that was previously activated in this account and
 *
 * region>
 *
 * Once deactivated, an extension can't be used in any CloudFormation operation. This includes stack update operations
 * where the stack template includes the extension, even if no updates are being made to the extension. In addition,
 * deactivated extensions aren't automatically updated if a new version of the extension is
 */
DeactivateTypeResponse * CloudFormationClient::deactivateType(const DeactivateTypeRequest &request)
{
    return qobject_cast<DeactivateTypeResponse *>(send(request));
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
 * If the call successfully completes, CloudFormation successfully deleted the change
 *
 * set>
 *
 * If <code>IncludeNestedStacks</code> specifies <code>True</code> during the creation of the nested change set, then
 * <code>DeleteChangeSet</code> will delete all change sets that belong to the stacks hierarchy and will also delete all
 * change sets for nested stacks with the status of
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
 * Deletes a specified stack. Once the call completes successfully, stack deletion starts. Deleted stacks don't show up in
 * the <a>DescribeStacks</a> operation if the deletion has been completed
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
 * Deletes stack instances for the specified accounts, in the specified Amazon Web Services
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
 * Deletes a stack set. Before you can delete a stack set, all its member stack instances must be deleted. For more
 * information about how to complete this, see
 */
DeleteStackSetResponse * CloudFormationClient::deleteStackSet(const DeleteStackSetRequest &request)
{
    return qobject_cast<DeleteStackSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DeregisterTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Marks an extension or extension version as <code>DEPRECATED</code> in the CloudFormation registry, removing it from
 * active use. Deprecated extensions or extension versions cannot be used in CloudFormation
 *
 * operations>
 *
 * To deregister an entire extension, you must individually deregister all active versions of that extension. If an
 * extension has only a single active version, deregistering that version results in the extension itself being
 * deregistered and marked as deprecated in the
 *
 * registry>
 *
 * You can't deregister the default version of an extension if there are other active version of that extension. If you do
 * deregister the default version of an extension, the extension type itself is deregistered as well and marked as
 *
 * deprecated>
 *
 * To view the deprecation status of an extension or extension version, use <a
 */
DeregisterTypeResponse * CloudFormationClient::deregisterType(const DeregisterTypeRequest &request)
{
    return qobject_cast<DeregisterTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves your account's CloudFormation limits, such as the maximum number of stacks that you can create in your
 * account. For more information about account limits, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/cloudformation-limits.html">CloudFormation
 * Quotas</a> in the <i>CloudFormation User
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
 * Returns the inputs for the change set and a list of changes that CloudFormation will make if you execute the change set.
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-changesets.html">Updating
 * Stacks Using Change Sets</a> in the CloudFormation User
 */
DescribeChangeSetResponse * CloudFormationClient::describeChangeSet(const DescribeChangeSetRequest &request)
{
    return qobject_cast<DescribeChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeChangeSetHooksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns hook-related information for the change set and a list of changes that CloudFormation makes when you run the
 * change
 */
DescribeChangeSetHooksResponse * CloudFormationClient::describeChangeSetHooks(const DescribeChangeSetHooksRequest &request)
{
    return qobject_cast<DescribeChangeSetHooksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribePublisherResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a CloudFormation extension
 *
 * publisher>
 *
 * If you don't supply a <code>PublisherId</code>, and you have registered as an extension publisher,
 * <code>DescribePublisher</code> returns information about your own publisher
 *
 * account>
 *
 * For more information about registering as a publisher,
 *
 * see> <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_RegisterPublisher.html">RegisterPublisher</a>
 *
 * </p </li> <li>
 *
 * <a href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Publishing extensions
 * to make them available for public use</a> in the <i>CloudFormation CLI User Guide</i>
 */
DescribePublisherResponse * CloudFormationClient::describePublisher(const DescribePublisherRequest &request)
{
    return qobject_cast<DescribePublisherResponse *>(send(request));
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
 * have drifted. For more information about stack and resource drift, see <a
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
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/concept-stack.html">Stacks</a> in the
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
 * Returns the stack instance that's associated with the specified stack set, Amazon Web Services account, and
 *
 * Region>
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
 * actual and expected configuration values for resources where CloudFormation detects configuration
 *
 * drift>
 *
 * For a given stack, there will be one <code>StackResourceDrift</code> for each stack resource that has been checked for
 * drift. Resources that haven't yet been checked for drift aren't included. Resources that don't currently support drift
 * detection aren't checked, and so not included. For a list of resources that support drift detection, see <a
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
 * Returns Amazon Web Services resource descriptions for running and deleted stacks. If <code>StackName</code> is
 * specified, all the associated resources that are part of the stack are returned. If <code>PhysicalResourceId</code> is
 * specified, the associated resources of the stack that the resource belongs to are
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
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/">CloudFormation User
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
 * Returns the description of the specified stack
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
 * Returns the description of the specified stack set
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
 * If the stack doesn't exist, an <code>ValidationError</code> is
 */
DescribeStacksResponse * CloudFormationClient::describeStacks(const DescribeStacksRequest &request)
{
    return qobject_cast<DescribeStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns detailed information about an extension that has been
 *
 * registered>
 *
 * If you specify a <code>VersionId</code>, <code>DescribeType</code> returns information about that specific extension
 * version. Otherwise, it returns information about the default extension
 */
DescribeTypeResponse * CloudFormationClient::describeType(const DescribeTypeRequest &request)
{
    return qobject_cast<DescribeTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DescribeTypeRegistrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about an extension's registration, including its current status and type and version
 *
 * identifiers>
 *
 * When you initiate a registration request using <code> <a>RegisterType</a> </code>, you can then use <code>
 * <a>DescribeTypeRegistration</a> </code> to monitor the progress of that registration
 *
 * request>
 *
 * Once the registration request has completed, use <code> <a>DescribeType</a> </code> to return detailed information about
 * an
 */
DescribeTypeRegistrationResponse * CloudFormationClient::describeTypeRegistration(const DescribeTypeRegistrationRequest &request)
{
    return qobject_cast<DescribeTypeRegistrationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * DetectStackDriftResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detects whether a stack's actual configuration differs, or has <i>drifted</i>, from it's expected configuration, as
 * defined in the stack template and any values specified as template parameters. For each resource in the stack that
 * supports drift detection, CloudFormation compares the actual configuration of the resource with its expected template
 * configuration. Only resource properties explicitly defined in the stack template are checked for drift. A stack is
 * considered to have drifted if one or more of its resources differ from their expected template configurations. For more
 * information, see <a
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
 * When detecting drift on a stack, CloudFormation doesn't detect drift on any nested stacks belonging to that stack.
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
 * includes actual and expected property values for resources in which CloudFormation detects drift. Only resource
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
 * Resources that don't currently support drift detection can't be checked. For a list of resources that support drift
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
 * DetectStackSetDriftResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Detect drift on a stack set. When CloudFormation performs drift detection on a stack set, it performs drift detection on
 * the stack associated with each stack instance in the stack set. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">How CloudFormation performs
 * drift detection on a stack
 *
 * set</a>>
 *
 * <code>DetectStackSetDrift</code> returns the <code>OperationId</code> of the stack set drift detection operation. Use
 * this operation id with <code> <a>DescribeStackSetOperation</a> </code> to monitor the progress of the drift detection
 * operation. The drift detection operation may take some time, depending on the number of stack instances included in the
 * stack set, in addition to the number of resources included in each
 *
 * stack>
 *
 * Once the operation has completed, use the following actions to return drift
 *
 * information> <ul> <li>
 *
 * Use <code> <a>DescribeStackSet</a> </code> to return detailed information about the stack set, including detailed
 * information about the last <i>completed</i> drift operation performed on the stack set. (Information about drift
 * operations that are in progress isn't
 *
 * included.> </li> <li>
 *
 * Use <code> <a>ListStackInstances</a> </code> to return a list of stack instances belonging to the stack set, including
 * the drift status and last drift time checked of each
 *
 * instance> </li> <li>
 *
 * Use <code> <a>DescribeStackInstance</a> </code> to return detailed information about a specific stack instance,
 * including its drift status and last drift time
 *
 * checked> </li> </ul>
 *
 * For more information about performing a drift detection operation on a stack set, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-drift.html">Detecting unmanaged changes
 * in stack
 *
 * sets</a>>
 *
 * You can only run a single drift detection operation on a given stack set at one
 *
 * time>
 *
 * To stop a drift detection stack set operation, use <code> <a>StopStackSetOperation</a>
 */
DetectStackSetDriftResponse * CloudFormationClient::detectStackSetDrift(const DetectStackSetDriftRequest &request)
{
    return qobject_cast<DetectStackSetDriftResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * EstimateTemplateCostResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the estimated monthly cost of a template. The return value is an Amazon Web Services Simple Monthly Calculator
 * URL with a query string that describes the resources required to run the
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
 * successfully completes, CloudFormation starts updating the stack. Use the <a>DescribeStacks</a> action to view the
 * status of the
 *
 * update>
 *
 * When you execute a change set, CloudFormation deletes all other change sets associated with the stack because they
 * aren't valid for the updated
 *
 * stack>
 *
 * If a stack policy is associated with the stack, CloudFormation enforces the policy during the update. You can't specify
 * a temporary stack policy that overrides the current
 *
 * policy>
 *
 * To create a change set for the entire stack hierarchy, <code>IncludeNestedStacks</code> must have been set to
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
 * For deleted stacks, <code>GetTemplate</code> returns the template for up to 90 days after the stack has been
 *
 * deleted> <note>
 *
 * If the template doesn't exist, a <code>ValidationError</code> is
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
 * has been deleted. If the template doesn't exist, a <code>ValidationError</code> is
 */
GetTemplateSummaryResponse * CloudFormationClient::getTemplateSummary(const GetTemplateSummaryRequest &request)
{
    return qobject_cast<GetTemplateSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ImportStacksToStackSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Import existing stacks into a new stack sets. Use the stack import operation to import up to 10 stacks into a new stack
 * set in the same account as the source stack or in a different administrator account and Region, by specifying the stack
 * ID of the stack you intend to
 *
 * import> <note>
 *
 * <code>ImportStacksToStackSet</code> is only supported by self-managed
 */
ImportStacksToStackSetResponse * CloudFormationClient::importStacksToStackSet(const ImportStacksToStackSetRequest &request)
{
    return qobject_cast<ImportStacksToStackSetResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListChangeSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the ID and status of each active change set for a stack. For example, CloudFormation lists change sets that are
 * in the <code>CREATE_IN_PROGRESS</code> or <code>CREATE_PENDING</code>
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
 * Lists all exported output values in the account and Region in which you call this action. Use this action to see the
 * exported output values that you can import into other stacks. To import values, use the <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
 * <code>Fn::ImportValue</code> </a>
 *
 * function>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-exports.html"> CloudFormation
 * export stack output
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
 * this action to see which stacks are using it. To see the exported output values in your account, see
 *
 * <a>ListExports</a>>
 *
 * For more information about importing an exported output value, see the <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/intrinsic-function-reference-importvalue.html">
 * <code>Fn::ImportValue</code> </a>
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
 * stack instances that are associated with a specific Amazon Web Services account name or Region, or that have a specific
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
 * Returns summary information about the results of a stack set
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
 * Returns summary information about operations performed on a stack
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
 *
 * user> <ul> <li>
 *
 * [Self-managed permissions] If you set the <code>CallAs</code> parameter to <code>SELF</code> while signed in to your
 * Amazon Web Services account, <code>ListStackSets</code> returns all self-managed stack sets in your Amazon Web Services
 *
 * account> </li> <li>
 *
 * [Service-managed permissions] If you set the <code>CallAs</code> parameter to <code>SELF</code> while signed in to the
 * organization's management account, <code>ListStackSets</code> returns all stack sets in the management
 *
 * account> </li> <li>
 *
 * [Service-managed permissions] If you set the <code>CallAs</code> parameter to <code>DELEGATED_ADMIN</code> while signed
 * in to your member account, <code>ListStackSets</code> returns all stack sets with service-managed permissions in the
 * management
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
 * ListTypeRegistrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of registration tokens for the specified
 */
ListTypeRegistrationsResponse * CloudFormationClient::listTypeRegistrations(const ListTypeRegistrationsRequest &request)
{
    return qobject_cast<ListTypeRegistrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListTypeVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about the versions of an
 */
ListTypeVersionsResponse * CloudFormationClient::listTypeVersions(const ListTypeVersionsRequest &request)
{
    return qobject_cast<ListTypeVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * ListTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns summary information about extension that have been registered with
 */
ListTypesResponse * CloudFormationClient::listTypes(const ListTypesRequest &request)
{
    return qobject_cast<ListTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * PublishTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes the specified extension to the CloudFormation registry as a public extension in this region. Public extensions
 * are available for use by all CloudFormation users. For more information about publishing extensions, see <a
 * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html">Publishing extensions to
 * make them available for public use</a> in the <i>CloudFormation CLI User
 *
 * Guide</i>>
 *
 * To publish an extension, you must be registered as a publisher with CloudFormation. For more information, see <a
 */
PublishTypeResponse * CloudFormationClient::publishType(const PublishTypeRequest &request)
{
    return qobject_cast<PublishTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * RecordHandlerProgressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Reports progress of a resource handler to
 *
 * CloudFormation>
 *
 * Reserved for use by the <a
 * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/what-is-cloudformation-cli.html">CloudFormation
 * CLI</a>. Don't use this API in your
 */
RecordHandlerProgressResponse * CloudFormationClient::recordHandlerProgress(const RecordHandlerProgressRequest &request)
{
    return qobject_cast<RecordHandlerProgressResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * RegisterPublisherResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers your account as a publisher of public extensions in the CloudFormation registry. Public extensions are
 * available for use by all CloudFormation users. This publisher ID applies to your account in all Amazon Web Services
 *
 * Regions>
 *
 * For information about requirements for registering as a public extension publisher, see <a
 * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html#publish-extension-prereqs">Registering
 * your account to publish CloudFormation extensions</a> in the <i>CloudFormation CLI User
 *
 * Guide</i>>
 */
RegisterPublisherResponse * CloudFormationClient::registerPublisher(const RegisterPublisherRequest &request)
{
    return qobject_cast<RegisterPublisherResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * RegisterTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an extension with the CloudFormation service. Registering an extension makes it available for use in
 * CloudFormation templates in your Amazon Web Services account, and
 *
 * includes> <ul> <li>
 *
 * Validating the extension
 *
 * schema> </li> <li>
 *
 * Determining which handlers, if any, have been specified for the
 *
 * extension> </li> <li>
 *
 * Making the extension available for use in your
 *
 * account> </li> </ul>
 *
 * For more information about how to develop extensions and ready them for registration, see <a
 * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-types.html">Creating Resource
 * Providers</a> in the <i>CloudFormation CLI User
 *
 * Guide</i>>
 *
 * You can have a maximum of 50 resource extension versions registered at a time. This maximum is per account and per
 * region. Use <a href="AWSCloudFormation/latest/APIReference/API_DeregisterType.html">DeregisterType</a> to deregister
 * specific extension versions if
 *
 * necessary>
 *
 * Once you have initiated a registration request using <code> <a>RegisterType</a> </code>, you can use <code>
 * <a>DescribeTypeRegistration</a> </code> to monitor the progress of the registration
 *
 * request>
 *
 * Once you have registered a private extension in your account and region, use <a
 * href="AWSCloudFormation/latest/APIReference/API_SetTypeConfiguration.html">SetTypeConfiguration</a> to specify
 * configuration properties for the extension. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
 * extensions at the account level</a> in the <i>CloudFormation User
 */
RegisterTypeResponse * CloudFormationClient::registerType(const RegisterTypeRequest &request)
{
    return qobject_cast<RegisterTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * RollbackStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When specifying <code>RollbackStack</code>, you preserve the state of previously provisioned resources when an operation
 * fails. You can check the status of the stack through the <a>DescribeStacks</a>
 *
 * operation>
 *
 * Rolls back the specified stack to the last known stable state from <code>CREATE_FAILED</code> or
 * <code>UPDATE_FAILED</code> stack
 *
 * statuses>
 *
 * This operation will delete a stack if it doesn't contain a last known stable state. A last known stable state includes
 * any status in a <code>*_COMPLETE</code>. This includes the following stack
 *
 * statuses> <ul> <li>
 *
 * <code>CREATE_COMPLETE</code>
 *
 * </p </li> <li>
 *
 * <code>UPDATE_COMPLETE</code>
 *
 * </p </li> <li>
 *
 * <code>UPDATE_ROLLBACK_COMPLETE</code>
 *
 * </p </li> <li>
 *
 * <code>IMPORT_COMPLETE</code>
 *
 * </p </li> <li>
 *
 * <code>IMPORT_ROLLBACK_COMPLETE</code>
 */
RollbackStackResponse * CloudFormationClient::rollbackStack(const RollbackStackRequest &request)
{
    return qobject_cast<RollbackStackResponse *>(send(request));
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
 * SetTypeConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies the configuration data for a registered CloudFormation extension, in the given account and
 *
 * region>
 *
 * To view the current configuration data for an extension, refer to the <code>ConfigurationSchema</code> element of <a
 * href="AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a>. For more information, see <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry-register.html#registry-set-configuration">Configuring
 * extensions at the account level</a> in the <i>CloudFormation User
 *
 * Guide</i>> <b>
 *
 * It's strongly recommended that you use dynamic references to restrict sensitive configuration definitions, such as
 * third-party credentials. For more details on dynamic references, see <a href="https://docs.aws.amazon.com/">Using
 * dynamic references to specify template values</a> in the <i>CloudFormation User
 */
SetTypeConfigurationResponse * CloudFormationClient::setTypeConfiguration(const SetTypeConfigurationRequest &request)
{
    return qobject_cast<SetTypeConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * SetTypeDefaultVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specify the default version of an extension. The default version of an extension will be used in CloudFormation
 */
SetTypeDefaultVersionResponse * CloudFormationClient::setTypeDefaultVersion(const SetTypeDefaultVersionRequest &request)
{
    return qobject_cast<SetTypeDefaultVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * SignalResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends a signal to the specified resource with a success or failure status. You can use the <code>SignalResource</code>
 * operation in conjunction with a creation policy or update policy. CloudFormation doesn't proceed with a stack creation
 * or update until resources receive the required number of signals or the timeout period is exceeded. The
 * <code>SignalResource</code> operation is useful in cases where you want to send signals from anywhere other than an
 * Amazon EC2
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
 * Stops an in-progress operation on a stack set and its associated stack instances. StackSets will cancel all the
 * unstarted stack instance deployments and wait for those are in-progress to
 */
StopStackSetOperationResponse * CloudFormationClient::stopStackSetOperation(const StopStackSetOperationRequest &request)
{
    return qobject_cast<StopStackSetOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * TestTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tests a registered extension to make sure it meets all necessary requirements for being published in the CloudFormation
 *
 * registry> <ul> <li>
 *
 * For resource types, this includes passing all contracts tests defined for the
 *
 * type> </li> <li>
 *
 * For modules, this includes determining if the module's model meets all necessary
 *
 * requirements> </li> </ul>
 *
 * For more information, see <a
 * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/publish-extension.html#publish-extension-testing">Testing
 * your public extension prior to publishing</a> in the <i>CloudFormation CLI User
 *
 * Guide</i>>
 *
 * If you don't specify a version, CloudFormation uses the default version of the extension in your account and region for
 *
 * testing>
 *
 * To perform testing, CloudFormation assumes the execution role specified when the type was registered. For more
 * information, see <a
 *
 * href="AWSCloudFormation/latest/APIReference/API_RegisterType.html">RegisterType</a>>
 *
 * Once you've initiated testing on an extension using <code>TestType</code>, you can use <a
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DescribeType.html">DescribeType</a> to
 * monitor the current test status and test status description for the
 *
 * extension>
 *
 * An extension must have a test status of <code>PASSED</code> before it can be published. For more information, see <a
 * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-publish.html">Publishing extensions
 * to make them available for public use</a> in the <i>CloudFormation CLI User
 */
TestTypeResponse * CloudFormationClient::testType(const TestTypeRequest &request)
{
    return qobject_cast<TestTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the CloudFormationClient service, and returns a pointer to an
 * UpdateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a stack as specified in the template. After the call completes successfully, the stack update starts. You can
 * check the status of the stack through the <a>DescribeStacks</a>
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
 * Updates the parameter values for stack instances for the specified accounts, within the specified Amazon Web Services
 * Regions. A stack instance refers to a stack in a specific account and
 *
 * Region>
 *
 * You can only update stack instances in Amazon Web Services Regions and accounts where they already exist; to create
 * additional stack instances, use <a
 *
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CreateStackInstances.html">CreateStackInstances</a>>
 *
 * During stack set updates, any parameters overridden for a stack instance aren't updated, but retain their overridden
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
 * Updates the stack set, and associated stack instances in the specified accounts and Amazon Web Services
 *
 * Regions>
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
 * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-protect-stacks.html">Protecting a Stack
 * From Being Deleted</a> in the <i>CloudFormation User
 *
 * Guide</i>>
 *
 * For <a href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-nested-stacks.html">nested
 * stacks</a>, termination protection is set on the root stack and can't be changed directly on the nested
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
 * Validates a specified template. CloudFormation first checks if the template is valid JSON. If it isn't, CloudFormation
 * checks if the template is valid YAML. If both these checks fail, CloudFormation returns a template validation
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

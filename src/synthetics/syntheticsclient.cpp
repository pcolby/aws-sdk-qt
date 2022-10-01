// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "syntheticsclient.h"
#include "syntheticsclient_p.h"

#include "core/awssignaturev4.h"
#include "associateresourcerequest.h"
#include "associateresourceresponse.h"
#include "createcanaryrequest.h"
#include "createcanaryresponse.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "deletecanaryrequest.h"
#include "deletecanaryresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "describecanariesrequest.h"
#include "describecanariesresponse.h"
#include "describecanarieslastrunrequest.h"
#include "describecanarieslastrunresponse.h"
#include "describeruntimeversionsrequest.h"
#include "describeruntimeversionsresponse.h"
#include "disassociateresourcerequest.h"
#include "disassociateresourceresponse.h"
#include "getcanaryrequest.h"
#include "getcanaryresponse.h"
#include "getcanaryrunsrequest.h"
#include "getcanaryrunsresponse.h"
#include "getgrouprequest.h"
#include "getgroupresponse.h"
#include "listassociatedgroupsrequest.h"
#include "listassociatedgroupsresponse.h"
#include "listgroupresourcesrequest.h"
#include "listgroupresourcesresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startcanaryrequest.h"
#include "startcanaryresponse.h"
#include "stopcanaryrequest.h"
#include "stopcanaryresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatecanaryrequest.h"
#include "updatecanaryresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Synthetics
 * \brief Contains classess for accessing Synthetics.
 *
 * \inmodule QtAwsSynthetics
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::SyntheticsClient
 * \brief The SyntheticsClient class provides access to the Synthetics service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 */

/*!
 * \brief Constructs a SyntheticsClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SyntheticsClient::SyntheticsClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SyntheticsClientPrivate(this), parent)
{
    Q_D(SyntheticsClient);
    d->apiVersion = QStringLiteral("2017-10-11");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("synthetics");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Synthetics");
    d->serviceName = QStringLiteral("synthetics");
}

/*!
 * \overload SyntheticsClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SyntheticsClient::SyntheticsClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SyntheticsClientPrivate(this), parent)
{
    Q_D(SyntheticsClient);
    d->apiVersion = QStringLiteral("2017-10-11");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("synthetics");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Synthetics");
    d->serviceName = QStringLiteral("synthetics");
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * AssociateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a canary with a group. Using groups can help you with managing and automating your canaries, and you can also
 * view aggregated run results and statistics for all canaries in a group.
 *
 * </p
 *
 * You must run this operation in the Region where the canary
 */
AssociateResourceResponse * SyntheticsClient::associateResource(const AssociateResourceRequest &request)
{
    return qobject_cast<AssociateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * CreateCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a canary. Canaries are scripts that monitor your endpoints and APIs from the outside-in. Canaries help you check
 * the availability and latency of your web services and troubleshoot anomalies by investigating load time data,
 * screenshots of the UI, logs, and metrics. You can set up a canary to run continuously or just once.
 *
 * </p
 *
 * Do not use <code>CreateCanary</code> to modify an existing canary. Use <a
 * href="https://docs.aws.amazon.com/AmazonSynthetics/latest/APIReference/API_UpdateCanary.html">UpdateCanary</a>
 *
 * instead>
 *
 * To create canaries, you must have the <code>CloudWatchSyntheticsFullAccess</code> policy. If you are creating a new IAM
 * role for the canary, you also need the <code>iam:CreateRole</code>, <code>iam:CreatePolicy</code> and
 * <code>iam:AttachRolePolicy</code> permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Roles">Necessary
 * Roles and
 *
 * Permissions</a>>
 *
 * Do not include secrets or proprietary information in your canary names. The canary name makes up part of the Amazon
 * Resource Name (ARN) for the canary, and the ARN is included in outbound calls over the internet. For more information,
 * see <a href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 * Considerations for Synthetics
 */
CreateCanaryResponse * SyntheticsClient::createCanary(const CreateCanaryRequest &request)
{
    return qobject_cast<CreateCanaryResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a group which you can use to associate canaries with each other, including cross-Region canaries. Using groups
 * can help you with managing and automating your canaries, and you can also view aggregated run results and statistics for
 * all canaries in a group.
 *
 * </p
 *
 * Groups are global resources. When you create a group, it is replicated across Amazon Web Services Regions, and you can
 * view it and add canaries to it from any Region. Although the group ARN format reflects the Region name where it was
 * created, a group is not constrained to any Region. This means that you can put canaries from multiple Regions into the
 * same group, and then use that group to view and manage all of those canaries in a single
 *
 * view>
 *
 * Groups are supported in all Regions except the Regions that are disabled by default. For more information about these
 * Regions, see <a href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">Enabling a
 *
 * Region</a>>
 *
 * Each group can contain as many as 10 canaries. You can have as many as 20 groups in your account. Any single canary can
 * be a member of up to 10
 */
CreateGroupResponse * SyntheticsClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * DeleteCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified
 *
 * canary>
 *
 * If you specify <code>DeleteLambda</code> to <code>true</code>, CloudWatch Synthetics also deletes the Lambda functions
 * and layers that are used by the
 *
 * canary>
 *
 * Other resources used and created by the canary are not automatically deleted. After you delete a canary that you do not
 * intend to use again, you should also delete the
 *
 * following> <ul> <li>
 *
 * The CloudWatch alarms created for this canary. These alarms have a name of
 * <code>Synthetics-SharpDrop-Alarm-<i>MyCanaryName</i>
 *
 * </code>> </li> <li>
 *
 * Amazon S3 objects and buckets, such as the canary's artifact
 *
 * location> </li> <li>
 *
 * IAM roles created for the canary. If they were created in the console, these roles have the name <code>
 * role/service-role/CloudWatchSyntheticsRole-<i>MyCanaryName</i>
 *
 * </code>> </li> <li>
 *
 * CloudWatch Logs log groups created for the canary. These logs groups have the name
 * <code>/aws/lambda/cwsyn-<i>MyCanaryName</i> </code>.
 *
 * </p </li> </ul>
 *
 * Before you delete a canary, you might want to use <code>GetCanary</code> to display the information about this canary.
 * Make note of the information returned by this operation so that you can delete these resources after you delete the
 */
DeleteCanaryResponse * SyntheticsClient::deleteCanary(const DeleteCanaryRequest &request)
{
    return qobject_cast<DeleteCanaryResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a group. The group doesn't need to be empty to be deleted. If there are canaries in the group, they are not
 * deleted when you delete the group.
 *
 * </p
 *
 * Groups are a global resource that appear in all Regions, but the request to delete a group must be made from its home
 * Region. You can find the home Region of a group within its
 */
DeleteGroupResponse * SyntheticsClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * DescribeCanariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns a list of the canaries in your account, along with full details about each
 *
 * canary>
 *
 * This operation supports resource-level authorization using an IAM policy and the <code>Names</code> parameter. If you
 * specify the <code>Names</code> parameter, the operation is successful only if you have authorization to view all the
 * canaries that you specify in your request. If you do not have permission to view any of the canaries, the request fails
 * with a 403
 *
 * response>
 *
 * You are required to use the <code>Names</code> parameter if you are logged on to a user or role that has an IAM policy
 * that restricts which canaries that you are allowed to view. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
 * Limiting a user to viewing specific
 */
DescribeCanariesResponse * SyntheticsClient::describeCanaries(const DescribeCanariesRequest &request)
{
    return qobject_cast<DescribeCanariesResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * DescribeCanariesLastRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to see information from the most recent run of each canary that you have
 *
 * created>
 *
 * This operation supports resource-level authorization using an IAM policy and the <code>Names</code> parameter. If you
 * specify the <code>Names</code> parameter, the operation is successful only if you have authorization to view all the
 * canaries that you specify in your request. If you do not have permission to view any of the canaries, the request fails
 * with a 403
 *
 * response>
 *
 * You are required to use the <code>Names</code> parameter if you are logged on to a user or role that has an IAM policy
 * that restricts which canaries that you are allowed to view. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Restricted.html">
 * Limiting a user to viewing specific
 */
DescribeCanariesLastRunResponse * SyntheticsClient::describeCanariesLastRun(const DescribeCanariesLastRunRequest &request)
{
    return qobject_cast<DescribeCanariesLastRunResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * DescribeRuntimeVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of Synthetics canary runtime versions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_Canaries_Library.html">
 * Canary Runtime
 */
DescribeRuntimeVersionsResponse * SyntheticsClient::describeRuntimeVersions(const DescribeRuntimeVersionsRequest &request)
{
    return qobject_cast<DescribeRuntimeVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * DisassociateResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a canary from a group. You must run this operation in the Region where the canary
 */
DisassociateResourceResponse * SyntheticsClient::disassociateResource(const DisassociateResourceRequest &request)
{
    return qobject_cast<DisassociateResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * GetCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves complete information about one canary. You must specify the name of the canary that you want. To get a list of
 * canaries and their names, use <a
 */
GetCanaryResponse * SyntheticsClient::getCanary(const GetCanaryRequest &request)
{
    return qobject_cast<GetCanaryResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * GetCanaryRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of runs for a specified
 */
GetCanaryRunsResponse * SyntheticsClient::getCanaryRuns(const GetCanaryRunsRequest &request)
{
    return qobject_cast<GetCanaryRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * GetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about one group. Groups are a global resource, so you can use this operation from any
 */
GetGroupResponse * SyntheticsClient::getGroup(const GetGroupRequest &request)
{
    return qobject_cast<GetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * ListAssociatedGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the groups that the specified canary is associated with. The canary that you specify must be in the
 * current
 */
ListAssociatedGroupsResponse * SyntheticsClient::listAssociatedGroups(const ListAssociatedGroupsRequest &request)
{
    return qobject_cast<ListAssociatedGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * ListGroupResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns a list of the ARNs of the canaries that are associated with the specified
 */
ListGroupResourcesResponse * SyntheticsClient::listGroupResources(const ListGroupResourcesRequest &request)
{
    return qobject_cast<ListGroupResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all groups in the account, displaying their names, unique IDs, and ARNs. The groups from all Regions
 * are
 */
ListGroupsResponse * SyntheticsClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with a canary or
 */
ListTagsForResourceResponse * SyntheticsClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * StartCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use this operation to run a canary that has already been created. The frequency of the canary runs is determined by the
 * value of the canary's <code>Schedule</code>. To see a canary's schedule, use <a
 */
StartCanaryResponse * SyntheticsClient::startCanary(const StartCanaryRequest &request)
{
    return qobject_cast<StartCanaryResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * StopCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the canary to prevent all future runs. If the canary is currently running,the run that is in progress completes on
 * its own, publishes metrics, and uploads artifacts, but it is not recorded in Synthetics as a completed
 *
 * run>
 *
 * You can use <code>StartCanary</code> to start it running again with the canary’s current schedule at any point in the
 * future.
 */
StopCanaryResponse * SyntheticsClient::stopCanary(const StopCanaryRequest &request)
{
    return qobject_cast<StopCanaryResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns one or more tags (key-value pairs) to the specified canary or group.
 *
 * </p
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions, by granting a
 * user permission to access or change only resources with certain tag
 *
 * values>
 *
 * Tags don't have any semantic meaning to Amazon Web Services and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with a resource that already has tags. If you specify a new tag key for
 * the resource, this tag is appended to the list of tags associated with the resource. If you specify a tag key that is
 * already associated with the resource, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a canary or
 */
TagResourceResponse * SyntheticsClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 */
UntagResourceResponse * SyntheticsClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the SyntheticsClient service, and returns a pointer to an
 * UpdateCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of a canary that has already been
 *
 * created>
 *
 * You can't use this operation to update the tags of an existing canary. To change the tags of an existing canary, use <a
 */
UpdateCanaryResponse * SyntheticsClient::updateCanary(const UpdateCanaryRequest &request)
{
    return qobject_cast<UpdateCanaryResponse *>(send(request));
}

/*!
 * \class QtAws::Synthetics::SyntheticsClientPrivate
 * \brief The SyntheticsClientPrivate class provides private implementation for SyntheticsClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a SyntheticsClientPrivate object with public implementation \a q.
 */
SyntheticsClientPrivate::SyntheticsClientPrivate(SyntheticsClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Synthetics
} // namespace QtAws

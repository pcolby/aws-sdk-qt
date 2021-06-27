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

#include "syntheticsclient.h"
#include "syntheticsclient_p.h"

#include "core/awssignaturev4.h"
#include "createcanaryrequest.h"
#include "createcanaryresponse.h"
#include "deletecanaryrequest.h"
#include "deletecanaryresponse.h"
#include "describecanariesrequest.h"
#include "describecanariesresponse.h"
#include "describecanarieslastrunrequest.h"
#include "describecanarieslastrunresponse.h"
#include "describeruntimeversionsrequest.h"
#include "describeruntimeversionsresponse.h"
#include "getcanaryrequest.h"
#include "getcanaryresponse.h"
#include "getcanaryrunsrequest.h"
#include "getcanaryrunsresponse.h"
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-10-11"),
    QStringLiteral("synthetics"),
    QStringLiteral("Synthetics"),
    QStringLiteral("synthetics"),
    parent), d_ptr(new SyntheticsClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2017-10-11"),
    QStringLiteral("synthetics"),
    QStringLiteral("Synthetics"),
    QStringLiteral("synthetics"),
    parent), d_ptr(new SyntheticsClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * role for the canary, you also need the the <code>iam:CreateRole</code>, <code>iam:CreatePolicy</code> and
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
 * DeleteCanaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Permanently deletes the specified
 *
 * canary>
 *
 * When you delete a canary, resources used and created by the canary are not automatically deleted. After you delete a
 * canary that you do not intend to use again, you should also delete the
 *
 * following> <ul> <li>
 *
 * The Lambda functions and layers used by this canary. These have the prefix <code>cwsyn-<i>MyCanaryName</i>
 *
 * </code>> </li> <li>
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
 * DescribeCanariesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation returns a list of the canaries in your account, along with full details about each
 *
 * canary>
 *
 * This operation does not have resource-level authorization, so if a user is able to use <code>DescribeCanaries</code>,
 * the user can see all of the canaries in the account. A deny policy can only be used to restrict access to all canaries.
 * It cannot be used on specific resources.
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
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Displays the tags associated with a
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
 * Stops the canary to prevent all future runs. If the canary is currently running, Synthetics stops waiting for the
 * current run of the specified canary to complete. The run that is in progress completes on its own, publishes metrics,
 * and uploads artifacts, but it is not recorded in Synthetics as a completed
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
 * Assigns one or more tags (key-value pairs) to the specified canary.
 *
 * </p
 *
 * Tags can help you organize and categorize your resources. You can also use them to scope user permissions, by granting a
 * user permission to access or change only resources with certain tag
 *
 * values>
 *
 * Tags don't have any semantic meaning to AWS and are interpreted strictly as strings of
 *
 * characters>
 *
 * You can use the <code>TagResource</code> action with a canary that already has tags. If you specify a new tag key for
 * the alarm, this tag is appended to the list of tags associated with the alarm. If you specify a tag key that is already
 * associated with the alarm, the new tag value that you specify replaces the previous value for that
 *
 * tag>
 *
 * You can associate as many as 50 tags with a
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
 * Use this operation to change the settings of a canary that has already been
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
SyntheticsClientPrivate::SyntheticsClientPrivate(SyntheticsClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Synthetics
} // namespace QtAws

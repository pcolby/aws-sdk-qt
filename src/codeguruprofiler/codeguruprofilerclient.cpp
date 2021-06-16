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

#include "codeguruprofilerclient.h"
#include "codeguruprofilerclient_p.h"

#include "core/awssignaturev4.h"
#include "addnotificationchannelsrequest.h"
#include "addnotificationchannelsresponse.h"
#include "batchgetframemetricdatarequest.h"
#include "batchgetframemetricdataresponse.h"
#include "configureagentrequest.h"
#include "configureagentresponse.h"
#include "createprofilinggrouprequest.h"
#include "createprofilinggroupresponse.h"
#include "deleteprofilinggrouprequest.h"
#include "deleteprofilinggroupresponse.h"
#include "describeprofilinggrouprequest.h"
#include "describeprofilinggroupresponse.h"
#include "getfindingsreportaccountsummaryrequest.h"
#include "getfindingsreportaccountsummaryresponse.h"
#include "getnotificationconfigurationrequest.h"
#include "getnotificationconfigurationresponse.h"
#include "getpolicyrequest.h"
#include "getpolicyresponse.h"
#include "getprofilerequest.h"
#include "getprofileresponse.h"
#include "getrecommendationsrequest.h"
#include "getrecommendationsresponse.h"
#include "listfindingsreportsrequest.h"
#include "listfindingsreportsresponse.h"
#include "listprofiletimesrequest.h"
#include "listprofiletimesresponse.h"
#include "listprofilinggroupsrequest.h"
#include "listprofilinggroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "postagentprofilerequest.h"
#include "postagentprofileresponse.h"
#include "putpermissionrequest.h"
#include "putpermissionresponse.h"
#include "removenotificationchannelrequest.h"
#include "removenotificationchannelresponse.h"
#include "removepermissionrequest.h"
#include "removepermissionresponse.h"
#include "submitfeedbackrequest.h"
#include "submitfeedbackresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateprofilinggrouprequest.h"
#include "updateprofilinggroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeGuruProfiler
 * \brief Contains classess for accessing Amazon CodeGuru Profiler.
 *
 * \inmodule QtAwsCodeGuruProfiler
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeGuruProfiler {

/*!
 * \class QtAws::CodeGuruProfiler::CodeGuruProfilerClient
 * \brief The CodeGuruProfilerClient class provides access to the Amazon CodeGuru Profiler service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeGuruProfiler
 *
 *  This section provides documentation for the Amazon CodeGuru Profiler API operations.
 * 
 *  </p
 * 
 *  Amazon CodeGuru Profiler collects runtime performance data from your live applications, and provides recommendations
 *  that can help you fine-tune your application performance. Using machine learning algorithms, CodeGuru Profiler can help
 *  you find your most expensive lines of code and suggest ways you can improve efficiency and remove CPU bottlenecks.
 * 
 *  </p
 * 
 *  Amazon CodeGuru Profiler provides different visualizations of profiling data to help you identify what code is running
 *  on the CPU, see how much time is consumed, and suggest ways to reduce CPU utilization.
 * 
 *  </p <note>
 * 
 *  Amazon CodeGuru Profiler currently supports applications written in all Java virtual machine (JVM) languages and Python.
 *  While CodeGuru Profiler supports both visualizations and recommendations for applications written in Java, it can also
 *  generate visualizations and a subset of recommendations for applications written in other JVM languages and
 * 
 *  Python> </note>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/what-is-codeguru-profiler.html">What is Amazon CodeGuru
 *  Profiler</a> in the <i>Amazon CodeGuru Profiler User Guide</i>.
 */

/*!
 * \brief Constructs a CodeGuruProfilerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeGuruProfilerClient::CodeGuruProfilerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeGuruProfilerClientPrivate(this), parent)
{
    Q_D(CodeGuruProfilerClient);
    d->apiVersion = QStringLiteral("2019-07-18");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codeguru-profiler");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon CodeGuru Profiler");
    d->serviceName = QStringLiteral("codeguru-profiler");
}

/*!
 * \overload CodeGuruProfilerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CodeGuruProfilerClient::CodeGuruProfilerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeGuruProfilerClientPrivate(this), parent)
{
    Q_D(CodeGuruProfilerClient);
    d->apiVersion = QStringLiteral("2019-07-18");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codeguru-profiler");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon CodeGuru Profiler");
    d->serviceName = QStringLiteral("codeguru-profiler");
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * AddNotificationChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Add up to 2 anomaly notifications channels for a profiling
 */
AddNotificationChannelsResponse * CodeGuruProfilerClient::addNotificationChannels(const AddNotificationChannelsRequest &request)
{
    return qobject_cast<AddNotificationChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * BatchGetFrameMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the time series of values for a requested list of frame metrics from a time
 */
BatchGetFrameMetricDataResponse * CodeGuruProfilerClient::batchGetFrameMetricData(const BatchGetFrameMetricDataRequest &request)
{
    return qobject_cast<BatchGetFrameMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * ConfigureAgentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Used by profiler agents to report their current state and to receive remote configuration updates. For example,
 * <code>ConfigureAgent</code> can be used to tell an agent whether to profile or not and for how long to return profiling
 * data.
 */
ConfigureAgentResponse * CodeGuruProfilerClient::configureAgent(const ConfigureAgentRequest &request)
{
    return qobject_cast<ConfigureAgentResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * CreateProfilingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a profiling
 */
CreateProfilingGroupResponse * CodeGuruProfilerClient::createProfilingGroup(const CreateProfilingGroupRequest &request)
{
    return qobject_cast<CreateProfilingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * DeleteProfilingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a profiling
 */
DeleteProfilingGroupResponse * CodeGuruProfilerClient::deleteProfilingGroup(const DeleteProfilingGroupRequest &request)
{
    return qobject_cast<DeleteProfilingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * DescribeProfilingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
 * <code>ProfilingGroupDescription</code> </a> object that contains information about the requested profiling group.
 */
DescribeProfilingGroupResponse * CodeGuruProfilerClient::describeProfilingGroup(const DescribeProfilingGroupRequest &request)
{
    return qobject_cast<DescribeProfilingGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * GetFindingsReportAccountSummaryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_FindingsReportSummary.html">
 * <code>FindingsReportSummary</code> </a> objects that contain analysis results for all profiling groups in your AWS
 * account.
 */
GetFindingsReportAccountSummaryResponse * CodeGuruProfilerClient::getFindingsReportAccountSummary(const GetFindingsReportAccountSummaryRequest &request)
{
    return qobject_cast<GetFindingsReportAccountSummaryResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * GetNotificationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the current configuration for anomaly notifications for a profiling
 */
GetNotificationConfigurationResponse * CodeGuruProfilerClient::getNotificationConfiguration(const GetNotificationConfigurationRequest &request)
{
    return qobject_cast<GetNotificationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * GetPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the JSON-formatted resource-based policy on a profiling group.
 */
GetPolicyResponse * CodeGuruProfilerClient::getPolicy(const GetPolicyRequest &request)
{
    return qobject_cast<GetPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * GetProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the aggregated profile of a profiling group for a specified time range. Amazon CodeGuru Profiler collects posted
 * agent profiles for a profiling group into aggregated profiles.
 *
 * </p <pre><code> &lt;note&gt; &lt;p&gt; Because aggregated profiles expire over time &lt;code&gt;GetProfile&lt;/code&gt;
 * is not idempotent. &lt;/p&gt; &lt;/note&gt; &lt;p&gt; Specify the time range for the requested aggregated profile using
 * 1 or 2 of the following parameters: &lt;code&gt;startTime&lt;/code&gt;, &lt;code&gt;endTime&lt;/code&gt;,
 * &lt;code&gt;period&lt;/code&gt;. The maximum time range allowed is 7 days. If you specify all 3 parameters, an exception
 * is thrown. If you specify only &lt;code&gt;period&lt;/code&gt;, the latest aggregated profile is returned. &lt;/p&gt;
 * &lt;p&gt; Aggregated profiles are available with aggregation periods of 5 minutes, 1 hour, and 1 day, aligned to UTC.
 * The aggregation period of an aggregated profile determines how long it is retained. For more information, see &lt;a
 * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_AggregatedProfileTime.html&quot;&gt;
 * &lt;code&gt;AggregatedProfileTime&lt;/code&gt; &lt;/a&gt;. The aggregated profile's aggregation period determines how
 * long it is retained by CodeGuru Profiler. &lt;/p&gt; &lt;ul&gt; &lt;li&gt; &lt;p&gt; If the aggregation period is 5
 * minutes, the aggregated profile is retained for 15 days. &lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt; If the aggregation
 * period is 1 hour, the aggregated profile is retained for 60 days. &lt;/p&gt; &lt;/li&gt; &lt;li&gt; &lt;p&gt; If the
 * aggregation period is 1 day, the aggregated profile is retained for 3 years. &lt;/p&gt; &lt;/li&gt; &lt;/ul&gt;
 * &lt;p&gt;There are two use cases for calling &lt;code&gt;GetProfile&lt;/code&gt;.&lt;/p&gt; &lt;ol&gt; &lt;li&gt;
 * &lt;p&gt; If you want to return an aggregated profile that already exists, use &lt;a
 * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ListProfileTimes.html&quot;&gt;
 * &lt;code&gt;ListProfileTimes&lt;/code&gt; &lt;/a&gt; to view the time ranges of existing aggregated profiles. Use them
 * in a &lt;code&gt;GetProfile&lt;/code&gt; request to return a specific, existing aggregated profile. &lt;/p&gt;
 * &lt;/li&gt; &lt;li&gt; &lt;p&gt; If you want to return an aggregated profile for a time range that doesn't align with an
 * existing aggregated profile, then CodeGuru Profiler makes a best effort to combine existing aggregated profiles from the
 * requested time range and return them as one aggregated profile. &lt;/p&gt; &lt;p&gt; If aggregated profiles do not exist
 * for the full time range requested, then aggregated profiles for a smaller time range are returned. For example, if the
 * requested time range is from 00:00 to 00:20, and the existing aggregated profiles are from 00:15 and 00:25, then the
 */
GetProfileResponse * CodeGuruProfilerClient::getProfile(const GetProfileRequest &request)
{
    return qobject_cast<GetProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * GetRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Recommendation.html">
 * <code>Recommendation</code> </a> objects that contain recommendations for a profiling group for a given time period. A
 * list of <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_Anomaly.html"> <code>Anomaly</code> </a>
 * objects that contains details about anomalies detected in the profiling group for the same time period is also returned.
 */
GetRecommendationsResponse * CodeGuruProfilerClient::getRecommendations(const GetRecommendationsRequest &request)
{
    return qobject_cast<GetRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * ListFindingsReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the available reports for a given profiling group and time
 */
ListFindingsReportsResponse * CodeGuruProfilerClient::listFindingsReports(const ListFindingsReportsRequest &request)
{
    return qobject_cast<ListFindingsReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * ListProfileTimesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the start times of the available aggregated profiles of a profiling group for an aggregation period within the
 * specified time
 */
ListProfileTimesResponse * CodeGuruProfilerClient::listProfileTimes(const ListProfileTimesRequest &request)
{
    return qobject_cast<ListProfileTimesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * ListProfilingGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of profiling groups. The profiling groups are returned as <a
 * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ProfilingGroupDescription.html">
 * <code>ProfilingGroupDescription</code> </a> objects.
 */
ListProfilingGroupsResponse * CodeGuruProfilerClient::listProfilingGroups(const ListProfilingGroupsRequest &request)
{
    return qobject_cast<ListProfilingGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags that are assigned to a specified resource.
 */
ListTagsForResourceResponse * CodeGuruProfilerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * PostAgentProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Submits profiling data to an aggregated profile of a profiling group. To get an aggregated profile that is created with
 * this profiling data, use <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_GetProfile.html">
 * <code>GetProfile</code> </a>.
 */
PostAgentProfileResponse * CodeGuruProfilerClient::postAgentProfile(const PostAgentProfileRequest &request)
{
    return qobject_cast<PostAgentProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * PutPermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds permissions to a profiling group's resource-based policy that are provided using an action group. If a profiling
 * group doesn't have a resource-based policy, one is created for it using the permissions in the action group and the
 * roles and users in the <code>principals</code> parameter.
 *
 * </p <pre><code> &lt;p&gt; The one supported action group that can be added is &lt;code&gt;agentPermission&lt;/code&gt;
 * which grants &lt;code&gt;ConfigureAgent&lt;/code&gt; and &lt;code&gt;PostAgent&lt;/code&gt; permissions. For more
 * information, see &lt;a
 * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html&quot;&gt;Resource-based
 * policies in CodeGuru Profiler&lt;/a&gt; in the &lt;i&gt;Amazon CodeGuru Profiler User Guide&lt;/i&gt;, &lt;a
 * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html&quot;&gt;
 * &lt;code&gt;ConfigureAgent&lt;/code&gt; &lt;/a&gt;, and &lt;a
 * href=&quot;https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html&quot;&gt;
 * &lt;code&gt;PostAgentProfile&lt;/code&gt; &lt;/a&gt;. &lt;/p&gt; &lt;p&gt; The first time you call
 * &lt;code&gt;PutPermission&lt;/code&gt; on a profiling group, do not specify a &lt;code&gt;revisionId&lt;/code&gt;
 * because it doesn't have a resource-based policy. Subsequent calls must provide a &lt;code&gt;revisionId&lt;/code&gt; to
 * specify which revision of the resource-based policy to add the permissions to. &lt;/p&gt; &lt;p&gt; The response
 */
PutPermissionResponse * CodeGuruProfilerClient::putPermission(const PutPermissionRequest &request)
{
    return qobject_cast<PutPermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * RemoveNotificationChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Remove one anomaly notifications channel for a profiling
 */
RemoveNotificationChannelResponse * CodeGuruProfilerClient::removeNotificationChannel(const RemoveNotificationChannelRequest &request)
{
    return qobject_cast<RemoveNotificationChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * RemovePermissionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes permissions from a profiling group's resource-based policy that are provided using an action group. The one
 * supported action group that can be removed is <code>agentPermission</code> which grants <code>ConfigureAgent</code> and
 * <code>PostAgent</code> permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/codeguru/latest/profiler-ug/resource-based-policies.html">Resource-based policies in
 * CodeGuru Profiler</a> in the <i>Amazon CodeGuru Profiler User Guide</i>, <a
 * href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_ConfigureAgent.html"> <code>ConfigureAgent</code>
 * </a>, and <a href="https://docs.aws.amazon.com/codeguru/latest/profiler-api/API_PostAgentProfile.html">
 * <code>PostAgentProfile</code> </a>.
 */
RemovePermissionResponse * CodeGuruProfilerClient::removePermission(const RemovePermissionRequest &request)
{
    return qobject_cast<RemovePermissionResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * SubmitFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends feedback to CodeGuru Profiler about whether the anomaly detected by the analysis is useful or
 */
SubmitFeedbackResponse * CodeGuruProfilerClient::submitFeedback(const SubmitFeedbackRequest &request)
{
    return qobject_cast<SubmitFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to assign one or more tags to a resource.
 */
TagResourceResponse * CodeGuruProfilerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to remove one or more tags from a resource.
 */
UntagResourceResponse * CodeGuruProfilerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeGuruProfilerClient service, and returns a pointer to an
 * UpdateProfilingGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a profiling
 */
UpdateProfilingGroupResponse * CodeGuruProfilerClient::updateProfilingGroup(const UpdateProfilingGroupRequest &request)
{
    return qobject_cast<UpdateProfilingGroupResponse *>(send(request));
}

/*!
 * \class QtAws::CodeGuruProfiler::CodeGuruProfilerClientPrivate
 * \brief The CodeGuruProfilerClientPrivate class provides private implementation for CodeGuruProfilerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeGuruProfiler
 */

/*!
 * Constructs a CodeGuruProfilerClientPrivate object with public implementation \a q.
 */
CodeGuruProfilerClientPrivate::CodeGuruProfilerClientPrivate(CodeGuruProfilerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeGuruProfiler
} // namespace QtAws

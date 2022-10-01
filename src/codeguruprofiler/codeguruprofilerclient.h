// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUPROFILERCLIENT_H
#define QTAWS_CODEGURUPROFILERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodeguruprofilerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CodeGuruProfiler {

class CodeGuruProfilerClientPrivate;
class AddNotificationChannelsRequest;
class AddNotificationChannelsResponse;
class BatchGetFrameMetricDataRequest;
class BatchGetFrameMetricDataResponse;
class ConfigureAgentRequest;
class ConfigureAgentResponse;
class CreateProfilingGroupRequest;
class CreateProfilingGroupResponse;
class DeleteProfilingGroupRequest;
class DeleteProfilingGroupResponse;
class DescribeProfilingGroupRequest;
class DescribeProfilingGroupResponse;
class GetFindingsReportAccountSummaryRequest;
class GetFindingsReportAccountSummaryResponse;
class GetNotificationConfigurationRequest;
class GetNotificationConfigurationResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class GetProfileRequest;
class GetProfileResponse;
class GetRecommendationsRequest;
class GetRecommendationsResponse;
class ListFindingsReportsRequest;
class ListFindingsReportsResponse;
class ListProfileTimesRequest;
class ListProfileTimesResponse;
class ListProfilingGroupsRequest;
class ListProfilingGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PostAgentProfileRequest;
class PostAgentProfileResponse;
class PutPermissionRequest;
class PutPermissionResponse;
class RemoveNotificationChannelRequest;
class RemoveNotificationChannelResponse;
class RemovePermissionRequest;
class RemovePermissionResponse;
class SubmitFeedbackRequest;
class SubmitFeedbackResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateProfilingGroupRequest;
class UpdateProfilingGroupResponse;

class QTAWSCODEGURUPROFILER_EXPORT CodeGuruProfilerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeGuruProfilerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CodeGuruProfilerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddNotificationChannelsResponse * addNotificationChannels(const AddNotificationChannelsRequest &request);
    BatchGetFrameMetricDataResponse * batchGetFrameMetricData(const BatchGetFrameMetricDataRequest &request);
    ConfigureAgentResponse * configureAgent(const ConfigureAgentRequest &request);
    CreateProfilingGroupResponse * createProfilingGroup(const CreateProfilingGroupRequest &request);
    DeleteProfilingGroupResponse * deleteProfilingGroup(const DeleteProfilingGroupRequest &request);
    DescribeProfilingGroupResponse * describeProfilingGroup(const DescribeProfilingGroupRequest &request);
    GetFindingsReportAccountSummaryResponse * getFindingsReportAccountSummary(const GetFindingsReportAccountSummaryRequest &request);
    GetNotificationConfigurationResponse * getNotificationConfiguration(const GetNotificationConfigurationRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetProfileResponse * getProfile(const GetProfileRequest &request);
    GetRecommendationsResponse * getRecommendations(const GetRecommendationsRequest &request);
    ListFindingsReportsResponse * listFindingsReports(const ListFindingsReportsRequest &request);
    ListProfileTimesResponse * listProfileTimes(const ListProfileTimesRequest &request);
    ListProfilingGroupsResponse * listProfilingGroups(const ListProfilingGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PostAgentProfileResponse * postAgentProfile(const PostAgentProfileRequest &request);
    PutPermissionResponse * putPermission(const PutPermissionRequest &request);
    RemoveNotificationChannelResponse * removeNotificationChannel(const RemoveNotificationChannelRequest &request);
    RemovePermissionResponse * removePermission(const RemovePermissionRequest &request);
    SubmitFeedbackResponse * submitFeedback(const SubmitFeedbackRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateProfilingGroupResponse * updateProfilingGroup(const UpdateProfilingGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeGuruProfilerClient)
    Q_DISABLE_COPY(CodeGuruProfilerClient)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif

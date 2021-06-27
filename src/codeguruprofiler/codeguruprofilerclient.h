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

#ifndef QTAWS_CODEGURUPROFILERCLIENT_H
#define QTAWS_CODEGURUPROFILERCLIENT_H

#include "core/awsabstractclient.h"

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

class QTAWS_EXPORT CodeGuruProfilerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeGuruProfilerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeGuruProfilerClient(
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

protected:
    /// @cond internal
    CodeGuruProfilerClientPrivate * const d_ptr; ///< Internal d-pointer.
    CodeGuruProfilerClient(CodeGuruProfilerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CodeGuruProfilerClient)
    Q_DISABLE_COPY(CodeGuruProfilerClient)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif

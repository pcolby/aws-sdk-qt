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

#ifndef QTAWS_PINPOINTCLIENT_H
#define QTAWS_PINPOINTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspinpointglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Pinpoint {

class PinpointClientPrivate;
class CreateAppRequest;
class CreateAppResponse;
class CreateCampaignRequest;
class CreateCampaignResponse;
class CreateEmailTemplateRequest;
class CreateEmailTemplateResponse;
class CreateExportJobRequest;
class CreateExportJobResponse;
class CreateImportJobRequest;
class CreateImportJobResponse;
class CreateInAppTemplateRequest;
class CreateInAppTemplateResponse;
class CreateJourneyRequest;
class CreateJourneyResponse;
class CreatePushTemplateRequest;
class CreatePushTemplateResponse;
class CreateRecommenderConfigurationRequest;
class CreateRecommenderConfigurationResponse;
class CreateSegmentRequest;
class CreateSegmentResponse;
class CreateSmsTemplateRequest;
class CreateSmsTemplateResponse;
class CreateVoiceTemplateRequest;
class CreateVoiceTemplateResponse;
class DeleteAdmChannelRequest;
class DeleteAdmChannelResponse;
class DeleteApnsChannelRequest;
class DeleteApnsChannelResponse;
class DeleteApnsSandboxChannelRequest;
class DeleteApnsSandboxChannelResponse;
class DeleteApnsVoipChannelRequest;
class DeleteApnsVoipChannelResponse;
class DeleteApnsVoipSandboxChannelRequest;
class DeleteApnsVoipSandboxChannelResponse;
class DeleteAppRequest;
class DeleteAppResponse;
class DeleteBaiduChannelRequest;
class DeleteBaiduChannelResponse;
class DeleteCampaignRequest;
class DeleteCampaignResponse;
class DeleteEmailChannelRequest;
class DeleteEmailChannelResponse;
class DeleteEmailTemplateRequest;
class DeleteEmailTemplateResponse;
class DeleteEndpointRequest;
class DeleteEndpointResponse;
class DeleteEventStreamRequest;
class DeleteEventStreamResponse;
class DeleteGcmChannelRequest;
class DeleteGcmChannelResponse;
class DeleteInAppTemplateRequest;
class DeleteInAppTemplateResponse;
class DeleteJourneyRequest;
class DeleteJourneyResponse;
class DeletePushTemplateRequest;
class DeletePushTemplateResponse;
class DeleteRecommenderConfigurationRequest;
class DeleteRecommenderConfigurationResponse;
class DeleteSegmentRequest;
class DeleteSegmentResponse;
class DeleteSmsChannelRequest;
class DeleteSmsChannelResponse;
class DeleteSmsTemplateRequest;
class DeleteSmsTemplateResponse;
class DeleteUserEndpointsRequest;
class DeleteUserEndpointsResponse;
class DeleteVoiceChannelRequest;
class DeleteVoiceChannelResponse;
class DeleteVoiceTemplateRequest;
class DeleteVoiceTemplateResponse;
class GetAdmChannelRequest;
class GetAdmChannelResponse;
class GetApnsChannelRequest;
class GetApnsChannelResponse;
class GetApnsSandboxChannelRequest;
class GetApnsSandboxChannelResponse;
class GetApnsVoipChannelRequest;
class GetApnsVoipChannelResponse;
class GetApnsVoipSandboxChannelRequest;
class GetApnsVoipSandboxChannelResponse;
class GetAppRequest;
class GetAppResponse;
class GetApplicationDateRangeKpiRequest;
class GetApplicationDateRangeKpiResponse;
class GetApplicationSettingsRequest;
class GetApplicationSettingsResponse;
class GetAppsRequest;
class GetAppsResponse;
class GetBaiduChannelRequest;
class GetBaiduChannelResponse;
class GetCampaignRequest;
class GetCampaignResponse;
class GetCampaignActivitiesRequest;
class GetCampaignActivitiesResponse;
class GetCampaignDateRangeKpiRequest;
class GetCampaignDateRangeKpiResponse;
class GetCampaignVersionRequest;
class GetCampaignVersionResponse;
class GetCampaignVersionsRequest;
class GetCampaignVersionsResponse;
class GetCampaignsRequest;
class GetCampaignsResponse;
class GetChannelsRequest;
class GetChannelsResponse;
class GetEmailChannelRequest;
class GetEmailChannelResponse;
class GetEmailTemplateRequest;
class GetEmailTemplateResponse;
class GetEndpointRequest;
class GetEndpointResponse;
class GetEventStreamRequest;
class GetEventStreamResponse;
class GetExportJobRequest;
class GetExportJobResponse;
class GetExportJobsRequest;
class GetExportJobsResponse;
class GetGcmChannelRequest;
class GetGcmChannelResponse;
class GetImportJobRequest;
class GetImportJobResponse;
class GetImportJobsRequest;
class GetImportJobsResponse;
class GetInAppMessagesRequest;
class GetInAppMessagesResponse;
class GetInAppTemplateRequest;
class GetInAppTemplateResponse;
class GetJourneyRequest;
class GetJourneyResponse;
class GetJourneyDateRangeKpiRequest;
class GetJourneyDateRangeKpiResponse;
class GetJourneyExecutionActivityMetricsRequest;
class GetJourneyExecutionActivityMetricsResponse;
class GetJourneyExecutionMetricsRequest;
class GetJourneyExecutionMetricsResponse;
class GetPushTemplateRequest;
class GetPushTemplateResponse;
class GetRecommenderConfigurationRequest;
class GetRecommenderConfigurationResponse;
class GetRecommenderConfigurationsRequest;
class GetRecommenderConfigurationsResponse;
class GetSegmentRequest;
class GetSegmentResponse;
class GetSegmentExportJobsRequest;
class GetSegmentExportJobsResponse;
class GetSegmentImportJobsRequest;
class GetSegmentImportJobsResponse;
class GetSegmentVersionRequest;
class GetSegmentVersionResponse;
class GetSegmentVersionsRequest;
class GetSegmentVersionsResponse;
class GetSegmentsRequest;
class GetSegmentsResponse;
class GetSmsChannelRequest;
class GetSmsChannelResponse;
class GetSmsTemplateRequest;
class GetSmsTemplateResponse;
class GetUserEndpointsRequest;
class GetUserEndpointsResponse;
class GetVoiceChannelRequest;
class GetVoiceChannelResponse;
class GetVoiceTemplateRequest;
class GetVoiceTemplateResponse;
class ListJourneysRequest;
class ListJourneysResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTemplateVersionsRequest;
class ListTemplateVersionsResponse;
class ListTemplatesRequest;
class ListTemplatesResponse;
class PhoneNumberValidateRequest;
class PhoneNumberValidateResponse;
class PutEventStreamRequest;
class PutEventStreamResponse;
class PutEventsRequest;
class PutEventsResponse;
class RemoveAttributesRequest;
class RemoveAttributesResponse;
class SendMessagesRequest;
class SendMessagesResponse;
class SendOTPMessageRequest;
class SendOTPMessageResponse;
class SendUsersMessagesRequest;
class SendUsersMessagesResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAdmChannelRequest;
class UpdateAdmChannelResponse;
class UpdateApnsChannelRequest;
class UpdateApnsChannelResponse;
class UpdateApnsSandboxChannelRequest;
class UpdateApnsSandboxChannelResponse;
class UpdateApnsVoipChannelRequest;
class UpdateApnsVoipChannelResponse;
class UpdateApnsVoipSandboxChannelRequest;
class UpdateApnsVoipSandboxChannelResponse;
class UpdateApplicationSettingsRequest;
class UpdateApplicationSettingsResponse;
class UpdateBaiduChannelRequest;
class UpdateBaiduChannelResponse;
class UpdateCampaignRequest;
class UpdateCampaignResponse;
class UpdateEmailChannelRequest;
class UpdateEmailChannelResponse;
class UpdateEmailTemplateRequest;
class UpdateEmailTemplateResponse;
class UpdateEndpointRequest;
class UpdateEndpointResponse;
class UpdateEndpointsBatchRequest;
class UpdateEndpointsBatchResponse;
class UpdateGcmChannelRequest;
class UpdateGcmChannelResponse;
class UpdateInAppTemplateRequest;
class UpdateInAppTemplateResponse;
class UpdateJourneyRequest;
class UpdateJourneyResponse;
class UpdateJourneyStateRequest;
class UpdateJourneyStateResponse;
class UpdatePushTemplateRequest;
class UpdatePushTemplateResponse;
class UpdateRecommenderConfigurationRequest;
class UpdateRecommenderConfigurationResponse;
class UpdateSegmentRequest;
class UpdateSegmentResponse;
class UpdateSmsChannelRequest;
class UpdateSmsChannelResponse;
class UpdateSmsTemplateRequest;
class UpdateSmsTemplateResponse;
class UpdateTemplateActiveVersionRequest;
class UpdateTemplateActiveVersionResponse;
class UpdateVoiceChannelRequest;
class UpdateVoiceChannelResponse;
class UpdateVoiceTemplateRequest;
class UpdateVoiceTemplateResponse;
class VerifyOTPMessageRequest;
class VerifyOTPMessageResponse;

class QTAWSPINPOINT_EXPORT PinpointClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PinpointClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PinpointClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateCampaignResponse * createCampaign(const CreateCampaignRequest &request);
    CreateEmailTemplateResponse * createEmailTemplate(const CreateEmailTemplateRequest &request);
    CreateExportJobResponse * createExportJob(const CreateExportJobRequest &request);
    CreateImportJobResponse * createImportJob(const CreateImportJobRequest &request);
    CreateInAppTemplateResponse * createInAppTemplate(const CreateInAppTemplateRequest &request);
    CreateJourneyResponse * createJourney(const CreateJourneyRequest &request);
    CreatePushTemplateResponse * createPushTemplate(const CreatePushTemplateRequest &request);
    CreateRecommenderConfigurationResponse * createRecommenderConfiguration(const CreateRecommenderConfigurationRequest &request);
    CreateSegmentResponse * createSegment(const CreateSegmentRequest &request);
    CreateSmsTemplateResponse * createSmsTemplate(const CreateSmsTemplateRequest &request);
    CreateVoiceTemplateResponse * createVoiceTemplate(const CreateVoiceTemplateRequest &request);
    DeleteAdmChannelResponse * deleteAdmChannel(const DeleteAdmChannelRequest &request);
    DeleteApnsChannelResponse * deleteApnsChannel(const DeleteApnsChannelRequest &request);
    DeleteApnsSandboxChannelResponse * deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request);
    DeleteApnsVoipChannelResponse * deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request);
    DeleteApnsVoipSandboxChannelResponse * deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteBaiduChannelResponse * deleteBaiduChannel(const DeleteBaiduChannelRequest &request);
    DeleteCampaignResponse * deleteCampaign(const DeleteCampaignRequest &request);
    DeleteEmailChannelResponse * deleteEmailChannel(const DeleteEmailChannelRequest &request);
    DeleteEmailTemplateResponse * deleteEmailTemplate(const DeleteEmailTemplateRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEventStreamResponse * deleteEventStream(const DeleteEventStreamRequest &request);
    DeleteGcmChannelResponse * deleteGcmChannel(const DeleteGcmChannelRequest &request);
    DeleteInAppTemplateResponse * deleteInAppTemplate(const DeleteInAppTemplateRequest &request);
    DeleteJourneyResponse * deleteJourney(const DeleteJourneyRequest &request);
    DeletePushTemplateResponse * deletePushTemplate(const DeletePushTemplateRequest &request);
    DeleteRecommenderConfigurationResponse * deleteRecommenderConfiguration(const DeleteRecommenderConfigurationRequest &request);
    DeleteSegmentResponse * deleteSegment(const DeleteSegmentRequest &request);
    DeleteSmsChannelResponse * deleteSmsChannel(const DeleteSmsChannelRequest &request);
    DeleteSmsTemplateResponse * deleteSmsTemplate(const DeleteSmsTemplateRequest &request);
    DeleteUserEndpointsResponse * deleteUserEndpoints(const DeleteUserEndpointsRequest &request);
    DeleteVoiceChannelResponse * deleteVoiceChannel(const DeleteVoiceChannelRequest &request);
    DeleteVoiceTemplateResponse * deleteVoiceTemplate(const DeleteVoiceTemplateRequest &request);
    GetAdmChannelResponse * getAdmChannel(const GetAdmChannelRequest &request);
    GetApnsChannelResponse * getApnsChannel(const GetApnsChannelRequest &request);
    GetApnsSandboxChannelResponse * getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request);
    GetApnsVoipChannelResponse * getApnsVoipChannel(const GetApnsVoipChannelRequest &request);
    GetApnsVoipSandboxChannelResponse * getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request);
    GetAppResponse * getApp(const GetAppRequest &request);
    GetApplicationDateRangeKpiResponse * getApplicationDateRangeKpi(const GetApplicationDateRangeKpiRequest &request);
    GetApplicationSettingsResponse * getApplicationSettings(const GetApplicationSettingsRequest &request);
    GetAppsResponse * getApps(const GetAppsRequest &request);
    GetBaiduChannelResponse * getBaiduChannel(const GetBaiduChannelRequest &request);
    GetCampaignResponse * getCampaign(const GetCampaignRequest &request);
    GetCampaignActivitiesResponse * getCampaignActivities(const GetCampaignActivitiesRequest &request);
    GetCampaignDateRangeKpiResponse * getCampaignDateRangeKpi(const GetCampaignDateRangeKpiRequest &request);
    GetCampaignVersionResponse * getCampaignVersion(const GetCampaignVersionRequest &request);
    GetCampaignVersionsResponse * getCampaignVersions(const GetCampaignVersionsRequest &request);
    GetCampaignsResponse * getCampaigns(const GetCampaignsRequest &request);
    GetChannelsResponse * getChannels(const GetChannelsRequest &request);
    GetEmailChannelResponse * getEmailChannel(const GetEmailChannelRequest &request);
    GetEmailTemplateResponse * getEmailTemplate(const GetEmailTemplateRequest &request);
    GetEndpointResponse * getEndpoint(const GetEndpointRequest &request);
    GetEventStreamResponse * getEventStream(const GetEventStreamRequest &request);
    GetExportJobResponse * getExportJob(const GetExportJobRequest &request);
    GetExportJobsResponse * getExportJobs(const GetExportJobsRequest &request);
    GetGcmChannelResponse * getGcmChannel(const GetGcmChannelRequest &request);
    GetImportJobResponse * getImportJob(const GetImportJobRequest &request);
    GetImportJobsResponse * getImportJobs(const GetImportJobsRequest &request);
    GetInAppMessagesResponse * getInAppMessages(const GetInAppMessagesRequest &request);
    GetInAppTemplateResponse * getInAppTemplate(const GetInAppTemplateRequest &request);
    GetJourneyResponse * getJourney(const GetJourneyRequest &request);
    GetJourneyDateRangeKpiResponse * getJourneyDateRangeKpi(const GetJourneyDateRangeKpiRequest &request);
    GetJourneyExecutionActivityMetricsResponse * getJourneyExecutionActivityMetrics(const GetJourneyExecutionActivityMetricsRequest &request);
    GetJourneyExecutionMetricsResponse * getJourneyExecutionMetrics(const GetJourneyExecutionMetricsRequest &request);
    GetPushTemplateResponse * getPushTemplate(const GetPushTemplateRequest &request);
    GetRecommenderConfigurationResponse * getRecommenderConfiguration(const GetRecommenderConfigurationRequest &request);
    GetRecommenderConfigurationsResponse * getRecommenderConfigurations(const GetRecommenderConfigurationsRequest &request);
    GetSegmentResponse * getSegment(const GetSegmentRequest &request);
    GetSegmentExportJobsResponse * getSegmentExportJobs(const GetSegmentExportJobsRequest &request);
    GetSegmentImportJobsResponse * getSegmentImportJobs(const GetSegmentImportJobsRequest &request);
    GetSegmentVersionResponse * getSegmentVersion(const GetSegmentVersionRequest &request);
    GetSegmentVersionsResponse * getSegmentVersions(const GetSegmentVersionsRequest &request);
    GetSegmentsResponse * getSegments(const GetSegmentsRequest &request);
    GetSmsChannelResponse * getSmsChannel(const GetSmsChannelRequest &request);
    GetSmsTemplateResponse * getSmsTemplate(const GetSmsTemplateRequest &request);
    GetUserEndpointsResponse * getUserEndpoints(const GetUserEndpointsRequest &request);
    GetVoiceChannelResponse * getVoiceChannel(const GetVoiceChannelRequest &request);
    GetVoiceTemplateResponse * getVoiceTemplate(const GetVoiceTemplateRequest &request);
    ListJourneysResponse * listJourneys(const ListJourneysRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTemplateVersionsResponse * listTemplateVersions(const ListTemplateVersionsRequest &request);
    ListTemplatesResponse * listTemplates(const ListTemplatesRequest &request);
    PhoneNumberValidateResponse * phoneNumberValidate(const PhoneNumberValidateRequest &request);
    PutEventStreamResponse * putEventStream(const PutEventStreamRequest &request);
    PutEventsResponse * putEvents(const PutEventsRequest &request);
    RemoveAttributesResponse * removeAttributes(const RemoveAttributesRequest &request);
    SendMessagesResponse * sendMessages(const SendMessagesRequest &request);
    SendOTPMessageResponse * sendOTPMessage(const SendOTPMessageRequest &request);
    SendUsersMessagesResponse * sendUsersMessages(const SendUsersMessagesRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAdmChannelResponse * updateAdmChannel(const UpdateAdmChannelRequest &request);
    UpdateApnsChannelResponse * updateApnsChannel(const UpdateApnsChannelRequest &request);
    UpdateApnsSandboxChannelResponse * updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request);
    UpdateApnsVoipChannelResponse * updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request);
    UpdateApnsVoipSandboxChannelResponse * updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request);
    UpdateApplicationSettingsResponse * updateApplicationSettings(const UpdateApplicationSettingsRequest &request);
    UpdateBaiduChannelResponse * updateBaiduChannel(const UpdateBaiduChannelRequest &request);
    UpdateCampaignResponse * updateCampaign(const UpdateCampaignRequest &request);
    UpdateEmailChannelResponse * updateEmailChannel(const UpdateEmailChannelRequest &request);
    UpdateEmailTemplateResponse * updateEmailTemplate(const UpdateEmailTemplateRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);
    UpdateEndpointsBatchResponse * updateEndpointsBatch(const UpdateEndpointsBatchRequest &request);
    UpdateGcmChannelResponse * updateGcmChannel(const UpdateGcmChannelRequest &request);
    UpdateInAppTemplateResponse * updateInAppTemplate(const UpdateInAppTemplateRequest &request);
    UpdateJourneyResponse * updateJourney(const UpdateJourneyRequest &request);
    UpdateJourneyStateResponse * updateJourneyState(const UpdateJourneyStateRequest &request);
    UpdatePushTemplateResponse * updatePushTemplate(const UpdatePushTemplateRequest &request);
    UpdateRecommenderConfigurationResponse * updateRecommenderConfiguration(const UpdateRecommenderConfigurationRequest &request);
    UpdateSegmentResponse * updateSegment(const UpdateSegmentRequest &request);
    UpdateSmsChannelResponse * updateSmsChannel(const UpdateSmsChannelRequest &request);
    UpdateSmsTemplateResponse * updateSmsTemplate(const UpdateSmsTemplateRequest &request);
    UpdateTemplateActiveVersionResponse * updateTemplateActiveVersion(const UpdateTemplateActiveVersionRequest &request);
    UpdateVoiceChannelResponse * updateVoiceChannel(const UpdateVoiceChannelRequest &request);
    UpdateVoiceTemplateResponse * updateVoiceTemplate(const UpdateVoiceTemplateRequest &request);
    VerifyOTPMessageResponse * verifyOTPMessage(const VerifyOTPMessageRequest &request);

private:
    Q_DECLARE_PRIVATE(PinpointClient)
    Q_DISABLE_COPY(PinpointClient)

};

} // namespace Pinpoint
} // namespace QtAws

#endif

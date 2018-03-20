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

#ifndef QTAWS_PINPOINTCLIENT_H
#define QTAWS_PINPOINTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace Pinpoint {

class PinpointClientPrivate;
class CreateAppResponse;
class CreateCampaignResponse;
class CreateExportJobResponse;
class CreateImportJobResponse;
class CreateSegmentResponse;
class DeleteAdmChannelResponse;
class DeleteApnsChannelResponse;
class DeleteApnsSandboxChannelResponse;
class DeleteApnsVoipChannelResponse;
class DeleteApnsVoipSandboxChannelResponse;
class DeleteAppResponse;
class DeleteBaiduChannelResponse;
class DeleteCampaignResponse;
class DeleteEmailChannelResponse;
class DeleteEndpointResponse;
class DeleteEventStreamResponse;
class DeleteGcmChannelResponse;
class DeleteSegmentResponse;
class DeleteSmsChannelResponse;
class GetAdmChannelResponse;
class GetApnsChannelResponse;
class GetApnsSandboxChannelResponse;
class GetApnsVoipChannelResponse;
class GetApnsVoipSandboxChannelResponse;
class GetAppResponse;
class GetApplicationSettingsResponse;
class GetAppsResponse;
class GetBaiduChannelResponse;
class GetCampaignResponse;
class GetCampaignActivitiesResponse;
class GetCampaignVersionResponse;
class GetCampaignVersionsResponse;
class GetCampaignsResponse;
class GetEmailChannelResponse;
class GetEndpointResponse;
class GetEventStreamResponse;
class GetExportJobResponse;
class GetExportJobsResponse;
class GetGcmChannelResponse;
class GetImportJobResponse;
class GetImportJobsResponse;
class GetSegmentResponse;
class GetSegmentExportJobsResponse;
class GetSegmentImportJobsResponse;
class GetSegmentVersionResponse;
class GetSegmentVersionsResponse;
class GetSegmentsResponse;
class GetSmsChannelResponse;
class PutEventStreamResponse;
class SendMessagesResponse;
class SendUsersMessagesResponse;
class UpdateAdmChannelResponse;
class UpdateApnsChannelResponse;
class UpdateApnsSandboxChannelResponse;
class UpdateApnsVoipChannelResponse;
class UpdateApnsVoipSandboxChannelResponse;
class UpdateApplicationSettingsResponse;
class UpdateBaiduChannelResponse;
class UpdateCampaignResponse;
class UpdateEmailChannelResponse;
class UpdateEndpointResponse;
class UpdateEndpointsBatchResponse;
class UpdateGcmChannelResponse;
class UpdateSegmentResponse;
class UpdateSmsChannelResponse;

class QTAWS_EXPORT PinpointClient : public AwsAbstractClient {
    Q_OBJECT

public:
    PinpointClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    PinpointClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAppResponse * createApp(const CreateAppRequest &request);
    CreateCampaignResponse * createCampaign(const CreateCampaignRequest &request);
    CreateExportJobResponse * createExportJob(const CreateExportJobRequest &request);
    CreateImportJobResponse * createImportJob(const CreateImportJobRequest &request);
    CreateSegmentResponse * createSegment(const CreateSegmentRequest &request);
    DeleteAdmChannelResponse * deleteAdmChannel(const DeleteAdmChannelRequest &request);
    DeleteApnsChannelResponse * deleteApnsChannel(const DeleteApnsChannelRequest &request);
    DeleteApnsSandboxChannelResponse * deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request);
    DeleteApnsVoipChannelResponse * deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request);
    DeleteApnsVoipSandboxChannelResponse * deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request);
    DeleteAppResponse * deleteApp(const DeleteAppRequest &request);
    DeleteBaiduChannelResponse * deleteBaiduChannel(const DeleteBaiduChannelRequest &request);
    DeleteCampaignResponse * deleteCampaign(const DeleteCampaignRequest &request);
    DeleteEmailChannelResponse * deleteEmailChannel(const DeleteEmailChannelRequest &request);
    DeleteEndpointResponse * deleteEndpoint(const DeleteEndpointRequest &request);
    DeleteEventStreamResponse * deleteEventStream(const DeleteEventStreamRequest &request);
    DeleteGcmChannelResponse * deleteGcmChannel(const DeleteGcmChannelRequest &request);
    DeleteSegmentResponse * deleteSegment(const DeleteSegmentRequest &request);
    DeleteSmsChannelResponse * deleteSmsChannel(const DeleteSmsChannelRequest &request);
    GetAdmChannelResponse * getAdmChannel(const GetAdmChannelRequest &request);
    GetApnsChannelResponse * getApnsChannel(const GetApnsChannelRequest &request);
    GetApnsSandboxChannelResponse * getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request);
    GetApnsVoipChannelResponse * getApnsVoipChannel(const GetApnsVoipChannelRequest &request);
    GetApnsVoipSandboxChannelResponse * getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request);
    GetAppResponse * getApp(const GetAppRequest &request);
    GetApplicationSettingsResponse * getApplicationSettings(const GetApplicationSettingsRequest &request);
    GetAppsResponse * getApps(const GetAppsRequest &request);
    GetBaiduChannelResponse * getBaiduChannel(const GetBaiduChannelRequest &request);
    GetCampaignResponse * getCampaign(const GetCampaignRequest &request);
    GetCampaignActivitiesResponse * getCampaignActivities(const GetCampaignActivitiesRequest &request);
    GetCampaignVersionResponse * getCampaignVersion(const GetCampaignVersionRequest &request);
    GetCampaignVersionsResponse * getCampaignVersions(const GetCampaignVersionsRequest &request);
    GetCampaignsResponse * getCampaigns(const GetCampaignsRequest &request);
    GetEmailChannelResponse * getEmailChannel(const GetEmailChannelRequest &request);
    GetEndpointResponse * getEndpoint(const GetEndpointRequest &request);
    GetEventStreamResponse * getEventStream(const GetEventStreamRequest &request);
    GetExportJobResponse * getExportJob(const GetExportJobRequest &request);
    GetExportJobsResponse * getExportJobs(const GetExportJobsRequest &request);
    GetGcmChannelResponse * getGcmChannel(const GetGcmChannelRequest &request);
    GetImportJobResponse * getImportJob(const GetImportJobRequest &request);
    GetImportJobsResponse * getImportJobs(const GetImportJobsRequest &request);
    GetSegmentResponse * getSegment(const GetSegmentRequest &request);
    GetSegmentExportJobsResponse * getSegmentExportJobs(const GetSegmentExportJobsRequest &request);
    GetSegmentImportJobsResponse * getSegmentImportJobs(const GetSegmentImportJobsRequest &request);
    GetSegmentVersionResponse * getSegmentVersion(const GetSegmentVersionRequest &request);
    GetSegmentVersionsResponse * getSegmentVersions(const GetSegmentVersionsRequest &request);
    GetSegmentsResponse * getSegments(const GetSegmentsRequest &request);
    GetSmsChannelResponse * getSmsChannel(const GetSmsChannelRequest &request);
    PutEventStreamResponse * putEventStream(const PutEventStreamRequest &request);
    SendMessagesResponse * sendMessages(const SendMessagesRequest &request);
    SendUsersMessagesResponse * sendUsersMessages(const SendUsersMessagesRequest &request);
    UpdateAdmChannelResponse * updateAdmChannel(const UpdateAdmChannelRequest &request);
    UpdateApnsChannelResponse * updateApnsChannel(const UpdateApnsChannelRequest &request);
    UpdateApnsSandboxChannelResponse * updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request);
    UpdateApnsVoipChannelResponse * updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request);
    UpdateApnsVoipSandboxChannelResponse * updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request);
    UpdateApplicationSettingsResponse * updateApplicationSettings(const UpdateApplicationSettingsRequest &request);
    UpdateBaiduChannelResponse * updateBaiduChannel(const UpdateBaiduChannelRequest &request);
    UpdateCampaignResponse * updateCampaign(const UpdateCampaignRequest &request);
    UpdateEmailChannelResponse * updateEmailChannel(const UpdateEmailChannelRequest &request);
    UpdateEndpointResponse * updateEndpoint(const UpdateEndpointRequest &request);
    UpdateEndpointsBatchResponse * updateEndpointsBatch(const UpdateEndpointsBatchRequest &request);
    UpdateGcmChannelResponse * updateGcmChannel(const UpdateGcmChannelRequest &request);
    UpdateSegmentResponse * updateSegment(const UpdateSegmentRequest &request);
    UpdateSmsChannelResponse * updateSmsChannel(const UpdateSmsChannelRequest &request);

private:
    Q_DECLARE_PRIVATE(PinpointClient)
    Q_DISABLE_COPY(PinpointClient)

};

} // namespace Pinpoint
} // namespace AWS

#endif

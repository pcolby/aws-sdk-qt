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

#include "pinpointclient.h"
#include "pinpointclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Pinpoint {

/**
 * @class  PinpointClient
 *
 * @brief  Client for Amazon Pinpoint
 *
 */

/**
 * @brief  Constructs a new PinpointClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
PinpointClient::PinpointClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new PinpointClientPrivate(this), parent)
{
    Q_D(PinpointClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("mobiletargeting");
}

/**
 * @brief  Constructs a new PinpointClient object.
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
PinpointClient::PinpointClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new PinpointClientPrivate(this), parent)
{
    Q_D(PinpointClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("mobiletargeting");
}

/// @todo override getEndpoint() to use pinpoint.

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAppResponse * PinpointClient::createApp(const CreateAppRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateCampaignResponse * PinpointClient::createCampaign(const CreateCampaignRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateExportJobResponse * PinpointClient::createExportJob(const CreateExportJobRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateImportJobResponse * PinpointClient::createImportJob(const CreateImportJobRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSegmentResponse * PinpointClient::createSegment(const CreateSegmentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAdmChannelResponse * PinpointClient::deleteAdmChannel(const DeleteAdmChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsChannelResponse * PinpointClient::deleteApnsChannel(const DeleteApnsChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsSandboxChannelResponse * PinpointClient::deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsVoipChannelResponse * PinpointClient::deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteApnsVoipSandboxChannelResponse * PinpointClient::deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteAppResponse * PinpointClient::deleteApp(const DeleteAppRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBaiduChannelResponse * PinpointClient::deleteBaiduChannel(const DeleteBaiduChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCampaignResponse * PinpointClient::deleteCampaign(const DeleteCampaignRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEmailChannelResponse * PinpointClient::deleteEmailChannel(const DeleteEmailChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEndpointResponse * PinpointClient::deleteEndpoint(const DeleteEndpointRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteEventStreamResponse * PinpointClient::deleteEventStream(const DeleteEventStreamRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteGcmChannelResponse * PinpointClient::deleteGcmChannel(const DeleteGcmChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSegmentResponse * PinpointClient::deleteSegment(const DeleteSegmentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSmsChannelResponse * PinpointClient::deleteSmsChannel(const DeleteSmsChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAdmChannelResponse * PinpointClient::getAdmChannel(const GetAdmChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsChannelResponse * PinpointClient::getApnsChannel(const GetApnsChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsSandboxChannelResponse * PinpointClient::getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsVoipChannelResponse * PinpointClient::getApnsVoipChannel(const GetApnsVoipChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApnsVoipSandboxChannelResponse * PinpointClient::getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAppResponse * PinpointClient::getApp(const GetAppRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetApplicationSettingsResponse * PinpointClient::getApplicationSettings(const GetApplicationSettingsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetAppsResponse * PinpointClient::getApps(const GetAppsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBaiduChannelResponse * PinpointClient::getBaiduChannel(const GetBaiduChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignResponse * PinpointClient::getCampaign(const GetCampaignRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignActivitiesResponse * PinpointClient::getCampaignActivities(const GetCampaignActivitiesRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignVersionResponse * PinpointClient::getCampaignVersion(const GetCampaignVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignVersionsResponse * PinpointClient::getCampaignVersions(const GetCampaignVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCampaignsResponse * PinpointClient::getCampaigns(const GetCampaignsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEmailChannelResponse * PinpointClient::getEmailChannel(const GetEmailChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEndpointResponse * PinpointClient::getEndpoint(const GetEndpointRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetEventStreamResponse * PinpointClient::getEventStream(const GetEventStreamRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetExportJobResponse * PinpointClient::getExportJob(const GetExportJobRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetExportJobsResponse * PinpointClient::getExportJobs(const GetExportJobsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetGcmChannelResponse * PinpointClient::getGcmChannel(const GetGcmChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetImportJobResponse * PinpointClient::getImportJob(const GetImportJobRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetImportJobsResponse * PinpointClient::getImportJobs(const GetImportJobsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentResponse * PinpointClient::getSegment(const GetSegmentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentExportJobsResponse * PinpointClient::getSegmentExportJobs(const GetSegmentExportJobsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentImportJobsResponse * PinpointClient::getSegmentImportJobs(const GetSegmentImportJobsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentVersionResponse * PinpointClient::getSegmentVersion(const GetSegmentVersionRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentVersionsResponse * PinpointClient::getSegmentVersions(const GetSegmentVersionsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSegmentsResponse * PinpointClient::getSegments(const GetSegmentsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSmsChannelResponse * PinpointClient::getSmsChannel(const GetSmsChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutEventStreamResponse * PinpointClient::putEventStream(const PutEventStreamRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendMessagesResponse * PinpointClient::sendMessages(const SendMessagesRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendUsersMessagesResponse * PinpointClient::sendUsersMessages(const SendUsersMessagesRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateAdmChannelResponse * PinpointClient::updateAdmChannel(const UpdateAdmChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsChannelResponse * PinpointClient::updateApnsChannel(const UpdateApnsChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsSandboxChannelResponse * PinpointClient::updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsVoipChannelResponse * PinpointClient::updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApnsVoipSandboxChannelResponse * PinpointClient::updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateApplicationSettingsResponse * PinpointClient::updateApplicationSettings(const UpdateApplicationSettingsRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateBaiduChannelResponse * PinpointClient::updateBaiduChannel(const UpdateBaiduChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateCampaignResponse * PinpointClient::updateCampaign(const UpdateCampaignRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEmailChannelResponse * PinpointClient::updateEmailChannel(const UpdateEmailChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEndpointResponse * PinpointClient::updateEndpoint(const UpdateEndpointRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateEndpointsBatchResponse * PinpointClient::updateEndpointsBatch(const UpdateEndpointsBatchRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateGcmChannelResponse * PinpointClient::updateGcmChannel(const UpdateGcmChannelRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSegmentResponse * PinpointClient::updateSegment(const UpdateSegmentRequest &request)
{

}

/**
 *
 * @param  request Request to send to Amazon Pinpoint.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSmsChannelResponse * PinpointClient::updateSmsChannel(const UpdateSmsChannelRequest &request)
{

}

/**
 * @internal
 *
 * @class  PinpointClientPrivate
 *
 * @brief  Private implementation for PinpointClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PinpointClientPrivate object.
 *
 * @param  q  Pointer to this object's public PinpointClient instance.
 */
PinpointClientPrivate::PinpointClientPrivate(PinpointClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Pinpoint
} // namespace AWS

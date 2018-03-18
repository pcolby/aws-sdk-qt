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
    d->serviceName = QLatin1String("{{servicename}}");
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
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 */
CreateAppResponse * PinpointClient::createApp(const CreateAppRequest &request)
{

}

/**
 */
CreateCampaignResponse * PinpointClient::createCampaign(const CreateCampaignRequest &request)
{

}

/**
 */
CreateExportJobResponse * PinpointClient::createExportJob(const CreateExportJobRequest &request)
{

}

/**
 */
CreateImportJobResponse * PinpointClient::createImportJob(const CreateImportJobRequest &request)
{

}

/**
 */
CreateSegmentResponse * PinpointClient::createSegment(const CreateSegmentRequest &request)
{

}

/**
 */
DeleteAdmChannelResponse * PinpointClient::deleteAdmChannel(const DeleteAdmChannelRequest &request)
{

}

/**
 */
DeleteApnsChannelResponse * PinpointClient::deleteApnsChannel(const DeleteApnsChannelRequest &request)
{

}

/**
 */
DeleteApnsSandboxChannelResponse * PinpointClient::deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request)
{

}

/**
 */
DeleteApnsVoipChannelResponse * PinpointClient::deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request)
{

}

/**
 */
DeleteApnsVoipSandboxChannelResponse * PinpointClient::deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request)
{

}

/**
 */
DeleteAppResponse * PinpointClient::deleteApp(const DeleteAppRequest &request)
{

}

/**
 */
DeleteBaiduChannelResponse * PinpointClient::deleteBaiduChannel(const DeleteBaiduChannelRequest &request)
{

}

/**
 */
DeleteCampaignResponse * PinpointClient::deleteCampaign(const DeleteCampaignRequest &request)
{

}

/**
 */
DeleteEmailChannelResponse * PinpointClient::deleteEmailChannel(const DeleteEmailChannelRequest &request)
{

}

/**
 */
DeleteEndpointResponse * PinpointClient::deleteEndpoint(const DeleteEndpointRequest &request)
{

}

/**
 */
DeleteEventStreamResponse * PinpointClient::deleteEventStream(const DeleteEventStreamRequest &request)
{

}

/**
 */
DeleteGcmChannelResponse * PinpointClient::deleteGcmChannel(const DeleteGcmChannelRequest &request)
{

}

/**
 */
DeleteSegmentResponse * PinpointClient::deleteSegment(const DeleteSegmentRequest &request)
{

}

/**
 */
DeleteSmsChannelResponse * PinpointClient::deleteSmsChannel(const DeleteSmsChannelRequest &request)
{

}

/**
 */
GetAdmChannelResponse * PinpointClient::getAdmChannel(const GetAdmChannelRequest &request)
{

}

/**
 */
GetApnsChannelResponse * PinpointClient::getApnsChannel(const GetApnsChannelRequest &request)
{

}

/**
 */
GetApnsSandboxChannelResponse * PinpointClient::getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request)
{

}

/**
 */
GetApnsVoipChannelResponse * PinpointClient::getApnsVoipChannel(const GetApnsVoipChannelRequest &request)
{

}

/**
 */
GetApnsVoipSandboxChannelResponse * PinpointClient::getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request)
{

}

/**
 */
GetAppResponse * PinpointClient::getApp(const GetAppRequest &request)
{

}

/**
 */
GetApplicationSettingsResponse * PinpointClient::getApplicationSettings(const GetApplicationSettingsRequest &request)
{

}

/**
 */
GetAppsResponse * PinpointClient::getApps(const GetAppsRequest &request)
{

}

/**
 */
GetBaiduChannelResponse * PinpointClient::getBaiduChannel(const GetBaiduChannelRequest &request)
{

}

/**
 */
GetCampaignResponse * PinpointClient::getCampaign(const GetCampaignRequest &request)
{

}

/**
 */
GetCampaignActivitiesResponse * PinpointClient::getCampaignActivities(const GetCampaignActivitiesRequest &request)
{

}

/**
 */
GetCampaignVersionResponse * PinpointClient::getCampaignVersion(const GetCampaignVersionRequest &request)
{

}

/**
 */
GetCampaignVersionsResponse * PinpointClient::getCampaignVersions(const GetCampaignVersionsRequest &request)
{

}

/**
 */
GetCampaignsResponse * PinpointClient::getCampaigns(const GetCampaignsRequest &request)
{

}

/**
 */
GetEmailChannelResponse * PinpointClient::getEmailChannel(const GetEmailChannelRequest &request)
{

}

/**
 */
GetEndpointResponse * PinpointClient::getEndpoint(const GetEndpointRequest &request)
{

}

/**
 */
GetEventStreamResponse * PinpointClient::getEventStream(const GetEventStreamRequest &request)
{

}

/**
 */
GetExportJobResponse * PinpointClient::getExportJob(const GetExportJobRequest &request)
{

}

/**
 */
GetExportJobsResponse * PinpointClient::getExportJobs(const GetExportJobsRequest &request)
{

}

/**
 */
GetGcmChannelResponse * PinpointClient::getGcmChannel(const GetGcmChannelRequest &request)
{

}

/**
 */
GetImportJobResponse * PinpointClient::getImportJob(const GetImportJobRequest &request)
{

}

/**
 */
GetImportJobsResponse * PinpointClient::getImportJobs(const GetImportJobsRequest &request)
{

}

/**
 */
GetSegmentResponse * PinpointClient::getSegment(const GetSegmentRequest &request)
{

}

/**
 */
GetSegmentExportJobsResponse * PinpointClient::getSegmentExportJobs(const GetSegmentExportJobsRequest &request)
{

}

/**
 */
GetSegmentImportJobsResponse * PinpointClient::getSegmentImportJobs(const GetSegmentImportJobsRequest &request)
{

}

/**
 */
GetSegmentVersionResponse * PinpointClient::getSegmentVersion(const GetSegmentVersionRequest &request)
{

}

/**
 */
GetSegmentVersionsResponse * PinpointClient::getSegmentVersions(const GetSegmentVersionsRequest &request)
{

}

/**
 */
GetSegmentsResponse * PinpointClient::getSegments(const GetSegmentsRequest &request)
{

}

/**
 */
GetSmsChannelResponse * PinpointClient::getSmsChannel(const GetSmsChannelRequest &request)
{

}

/**
 */
PutEventStreamResponse * PinpointClient::putEventStream(const PutEventStreamRequest &request)
{

}

/**
 */
SendMessagesResponse * PinpointClient::sendMessages(const SendMessagesRequest &request)
{

}

/**
 */
SendUsersMessagesResponse * PinpointClient::sendUsersMessages(const SendUsersMessagesRequest &request)
{

}

/**
 */
UpdateAdmChannelResponse * PinpointClient::updateAdmChannel(const UpdateAdmChannelRequest &request)
{

}

/**
 */
UpdateApnsChannelResponse * PinpointClient::updateApnsChannel(const UpdateApnsChannelRequest &request)
{

}

/**
 */
UpdateApnsSandboxChannelResponse * PinpointClient::updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request)
{

}

/**
 */
UpdateApnsVoipChannelResponse * PinpointClient::updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request)
{

}

/**
 */
UpdateApnsVoipSandboxChannelResponse * PinpointClient::updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request)
{

}

/**
 */
UpdateApplicationSettingsResponse * PinpointClient::updateApplicationSettings(const UpdateApplicationSettingsRequest &request)
{

}

/**
 */
UpdateBaiduChannelResponse * PinpointClient::updateBaiduChannel(const UpdateBaiduChannelRequest &request)
{

}

/**
 */
UpdateCampaignResponse * PinpointClient::updateCampaign(const UpdateCampaignRequest &request)
{

}

/**
 */
UpdateEmailChannelResponse * PinpointClient::updateEmailChannel(const UpdateEmailChannelRequest &request)
{

}

/**
 */
UpdateEndpointResponse * PinpointClient::updateEndpoint(const UpdateEndpointRequest &request)
{

}

/**
 */
UpdateEndpointsBatchResponse * PinpointClient::updateEndpointsBatch(const UpdateEndpointsBatchRequest &request)
{

}

/**
 */
UpdateGcmChannelResponse * PinpointClient::updateGcmChannel(const UpdateGcmChannelRequest &request)
{

}

/**
 */
UpdateSegmentResponse * PinpointClient::updateSegment(const UpdateSegmentRequest &request)
{

}

/**
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

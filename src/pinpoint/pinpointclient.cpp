/*
    Copyright 2013-2019 Paul Colby

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

#include "pinpointclient.h"
#include "pinpointclient_p.h"

#include "core/awssignaturev4.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createcampaignrequest.h"
#include "createcampaignresponse.h"
#include "createexportjobrequest.h"
#include "createexportjobresponse.h"
#include "createimportjobrequest.h"
#include "createimportjobresponse.h"
#include "createsegmentrequest.h"
#include "createsegmentresponse.h"
#include "deleteadmchannelrequest.h"
#include "deleteadmchannelresponse.h"
#include "deleteapnschannelrequest.h"
#include "deleteapnschannelresponse.h"
#include "deleteapnssandboxchannelrequest.h"
#include "deleteapnssandboxchannelresponse.h"
#include "deleteapnsvoipchannelrequest.h"
#include "deleteapnsvoipchannelresponse.h"
#include "deleteapnsvoipsandboxchannelrequest.h"
#include "deleteapnsvoipsandboxchannelresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deletebaiduchannelrequest.h"
#include "deletebaiduchannelresponse.h"
#include "deletecampaignrequest.h"
#include "deletecampaignresponse.h"
#include "deleteemailchannelrequest.h"
#include "deleteemailchannelresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteeventstreamrequest.h"
#include "deleteeventstreamresponse.h"
#include "deletegcmchannelrequest.h"
#include "deletegcmchannelresponse.h"
#include "deletesegmentrequest.h"
#include "deletesegmentresponse.h"
#include "deletesmschannelrequest.h"
#include "deletesmschannelresponse.h"
#include "deleteuserendpointsrequest.h"
#include "deleteuserendpointsresponse.h"
#include "deletevoicechannelrequest.h"
#include "deletevoicechannelresponse.h"
#include "getadmchannelrequest.h"
#include "getadmchannelresponse.h"
#include "getapnschannelrequest.h"
#include "getapnschannelresponse.h"
#include "getapnssandboxchannelrequest.h"
#include "getapnssandboxchannelresponse.h"
#include "getapnsvoipchannelrequest.h"
#include "getapnsvoipchannelresponse.h"
#include "getapnsvoipsandboxchannelrequest.h"
#include "getapnsvoipsandboxchannelresponse.h"
#include "getapprequest.h"
#include "getappresponse.h"
#include "getapplicationsettingsrequest.h"
#include "getapplicationsettingsresponse.h"
#include "getappsrequest.h"
#include "getappsresponse.h"
#include "getbaiduchannelrequest.h"
#include "getbaiduchannelresponse.h"
#include "getcampaignrequest.h"
#include "getcampaignresponse.h"
#include "getcampaignactivitiesrequest.h"
#include "getcampaignactivitiesresponse.h"
#include "getcampaignversionrequest.h"
#include "getcampaignversionresponse.h"
#include "getcampaignversionsrequest.h"
#include "getcampaignversionsresponse.h"
#include "getcampaignsrequest.h"
#include "getcampaignsresponse.h"
#include "getchannelsrequest.h"
#include "getchannelsresponse.h"
#include "getemailchannelrequest.h"
#include "getemailchannelresponse.h"
#include "getendpointrequest.h"
#include "getendpointresponse.h"
#include "geteventstreamrequest.h"
#include "geteventstreamresponse.h"
#include "getexportjobrequest.h"
#include "getexportjobresponse.h"
#include "getexportjobsrequest.h"
#include "getexportjobsresponse.h"
#include "getgcmchannelrequest.h"
#include "getgcmchannelresponse.h"
#include "getimportjobrequest.h"
#include "getimportjobresponse.h"
#include "getimportjobsrequest.h"
#include "getimportjobsresponse.h"
#include "getsegmentrequest.h"
#include "getsegmentresponse.h"
#include "getsegmentexportjobsrequest.h"
#include "getsegmentexportjobsresponse.h"
#include "getsegmentimportjobsrequest.h"
#include "getsegmentimportjobsresponse.h"
#include "getsegmentversionrequest.h"
#include "getsegmentversionresponse.h"
#include "getsegmentversionsrequest.h"
#include "getsegmentversionsresponse.h"
#include "getsegmentsrequest.h"
#include "getsegmentsresponse.h"
#include "getsmschannelrequest.h"
#include "getsmschannelresponse.h"
#include "getuserendpointsrequest.h"
#include "getuserendpointsresponse.h"
#include "getvoicechannelrequest.h"
#include "getvoicechannelresponse.h"
#include "phonenumbervalidaterequest.h"
#include "phonenumbervalidateresponse.h"
#include "puteventstreamrequest.h"
#include "puteventstreamresponse.h"
#include "puteventsrequest.h"
#include "puteventsresponse.h"
#include "removeattributesrequest.h"
#include "removeattributesresponse.h"
#include "sendmessagesrequest.h"
#include "sendmessagesresponse.h"
#include "sendusersmessagesrequest.h"
#include "sendusersmessagesresponse.h"
#include "updateadmchannelrequest.h"
#include "updateadmchannelresponse.h"
#include "updateapnschannelrequest.h"
#include "updateapnschannelresponse.h"
#include "updateapnssandboxchannelrequest.h"
#include "updateapnssandboxchannelresponse.h"
#include "updateapnsvoipchannelrequest.h"
#include "updateapnsvoipchannelresponse.h"
#include "updateapnsvoipsandboxchannelrequest.h"
#include "updateapnsvoipsandboxchannelresponse.h"
#include "updateapplicationsettingsrequest.h"
#include "updateapplicationsettingsresponse.h"
#include "updatebaiduchannelrequest.h"
#include "updatebaiduchannelresponse.h"
#include "updatecampaignrequest.h"
#include "updatecampaignresponse.h"
#include "updateemailchannelrequest.h"
#include "updateemailchannelresponse.h"
#include "updateendpointrequest.h"
#include "updateendpointresponse.h"
#include "updateendpointsbatchrequest.h"
#include "updateendpointsbatchresponse.h"
#include "updategcmchannelrequest.h"
#include "updategcmchannelresponse.h"
#include "updatesegmentrequest.h"
#include "updatesegmentresponse.h"
#include "updatesmschannelrequest.h"
#include "updatesmschannelresponse.h"
#include "updatevoicechannelrequest.h"
#include "updatevoicechannelresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Pinpoint
 * \brief Contains classess for accessing Amazon Pinpoint.
 *
 * \inmodule QtAwsPinpoint
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PinpointClient
 * \brief The PinpointClient class provides access to the Amazon Pinpoint service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpoint
 *
 */

/*!
 * \brief Constructs a PinpointClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
PinpointClient::PinpointClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointClientPrivate(this), parent)
{
    Q_D(PinpointClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("pinpoint");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint");
    d->serviceName = QStringLiteral("mobiletargeting");
}

/*!
 * \overload PinpointClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
PinpointClient::PinpointClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new PinpointClientPrivate(this), parent)
{
    Q_D(PinpointClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("pinpoint");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Pinpoint");
    d->serviceName = QStringLiteral("mobiletargeting");
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateAppResponse * PinpointClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateCampaignResponse * PinpointClient::createCampaign(const CreateCampaignRequest &request)
{
    return qobject_cast<CreateCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateExportJobResponse * PinpointClient::createExportJob(const CreateExportJobRequest &request)
{
    return qobject_cast<CreateExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateImportJobResponse * PinpointClient::createImportJob(const CreateImportJobRequest &request)
{
    return qobject_cast<CreateImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateSegmentResponse * PinpointClient::createSegment(const CreateSegmentRequest &request)
{
    return qobject_cast<CreateSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteAdmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteAdmChannelResponse * PinpointClient::deleteAdmChannel(const DeleteAdmChannelRequest &request)
{
    return qobject_cast<DeleteAdmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteApnsChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteApnsChannelResponse * PinpointClient::deleteApnsChannel(const DeleteApnsChannelRequest &request)
{
    return qobject_cast<DeleteApnsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteApnsSandboxChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteApnsSandboxChannelResponse * PinpointClient::deleteApnsSandboxChannel(const DeleteApnsSandboxChannelRequest &request)
{
    return qobject_cast<DeleteApnsSandboxChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteApnsVoipChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteApnsVoipChannelResponse * PinpointClient::deleteApnsVoipChannel(const DeleteApnsVoipChannelRequest &request)
{
    return qobject_cast<DeleteApnsVoipChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteApnsVoipSandboxChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteApnsVoipSandboxChannelResponse * PinpointClient::deleteApnsVoipSandboxChannel(const DeleteApnsVoipSandboxChannelRequest &request)
{
    return qobject_cast<DeleteApnsVoipSandboxChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteAppResponse * PinpointClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteBaiduChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteBaiduChannelResponse * PinpointClient::deleteBaiduChannel(const DeleteBaiduChannelRequest &request)
{
    return qobject_cast<DeleteBaiduChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteCampaignResponse * PinpointClient::deleteCampaign(const DeleteCampaignRequest &request)
{
    return qobject_cast<DeleteCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteEmailChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteEmailChannelResponse * PinpointClient::deleteEmailChannel(const DeleteEmailChannelRequest &request)
{
    return qobject_cast<DeleteEmailChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteEndpointResponse * PinpointClient::deleteEndpoint(const DeleteEndpointRequest &request)
{
    return qobject_cast<DeleteEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteEventStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteEventStreamResponse * PinpointClient::deleteEventStream(const DeleteEventStreamRequest &request)
{
    return qobject_cast<DeleteEventStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteGcmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteGcmChannelResponse * PinpointClient::deleteGcmChannel(const DeleteGcmChannelRequest &request)
{
    return qobject_cast<DeleteGcmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteSegmentResponse * PinpointClient::deleteSegment(const DeleteSegmentRequest &request)
{
    return qobject_cast<DeleteSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteSmsChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteSmsChannelResponse * PinpointClient::deleteSmsChannel(const DeleteSmsChannelRequest &request)
{
    return qobject_cast<DeleteSmsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteUserEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteUserEndpointsResponse * PinpointClient::deleteUserEndpoints(const DeleteUserEndpointsRequest &request)
{
    return qobject_cast<DeleteUserEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteVoiceChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteVoiceChannelResponse * PinpointClient::deleteVoiceChannel(const DeleteVoiceChannelRequest &request)
{
    return qobject_cast<DeleteVoiceChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetAdmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetAdmChannelResponse * PinpointClient::getAdmChannel(const GetAdmChannelRequest &request)
{
    return qobject_cast<GetAdmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApnsChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetApnsChannelResponse * PinpointClient::getApnsChannel(const GetApnsChannelRequest &request)
{
    return qobject_cast<GetApnsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApnsSandboxChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetApnsSandboxChannelResponse * PinpointClient::getApnsSandboxChannel(const GetApnsSandboxChannelRequest &request)
{
    return qobject_cast<GetApnsSandboxChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApnsVoipChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetApnsVoipChannelResponse * PinpointClient::getApnsVoipChannel(const GetApnsVoipChannelRequest &request)
{
    return qobject_cast<GetApnsVoipChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApnsVoipSandboxChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetApnsVoipSandboxChannelResponse * PinpointClient::getApnsVoipSandboxChannel(const GetApnsVoipSandboxChannelRequest &request)
{
    return qobject_cast<GetApnsVoipSandboxChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetAppResponse * PinpointClient::getApp(const GetAppRequest &request)
{
    return qobject_cast<GetAppResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApplicationSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetApplicationSettingsResponse * PinpointClient::getApplicationSettings(const GetApplicationSettingsRequest &request)
{
    return qobject_cast<GetApplicationSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetAppsResponse * PinpointClient::getApps(const GetAppsRequest &request)
{
    return qobject_cast<GetAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetBaiduChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetBaiduChannelResponse * PinpointClient::getBaiduChannel(const GetBaiduChannelRequest &request)
{
    return qobject_cast<GetBaiduChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignResponse * PinpointClient::getCampaign(const GetCampaignRequest &request)
{
    return qobject_cast<GetCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignActivitiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignActivitiesResponse * PinpointClient::getCampaignActivities(const GetCampaignActivitiesRequest &request)
{
    return qobject_cast<GetCampaignActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignVersionResponse * PinpointClient::getCampaignVersion(const GetCampaignVersionRequest &request)
{
    return qobject_cast<GetCampaignVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignVersionsResponse * PinpointClient::getCampaignVersions(const GetCampaignVersionsRequest &request)
{
    return qobject_cast<GetCampaignVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetCampaignsResponse * PinpointClient::getCampaigns(const GetCampaignsRequest &request)
{
    return qobject_cast<GetCampaignsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetChannelsResponse * PinpointClient::getChannels(const GetChannelsRequest &request)
{
    return qobject_cast<GetChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetEmailChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetEmailChannelResponse * PinpointClient::getEmailChannel(const GetEmailChannelRequest &request)
{
    return qobject_cast<GetEmailChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetEndpointResponse * PinpointClient::getEndpoint(const GetEndpointRequest &request)
{
    return qobject_cast<GetEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetEventStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetEventStreamResponse * PinpointClient::getEventStream(const GetEventStreamRequest &request)
{
    return qobject_cast<GetEventStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetExportJobResponse * PinpointClient::getExportJob(const GetExportJobRequest &request)
{
    return qobject_cast<GetExportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetExportJobsResponse * PinpointClient::getExportJobs(const GetExportJobsRequest &request)
{
    return qobject_cast<GetExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetGcmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetGcmChannelResponse * PinpointClient::getGcmChannel(const GetGcmChannelRequest &request)
{
    return qobject_cast<GetGcmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetImportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetImportJobResponse * PinpointClient::getImportJob(const GetImportJobRequest &request)
{
    return qobject_cast<GetImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetImportJobsResponse * PinpointClient::getImportJobs(const GetImportJobsRequest &request)
{
    return qobject_cast<GetImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSegmentResponse * PinpointClient::getSegment(const GetSegmentRequest &request)
{
    return qobject_cast<GetSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentExportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSegmentExportJobsResponse * PinpointClient::getSegmentExportJobs(const GetSegmentExportJobsRequest &request)
{
    return qobject_cast<GetSegmentExportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentImportJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSegmentImportJobsResponse * PinpointClient::getSegmentImportJobs(const GetSegmentImportJobsRequest &request)
{
    return qobject_cast<GetSegmentImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSegmentVersionResponse * PinpointClient::getSegmentVersion(const GetSegmentVersionRequest &request)
{
    return qobject_cast<GetSegmentVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSegmentVersionsResponse * PinpointClient::getSegmentVersions(const GetSegmentVersionsRequest &request)
{
    return qobject_cast<GetSegmentVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSegmentsResponse * PinpointClient::getSegments(const GetSegmentsRequest &request)
{
    return qobject_cast<GetSegmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSmsChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetSmsChannelResponse * PinpointClient::getSmsChannel(const GetSmsChannelRequest &request)
{
    return qobject_cast<GetSmsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetUserEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetUserEndpointsResponse * PinpointClient::getUserEndpoints(const GetUserEndpointsRequest &request)
{
    return qobject_cast<GetUserEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetVoiceChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
GetVoiceChannelResponse * PinpointClient::getVoiceChannel(const GetVoiceChannelRequest &request)
{
    return qobject_cast<GetVoiceChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * PhoneNumberValidateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PhoneNumberValidateResponse * PinpointClient::phoneNumberValidate(const PhoneNumberValidateRequest &request)
{
    return qobject_cast<PhoneNumberValidateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * PutEventStreamResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PutEventStreamResponse * PinpointClient::putEventStream(const PutEventStreamRequest &request)
{
    return qobject_cast<PutEventStreamResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * PutEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to record events for endpoints. This method creates events and creates or updates the endpoints that those events
 */
PutEventsResponse * PinpointClient::putEvents(const PutEventsRequest &request)
{
    return qobject_cast<PutEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * RemoveAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
RemoveAttributesResponse * PinpointClient::removeAttributes(const RemoveAttributesRequest &request)
{
    return qobject_cast<RemoveAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * SendMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
SendMessagesResponse * PinpointClient::sendMessages(const SendMessagesRequest &request)
{
    return qobject_cast<SendMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * SendUsersMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
SendUsersMessagesResponse * PinpointClient::sendUsersMessages(const SendUsersMessagesRequest &request)
{
    return qobject_cast<SendUsersMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateAdmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateAdmChannelResponse * PinpointClient::updateAdmChannel(const UpdateAdmChannelRequest &request)
{
    return qobject_cast<UpdateAdmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateApnsChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateApnsChannelResponse * PinpointClient::updateApnsChannel(const UpdateApnsChannelRequest &request)
{
    return qobject_cast<UpdateApnsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateApnsSandboxChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateApnsSandboxChannelResponse * PinpointClient::updateApnsSandboxChannel(const UpdateApnsSandboxChannelRequest &request)
{
    return qobject_cast<UpdateApnsSandboxChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateApnsVoipChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateApnsVoipChannelResponse * PinpointClient::updateApnsVoipChannel(const UpdateApnsVoipChannelRequest &request)
{
    return qobject_cast<UpdateApnsVoipChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateApnsVoipSandboxChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateApnsVoipSandboxChannelResponse * PinpointClient::updateApnsVoipSandboxChannel(const UpdateApnsVoipSandboxChannelRequest &request)
{
    return qobject_cast<UpdateApnsVoipSandboxChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateApplicationSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateApplicationSettingsResponse * PinpointClient::updateApplicationSettings(const UpdateApplicationSettingsRequest &request)
{
    return qobject_cast<UpdateApplicationSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateBaiduChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateBaiduChannelResponse * PinpointClient::updateBaiduChannel(const UpdateBaiduChannelRequest &request)
{
    return qobject_cast<UpdateBaiduChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateCampaignResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateCampaignResponse * PinpointClient::updateCampaign(const UpdateCampaignRequest &request)
{
    return qobject_cast<UpdateCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateEmailChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateEmailChannelResponse * PinpointClient::updateEmailChannel(const UpdateEmailChannelRequest &request)
{
    return qobject_cast<UpdateEmailChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateEndpointResponse * PinpointClient::updateEndpoint(const UpdateEndpointRequest &request)
{
    return qobject_cast<UpdateEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateEndpointsBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateEndpointsBatchResponse * PinpointClient::updateEndpointsBatch(const UpdateEndpointsBatchRequest &request)
{
    return qobject_cast<UpdateEndpointsBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateGcmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateGcmChannelResponse * PinpointClient::updateGcmChannel(const UpdateGcmChannelRequest &request)
{
    return qobject_cast<UpdateGcmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateSegmentResponse * PinpointClient::updateSegment(const UpdateSegmentRequest &request)
{
    return qobject_cast<UpdateSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateSmsChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateSmsChannelResponse * PinpointClient::updateSmsChannel(const UpdateSmsChannelRequest &request)
{
    return qobject_cast<UpdateSmsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateVoiceChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateVoiceChannelResponse * PinpointClient::updateVoiceChannel(const UpdateVoiceChannelRequest &request)
{
    return qobject_cast<UpdateVoiceChannelResponse *>(send(request));
}

/*!
 * \class QtAws::Pinpoint::PinpointClientPrivate
 * \brief The PinpointClientPrivate class provides private implementation for PinpointClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PinpointClientPrivate object with public implementation \a q.
 */
PinpointClientPrivate::PinpointClientPrivate(PinpointClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Pinpoint
} // namespace QtAws

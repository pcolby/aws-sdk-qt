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

#include "pinpointclient.h"
#include "pinpointclient_p.h"

#include "core/awssignaturev4.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createcampaignrequest.h"
#include "createcampaignresponse.h"
#include "createemailtemplaterequest.h"
#include "createemailtemplateresponse.h"
#include "createexportjobrequest.h"
#include "createexportjobresponse.h"
#include "createimportjobrequest.h"
#include "createimportjobresponse.h"
#include "createinapptemplaterequest.h"
#include "createinapptemplateresponse.h"
#include "createjourneyrequest.h"
#include "createjourneyresponse.h"
#include "createpushtemplaterequest.h"
#include "createpushtemplateresponse.h"
#include "createrecommenderconfigurationrequest.h"
#include "createrecommenderconfigurationresponse.h"
#include "createsegmentrequest.h"
#include "createsegmentresponse.h"
#include "createsmstemplaterequest.h"
#include "createsmstemplateresponse.h"
#include "createvoicetemplaterequest.h"
#include "createvoicetemplateresponse.h"
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
#include "deleteemailtemplaterequest.h"
#include "deleteemailtemplateresponse.h"
#include "deleteendpointrequest.h"
#include "deleteendpointresponse.h"
#include "deleteeventstreamrequest.h"
#include "deleteeventstreamresponse.h"
#include "deletegcmchannelrequest.h"
#include "deletegcmchannelresponse.h"
#include "deleteinapptemplaterequest.h"
#include "deleteinapptemplateresponse.h"
#include "deletejourneyrequest.h"
#include "deletejourneyresponse.h"
#include "deletepushtemplaterequest.h"
#include "deletepushtemplateresponse.h"
#include "deleterecommenderconfigurationrequest.h"
#include "deleterecommenderconfigurationresponse.h"
#include "deletesegmentrequest.h"
#include "deletesegmentresponse.h"
#include "deletesmschannelrequest.h"
#include "deletesmschannelresponse.h"
#include "deletesmstemplaterequest.h"
#include "deletesmstemplateresponse.h"
#include "deleteuserendpointsrequest.h"
#include "deleteuserendpointsresponse.h"
#include "deletevoicechannelrequest.h"
#include "deletevoicechannelresponse.h"
#include "deletevoicetemplaterequest.h"
#include "deletevoicetemplateresponse.h"
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
#include "getapplicationdaterangekpirequest.h"
#include "getapplicationdaterangekpiresponse.h"
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
#include "getcampaigndaterangekpirequest.h"
#include "getcampaigndaterangekpiresponse.h"
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
#include "getemailtemplaterequest.h"
#include "getemailtemplateresponse.h"
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
#include "getinappmessagesrequest.h"
#include "getinappmessagesresponse.h"
#include "getinapptemplaterequest.h"
#include "getinapptemplateresponse.h"
#include "getjourneyrequest.h"
#include "getjourneyresponse.h"
#include "getjourneydaterangekpirequest.h"
#include "getjourneydaterangekpiresponse.h"
#include "getjourneyexecutionactivitymetricsrequest.h"
#include "getjourneyexecutionactivitymetricsresponse.h"
#include "getjourneyexecutionmetricsrequest.h"
#include "getjourneyexecutionmetricsresponse.h"
#include "getpushtemplaterequest.h"
#include "getpushtemplateresponse.h"
#include "getrecommenderconfigurationrequest.h"
#include "getrecommenderconfigurationresponse.h"
#include "getrecommenderconfigurationsrequest.h"
#include "getrecommenderconfigurationsresponse.h"
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
#include "getsmstemplaterequest.h"
#include "getsmstemplateresponse.h"
#include "getuserendpointsrequest.h"
#include "getuserendpointsresponse.h"
#include "getvoicechannelrequest.h"
#include "getvoicechannelresponse.h"
#include "getvoicetemplaterequest.h"
#include "getvoicetemplateresponse.h"
#include "listjourneysrequest.h"
#include "listjourneysresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listtemplateversionsrequest.h"
#include "listtemplateversionsresponse.h"
#include "listtemplatesrequest.h"
#include "listtemplatesresponse.h"
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
#include "sendotpmessagerequest.h"
#include "sendotpmessageresponse.h"
#include "sendusersmessagesrequest.h"
#include "sendusersmessagesresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
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
#include "updateemailtemplaterequest.h"
#include "updateemailtemplateresponse.h"
#include "updateendpointrequest.h"
#include "updateendpointresponse.h"
#include "updateendpointsbatchrequest.h"
#include "updateendpointsbatchresponse.h"
#include "updategcmchannelrequest.h"
#include "updategcmchannelresponse.h"
#include "updateinapptemplaterequest.h"
#include "updateinapptemplateresponse.h"
#include "updatejourneyrequest.h"
#include "updatejourneyresponse.h"
#include "updatejourneystaterequest.h"
#include "updatejourneystateresponse.h"
#include "updatepushtemplaterequest.h"
#include "updatepushtemplateresponse.h"
#include "updaterecommenderconfigurationrequest.h"
#include "updaterecommenderconfigurationresponse.h"
#include "updatesegmentrequest.h"
#include "updatesegmentresponse.h"
#include "updatesmschannelrequest.h"
#include "updatesmschannelresponse.h"
#include "updatesmstemplaterequest.h"
#include "updatesmstemplateresponse.h"
#include "updatetemplateactiveversionrequest.h"
#include "updatetemplateactiveversionresponse.h"
#include "updatevoicechannelrequest.h"
#include "updatevoicechannelresponse.h"
#include "updatevoicetemplaterequest.h"
#include "updatevoicetemplateresponse.h"
#include "verifyotpmessagerequest.h"
#include "verifyotpmessageresponse.h"

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
 *  Doc Engage API - Amazon Pinpoint
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
 * Creates an
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
 * Creates a new campaign for an application or updates the settings of an existing campaign for an
 */
CreateCampaignResponse * PinpointClient::createCampaign(const CreateCampaignRequest &request)
{
    return qobject_cast<CreateCampaignResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a message template for messages that are sent through the email
 */
CreateEmailTemplateResponse * PinpointClient::createEmailTemplate(const CreateEmailTemplateRequest &request)
{
    return qobject_cast<CreateEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateExportJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an export job for an
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
 * Creates an import job for an
 */
CreateImportJobResponse * PinpointClient::createImportJob(const CreateImportJobRequest &request)
{
    return qobject_cast<CreateImportJobResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateInAppTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new message template for messages using the in-app message
 */
CreateInAppTemplateResponse * PinpointClient::createInAppTemplate(const CreateInAppTemplateRequest &request)
{
    return qobject_cast<CreateInAppTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateJourneyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a journey for an
 */
CreateJourneyResponse * PinpointClient::createJourney(const CreateJourneyRequest &request)
{
    return qobject_cast<CreateJourneyResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreatePushTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a message template for messages that are sent through a push notification
 */
CreatePushTemplateResponse * PinpointClient::createPushTemplate(const CreatePushTemplateRequest &request)
{
    return qobject_cast<CreatePushTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateRecommenderConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Pinpoint configuration for a recommender
 */
CreateRecommenderConfigurationResponse * PinpointClient::createRecommenderConfiguration(const CreateRecommenderConfigurationRequest &request)
{
    return qobject_cast<CreateRecommenderConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new segment for an application or updates the configuration, dimension, and other settings for an existing
 * segment that's associated with an
 */
CreateSegmentResponse * PinpointClient::createSegment(const CreateSegmentRequest &request)
{
    return qobject_cast<CreateSegmentResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateSmsTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a message template for messages that are sent through the SMS
 */
CreateSmsTemplateResponse * PinpointClient::createSmsTemplate(const CreateSmsTemplateRequest &request)
{
    return qobject_cast<CreateSmsTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * CreateVoiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a message template for messages that are sent through the voice
 */
CreateVoiceTemplateResponse * PinpointClient::createVoiceTemplate(const CreateVoiceTemplateRequest &request)
{
    return qobject_cast<CreateVoiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteAdmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the ADM channel for an application and deletes any existing settings for the
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
 * Disables the APNs channel for an application and deletes any existing settings for the
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
 * Disables the APNs sandbox channel for an application and deletes any existing settings for the
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
 * Disables the APNs VoIP channel for an application and deletes any existing settings for the
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
 * Disables the APNs VoIP sandbox channel for an application and deletes any existing settings for the
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
 * Deletes an
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
 * Disables the Baidu channel for an application and deletes any existing settings for the
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
 * Deletes a campaign from an
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
 * Disables the email channel for an application and deletes any existing settings for the
 */
DeleteEmailChannelResponse * PinpointClient::deleteEmailChannel(const DeleteEmailChannelRequest &request)
{
    return qobject_cast<DeleteEmailChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a message template for messages that were sent through the email
 */
DeleteEmailTemplateResponse * PinpointClient::deleteEmailTemplate(const DeleteEmailTemplateRequest &request)
{
    return qobject_cast<DeleteEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an endpoint from an
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
 * Deletes the event stream for an
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
 * Disables the GCM channel for an application and deletes any existing settings for the
 */
DeleteGcmChannelResponse * PinpointClient::deleteGcmChannel(const DeleteGcmChannelRequest &request)
{
    return qobject_cast<DeleteGcmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteInAppTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a message template for messages sent using the in-app message
 */
DeleteInAppTemplateResponse * PinpointClient::deleteInAppTemplate(const DeleteInAppTemplateRequest &request)
{
    return qobject_cast<DeleteInAppTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteJourneyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a journey from an
 */
DeleteJourneyResponse * PinpointClient::deleteJourney(const DeleteJourneyRequest &request)
{
    return qobject_cast<DeleteJourneyResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeletePushTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a message template for messages that were sent through a push notification
 */
DeletePushTemplateResponse * PinpointClient::deletePushTemplate(const DeletePushTemplateRequest &request)
{
    return qobject_cast<DeletePushTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteRecommenderConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Pinpoint configuration for a recommender
 */
DeleteRecommenderConfigurationResponse * PinpointClient::deleteRecommenderConfiguration(const DeleteRecommenderConfigurationRequest &request)
{
    return qobject_cast<DeleteRecommenderConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a segment from an
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
 * Disables the SMS channel for an application and deletes any existing settings for the
 */
DeleteSmsChannelResponse * PinpointClient::deleteSmsChannel(const DeleteSmsChannelRequest &request)
{
    return qobject_cast<DeleteSmsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteSmsTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a message template for messages that were sent through the SMS
 */
DeleteSmsTemplateResponse * PinpointClient::deleteSmsTemplate(const DeleteSmsTemplateRequest &request)
{
    return qobject_cast<DeleteSmsTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteUserEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes all the endpoints that are associated with a specific user
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
 * Disables the voice channel for an application and deletes any existing settings for the
 */
DeleteVoiceChannelResponse * PinpointClient::deleteVoiceChannel(const DeleteVoiceChannelRequest &request)
{
    return qobject_cast<DeleteVoiceChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * DeleteVoiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a message template for messages that were sent through the voice
 */
DeleteVoiceTemplateResponse * PinpointClient::deleteVoiceTemplate(const DeleteVoiceTemplateRequest &request)
{
    return qobject_cast<DeleteVoiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetAdmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the status and settings of the ADM channel for an
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
 * Retrieves information about the status and settings of the APNs channel for an
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
 * Retrieves information about the status and settings of the APNs sandbox channel for an
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
 * Retrieves information about the status and settings of the APNs VoIP channel for an
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
 * Retrieves information about the status and settings of the APNs VoIP sandbox channel for an
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
 * Retrieves information about an
 */
GetAppResponse * PinpointClient::getApp(const GetAppRequest &request)
{
    return qobject_cast<GetAppResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApplicationDateRangeKpiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) pre-aggregated data for a standard metric that applies to an
 */
GetApplicationDateRangeKpiResponse * PinpointClient::getApplicationDateRangeKpi(const GetApplicationDateRangeKpiRequest &request)
{
    return qobject_cast<GetApplicationDateRangeKpiResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetApplicationSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the settings for an
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
 * Retrieves information about all the applications that are associated with your Amazon Pinpoint
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
 * Retrieves information about the status and settings of the Baidu channel for an
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
 * Retrieves information about the status, configuration, and other settings for a
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
 * Retrieves information about all the activities for a
 */
GetCampaignActivitiesResponse * PinpointClient::getCampaignActivities(const GetCampaignActivitiesRequest &request)
{
    return qobject_cast<GetCampaignActivitiesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignDateRangeKpiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) pre-aggregated data for a standard metric that applies to a
 */
GetCampaignDateRangeKpiResponse * PinpointClient::getCampaignDateRangeKpi(const GetCampaignDateRangeKpiRequest &request)
{
    return qobject_cast<GetCampaignDateRangeKpiResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetCampaignVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the status, configuration, and other settings for a specific version of a
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
 * Retrieves information about the status, configuration, and other settings for all versions of a
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
 * Retrieves information about the status, configuration, and other settings for all the campaigns that are associated with
 * an
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
 * Retrieves information about the history and status of each channel for an
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
 * Retrieves information about the status and settings of the email channel for an
 */
GetEmailChannelResponse * PinpointClient::getEmailChannel(const GetEmailChannelRequest &request)
{
    return qobject_cast<GetEmailChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the content and settings of a message template for messages that are sent through the email
 */
GetEmailTemplateResponse * PinpointClient::getEmailTemplate(const GetEmailTemplateRequest &request)
{
    return qobject_cast<GetEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the settings and attributes of a specific endpoint for an
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
 * Retrieves information about the event stream settings for an
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
 * Retrieves information about the status and settings of a specific export job for an
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
 * Retrieves information about the status and settings of all the export jobs for an
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
 * Retrieves information about the status and settings of the GCM channel for an
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
 * Retrieves information about the status and settings of a specific import job for an
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
 * Retrieves information about the status and settings of all the import jobs for an
 */
GetImportJobsResponse * PinpointClient::getImportJobs(const GetImportJobsRequest &request)
{
    return qobject_cast<GetImportJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetInAppMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the in-app messages targeted for the provided endpoint
 */
GetInAppMessagesResponse * PinpointClient::getInAppMessages(const GetInAppMessagesRequest &request)
{
    return qobject_cast<GetInAppMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetInAppTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the content and settings of a message template for messages sent through the in-app
 */
GetInAppTemplateResponse * PinpointClient::getInAppTemplate(const GetInAppTemplateRequest &request)
{
    return qobject_cast<GetInAppTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetJourneyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the status, configuration, and other settings for a
 */
GetJourneyResponse * PinpointClient::getJourney(const GetJourneyRequest &request)
{
    return qobject_cast<GetJourneyResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetJourneyDateRangeKpiResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) pre-aggregated data for a standard engagement metric that applies to a
 */
GetJourneyDateRangeKpiResponse * PinpointClient::getJourneyDateRangeKpi(const GetJourneyDateRangeKpiRequest &request)
{
    return qobject_cast<GetJourneyDateRangeKpiResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetJourneyExecutionActivityMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) pre-aggregated data for a standard execution metric that applies to a journey
 */
GetJourneyExecutionActivityMetricsResponse * PinpointClient::getJourneyExecutionActivityMetrics(const GetJourneyExecutionActivityMetricsRequest &request)
{
    return qobject_cast<GetJourneyExecutionActivityMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetJourneyExecutionMetricsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves (queries) pre-aggregated data for a standard execution metric that applies to a
 */
GetJourneyExecutionMetricsResponse * PinpointClient::getJourneyExecutionMetrics(const GetJourneyExecutionMetricsRequest &request)
{
    return qobject_cast<GetJourneyExecutionMetricsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetPushTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the content and settings of a message template for messages that are sent through a push notification
 */
GetPushTemplateResponse * PinpointClient::getPushTemplate(const GetPushTemplateRequest &request)
{
    return qobject_cast<GetPushTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetRecommenderConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about an Amazon Pinpoint configuration for a recommender
 */
GetRecommenderConfigurationResponse * PinpointClient::getRecommenderConfiguration(const GetRecommenderConfigurationRequest &request)
{
    return qobject_cast<GetRecommenderConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetRecommenderConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about all the recommender model configurations that are associated with your Amazon Pinpoint
 */
GetRecommenderConfigurationsResponse * PinpointClient::getRecommenderConfigurations(const GetRecommenderConfigurationsRequest &request)
{
    return qobject_cast<GetRecommenderConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the configuration, dimension, and other settings for a specific segment that's associated
 * with an
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
 * Retrieves information about the status and settings of the export jobs for a
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
 * Retrieves information about the status and settings of the import jobs for a
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
 * Retrieves information about the configuration, dimension, and other settings for a specific version of a segment that's
 * associated with an
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
 * Retrieves information about the configuration, dimension, and other settings for all the versions of a specific segment
 * that's associated with an
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
 * Retrieves information about the configuration, dimension, and other settings for all the segments that are associated
 * with an
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
 * Retrieves information about the status and settings of the SMS channel for an
 */
GetSmsChannelResponse * PinpointClient::getSmsChannel(const GetSmsChannelRequest &request)
{
    return qobject_cast<GetSmsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetSmsTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the content and settings of a message template for messages that are sent through the SMS
 */
GetSmsTemplateResponse * PinpointClient::getSmsTemplate(const GetSmsTemplateRequest &request)
{
    return qobject_cast<GetSmsTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetUserEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about all the endpoints that are associated with a specific user
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
 * Retrieves information about the status and settings of the voice channel for an
 */
GetVoiceChannelResponse * PinpointClient::getVoiceChannel(const GetVoiceChannelRequest &request)
{
    return qobject_cast<GetVoiceChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * GetVoiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the content and settings of a message template for messages that are sent through the voice
 */
GetVoiceTemplateResponse * PinpointClient::getVoiceTemplate(const GetVoiceTemplateRequest &request)
{
    return qobject_cast<GetVoiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * ListJourneysResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about the status, configuration, and other settings for all the journeys that are associated with
 * an
 */
ListJourneysResponse * PinpointClient::listJourneys(const ListJourneysRequest &request)
{
    return qobject_cast<ListJourneysResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all the tags (keys and values) that are associated with an application, campaign, message template, or
 */
ListTagsForResourceResponse * PinpointClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * ListTemplateVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about all the versions of a specific message
 */
ListTemplateVersionsResponse * PinpointClient::listTemplateVersions(const ListTemplateVersionsRequest &request)
{
    return qobject_cast<ListTemplateVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * ListTemplatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about all the message templates that are associated with your Amazon Pinpoint
 */
ListTemplatesResponse * PinpointClient::listTemplates(const ListTemplatesRequest &request)
{
    return qobject_cast<ListTemplatesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * PhoneNumberValidateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about a phone
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
 * Creates a new event stream for an application or updates the settings of an existing event stream for an
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
 * Creates a new event to record for endpoints, or creates or updates endpoint data that existing events are associated
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
 * Removes one or more attributes, of the same attribute type, from all the endpoints that are associated with an
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
 * Creates and sends a direct
 */
SendMessagesResponse * PinpointClient::sendMessages(const SendMessagesRequest &request)
{
    return qobject_cast<SendMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * SendOTPMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Send an OTP
 */
SendOTPMessageResponse * PinpointClient::sendOTPMessage(const SendOTPMessageRequest &request)
{
    return qobject_cast<SendOTPMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * SendUsersMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and sends a message to a list of
 */
SendUsersMessagesResponse * PinpointClient::sendUsersMessages(const SendUsersMessagesRequest &request)
{
    return qobject_cast<SendUsersMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags (keys and values) to an application, campaign, message template, or
 */
TagResourceResponse * PinpointClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags (keys and values) from an application, campaign, message template, or
 */
UntagResourceResponse * PinpointClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateAdmChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the ADM channel for an application or updates the status and settings of the ADM channel for an
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
 * Enables the APNs channel for an application or updates the status and settings of the APNs channel for an
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
 * Enables the APNs sandbox channel for an application or updates the status and settings of the APNs sandbox channel for
 * an
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
 * Enables the APNs VoIP channel for an application or updates the status and settings of the APNs VoIP channel for an
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
 * Enables the APNs VoIP sandbox channel for an application or updates the status and settings of the APNs VoIP sandbox
 * channel for an
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
 * Updates the settings for an
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
 * Enables the Baidu channel for an application or updates the status and settings of the Baidu channel for an
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
 * Updates the configuration and other settings for a
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
 * Enables the email channel for an application or updates the status and settings of the email channel for an
 */
UpdateEmailChannelResponse * PinpointClient::updateEmailChannel(const UpdateEmailChannelRequest &request)
{
    return qobject_cast<UpdateEmailChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateEmailTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing message template for messages that are sent through the email
 */
UpdateEmailTemplateResponse * PinpointClient::updateEmailTemplate(const UpdateEmailTemplateRequest &request)
{
    return qobject_cast<UpdateEmailTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new endpoint for an application or updates the settings and attributes of an existing endpoint for an
 * application. You can also use this operation to define custom attributes for an endpoint. If an update includes one or
 * more values for a custom attribute, Amazon Pinpoint replaces (overwrites) any existing values with the new
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
 * Creates a new batch of endpoints for an application or updates the settings and attributes of a batch of existing
 * endpoints for an application. You can also use this operation to define custom attributes for a batch of endpoints. If
 * an update includes one or more values for a custom attribute, Amazon Pinpoint replaces (overwrites) any existing values
 * with the new
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
 * Enables the GCM channel for an application or updates the status and settings of the GCM channel for an
 */
UpdateGcmChannelResponse * PinpointClient::updateGcmChannel(const UpdateGcmChannelRequest &request)
{
    return qobject_cast<UpdateGcmChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateInAppTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing message template for messages sent through the in-app message
 */
UpdateInAppTemplateResponse * PinpointClient::updateInAppTemplate(const UpdateInAppTemplateRequest &request)
{
    return qobject_cast<UpdateInAppTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateJourneyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration and other settings for a
 */
UpdateJourneyResponse * PinpointClient::updateJourney(const UpdateJourneyRequest &request)
{
    return qobject_cast<UpdateJourneyResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateJourneyStateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels (stops) an active
 */
UpdateJourneyStateResponse * PinpointClient::updateJourneyState(const UpdateJourneyStateRequest &request)
{
    return qobject_cast<UpdateJourneyStateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdatePushTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing message template for messages that are sent through a push notification
 */
UpdatePushTemplateResponse * PinpointClient::updatePushTemplate(const UpdatePushTemplateRequest &request)
{
    return qobject_cast<UpdatePushTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateRecommenderConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon Pinpoint configuration for a recommender
 */
UpdateRecommenderConfigurationResponse * PinpointClient::updateRecommenderConfiguration(const UpdateRecommenderConfigurationRequest &request)
{
    return qobject_cast<UpdateRecommenderConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateSegmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new segment for an application or updates the configuration, dimension, and other settings for an existing
 * segment that's associated with an
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
 * Enables the SMS channel for an application or updates the status and settings of the SMS channel for an
 */
UpdateSmsChannelResponse * PinpointClient::updateSmsChannel(const UpdateSmsChannelRequest &request)
{
    return qobject_cast<UpdateSmsChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateSmsTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing message template for messages that are sent through the SMS
 */
UpdateSmsTemplateResponse * PinpointClient::updateSmsTemplate(const UpdateSmsTemplateRequest &request)
{
    return qobject_cast<UpdateSmsTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateTemplateActiveVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the status of a specific version of a message template to
 */
UpdateTemplateActiveVersionResponse * PinpointClient::updateTemplateActiveVersion(const UpdateTemplateActiveVersionRequest &request)
{
    return qobject_cast<UpdateTemplateActiveVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateVoiceChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the voice channel for an application or updates the status and settings of the voice channel for an
 */
UpdateVoiceChannelResponse * PinpointClient::updateVoiceChannel(const UpdateVoiceChannelRequest &request)
{
    return qobject_cast<UpdateVoiceChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * UpdateVoiceTemplateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing message template for messages that are sent through the voice
 */
UpdateVoiceTemplateResponse * PinpointClient::updateVoiceTemplate(const UpdateVoiceTemplateRequest &request)
{
    return qobject_cast<UpdateVoiceTemplateResponse *>(send(request));
}

/*!
 * Sends \a request to the PinpointClient service, and returns a pointer to an
 * VerifyOTPMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Verify an
 */
VerifyOTPMessageResponse * PinpointClient::verifyOTPMessage(const VerifyOTPMessageRequest &request)
{
    return qobject_cast<VerifyOTPMessageResponse *>(send(request));
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

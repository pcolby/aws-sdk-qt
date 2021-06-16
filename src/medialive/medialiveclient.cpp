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

#include "medialiveclient.h"
#include "medialiveclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptinputdevicetransferrequest.h"
#include "acceptinputdevicetransferresponse.h"
#include "batchdeleterequest.h"
#include "batchdeleteresponse.h"
#include "batchstartrequest.h"
#include "batchstartresponse.h"
#include "batchstoprequest.h"
#include "batchstopresponse.h"
#include "batchupdateschedulerequest.h"
#include "batchupdatescheduleresponse.h"
#include "cancelinputdevicetransferrequest.h"
#include "cancelinputdevicetransferresponse.h"
#include "createchannelrequest.h"
#include "createchannelresponse.h"
#include "createinputrequest.h"
#include "createinputresponse.h"
#include "createinputsecuritygrouprequest.h"
#include "createinputsecuritygroupresponse.h"
#include "createmultiplexrequest.h"
#include "createmultiplexresponse.h"
#include "createmultiplexprogramrequest.h"
#include "createmultiplexprogramresponse.h"
#include "createpartnerinputrequest.h"
#include "createpartnerinputresponse.h"
#include "createtagsrequest.h"
#include "createtagsresponse.h"
#include "deletechannelrequest.h"
#include "deletechannelresponse.h"
#include "deleteinputrequest.h"
#include "deleteinputresponse.h"
#include "deleteinputsecuritygrouprequest.h"
#include "deleteinputsecuritygroupresponse.h"
#include "deletemultiplexrequest.h"
#include "deletemultiplexresponse.h"
#include "deletemultiplexprogramrequest.h"
#include "deletemultiplexprogramresponse.h"
#include "deletereservationrequest.h"
#include "deletereservationresponse.h"
#include "deleteschedulerequest.h"
#include "deletescheduleresponse.h"
#include "deletetagsrequest.h"
#include "deletetagsresponse.h"
#include "describechannelrequest.h"
#include "describechannelresponse.h"
#include "describeinputrequest.h"
#include "describeinputresponse.h"
#include "describeinputdevicerequest.h"
#include "describeinputdeviceresponse.h"
#include "describeinputdevicethumbnailrequest.h"
#include "describeinputdevicethumbnailresponse.h"
#include "describeinputsecuritygrouprequest.h"
#include "describeinputsecuritygroupresponse.h"
#include "describemultiplexrequest.h"
#include "describemultiplexresponse.h"
#include "describemultiplexprogramrequest.h"
#include "describemultiplexprogramresponse.h"
#include "describeofferingrequest.h"
#include "describeofferingresponse.h"
#include "describereservationrequest.h"
#include "describereservationresponse.h"
#include "describeschedulerequest.h"
#include "describescheduleresponse.h"
#include "listchannelsrequest.h"
#include "listchannelsresponse.h"
#include "listinputdevicetransfersrequest.h"
#include "listinputdevicetransfersresponse.h"
#include "listinputdevicesrequest.h"
#include "listinputdevicesresponse.h"
#include "listinputsecuritygroupsrequest.h"
#include "listinputsecuritygroupsresponse.h"
#include "listinputsrequest.h"
#include "listinputsresponse.h"
#include "listmultiplexprogramsrequest.h"
#include "listmultiplexprogramsresponse.h"
#include "listmultiplexesrequest.h"
#include "listmultiplexesresponse.h"
#include "listofferingsrequest.h"
#include "listofferingsresponse.h"
#include "listreservationsrequest.h"
#include "listreservationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "purchaseofferingrequest.h"
#include "purchaseofferingresponse.h"
#include "rejectinputdevicetransferrequest.h"
#include "rejectinputdevicetransferresponse.h"
#include "startchannelrequest.h"
#include "startchannelresponse.h"
#include "startmultiplexrequest.h"
#include "startmultiplexresponse.h"
#include "stopchannelrequest.h"
#include "stopchannelresponse.h"
#include "stopmultiplexrequest.h"
#include "stopmultiplexresponse.h"
#include "transferinputdevicerequest.h"
#include "transferinputdeviceresponse.h"
#include "updatechannelrequest.h"
#include "updatechannelresponse.h"
#include "updatechannelclassrequest.h"
#include "updatechannelclassresponse.h"
#include "updateinputrequest.h"
#include "updateinputresponse.h"
#include "updateinputdevicerequest.h"
#include "updateinputdeviceresponse.h"
#include "updateinputsecuritygrouprequest.h"
#include "updateinputsecuritygroupresponse.h"
#include "updatemultiplexrequest.h"
#include "updatemultiplexresponse.h"
#include "updatemultiplexprogramrequest.h"
#include "updatemultiplexprogramresponse.h"
#include "updatereservationrequest.h"
#include "updatereservationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaLive
 * \brief Contains classess for accessing AWS Elemental MediaLive.
 *
 * \inmodule QtAwsMediaLive
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::MediaLiveClient
 * \brief The MediaLiveClient class provides access to the AWS Elemental MediaLive service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaLive
 *
 */

/*!
 * \brief Constructs a MediaLiveClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaLiveClient::MediaLiveClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaLiveClientPrivate(this), parent)
{
    Q_D(MediaLiveClient);
    d->apiVersion = QStringLiteral("2017-10-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("medialive");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaLive");
    d->serviceName = QStringLiteral("medialive");
}

/*!
 * \overload MediaLiveClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MediaLiveClient::MediaLiveClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaLiveClientPrivate(this), parent)
{
    Q_D(MediaLiveClient);
    d->apiVersion = QStringLiteral("2017-10-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("medialive");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaLive");
    d->serviceName = QStringLiteral("medialive");
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * AcceptInputDeviceTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
AcceptInputDeviceTransferResponse * MediaLiveClient::acceptInputDeviceTransfer(const AcceptInputDeviceTransferRequest &request)
{
    return qobject_cast<AcceptInputDeviceTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * BatchDeleteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
BatchDeleteResponse * MediaLiveClient::batchDelete(const BatchDeleteRequest &request)
{
    return qobject_cast<BatchDeleteResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * BatchStartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
BatchStartResponse * MediaLiveClient::batchStart(const BatchStartRequest &request)
{
    return qobject_cast<BatchStartResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * BatchStopResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
BatchStopResponse * MediaLiveClient::batchStop(const BatchStopRequest &request)
{
    return qobject_cast<BatchStopResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * BatchUpdateScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
BatchUpdateScheduleResponse * MediaLiveClient::batchUpdateSchedule(const BatchUpdateScheduleRequest &request)
{
    return qobject_cast<BatchUpdateScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CancelInputDeviceTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CancelInputDeviceTransferResponse * MediaLiveClient::cancelInputDeviceTransfer(const CancelInputDeviceTransferRequest &request)
{
    return qobject_cast<CancelInputDeviceTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateChannelResponse * MediaLiveClient::createChannel(const CreateChannelRequest &request)
{
    return qobject_cast<CreateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateInputResponse * MediaLiveClient::createInput(const CreateInputRequest &request)
{
    return qobject_cast<CreateInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateInputSecurityGroupResponse * MediaLiveClient::createInputSecurityGroup(const CreateInputSecurityGroupRequest &request)
{
    return qobject_cast<CreateInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateMultiplexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateMultiplexResponse * MediaLiveClient::createMultiplex(const CreateMultiplexRequest &request)
{
    return qobject_cast<CreateMultiplexResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateMultiplexProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateMultiplexProgramResponse * MediaLiveClient::createMultiplexProgram(const CreateMultiplexProgramRequest &request)
{
    return qobject_cast<CreateMultiplexProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreatePartnerInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreatePartnerInputResponse * MediaLiveClient::createPartnerInput(const CreatePartnerInputRequest &request)
{
    return qobject_cast<CreatePartnerInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * CreateTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
CreateTagsResponse * MediaLiveClient::createTags(const CreateTagsRequest &request)
{
    return qobject_cast<CreateTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteChannelResponse * MediaLiveClient::deleteChannel(const DeleteChannelRequest &request)
{
    return qobject_cast<DeleteChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteInputResponse * MediaLiveClient::deleteInput(const DeleteInputRequest &request)
{
    return qobject_cast<DeleteInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteInputSecurityGroupResponse * MediaLiveClient::deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request)
{
    return qobject_cast<DeleteInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteMultiplexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteMultiplexResponse * MediaLiveClient::deleteMultiplex(const DeleteMultiplexRequest &request)
{
    return qobject_cast<DeleteMultiplexResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteMultiplexProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteMultiplexProgramResponse * MediaLiveClient::deleteMultiplexProgram(const DeleteMultiplexProgramRequest &request)
{
    return qobject_cast<DeleteMultiplexProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteReservationResponse * MediaLiveClient::deleteReservation(const DeleteReservationRequest &request)
{
    return qobject_cast<DeleteReservationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteScheduleResponse * MediaLiveClient::deleteSchedule(const DeleteScheduleRequest &request)
{
    return qobject_cast<DeleteScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DeleteTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DeleteTagsResponse * MediaLiveClient::deleteTags(const DeleteTagsRequest &request)
{
    return qobject_cast<DeleteTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeChannelResponse * MediaLiveClient::describeChannel(const DescribeChannelRequest &request)
{
    return qobject_cast<DescribeChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeInputResponse * MediaLiveClient::describeInput(const DescribeInputRequest &request)
{
    return qobject_cast<DescribeInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeInputDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeInputDeviceResponse * MediaLiveClient::describeInputDevice(const DescribeInputDeviceRequest &request)
{
    return qobject_cast<DescribeInputDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeInputDeviceThumbnailResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeInputDeviceThumbnailResponse * MediaLiveClient::describeInputDeviceThumbnail(const DescribeInputDeviceThumbnailRequest &request)
{
    return qobject_cast<DescribeInputDeviceThumbnailResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeInputSecurityGroupResponse * MediaLiveClient::describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request)
{
    return qobject_cast<DescribeInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeMultiplexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeMultiplexResponse * MediaLiveClient::describeMultiplex(const DescribeMultiplexRequest &request)
{
    return qobject_cast<DescribeMultiplexResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeMultiplexProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeMultiplexProgramResponse * MediaLiveClient::describeMultiplexProgram(const DescribeMultiplexProgramRequest &request)
{
    return qobject_cast<DescribeMultiplexProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeOfferingResponse * MediaLiveClient::describeOffering(const DescribeOfferingRequest &request)
{
    return qobject_cast<DescribeOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeReservationResponse * MediaLiveClient::describeReservation(const DescribeReservationRequest &request)
{
    return qobject_cast<DescribeReservationResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * DescribeScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
DescribeScheduleResponse * MediaLiveClient::describeSchedule(const DescribeScheduleRequest &request)
{
    return qobject_cast<DescribeScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListChannelsResponse * MediaLiveClient::listChannels(const ListChannelsRequest &request)
{
    return qobject_cast<ListChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListInputDeviceTransfersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List input devices that are currently being transferred. List input devices that you are transferring from your AWS
 */
ListInputDeviceTransfersResponse * MediaLiveClient::listInputDeviceTransfers(const ListInputDeviceTransfersRequest &request)
{
    return qobject_cast<ListInputDeviceTransfersResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListInputDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInputDevicesResponse * MediaLiveClient::listInputDevices(const ListInputDevicesRequest &request)
{
    return qobject_cast<ListInputDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListInputSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInputSecurityGroupsResponse * MediaLiveClient::listInputSecurityGroups(const ListInputSecurityGroupsRequest &request)
{
    return qobject_cast<ListInputSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListInputsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListInputsResponse * MediaLiveClient::listInputs(const ListInputsRequest &request)
{
    return qobject_cast<ListInputsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListMultiplexProgramsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListMultiplexProgramsResponse * MediaLiveClient::listMultiplexPrograms(const ListMultiplexProgramsRequest &request)
{
    return qobject_cast<ListMultiplexProgramsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListMultiplexesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListMultiplexesResponse * MediaLiveClient::listMultiplexes(const ListMultiplexesRequest &request)
{
    return qobject_cast<ListMultiplexesResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListOfferingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListOfferingsResponse * MediaLiveClient::listOfferings(const ListOfferingsRequest &request)
{
    return qobject_cast<ListOfferingsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListReservationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListReservationsResponse * MediaLiveClient::listReservations(const ListReservationsRequest &request)
{
    return qobject_cast<ListReservationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
ListTagsForResourceResponse * MediaLiveClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * PurchaseOfferingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
PurchaseOfferingResponse * MediaLiveClient::purchaseOffering(const PurchaseOfferingRequest &request)
{
    return qobject_cast<PurchaseOfferingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * RejectInputDeviceTransferResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
RejectInputDeviceTransferResponse * MediaLiveClient::rejectInputDeviceTransfer(const RejectInputDeviceTransferRequest &request)
{
    return qobject_cast<RejectInputDeviceTransferResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * StartChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartChannelResponse * MediaLiveClient::startChannel(const StartChannelRequest &request)
{
    return qobject_cast<StartChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * StartMultiplexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StartMultiplexResponse * MediaLiveClient::startMultiplex(const StartMultiplexRequest &request)
{
    return qobject_cast<StartMultiplexResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * StopChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StopChannelResponse * MediaLiveClient::stopChannel(const StopChannelRequest &request)
{
    return qobject_cast<StopChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * StopMultiplexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
StopMultiplexResponse * MediaLiveClient::stopMultiplex(const StopMultiplexRequest &request)
{
    return qobject_cast<StopMultiplexResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * TransferInputDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Start an input device transfer to another AWS account. After you make the request, the other account must accept or
 */
TransferInputDeviceResponse * MediaLiveClient::transferInputDevice(const TransferInputDeviceRequest &request)
{
    return qobject_cast<TransferInputDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateChannelResponse * MediaLiveClient::updateChannel(const UpdateChannelRequest &request)
{
    return qobject_cast<UpdateChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateChannelClassResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateChannelClassResponse * MediaLiveClient::updateChannelClass(const UpdateChannelClassRequest &request)
{
    return qobject_cast<UpdateChannelClassResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateInputResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateInputResponse * MediaLiveClient::updateInput(const UpdateInputRequest &request)
{
    return qobject_cast<UpdateInputResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateInputDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateInputDeviceResponse * MediaLiveClient::updateInputDevice(const UpdateInputDeviceRequest &request)
{
    return qobject_cast<UpdateInputDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateInputSecurityGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateInputSecurityGroupResponse * MediaLiveClient::updateInputSecurityGroup(const UpdateInputSecurityGroupRequest &request)
{
    return qobject_cast<UpdateInputSecurityGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateMultiplexResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateMultiplexResponse * MediaLiveClient::updateMultiplex(const UpdateMultiplexRequest &request)
{
    return qobject_cast<UpdateMultiplexResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateMultiplexProgramResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateMultiplexProgramResponse * MediaLiveClient::updateMultiplexProgram(const UpdateMultiplexProgramRequest &request)
{
    return qobject_cast<UpdateMultiplexProgramResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaLiveClient service, and returns a pointer to an
 * UpdateReservationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateReservationResponse * MediaLiveClient::updateReservation(const UpdateReservationRequest &request)
{
    return qobject_cast<UpdateReservationResponse *>(send(request));
}

/*!
 * \class QtAws::MediaLive::MediaLiveClientPrivate
 * \brief The MediaLiveClientPrivate class provides private implementation for MediaLiveClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a MediaLiveClientPrivate object with public implementation \a q.
 */
MediaLiveClientPrivate::MediaLiveClientPrivate(MediaLiveClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaLive
} // namespace QtAws

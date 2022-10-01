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

#ifndef QTAWS_MEDIALIVECLIENT_H
#define QTAWS_MEDIALIVECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmedialiveglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MediaLive {

class MediaLiveClientPrivate;
class AcceptInputDeviceTransferRequest;
class AcceptInputDeviceTransferResponse;
class BatchDeleteRequest;
class BatchDeleteResponse;
class BatchStartRequest;
class BatchStartResponse;
class BatchStopRequest;
class BatchStopResponse;
class BatchUpdateScheduleRequest;
class BatchUpdateScheduleResponse;
class CancelInputDeviceTransferRequest;
class CancelInputDeviceTransferResponse;
class ClaimDeviceRequest;
class ClaimDeviceResponse;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateInputRequest;
class CreateInputResponse;
class CreateInputSecurityGroupRequest;
class CreateInputSecurityGroupResponse;
class CreateMultiplexRequest;
class CreateMultiplexResponse;
class CreateMultiplexProgramRequest;
class CreateMultiplexProgramResponse;
class CreatePartnerInputRequest;
class CreatePartnerInputResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteInputRequest;
class DeleteInputResponse;
class DeleteInputSecurityGroupRequest;
class DeleteInputSecurityGroupResponse;
class DeleteMultiplexRequest;
class DeleteMultiplexResponse;
class DeleteMultiplexProgramRequest;
class DeleteMultiplexProgramResponse;
class DeleteReservationRequest;
class DeleteReservationResponse;
class DeleteScheduleRequest;
class DeleteScheduleResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeChannelRequest;
class DescribeChannelResponse;
class DescribeInputRequest;
class DescribeInputResponse;
class DescribeInputDeviceRequest;
class DescribeInputDeviceResponse;
class DescribeInputDeviceThumbnailRequest;
class DescribeInputDeviceThumbnailResponse;
class DescribeInputSecurityGroupRequest;
class DescribeInputSecurityGroupResponse;
class DescribeMultiplexRequest;
class DescribeMultiplexResponse;
class DescribeMultiplexProgramRequest;
class DescribeMultiplexProgramResponse;
class DescribeOfferingRequest;
class DescribeOfferingResponse;
class DescribeReservationRequest;
class DescribeReservationResponse;
class DescribeScheduleRequest;
class DescribeScheduleResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListInputDeviceTransfersRequest;
class ListInputDeviceTransfersResponse;
class ListInputDevicesRequest;
class ListInputDevicesResponse;
class ListInputSecurityGroupsRequest;
class ListInputSecurityGroupsResponse;
class ListInputsRequest;
class ListInputsResponse;
class ListMultiplexProgramsRequest;
class ListMultiplexProgramsResponse;
class ListMultiplexesRequest;
class ListMultiplexesResponse;
class ListOfferingsRequest;
class ListOfferingsResponse;
class ListReservationsRequest;
class ListReservationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PurchaseOfferingRequest;
class PurchaseOfferingResponse;
class RebootInputDeviceRequest;
class RebootInputDeviceResponse;
class RejectInputDeviceTransferRequest;
class RejectInputDeviceTransferResponse;
class StartChannelRequest;
class StartChannelResponse;
class StartInputDeviceMaintenanceWindowRequest;
class StartInputDeviceMaintenanceWindowResponse;
class StartMultiplexRequest;
class StartMultiplexResponse;
class StopChannelRequest;
class StopChannelResponse;
class StopMultiplexRequest;
class StopMultiplexResponse;
class TransferInputDeviceRequest;
class TransferInputDeviceResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateChannelClassRequest;
class UpdateChannelClassResponse;
class UpdateInputRequest;
class UpdateInputResponse;
class UpdateInputDeviceRequest;
class UpdateInputDeviceResponse;
class UpdateInputSecurityGroupRequest;
class UpdateInputSecurityGroupResponse;
class UpdateMultiplexRequest;
class UpdateMultiplexResponse;
class UpdateMultiplexProgramRequest;
class UpdateMultiplexProgramResponse;
class UpdateReservationRequest;
class UpdateReservationResponse;

class QTAWSMEDIALIVE_EXPORT MediaLiveClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaLiveClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MediaLiveClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInputDeviceTransferResponse * acceptInputDeviceTransfer(const AcceptInputDeviceTransferRequest &request);
    BatchDeleteResponse * batchDelete(const BatchDeleteRequest &request);
    BatchStartResponse * batchStart(const BatchStartRequest &request);
    BatchStopResponse * batchStop(const BatchStopRequest &request);
    BatchUpdateScheduleResponse * batchUpdateSchedule(const BatchUpdateScheduleRequest &request);
    CancelInputDeviceTransferResponse * cancelInputDeviceTransfer(const CancelInputDeviceTransferRequest &request);
    ClaimDeviceResponse * claimDevice(const ClaimDeviceRequest &request);
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateInputResponse * createInput(const CreateInputRequest &request);
    CreateInputSecurityGroupResponse * createInputSecurityGroup(const CreateInputSecurityGroupRequest &request);
    CreateMultiplexResponse * createMultiplex(const CreateMultiplexRequest &request);
    CreateMultiplexProgramResponse * createMultiplexProgram(const CreateMultiplexProgramRequest &request);
    CreatePartnerInputResponse * createPartnerInput(const CreatePartnerInputRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteInputResponse * deleteInput(const DeleteInputRequest &request);
    DeleteInputSecurityGroupResponse * deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request);
    DeleteMultiplexResponse * deleteMultiplex(const DeleteMultiplexRequest &request);
    DeleteMultiplexProgramResponse * deleteMultiplexProgram(const DeleteMultiplexProgramRequest &request);
    DeleteReservationResponse * deleteReservation(const DeleteReservationRequest &request);
    DeleteScheduleResponse * deleteSchedule(const DeleteScheduleRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeInputResponse * describeInput(const DescribeInputRequest &request);
    DescribeInputDeviceResponse * describeInputDevice(const DescribeInputDeviceRequest &request);
    DescribeInputDeviceThumbnailResponse * describeInputDeviceThumbnail(const DescribeInputDeviceThumbnailRequest &request);
    DescribeInputSecurityGroupResponse * describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request);
    DescribeMultiplexResponse * describeMultiplex(const DescribeMultiplexRequest &request);
    DescribeMultiplexProgramResponse * describeMultiplexProgram(const DescribeMultiplexProgramRequest &request);
    DescribeOfferingResponse * describeOffering(const DescribeOfferingRequest &request);
    DescribeReservationResponse * describeReservation(const DescribeReservationRequest &request);
    DescribeScheduleResponse * describeSchedule(const DescribeScheduleRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListInputDeviceTransfersResponse * listInputDeviceTransfers(const ListInputDeviceTransfersRequest &request);
    ListInputDevicesResponse * listInputDevices(const ListInputDevicesRequest &request);
    ListInputSecurityGroupsResponse * listInputSecurityGroups(const ListInputSecurityGroupsRequest &request);
    ListInputsResponse * listInputs(const ListInputsRequest &request);
    ListMultiplexProgramsResponse * listMultiplexPrograms(const ListMultiplexProgramsRequest &request);
    ListMultiplexesResponse * listMultiplexes(const ListMultiplexesRequest &request);
    ListOfferingsResponse * listOfferings(const ListOfferingsRequest &request);
    ListReservationsResponse * listReservations(const ListReservationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PurchaseOfferingResponse * purchaseOffering(const PurchaseOfferingRequest &request);
    RebootInputDeviceResponse * rebootInputDevice(const RebootInputDeviceRequest &request);
    RejectInputDeviceTransferResponse * rejectInputDeviceTransfer(const RejectInputDeviceTransferRequest &request);
    StartChannelResponse * startChannel(const StartChannelRequest &request);
    StartInputDeviceMaintenanceWindowResponse * startInputDeviceMaintenanceWindow(const StartInputDeviceMaintenanceWindowRequest &request);
    StartMultiplexResponse * startMultiplex(const StartMultiplexRequest &request);
    StopChannelResponse * stopChannel(const StopChannelRequest &request);
    StopMultiplexResponse * stopMultiplex(const StopMultiplexRequest &request);
    TransferInputDeviceResponse * transferInputDevice(const TransferInputDeviceRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateChannelClassResponse * updateChannelClass(const UpdateChannelClassRequest &request);
    UpdateInputResponse * updateInput(const UpdateInputRequest &request);
    UpdateInputDeviceResponse * updateInputDevice(const UpdateInputDeviceRequest &request);
    UpdateInputSecurityGroupResponse * updateInputSecurityGroup(const UpdateInputSecurityGroupRequest &request);
    UpdateMultiplexResponse * updateMultiplex(const UpdateMultiplexRequest &request);
    UpdateMultiplexProgramResponse * updateMultiplexProgram(const UpdateMultiplexProgramRequest &request);
    UpdateReservationResponse * updateReservation(const UpdateReservationRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaLiveClient)
    Q_DISABLE_COPY(MediaLiveClient)

};

} // namespace MediaLive
} // namespace QtAws

#endif

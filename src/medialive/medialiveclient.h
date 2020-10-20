/*
    Copyright 2013-2020 Paul Colby

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

class QNetworkReply;

namespace QtAws {
namespace MediaLive {

class MediaLiveClientPrivate;
class BatchUpdateScheduleRequest;
class BatchUpdateScheduleResponse;
class CreateChannelRequest;
class CreateChannelResponse;
class CreateInputRequest;
class CreateInputResponse;
class CreateInputSecurityGroupRequest;
class CreateInputSecurityGroupResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class DeleteChannelRequest;
class DeleteChannelResponse;
class DeleteInputRequest;
class DeleteInputResponse;
class DeleteInputSecurityGroupRequest;
class DeleteInputSecurityGroupResponse;
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
class DescribeInputSecurityGroupRequest;
class DescribeInputSecurityGroupResponse;
class DescribeOfferingRequest;
class DescribeOfferingResponse;
class DescribeReservationRequest;
class DescribeReservationResponse;
class DescribeScheduleRequest;
class DescribeScheduleResponse;
class ListChannelsRequest;
class ListChannelsResponse;
class ListInputSecurityGroupsRequest;
class ListInputSecurityGroupsResponse;
class ListInputsRequest;
class ListInputsResponse;
class ListOfferingsRequest;
class ListOfferingsResponse;
class ListReservationsRequest;
class ListReservationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PurchaseOfferingRequest;
class PurchaseOfferingResponse;
class StartChannelRequest;
class StartChannelResponse;
class StopChannelRequest;
class StopChannelResponse;
class UpdateChannelRequest;
class UpdateChannelResponse;
class UpdateChannelClassRequest;
class UpdateChannelClassResponse;
class UpdateInputRequest;
class UpdateInputResponse;
class UpdateInputSecurityGroupRequest;
class UpdateInputSecurityGroupResponse;
class UpdateReservationRequest;
class UpdateReservationResponse;

class QTAWS_EXPORT MediaLiveClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaLiveClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaLiveClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchUpdateScheduleResponse * batchUpdateSchedule(const BatchUpdateScheduleRequest &request);
    CreateChannelResponse * createChannel(const CreateChannelRequest &request);
    CreateInputResponse * createInput(const CreateInputRequest &request);
    CreateInputSecurityGroupResponse * createInputSecurityGroup(const CreateInputSecurityGroupRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteChannelResponse * deleteChannel(const DeleteChannelRequest &request);
    DeleteInputResponse * deleteInput(const DeleteInputRequest &request);
    DeleteInputSecurityGroupResponse * deleteInputSecurityGroup(const DeleteInputSecurityGroupRequest &request);
    DeleteReservationResponse * deleteReservation(const DeleteReservationRequest &request);
    DeleteScheduleResponse * deleteSchedule(const DeleteScheduleRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeChannelResponse * describeChannel(const DescribeChannelRequest &request);
    DescribeInputResponse * describeInput(const DescribeInputRequest &request);
    DescribeInputSecurityGroupResponse * describeInputSecurityGroup(const DescribeInputSecurityGroupRequest &request);
    DescribeOfferingResponse * describeOffering(const DescribeOfferingRequest &request);
    DescribeReservationResponse * describeReservation(const DescribeReservationRequest &request);
    DescribeScheduleResponse * describeSchedule(const DescribeScheduleRequest &request);
    ListChannelsResponse * listChannels(const ListChannelsRequest &request);
    ListInputSecurityGroupsResponse * listInputSecurityGroups(const ListInputSecurityGroupsRequest &request);
    ListInputsResponse * listInputs(const ListInputsRequest &request);
    ListOfferingsResponse * listOfferings(const ListOfferingsRequest &request);
    ListReservationsResponse * listReservations(const ListReservationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PurchaseOfferingResponse * purchaseOffering(const PurchaseOfferingRequest &request);
    StartChannelResponse * startChannel(const StartChannelRequest &request);
    StopChannelResponse * stopChannel(const StopChannelRequest &request);
    UpdateChannelResponse * updateChannel(const UpdateChannelRequest &request);
    UpdateChannelClassResponse * updateChannelClass(const UpdateChannelClassRequest &request);
    UpdateInputResponse * updateInput(const UpdateInputRequest &request);
    UpdateInputSecurityGroupResponse * updateInputSecurityGroup(const UpdateInputSecurityGroupRequest &request);
    UpdateReservationResponse * updateReservation(const UpdateReservationRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaLiveClient)
    Q_DISABLE_COPY(MediaLiveClient)

};

} // namespace MediaLive
} // namespace QtAws

#endif

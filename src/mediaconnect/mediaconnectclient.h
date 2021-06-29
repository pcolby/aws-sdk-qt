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

#ifndef QTAWS_MEDIACONNECTCLIENT_H
#define QTAWS_MEDIACONNECTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmediaconnectglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MediaConnect {

class MediaConnectClientPrivate;
class AddFlowMediaStreamsRequest;
class AddFlowMediaStreamsResponse;
class AddFlowOutputsRequest;
class AddFlowOutputsResponse;
class AddFlowSourcesRequest;
class AddFlowSourcesResponse;
class AddFlowVpcInterfacesRequest;
class AddFlowVpcInterfacesResponse;
class CreateFlowRequest;
class CreateFlowResponse;
class DeleteFlowRequest;
class DeleteFlowResponse;
class DescribeFlowRequest;
class DescribeFlowResponse;
class DescribeOfferingRequest;
class DescribeOfferingResponse;
class DescribeReservationRequest;
class DescribeReservationResponse;
class GrantFlowEntitlementsRequest;
class GrantFlowEntitlementsResponse;
class ListEntitlementsRequest;
class ListEntitlementsResponse;
class ListFlowsRequest;
class ListFlowsResponse;
class ListOfferingsRequest;
class ListOfferingsResponse;
class ListReservationsRequest;
class ListReservationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PurchaseOfferingRequest;
class PurchaseOfferingResponse;
class RemoveFlowMediaStreamRequest;
class RemoveFlowMediaStreamResponse;
class RemoveFlowOutputRequest;
class RemoveFlowOutputResponse;
class RemoveFlowSourceRequest;
class RemoveFlowSourceResponse;
class RemoveFlowVpcInterfaceRequest;
class RemoveFlowVpcInterfaceResponse;
class RevokeFlowEntitlementRequest;
class RevokeFlowEntitlementResponse;
class StartFlowRequest;
class StartFlowResponse;
class StopFlowRequest;
class StopFlowResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFlowRequest;
class UpdateFlowResponse;
class UpdateFlowEntitlementRequest;
class UpdateFlowEntitlementResponse;
class UpdateFlowMediaStreamRequest;
class UpdateFlowMediaStreamResponse;
class UpdateFlowOutputRequest;
class UpdateFlowOutputResponse;
class UpdateFlowSourceRequest;
class UpdateFlowSourceResponse;

class QTAWSMEDIACONNECT_EXPORT MediaConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    MediaConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddFlowMediaStreamsResponse * addFlowMediaStreams(const AddFlowMediaStreamsRequest &request);
    AddFlowOutputsResponse * addFlowOutputs(const AddFlowOutputsRequest &request);
    AddFlowSourcesResponse * addFlowSources(const AddFlowSourcesRequest &request);
    AddFlowVpcInterfacesResponse * addFlowVpcInterfaces(const AddFlowVpcInterfacesRequest &request);
    CreateFlowResponse * createFlow(const CreateFlowRequest &request);
    DeleteFlowResponse * deleteFlow(const DeleteFlowRequest &request);
    DescribeFlowResponse * describeFlow(const DescribeFlowRequest &request);
    DescribeOfferingResponse * describeOffering(const DescribeOfferingRequest &request);
    DescribeReservationResponse * describeReservation(const DescribeReservationRequest &request);
    GrantFlowEntitlementsResponse * grantFlowEntitlements(const GrantFlowEntitlementsRequest &request);
    ListEntitlementsResponse * listEntitlements(const ListEntitlementsRequest &request);
    ListFlowsResponse * listFlows(const ListFlowsRequest &request);
    ListOfferingsResponse * listOfferings(const ListOfferingsRequest &request);
    ListReservationsResponse * listReservations(const ListReservationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PurchaseOfferingResponse * purchaseOffering(const PurchaseOfferingRequest &request);
    RemoveFlowMediaStreamResponse * removeFlowMediaStream(const RemoveFlowMediaStreamRequest &request);
    RemoveFlowOutputResponse * removeFlowOutput(const RemoveFlowOutputRequest &request);
    RemoveFlowSourceResponse * removeFlowSource(const RemoveFlowSourceRequest &request);
    RemoveFlowVpcInterfaceResponse * removeFlowVpcInterface(const RemoveFlowVpcInterfaceRequest &request);
    RevokeFlowEntitlementResponse * revokeFlowEntitlement(const RevokeFlowEntitlementRequest &request);
    StartFlowResponse * startFlow(const StartFlowRequest &request);
    StopFlowResponse * stopFlow(const StopFlowRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFlowResponse * updateFlow(const UpdateFlowRequest &request);
    UpdateFlowEntitlementResponse * updateFlowEntitlement(const UpdateFlowEntitlementRequest &request);
    UpdateFlowMediaStreamResponse * updateFlowMediaStream(const UpdateFlowMediaStreamRequest &request);
    UpdateFlowOutputResponse * updateFlowOutput(const UpdateFlowOutputRequest &request);
    UpdateFlowSourceResponse * updateFlowSource(const UpdateFlowSourceRequest &request);

protected:
    /// @cond internal
    MediaConnectClientPrivate * const d_ptr; ///< Internal d-pointer.
    MediaConnectClient(MediaConnectClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MediaConnectClient)
    Q_DISABLE_COPY(MediaConnectClient)

};

} // namespace MediaConnect
} // namespace QtAws

#endif

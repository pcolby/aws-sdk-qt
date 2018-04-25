/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_DIRECTCONNECTCLIENT_H
#define QTAWS_DIRECTCONNECTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DirectConnect {

class DirectConnectClientPrivate;
class AllocateConnectionOnInterconnectRequest;
class AllocateConnectionOnInterconnectResponse;
class AllocateHostedConnectionRequest;
class AllocateHostedConnectionResponse;
class AllocatePrivateVirtualInterfaceRequest;
class AllocatePrivateVirtualInterfaceResponse;
class AllocatePublicVirtualInterfaceRequest;
class AllocatePublicVirtualInterfaceResponse;
class AssociateConnectionWithLagRequest;
class AssociateConnectionWithLagResponse;
class AssociateHostedConnectionRequest;
class AssociateHostedConnectionResponse;
class AssociateVirtualInterfaceRequest;
class AssociateVirtualInterfaceResponse;
class ConfirmConnectionRequest;
class ConfirmConnectionResponse;
class ConfirmPrivateVirtualInterfaceRequest;
class ConfirmPrivateVirtualInterfaceResponse;
class ConfirmPublicVirtualInterfaceRequest;
class ConfirmPublicVirtualInterfaceResponse;
class CreateBGPPeerRequest;
class CreateBGPPeerResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateDirectConnectGatewayRequest;
class CreateDirectConnectGatewayResponse;
class CreateDirectConnectGatewayAssociationRequest;
class CreateDirectConnectGatewayAssociationResponse;
class CreateInterconnectRequest;
class CreateInterconnectResponse;
class CreateLagRequest;
class CreateLagResponse;
class CreatePrivateVirtualInterfaceRequest;
class CreatePrivateVirtualInterfaceResponse;
class CreatePublicVirtualInterfaceRequest;
class CreatePublicVirtualInterfaceResponse;
class DeleteBGPPeerRequest;
class DeleteBGPPeerResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteDirectConnectGatewayRequest;
class DeleteDirectConnectGatewayResponse;
class DeleteDirectConnectGatewayAssociationRequest;
class DeleteDirectConnectGatewayAssociationResponse;
class DeleteInterconnectRequest;
class DeleteInterconnectResponse;
class DeleteLagRequest;
class DeleteLagResponse;
class DeleteVirtualInterfaceRequest;
class DeleteVirtualInterfaceResponse;
class DescribeConnectionLoaRequest;
class DescribeConnectionLoaResponse;
class DescribeConnectionsRequest;
class DescribeConnectionsResponse;
class DescribeConnectionsOnInterconnectRequest;
class DescribeConnectionsOnInterconnectResponse;
class DescribeDirectConnectGatewayAssociationsRequest;
class DescribeDirectConnectGatewayAssociationsResponse;
class DescribeDirectConnectGatewayAttachmentsRequest;
class DescribeDirectConnectGatewayAttachmentsResponse;
class DescribeDirectConnectGatewaysRequest;
class DescribeDirectConnectGatewaysResponse;
class DescribeHostedConnectionsRequest;
class DescribeHostedConnectionsResponse;
class DescribeInterconnectLoaRequest;
class DescribeInterconnectLoaResponse;
class DescribeInterconnectsRequest;
class DescribeInterconnectsResponse;
class DescribeLagsRequest;
class DescribeLagsResponse;
class DescribeLoaRequest;
class DescribeLoaResponse;
class DescribeLocationsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeVirtualGatewaysResponse;
class DescribeVirtualInterfacesRequest;
class DescribeVirtualInterfacesResponse;
class DisassociateConnectionFromLagRequest;
class DisassociateConnectionFromLagResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateLagRequest;
class UpdateLagResponse;

class QTAWS_EXPORT DirectConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DirectConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DirectConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AllocateConnectionOnInterconnectResponse * allocateConnectionOnInterconnect(const AllocateConnectionOnInterconnectRequest &request);
    AllocateHostedConnectionResponse * allocateHostedConnection(const AllocateHostedConnectionRequest &request);
    AllocatePrivateVirtualInterfaceResponse * allocatePrivateVirtualInterface(const AllocatePrivateVirtualInterfaceRequest &request);
    AllocatePublicVirtualInterfaceResponse * allocatePublicVirtualInterface(const AllocatePublicVirtualInterfaceRequest &request);
    AssociateConnectionWithLagResponse * associateConnectionWithLag(const AssociateConnectionWithLagRequest &request);
    AssociateHostedConnectionResponse * associateHostedConnection(const AssociateHostedConnectionRequest &request);
    AssociateVirtualInterfaceResponse * associateVirtualInterface(const AssociateVirtualInterfaceRequest &request);
    ConfirmConnectionResponse * confirmConnection(const ConfirmConnectionRequest &request);
    ConfirmPrivateVirtualInterfaceResponse * confirmPrivateVirtualInterface(const ConfirmPrivateVirtualInterfaceRequest &request);
    ConfirmPublicVirtualInterfaceResponse * confirmPublicVirtualInterface(const ConfirmPublicVirtualInterfaceRequest &request);
    CreateBGPPeerResponse * createBGPPeer(const CreateBGPPeerRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateDirectConnectGatewayResponse * createDirectConnectGateway(const CreateDirectConnectGatewayRequest &request);
    CreateDirectConnectGatewayAssociationResponse * createDirectConnectGatewayAssociation(const CreateDirectConnectGatewayAssociationRequest &request);
    CreateInterconnectResponse * createInterconnect(const CreateInterconnectRequest &request);
    CreateLagResponse * createLag(const CreateLagRequest &request);
    CreatePrivateVirtualInterfaceResponse * createPrivateVirtualInterface(const CreatePrivateVirtualInterfaceRequest &request);
    CreatePublicVirtualInterfaceResponse * createPublicVirtualInterface(const CreatePublicVirtualInterfaceRequest &request);
    DeleteBGPPeerResponse * deleteBGPPeer(const DeleteBGPPeerRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteDirectConnectGatewayResponse * deleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request);
    DeleteDirectConnectGatewayAssociationResponse * deleteDirectConnectGatewayAssociation(const DeleteDirectConnectGatewayAssociationRequest &request);
    DeleteInterconnectResponse * deleteInterconnect(const DeleteInterconnectRequest &request);
    DeleteLagResponse * deleteLag(const DeleteLagRequest &request);
    DeleteVirtualInterfaceResponse * deleteVirtualInterface(const DeleteVirtualInterfaceRequest &request);
    DescribeConnectionLoaResponse * describeConnectionLoa(const DescribeConnectionLoaRequest &request);
    DescribeConnectionsResponse * describeConnections(const DescribeConnectionsRequest &request);
    DescribeConnectionsOnInterconnectResponse * describeConnectionsOnInterconnect(const DescribeConnectionsOnInterconnectRequest &request);
    DescribeDirectConnectGatewayAssociationsResponse * describeDirectConnectGatewayAssociations(const DescribeDirectConnectGatewayAssociationsRequest &request);
    DescribeDirectConnectGatewayAttachmentsResponse * describeDirectConnectGatewayAttachments(const DescribeDirectConnectGatewayAttachmentsRequest &request);
    DescribeDirectConnectGatewaysResponse * describeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request);
    DescribeHostedConnectionsResponse * describeHostedConnections(const DescribeHostedConnectionsRequest &request);
    DescribeInterconnectLoaResponse * describeInterconnectLoa(const DescribeInterconnectLoaRequest &request);
    DescribeInterconnectsResponse * describeInterconnects(const DescribeInterconnectsRequest &request);
    DescribeLagsResponse * describeLags(const DescribeLagsRequest &request);
    DescribeLoaResponse * describeLoa(const DescribeLoaRequest &request);
    DescribeLocationsResponse * describeLocations();
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeVirtualGatewaysResponse * describeVirtualGateways();
    DescribeVirtualInterfacesResponse * describeVirtualInterfaces(const DescribeVirtualInterfacesRequest &request);
    DisassociateConnectionFromLagResponse * disassociateConnectionFromLag(const DisassociateConnectionFromLagRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateLagResponse * updateLag(const UpdateLagRequest &request);

private:
    Q_DECLARE_PRIVATE(DirectConnectClient)
    Q_DISABLE_COPY(DirectConnectClient)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

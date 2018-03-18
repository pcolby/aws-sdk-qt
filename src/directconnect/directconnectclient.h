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

#ifndef QTAWS_DIRECTCONNECTCLIENT_H
#define QTAWS_DIRECTCONNECTCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace DirectConnect {

class DirectConnectClientPrivate;

class QTAWS_EXPORT DirectConnectClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DirectConnectClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DirectConnectClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif

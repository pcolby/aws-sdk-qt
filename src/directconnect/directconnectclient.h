// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTCONNECTCLIENT_H
#define QTAWS_DIRECTCONNECTCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdirectconnectglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DirectConnect {

class DirectConnectClientPrivate;
class AcceptDirectConnectGatewayAssociationProposalRequest;
class AcceptDirectConnectGatewayAssociationProposalResponse;
class AllocateConnectionOnInterconnectRequest;
class AllocateConnectionOnInterconnectResponse;
class AllocateHostedConnectionRequest;
class AllocateHostedConnectionResponse;
class AllocatePrivateVirtualInterfaceRequest;
class AllocatePrivateVirtualInterfaceResponse;
class AllocatePublicVirtualInterfaceRequest;
class AllocatePublicVirtualInterfaceResponse;
class AllocateTransitVirtualInterfaceRequest;
class AllocateTransitVirtualInterfaceResponse;
class AssociateConnectionWithLagRequest;
class AssociateConnectionWithLagResponse;
class AssociateHostedConnectionRequest;
class AssociateHostedConnectionResponse;
class AssociateMacSecKeyRequest;
class AssociateMacSecKeyResponse;
class AssociateVirtualInterfaceRequest;
class AssociateVirtualInterfaceResponse;
class ConfirmConnectionRequest;
class ConfirmConnectionResponse;
class ConfirmCustomerAgreementRequest;
class ConfirmCustomerAgreementResponse;
class ConfirmPrivateVirtualInterfaceRequest;
class ConfirmPrivateVirtualInterfaceResponse;
class ConfirmPublicVirtualInterfaceRequest;
class ConfirmPublicVirtualInterfaceResponse;
class ConfirmTransitVirtualInterfaceRequest;
class ConfirmTransitVirtualInterfaceResponse;
class CreateBGPPeerRequest;
class CreateBGPPeerResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateDirectConnectGatewayRequest;
class CreateDirectConnectGatewayResponse;
class CreateDirectConnectGatewayAssociationRequest;
class CreateDirectConnectGatewayAssociationResponse;
class CreateDirectConnectGatewayAssociationProposalRequest;
class CreateDirectConnectGatewayAssociationProposalResponse;
class CreateInterconnectRequest;
class CreateInterconnectResponse;
class CreateLagRequest;
class CreateLagResponse;
class CreatePrivateVirtualInterfaceRequest;
class CreatePrivateVirtualInterfaceResponse;
class CreatePublicVirtualInterfaceRequest;
class CreatePublicVirtualInterfaceResponse;
class CreateTransitVirtualInterfaceRequest;
class CreateTransitVirtualInterfaceResponse;
class DeleteBGPPeerRequest;
class DeleteBGPPeerResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteDirectConnectGatewayRequest;
class DeleteDirectConnectGatewayResponse;
class DeleteDirectConnectGatewayAssociationRequest;
class DeleteDirectConnectGatewayAssociationResponse;
class DeleteDirectConnectGatewayAssociationProposalRequest;
class DeleteDirectConnectGatewayAssociationProposalResponse;
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
class DescribeCustomerMetadataRequest;
class DescribeCustomerMetadataResponse;
class DescribeDirectConnectGatewayAssociationProposalsRequest;
class DescribeDirectConnectGatewayAssociationProposalsResponse;
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
class DescribeLocationsRequest;
class DescribeLocationsResponse;
class DescribeRouterConfigurationRequest;
class DescribeRouterConfigurationResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeVirtualGatewaysRequest;
class DescribeVirtualGatewaysResponse;
class DescribeVirtualInterfacesRequest;
class DescribeVirtualInterfacesResponse;
class DisassociateConnectionFromLagRequest;
class DisassociateConnectionFromLagResponse;
class DisassociateMacSecKeyRequest;
class DisassociateMacSecKeyResponse;
class ListVirtualInterfaceTestHistoryRequest;
class ListVirtualInterfaceTestHistoryResponse;
class StartBgpFailoverTestRequest;
class StartBgpFailoverTestResponse;
class StopBgpFailoverTestRequest;
class StopBgpFailoverTestResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateDirectConnectGatewayRequest;
class UpdateDirectConnectGatewayResponse;
class UpdateDirectConnectGatewayAssociationRequest;
class UpdateDirectConnectGatewayAssociationResponse;
class UpdateLagRequest;
class UpdateLagResponse;
class UpdateVirtualInterfaceAttributesRequest;
class UpdateVirtualInterfaceAttributesResponse;

class QTAWSDIRECTCONNECT_EXPORT DirectConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DirectConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DirectConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptDirectConnectGatewayAssociationProposalResponse * acceptDirectConnectGatewayAssociationProposal(const AcceptDirectConnectGatewayAssociationProposalRequest &request);
    AllocateConnectionOnInterconnectResponse * allocateConnectionOnInterconnect(const AllocateConnectionOnInterconnectRequest &request);
    AllocateHostedConnectionResponse * allocateHostedConnection(const AllocateHostedConnectionRequest &request);
    AllocatePrivateVirtualInterfaceResponse * allocatePrivateVirtualInterface(const AllocatePrivateVirtualInterfaceRequest &request);
    AllocatePublicVirtualInterfaceResponse * allocatePublicVirtualInterface(const AllocatePublicVirtualInterfaceRequest &request);
    AllocateTransitVirtualInterfaceResponse * allocateTransitVirtualInterface(const AllocateTransitVirtualInterfaceRequest &request);
    AssociateConnectionWithLagResponse * associateConnectionWithLag(const AssociateConnectionWithLagRequest &request);
    AssociateHostedConnectionResponse * associateHostedConnection(const AssociateHostedConnectionRequest &request);
    AssociateMacSecKeyResponse * associateMacSecKey(const AssociateMacSecKeyRequest &request);
    AssociateVirtualInterfaceResponse * associateVirtualInterface(const AssociateVirtualInterfaceRequest &request);
    ConfirmConnectionResponse * confirmConnection(const ConfirmConnectionRequest &request);
    ConfirmCustomerAgreementResponse * confirmCustomerAgreement(const ConfirmCustomerAgreementRequest &request);
    ConfirmPrivateVirtualInterfaceResponse * confirmPrivateVirtualInterface(const ConfirmPrivateVirtualInterfaceRequest &request);
    ConfirmPublicVirtualInterfaceResponse * confirmPublicVirtualInterface(const ConfirmPublicVirtualInterfaceRequest &request);
    ConfirmTransitVirtualInterfaceResponse * confirmTransitVirtualInterface(const ConfirmTransitVirtualInterfaceRequest &request);
    CreateBGPPeerResponse * createBGPPeer(const CreateBGPPeerRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateDirectConnectGatewayResponse * createDirectConnectGateway(const CreateDirectConnectGatewayRequest &request);
    CreateDirectConnectGatewayAssociationResponse * createDirectConnectGatewayAssociation(const CreateDirectConnectGatewayAssociationRequest &request);
    CreateDirectConnectGatewayAssociationProposalResponse * createDirectConnectGatewayAssociationProposal(const CreateDirectConnectGatewayAssociationProposalRequest &request);
    CreateInterconnectResponse * createInterconnect(const CreateInterconnectRequest &request);
    CreateLagResponse * createLag(const CreateLagRequest &request);
    CreatePrivateVirtualInterfaceResponse * createPrivateVirtualInterface(const CreatePrivateVirtualInterfaceRequest &request);
    CreatePublicVirtualInterfaceResponse * createPublicVirtualInterface(const CreatePublicVirtualInterfaceRequest &request);
    CreateTransitVirtualInterfaceResponse * createTransitVirtualInterface(const CreateTransitVirtualInterfaceRequest &request);
    DeleteBGPPeerResponse * deleteBGPPeer(const DeleteBGPPeerRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteDirectConnectGatewayResponse * deleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request);
    DeleteDirectConnectGatewayAssociationResponse * deleteDirectConnectGatewayAssociation(const DeleteDirectConnectGatewayAssociationRequest &request);
    DeleteDirectConnectGatewayAssociationProposalResponse * deleteDirectConnectGatewayAssociationProposal(const DeleteDirectConnectGatewayAssociationProposalRequest &request);
    DeleteInterconnectResponse * deleteInterconnect(const DeleteInterconnectRequest &request);
    DeleteLagResponse * deleteLag(const DeleteLagRequest &request);
    DeleteVirtualInterfaceResponse * deleteVirtualInterface(const DeleteVirtualInterfaceRequest &request);
    DescribeConnectionLoaResponse * describeConnectionLoa(const DescribeConnectionLoaRequest &request);
    DescribeConnectionsResponse * describeConnections(const DescribeConnectionsRequest &request);
    DescribeConnectionsOnInterconnectResponse * describeConnectionsOnInterconnect(const DescribeConnectionsOnInterconnectRequest &request);
    DescribeCustomerMetadataResponse * describeCustomerMetadata(const DescribeCustomerMetadataRequest &request);
    DescribeCustomerMetadataResponse * describeCustomerMetadata();
    DescribeDirectConnectGatewayAssociationProposalsResponse * describeDirectConnectGatewayAssociationProposals(const DescribeDirectConnectGatewayAssociationProposalsRequest &request);
    DescribeDirectConnectGatewayAssociationsResponse * describeDirectConnectGatewayAssociations(const DescribeDirectConnectGatewayAssociationsRequest &request);
    DescribeDirectConnectGatewayAttachmentsResponse * describeDirectConnectGatewayAttachments(const DescribeDirectConnectGatewayAttachmentsRequest &request);
    DescribeDirectConnectGatewaysResponse * describeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request);
    DescribeHostedConnectionsResponse * describeHostedConnections(const DescribeHostedConnectionsRequest &request);
    DescribeInterconnectLoaResponse * describeInterconnectLoa(const DescribeInterconnectLoaRequest &request);
    DescribeInterconnectsResponse * describeInterconnects(const DescribeInterconnectsRequest &request);
    DescribeLagsResponse * describeLags(const DescribeLagsRequest &request);
    DescribeLoaResponse * describeLoa(const DescribeLoaRequest &request);
    DescribeLocationsResponse * describeLocations(const DescribeLocationsRequest &request);
    DescribeLocationsResponse * describeLocations();
    DescribeRouterConfigurationResponse * describeRouterConfiguration(const DescribeRouterConfigurationRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeVirtualGatewaysResponse * describeVirtualGateways(const DescribeVirtualGatewaysRequest &request);
    DescribeVirtualGatewaysResponse * describeVirtualGateways();
    DescribeVirtualInterfacesResponse * describeVirtualInterfaces(const DescribeVirtualInterfacesRequest &request);
    DisassociateConnectionFromLagResponse * disassociateConnectionFromLag(const DisassociateConnectionFromLagRequest &request);
    DisassociateMacSecKeyResponse * disassociateMacSecKey(const DisassociateMacSecKeyRequest &request);
    ListVirtualInterfaceTestHistoryResponse * listVirtualInterfaceTestHistory(const ListVirtualInterfaceTestHistoryRequest &request);
    StartBgpFailoverTestResponse * startBgpFailoverTest(const StartBgpFailoverTestRequest &request);
    StopBgpFailoverTestResponse * stopBgpFailoverTest(const StopBgpFailoverTestRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateDirectConnectGatewayResponse * updateDirectConnectGateway(const UpdateDirectConnectGatewayRequest &request);
    UpdateDirectConnectGatewayAssociationResponse * updateDirectConnectGatewayAssociation(const UpdateDirectConnectGatewayAssociationRequest &request);
    UpdateLagResponse * updateLag(const UpdateLagRequest &request);
    UpdateVirtualInterfaceAttributesResponse * updateVirtualInterfaceAttributes(const UpdateVirtualInterfaceAttributesRequest &request);

private:
    Q_DECLARE_PRIVATE(DirectConnectClient)
    Q_DISABLE_COPY(DirectConnectClient)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

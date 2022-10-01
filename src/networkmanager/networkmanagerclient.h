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

#ifndef QTAWS_NETWORKMANAGERCLIENT_H
#define QTAWS_NETWORKMANAGERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsnetworkmanagerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace NetworkManager {

class NetworkManagerClientPrivate;
class AcceptAttachmentRequest;
class AcceptAttachmentResponse;
class AssociateConnectPeerRequest;
class AssociateConnectPeerResponse;
class AssociateCustomerGatewayRequest;
class AssociateCustomerGatewayResponse;
class AssociateLinkRequest;
class AssociateLinkResponse;
class AssociateTransitGatewayConnectPeerRequest;
class AssociateTransitGatewayConnectPeerResponse;
class CreateConnectAttachmentRequest;
class CreateConnectAttachmentResponse;
class CreateConnectPeerRequest;
class CreateConnectPeerResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateCoreNetworkRequest;
class CreateCoreNetworkResponse;
class CreateDeviceRequest;
class CreateDeviceResponse;
class CreateGlobalNetworkRequest;
class CreateGlobalNetworkResponse;
class CreateLinkRequest;
class CreateLinkResponse;
class CreateSiteRequest;
class CreateSiteResponse;
class CreateSiteToSiteVpnAttachmentRequest;
class CreateSiteToSiteVpnAttachmentResponse;
class CreateTransitGatewayPeeringRequest;
class CreateTransitGatewayPeeringResponse;
class CreateTransitGatewayRouteTableAttachmentRequest;
class CreateTransitGatewayRouteTableAttachmentResponse;
class CreateVpcAttachmentRequest;
class CreateVpcAttachmentResponse;
class DeleteAttachmentRequest;
class DeleteAttachmentResponse;
class DeleteConnectPeerRequest;
class DeleteConnectPeerResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteCoreNetworkRequest;
class DeleteCoreNetworkResponse;
class DeleteCoreNetworkPolicyVersionRequest;
class DeleteCoreNetworkPolicyVersionResponse;
class DeleteDeviceRequest;
class DeleteDeviceResponse;
class DeleteGlobalNetworkRequest;
class DeleteGlobalNetworkResponse;
class DeleteLinkRequest;
class DeleteLinkResponse;
class DeletePeeringRequest;
class DeletePeeringResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSiteRequest;
class DeleteSiteResponse;
class DeregisterTransitGatewayRequest;
class DeregisterTransitGatewayResponse;
class DescribeGlobalNetworksRequest;
class DescribeGlobalNetworksResponse;
class DisassociateConnectPeerRequest;
class DisassociateConnectPeerResponse;
class DisassociateCustomerGatewayRequest;
class DisassociateCustomerGatewayResponse;
class DisassociateLinkRequest;
class DisassociateLinkResponse;
class DisassociateTransitGatewayConnectPeerRequest;
class DisassociateTransitGatewayConnectPeerResponse;
class ExecuteCoreNetworkChangeSetRequest;
class ExecuteCoreNetworkChangeSetResponse;
class GetConnectAttachmentRequest;
class GetConnectAttachmentResponse;
class GetConnectPeerRequest;
class GetConnectPeerResponse;
class GetConnectPeerAssociationsRequest;
class GetConnectPeerAssociationsResponse;
class GetConnectionsRequest;
class GetConnectionsResponse;
class GetCoreNetworkRequest;
class GetCoreNetworkResponse;
class GetCoreNetworkChangeEventsRequest;
class GetCoreNetworkChangeEventsResponse;
class GetCoreNetworkChangeSetRequest;
class GetCoreNetworkChangeSetResponse;
class GetCoreNetworkPolicyRequest;
class GetCoreNetworkPolicyResponse;
class GetCustomerGatewayAssociationsRequest;
class GetCustomerGatewayAssociationsResponse;
class GetDevicesRequest;
class GetDevicesResponse;
class GetLinkAssociationsRequest;
class GetLinkAssociationsResponse;
class GetLinksRequest;
class GetLinksResponse;
class GetNetworkResourceCountsRequest;
class GetNetworkResourceCountsResponse;
class GetNetworkResourceRelationshipsRequest;
class GetNetworkResourceRelationshipsResponse;
class GetNetworkResourcesRequest;
class GetNetworkResourcesResponse;
class GetNetworkRoutesRequest;
class GetNetworkRoutesResponse;
class GetNetworkTelemetryRequest;
class GetNetworkTelemetryResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class GetRouteAnalysisRequest;
class GetRouteAnalysisResponse;
class GetSiteToSiteVpnAttachmentRequest;
class GetSiteToSiteVpnAttachmentResponse;
class GetSitesRequest;
class GetSitesResponse;
class GetTransitGatewayConnectPeerAssociationsRequest;
class GetTransitGatewayConnectPeerAssociationsResponse;
class GetTransitGatewayPeeringRequest;
class GetTransitGatewayPeeringResponse;
class GetTransitGatewayRegistrationsRequest;
class GetTransitGatewayRegistrationsResponse;
class GetTransitGatewayRouteTableAttachmentRequest;
class GetTransitGatewayRouteTableAttachmentResponse;
class GetVpcAttachmentRequest;
class GetVpcAttachmentResponse;
class ListAttachmentsRequest;
class ListAttachmentsResponse;
class ListConnectPeersRequest;
class ListConnectPeersResponse;
class ListCoreNetworkPolicyVersionsRequest;
class ListCoreNetworkPolicyVersionsResponse;
class ListCoreNetworksRequest;
class ListCoreNetworksResponse;
class ListOrganizationServiceAccessStatusRequest;
class ListOrganizationServiceAccessStatusResponse;
class ListPeeringsRequest;
class ListPeeringsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutCoreNetworkPolicyRequest;
class PutCoreNetworkPolicyResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class RegisterTransitGatewayRequest;
class RegisterTransitGatewayResponse;
class RejectAttachmentRequest;
class RejectAttachmentResponse;
class RestoreCoreNetworkPolicyVersionRequest;
class RestoreCoreNetworkPolicyVersionResponse;
class StartOrganizationServiceAccessUpdateRequest;
class StartOrganizationServiceAccessUpdateResponse;
class StartRouteAnalysisRequest;
class StartRouteAnalysisResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateCoreNetworkRequest;
class UpdateCoreNetworkResponse;
class UpdateDeviceRequest;
class UpdateDeviceResponse;
class UpdateGlobalNetworkRequest;
class UpdateGlobalNetworkResponse;
class UpdateLinkRequest;
class UpdateLinkResponse;
class UpdateNetworkResourceMetadataRequest;
class UpdateNetworkResourceMetadataResponse;
class UpdateSiteRequest;
class UpdateSiteResponse;
class UpdateVpcAttachmentRequest;
class UpdateVpcAttachmentResponse;

class QTAWSNETWORKMANAGER_EXPORT NetworkManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    NetworkManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit NetworkManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptAttachmentResponse * acceptAttachment(const AcceptAttachmentRequest &request);
    AssociateConnectPeerResponse * associateConnectPeer(const AssociateConnectPeerRequest &request);
    AssociateCustomerGatewayResponse * associateCustomerGateway(const AssociateCustomerGatewayRequest &request);
    AssociateLinkResponse * associateLink(const AssociateLinkRequest &request);
    AssociateTransitGatewayConnectPeerResponse * associateTransitGatewayConnectPeer(const AssociateTransitGatewayConnectPeerRequest &request);
    CreateConnectAttachmentResponse * createConnectAttachment(const CreateConnectAttachmentRequest &request);
    CreateConnectPeerResponse * createConnectPeer(const CreateConnectPeerRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateCoreNetworkResponse * createCoreNetwork(const CreateCoreNetworkRequest &request);
    CreateDeviceResponse * createDevice(const CreateDeviceRequest &request);
    CreateGlobalNetworkResponse * createGlobalNetwork(const CreateGlobalNetworkRequest &request);
    CreateLinkResponse * createLink(const CreateLinkRequest &request);
    CreateSiteResponse * createSite(const CreateSiteRequest &request);
    CreateSiteToSiteVpnAttachmentResponse * createSiteToSiteVpnAttachment(const CreateSiteToSiteVpnAttachmentRequest &request);
    CreateTransitGatewayPeeringResponse * createTransitGatewayPeering(const CreateTransitGatewayPeeringRequest &request);
    CreateTransitGatewayRouteTableAttachmentResponse * createTransitGatewayRouteTableAttachment(const CreateTransitGatewayRouteTableAttachmentRequest &request);
    CreateVpcAttachmentResponse * createVpcAttachment(const CreateVpcAttachmentRequest &request);
    DeleteAttachmentResponse * deleteAttachment(const DeleteAttachmentRequest &request);
    DeleteConnectPeerResponse * deleteConnectPeer(const DeleteConnectPeerRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteCoreNetworkResponse * deleteCoreNetwork(const DeleteCoreNetworkRequest &request);
    DeleteCoreNetworkPolicyVersionResponse * deleteCoreNetworkPolicyVersion(const DeleteCoreNetworkPolicyVersionRequest &request);
    DeleteDeviceResponse * deleteDevice(const DeleteDeviceRequest &request);
    DeleteGlobalNetworkResponse * deleteGlobalNetwork(const DeleteGlobalNetworkRequest &request);
    DeleteLinkResponse * deleteLink(const DeleteLinkRequest &request);
    DeletePeeringResponse * deletePeering(const DeletePeeringRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSiteResponse * deleteSite(const DeleteSiteRequest &request);
    DeregisterTransitGatewayResponse * deregisterTransitGateway(const DeregisterTransitGatewayRequest &request);
    DescribeGlobalNetworksResponse * describeGlobalNetworks(const DescribeGlobalNetworksRequest &request);
    DisassociateConnectPeerResponse * disassociateConnectPeer(const DisassociateConnectPeerRequest &request);
    DisassociateCustomerGatewayResponse * disassociateCustomerGateway(const DisassociateCustomerGatewayRequest &request);
    DisassociateLinkResponse * disassociateLink(const DisassociateLinkRequest &request);
    DisassociateTransitGatewayConnectPeerResponse * disassociateTransitGatewayConnectPeer(const DisassociateTransitGatewayConnectPeerRequest &request);
    ExecuteCoreNetworkChangeSetResponse * executeCoreNetworkChangeSet(const ExecuteCoreNetworkChangeSetRequest &request);
    GetConnectAttachmentResponse * getConnectAttachment(const GetConnectAttachmentRequest &request);
    GetConnectPeerResponse * getConnectPeer(const GetConnectPeerRequest &request);
    GetConnectPeerAssociationsResponse * getConnectPeerAssociations(const GetConnectPeerAssociationsRequest &request);
    GetConnectionsResponse * getConnections(const GetConnectionsRequest &request);
    GetCoreNetworkResponse * getCoreNetwork(const GetCoreNetworkRequest &request);
    GetCoreNetworkChangeEventsResponse * getCoreNetworkChangeEvents(const GetCoreNetworkChangeEventsRequest &request);
    GetCoreNetworkChangeSetResponse * getCoreNetworkChangeSet(const GetCoreNetworkChangeSetRequest &request);
    GetCoreNetworkPolicyResponse * getCoreNetworkPolicy(const GetCoreNetworkPolicyRequest &request);
    GetCustomerGatewayAssociationsResponse * getCustomerGatewayAssociations(const GetCustomerGatewayAssociationsRequest &request);
    GetDevicesResponse * getDevices(const GetDevicesRequest &request);
    GetLinkAssociationsResponse * getLinkAssociations(const GetLinkAssociationsRequest &request);
    GetLinksResponse * getLinks(const GetLinksRequest &request);
    GetNetworkResourceCountsResponse * getNetworkResourceCounts(const GetNetworkResourceCountsRequest &request);
    GetNetworkResourceRelationshipsResponse * getNetworkResourceRelationships(const GetNetworkResourceRelationshipsRequest &request);
    GetNetworkResourcesResponse * getNetworkResources(const GetNetworkResourcesRequest &request);
    GetNetworkRoutesResponse * getNetworkRoutes(const GetNetworkRoutesRequest &request);
    GetNetworkTelemetryResponse * getNetworkTelemetry(const GetNetworkTelemetryRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    GetRouteAnalysisResponse * getRouteAnalysis(const GetRouteAnalysisRequest &request);
    GetSiteToSiteVpnAttachmentResponse * getSiteToSiteVpnAttachment(const GetSiteToSiteVpnAttachmentRequest &request);
    GetSitesResponse * getSites(const GetSitesRequest &request);
    GetTransitGatewayConnectPeerAssociationsResponse * getTransitGatewayConnectPeerAssociations(const GetTransitGatewayConnectPeerAssociationsRequest &request);
    GetTransitGatewayPeeringResponse * getTransitGatewayPeering(const GetTransitGatewayPeeringRequest &request);
    GetTransitGatewayRegistrationsResponse * getTransitGatewayRegistrations(const GetTransitGatewayRegistrationsRequest &request);
    GetTransitGatewayRouteTableAttachmentResponse * getTransitGatewayRouteTableAttachment(const GetTransitGatewayRouteTableAttachmentRequest &request);
    GetVpcAttachmentResponse * getVpcAttachment(const GetVpcAttachmentRequest &request);
    ListAttachmentsResponse * listAttachments(const ListAttachmentsRequest &request);
    ListConnectPeersResponse * listConnectPeers(const ListConnectPeersRequest &request);
    ListCoreNetworkPolicyVersionsResponse * listCoreNetworkPolicyVersions(const ListCoreNetworkPolicyVersionsRequest &request);
    ListCoreNetworksResponse * listCoreNetworks(const ListCoreNetworksRequest &request);
    ListOrganizationServiceAccessStatusResponse * listOrganizationServiceAccessStatus(const ListOrganizationServiceAccessStatusRequest &request);
    ListPeeringsResponse * listPeerings(const ListPeeringsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutCoreNetworkPolicyResponse * putCoreNetworkPolicy(const PutCoreNetworkPolicyRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    RegisterTransitGatewayResponse * registerTransitGateway(const RegisterTransitGatewayRequest &request);
    RejectAttachmentResponse * rejectAttachment(const RejectAttachmentRequest &request);
    RestoreCoreNetworkPolicyVersionResponse * restoreCoreNetworkPolicyVersion(const RestoreCoreNetworkPolicyVersionRequest &request);
    StartOrganizationServiceAccessUpdateResponse * startOrganizationServiceAccessUpdate(const StartOrganizationServiceAccessUpdateRequest &request);
    StartRouteAnalysisResponse * startRouteAnalysis(const StartRouteAnalysisRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateCoreNetworkResponse * updateCoreNetwork(const UpdateCoreNetworkRequest &request);
    UpdateDeviceResponse * updateDevice(const UpdateDeviceRequest &request);
    UpdateGlobalNetworkResponse * updateGlobalNetwork(const UpdateGlobalNetworkRequest &request);
    UpdateLinkResponse * updateLink(const UpdateLinkRequest &request);
    UpdateNetworkResourceMetadataResponse * updateNetworkResourceMetadata(const UpdateNetworkResourceMetadataRequest &request);
    UpdateSiteResponse * updateSite(const UpdateSiteRequest &request);
    UpdateVpcAttachmentResponse * updateVpcAttachment(const UpdateVpcAttachmentRequest &request);

private:
    Q_DECLARE_PRIVATE(NetworkManagerClient)
    Q_DISABLE_COPY(NetworkManagerClient)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

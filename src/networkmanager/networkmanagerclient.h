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
class AssociateCustomerGatewayRequest;
class AssociateCustomerGatewayResponse;
class AssociateLinkRequest;
class AssociateLinkResponse;
class AssociateTransitGatewayConnectPeerRequest;
class AssociateTransitGatewayConnectPeerResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateDeviceRequest;
class CreateDeviceResponse;
class CreateGlobalNetworkRequest;
class CreateGlobalNetworkResponse;
class CreateLinkRequest;
class CreateLinkResponse;
class CreateSiteRequest;
class CreateSiteResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteDeviceRequest;
class DeleteDeviceResponse;
class DeleteGlobalNetworkRequest;
class DeleteGlobalNetworkResponse;
class DeleteLinkRequest;
class DeleteLinkResponse;
class DeleteSiteRequest;
class DeleteSiteResponse;
class DeregisterTransitGatewayRequest;
class DeregisterTransitGatewayResponse;
class DescribeGlobalNetworksRequest;
class DescribeGlobalNetworksResponse;
class DisassociateCustomerGatewayRequest;
class DisassociateCustomerGatewayResponse;
class DisassociateLinkRequest;
class DisassociateLinkResponse;
class DisassociateTransitGatewayConnectPeerRequest;
class DisassociateTransitGatewayConnectPeerResponse;
class GetConnectionsRequest;
class GetConnectionsResponse;
class GetCustomerGatewayAssociationsRequest;
class GetCustomerGatewayAssociationsResponse;
class GetDevicesRequest;
class GetDevicesResponse;
class GetLinkAssociationsRequest;
class GetLinkAssociationsResponse;
class GetLinksRequest;
class GetLinksResponse;
class GetSitesRequest;
class GetSitesResponse;
class GetTransitGatewayConnectPeerAssociationsRequest;
class GetTransitGatewayConnectPeerAssociationsResponse;
class GetTransitGatewayRegistrationsRequest;
class GetTransitGatewayRegistrationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RegisterTransitGatewayRequest;
class RegisterTransitGatewayResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateDeviceRequest;
class UpdateDeviceResponse;
class UpdateGlobalNetworkRequest;
class UpdateGlobalNetworkResponse;
class UpdateLinkRequest;
class UpdateLinkResponse;
class UpdateSiteRequest;
class UpdateSiteResponse;

class QTAWSNETWORKMANAGER_EXPORT NetworkManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    NetworkManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    NetworkManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateCustomerGatewayResponse * associateCustomerGateway(const AssociateCustomerGatewayRequest &request);
    AssociateLinkResponse * associateLink(const AssociateLinkRequest &request);
    AssociateTransitGatewayConnectPeerResponse * associateTransitGatewayConnectPeer(const AssociateTransitGatewayConnectPeerRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateDeviceResponse * createDevice(const CreateDeviceRequest &request);
    CreateGlobalNetworkResponse * createGlobalNetwork(const CreateGlobalNetworkRequest &request);
    CreateLinkResponse * createLink(const CreateLinkRequest &request);
    CreateSiteResponse * createSite(const CreateSiteRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteDeviceResponse * deleteDevice(const DeleteDeviceRequest &request);
    DeleteGlobalNetworkResponse * deleteGlobalNetwork(const DeleteGlobalNetworkRequest &request);
    DeleteLinkResponse * deleteLink(const DeleteLinkRequest &request);
    DeleteSiteResponse * deleteSite(const DeleteSiteRequest &request);
    DeregisterTransitGatewayResponse * deregisterTransitGateway(const DeregisterTransitGatewayRequest &request);
    DescribeGlobalNetworksResponse * describeGlobalNetworks(const DescribeGlobalNetworksRequest &request);
    DisassociateCustomerGatewayResponse * disassociateCustomerGateway(const DisassociateCustomerGatewayRequest &request);
    DisassociateLinkResponse * disassociateLink(const DisassociateLinkRequest &request);
    DisassociateTransitGatewayConnectPeerResponse * disassociateTransitGatewayConnectPeer(const DisassociateTransitGatewayConnectPeerRequest &request);
    GetConnectionsResponse * getConnections(const GetConnectionsRequest &request);
    GetCustomerGatewayAssociationsResponse * getCustomerGatewayAssociations(const GetCustomerGatewayAssociationsRequest &request);
    GetDevicesResponse * getDevices(const GetDevicesRequest &request);
    GetLinkAssociationsResponse * getLinkAssociations(const GetLinkAssociationsRequest &request);
    GetLinksResponse * getLinks(const GetLinksRequest &request);
    GetSitesResponse * getSites(const GetSitesRequest &request);
    GetTransitGatewayConnectPeerAssociationsResponse * getTransitGatewayConnectPeerAssociations(const GetTransitGatewayConnectPeerAssociationsRequest &request);
    GetTransitGatewayRegistrationsResponse * getTransitGatewayRegistrations(const GetTransitGatewayRegistrationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterTransitGatewayResponse * registerTransitGateway(const RegisterTransitGatewayRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateDeviceResponse * updateDevice(const UpdateDeviceRequest &request);
    UpdateGlobalNetworkResponse * updateGlobalNetwork(const UpdateGlobalNetworkRequest &request);
    UpdateLinkResponse * updateLink(const UpdateLinkRequest &request);
    UpdateSiteResponse * updateSite(const UpdateSiteRequest &request);

protected:
    /// @cond internal
    NetworkManagerClientPrivate * const d_ptr; ///< Internal d-pointer.
    NetworkManagerClient(NetworkManagerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(NetworkManagerClient)
    Q_DISABLE_COPY(NetworkManagerClient)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

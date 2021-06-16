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

#include "networkmanagerclient.h"
#include "networkmanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "associatecustomergatewayrequest.h"
#include "associatecustomergatewayresponse.h"
#include "associatelinkrequest.h"
#include "associatelinkresponse.h"
#include "associatetransitgatewayconnectpeerrequest.h"
#include "associatetransitgatewayconnectpeerresponse.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createdevicerequest.h"
#include "createdeviceresponse.h"
#include "createglobalnetworkrequest.h"
#include "createglobalnetworkresponse.h"
#include "createlinkrequest.h"
#include "createlinkresponse.h"
#include "createsiterequest.h"
#include "createsiteresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deletedevicerequest.h"
#include "deletedeviceresponse.h"
#include "deleteglobalnetworkrequest.h"
#include "deleteglobalnetworkresponse.h"
#include "deletelinkrequest.h"
#include "deletelinkresponse.h"
#include "deletesiterequest.h"
#include "deletesiteresponse.h"
#include "deregistertransitgatewayrequest.h"
#include "deregistertransitgatewayresponse.h"
#include "describeglobalnetworksrequest.h"
#include "describeglobalnetworksresponse.h"
#include "disassociatecustomergatewayrequest.h"
#include "disassociatecustomergatewayresponse.h"
#include "disassociatelinkrequest.h"
#include "disassociatelinkresponse.h"
#include "disassociatetransitgatewayconnectpeerrequest.h"
#include "disassociatetransitgatewayconnectpeerresponse.h"
#include "getconnectionsrequest.h"
#include "getconnectionsresponse.h"
#include "getcustomergatewayassociationsrequest.h"
#include "getcustomergatewayassociationsresponse.h"
#include "getdevicesrequest.h"
#include "getdevicesresponse.h"
#include "getlinkassociationsrequest.h"
#include "getlinkassociationsresponse.h"
#include "getlinksrequest.h"
#include "getlinksresponse.h"
#include "getsitesrequest.h"
#include "getsitesresponse.h"
#include "gettransitgatewayconnectpeerassociationsrequest.h"
#include "gettransitgatewayconnectpeerassociationsresponse.h"
#include "gettransitgatewayregistrationsrequest.h"
#include "gettransitgatewayregistrationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "registertransitgatewayrequest.h"
#include "registertransitgatewayresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconnectionrequest.h"
#include "updateconnectionresponse.h"
#include "updatedevicerequest.h"
#include "updatedeviceresponse.h"
#include "updateglobalnetworkrequest.h"
#include "updateglobalnetworkresponse.h"
#include "updatelinkrequest.h"
#include "updatelinkresponse.h"
#include "updatesiterequest.h"
#include "updatesiteresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::NetworkManager
 * \brief Contains classess for accessing AWS Network Manager (NetworkManager).
 *
 * \inmodule QtAwsNetworkManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::NetworkManagerClient
 * \brief The NetworkManagerClient class provides access to the AWS Network Manager (NetworkManager) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNetworkManager
 *
 *  Transit Gateway Network Manager (Network Manager) enables you to create a global network, in which you can monitor your
 *  AWS and on-premises networks that are built around transit
 * 
 *  gateways>
 * 
 *  The Network Manager APIs are supported in the US West (Oregon) Region only. You must specify the <code>us-west-2</code>
 *  Region in all requests made to Network
 */

/*!
 * \brief Constructs a NetworkManagerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
NetworkManagerClient::NetworkManagerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NetworkManagerClientPrivate(this), parent)
{
    Q_D(NetworkManagerClient);
    d->apiVersion = QStringLiteral("2019-07-05");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("networkmanager");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Network Manager");
    d->serviceName = QStringLiteral("networkmanager");
}

/*!
 * \overload NetworkManagerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
NetworkManagerClient::NetworkManagerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NetworkManagerClientPrivate(this), parent)
{
    Q_D(NetworkManagerClient);
    d->apiVersion = QStringLiteral("2019-07-05");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("networkmanager");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Network Manager");
    d->serviceName = QStringLiteral("networkmanager");
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * AssociateCustomerGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a customer gateway with a device and optionally, with a link. If you specify a link, it must be associated
 * with the specified device.
 *
 * </p
 *
 * You can only associate customer gateways that are connected to a VPN attachment on a transit gateway. The transit
 * gateway must be registered in your global network. When you register a transit gateway, customer gateways that are
 * connected to the transit gateway are automatically included in the global network. To list customer gateways that are
 * connected to a transit gateway, use the <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_DescribeVpnConnections.html">DescribeVpnConnections</a>
 * EC2 API and filter by
 *
 * <code>transit-gateway-id</code>>
 *
 * You cannot associate a customer gateway with more than one device and link.
 */
AssociateCustomerGatewayResponse * NetworkManagerClient::associateCustomerGateway(const AssociateCustomerGatewayRequest &request)
{
    return qobject_cast<AssociateCustomerGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * AssociateLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a link to a device. A device can be associated to multiple links and a link can be associated to multiple
 * devices. The device and link must be in the same global network and the same
 */
AssociateLinkResponse * NetworkManagerClient::associateLink(const AssociateLinkRequest &request)
{
    return qobject_cast<AssociateLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * AssociateTransitGatewayConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a transit gateway Connect peer with a device, and optionally, with a link. If you specify a link, it must be
 * associated with the specified device.
 *
 * </p
 *
 * You can only associate transit gateway Connect peers that have been created on a transit gateway that's registered in
 * your global
 *
 * network>
 *
 * You cannot associate a transit gateway Connect peer with more than one device and link.
 */
AssociateTransitGatewayConnectPeerResponse * NetworkManagerClient::associateTransitGatewayConnectPeer(const AssociateTransitGatewayConnectPeerRequest &request)
{
    return qobject_cast<AssociateTransitGatewayConnectPeerResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a connection between two devices. The devices can be a physical or virtual appliance that connects to a
 * third-party appliance in a VPC, or a physical appliance that connects to another physical appliance in an on-premises
 */
CreateConnectionResponse * NetworkManagerClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new device in a global network. If you specify both a site ID and a location, the location of the site is used
 * for visualization in the Network Manager
 */
CreateDeviceResponse * NetworkManagerClient::createDevice(const CreateDeviceRequest &request)
{
    return qobject_cast<CreateDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateGlobalNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new, empty global
 */
CreateGlobalNetworkResponse * NetworkManagerClient::createGlobalNetwork(const CreateGlobalNetworkRequest &request)
{
    return qobject_cast<CreateGlobalNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new link for a specified
 */
CreateLinkResponse * NetworkManagerClient::createLink(const CreateLinkRequest &request)
{
    return qobject_cast<CreateLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new site in a global
 */
CreateSiteResponse * NetworkManagerClient::createSite(const CreateSiteRequest &request)
{
    return qobject_cast<CreateSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified connection in your global
 */
DeleteConnectionResponse * NetworkManagerClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing device. You must first disassociate the device from any links and customer
 */
DeleteDeviceResponse * NetworkManagerClient::deleteDevice(const DeleteDeviceRequest &request)
{
    return qobject_cast<DeleteDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteGlobalNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing global network. You must first delete all global network objects (devices, links, and sites) and
 * deregister all transit
 */
DeleteGlobalNetworkResponse * NetworkManagerClient::deleteGlobalNetwork(const DeleteGlobalNetworkRequest &request)
{
    return qobject_cast<DeleteGlobalNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing link. You must first disassociate the link from any devices and customer
 */
DeleteLinkResponse * NetworkManagerClient::deleteLink(const DeleteLinkRequest &request)
{
    return qobject_cast<DeleteLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing site. The site cannot be associated with any device or
 */
DeleteSiteResponse * NetworkManagerClient::deleteSite(const DeleteSiteRequest &request)
{
    return qobject_cast<DeleteSiteResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeregisterTransitGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters a transit gateway from your global network. This action does not delete your transit gateway, or modify any
 * of its attachments. This action removes any customer gateway
 */
DeregisterTransitGatewayResponse * NetworkManagerClient::deregisterTransitGateway(const DeregisterTransitGatewayRequest &request)
{
    return qobject_cast<DeregisterTransitGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DescribeGlobalNetworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes one or more global networks. By default, all global networks are described. To describe the objects in your
 * global network, you must use the appropriate <code>Get*</code> action. For example, to list the transit gateways in your
 * global network, use
 */
DescribeGlobalNetworksResponse * NetworkManagerClient::describeGlobalNetworks(const DescribeGlobalNetworksRequest &request)
{
    return qobject_cast<DescribeGlobalNetworksResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DisassociateCustomerGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a customer gateway from a device and a
 */
DisassociateCustomerGatewayResponse * NetworkManagerClient::disassociateCustomerGateway(const DisassociateCustomerGatewayRequest &request)
{
    return qobject_cast<DisassociateCustomerGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DisassociateLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates an existing device from a link. You must first disassociate any customer gateways that are associated with
 * the
 */
DisassociateLinkResponse * NetworkManagerClient::disassociateLink(const DisassociateLinkRequest &request)
{
    return qobject_cast<DisassociateLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DisassociateTransitGatewayConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a transit gateway Connect peer from a device and
 */
DisassociateTransitGatewayConnectPeerResponse * NetworkManagerClient::disassociateTransitGatewayConnectPeer(const DisassociateTransitGatewayConnectPeerRequest &request)
{
    return qobject_cast<DisassociateTransitGatewayConnectPeerResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetConnectionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more of your connections in a global
 */
GetConnectionsResponse * NetworkManagerClient::getConnections(const GetConnectionsRequest &request)
{
    return qobject_cast<GetConnectionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetCustomerGatewayAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the association information for customer gateways that are associated with devices and links in your global
 */
GetCustomerGatewayAssociationsResponse * NetworkManagerClient::getCustomerGatewayAssociations(const GetCustomerGatewayAssociationsRequest &request)
{
    return qobject_cast<GetCustomerGatewayAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more of your devices in a global
 */
GetDevicesResponse * NetworkManagerClient::getDevices(const GetDevicesRequest &request)
{
    return qobject_cast<GetDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetLinkAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the link associations for a device or a link. Either the device ID or the link ID must be
 */
GetLinkAssociationsResponse * NetworkManagerClient::getLinkAssociations(const GetLinkAssociationsRequest &request)
{
    return qobject_cast<GetLinkAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetLinksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more links in a specified global
 *
 * network>
 *
 * If you specify the site ID, you cannot specify the type or provider in the same request. You can specify the type and
 * provider in the same
 */
GetLinksResponse * NetworkManagerClient::getLinks(const GetLinksRequest &request)
{
    return qobject_cast<GetLinksResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetSitesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more of your sites in a global
 */
GetSitesResponse * NetworkManagerClient::getSites(const GetSitesRequest &request)
{
    return qobject_cast<GetSitesResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetTransitGatewayConnectPeerAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more of your transit gateway Connect peer associations in a global
 */
GetTransitGatewayConnectPeerAssociationsResponse * NetworkManagerClient::getTransitGatewayConnectPeerAssociations(const GetTransitGatewayConnectPeerAssociationsRequest &request)
{
    return qobject_cast<GetTransitGatewayConnectPeerAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetTransitGatewayRegistrationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the transit gateway registrations in a specified global
 */
GetTransitGatewayRegistrationsResponse * NetworkManagerClient::getTransitGatewayRegistrations(const GetTransitGatewayRegistrationsRequest &request)
{
    return qobject_cast<GetTransitGatewayRegistrationsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for a specified
 */
ListTagsForResourceResponse * NetworkManagerClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * RegisterTransitGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a transit gateway in your global network. The transit gateway can be in any AWS Region, but it must be owned
 * by the same AWS account that owns the global network. You cannot register a transit gateway in more than one global
 */
RegisterTransitGatewayResponse * NetworkManagerClient::registerTransitGateway(const RegisterTransitGatewayRequest &request)
{
    return qobject_cast<RegisterTransitGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags a specified
 */
TagResourceResponse * NetworkManagerClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from a specified
 */
UntagResourceResponse * NetworkManagerClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UpdateConnectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the information for an existing connection. To remove information for any of the parameters, specify an empty
 */
UpdateConnectionResponse * NetworkManagerClient::updateConnection(const UpdateConnectionRequest &request)
{
    return qobject_cast<UpdateConnectionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UpdateDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details for an existing device. To remove information for any of the parameters, specify an empty
 */
UpdateDeviceResponse * NetworkManagerClient::updateDevice(const UpdateDeviceRequest &request)
{
    return qobject_cast<UpdateDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UpdateGlobalNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing global network. To remove information for any of the parameters, specify an empty
 */
UpdateGlobalNetworkResponse * NetworkManagerClient::updateGlobalNetwork(const UpdateGlobalNetworkRequest &request)
{
    return qobject_cast<UpdateGlobalNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UpdateLinkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details for an existing link. To remove information for any of the parameters, specify an empty
 */
UpdateLinkResponse * NetworkManagerClient::updateLink(const UpdateLinkRequest &request)
{
    return qobject_cast<UpdateLinkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UpdateSiteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the information for an existing site. To remove information for any of the parameters, specify an empty
 */
UpdateSiteResponse * NetworkManagerClient::updateSite(const UpdateSiteRequest &request)
{
    return qobject_cast<UpdateSiteResponse *>(send(request));
}

/*!
 * \class QtAws::NetworkManager::NetworkManagerClientPrivate
 * \brief The NetworkManagerClientPrivate class provides private implementation for NetworkManagerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a NetworkManagerClientPrivate object with public implementation \a q.
 */
NetworkManagerClientPrivate::NetworkManagerClientPrivate(NetworkManagerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace NetworkManager
} // namespace QtAws

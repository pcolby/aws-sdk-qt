// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "networkmanagerclient.h"
#include "networkmanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "acceptattachmentrequest.h"
#include "acceptattachmentresponse.h"
#include "associateconnectpeerrequest.h"
#include "associateconnectpeerresponse.h"
#include "associatecustomergatewayrequest.h"
#include "associatecustomergatewayresponse.h"
#include "associatelinkrequest.h"
#include "associatelinkresponse.h"
#include "associatetransitgatewayconnectpeerrequest.h"
#include "associatetransitgatewayconnectpeerresponse.h"
#include "createconnectattachmentrequest.h"
#include "createconnectattachmentresponse.h"
#include "createconnectpeerrequest.h"
#include "createconnectpeerresponse.h"
#include "createconnectionrequest.h"
#include "createconnectionresponse.h"
#include "createcorenetworkrequest.h"
#include "createcorenetworkresponse.h"
#include "createdevicerequest.h"
#include "createdeviceresponse.h"
#include "createglobalnetworkrequest.h"
#include "createglobalnetworkresponse.h"
#include "createlinkrequest.h"
#include "createlinkresponse.h"
#include "createsiterequest.h"
#include "createsiteresponse.h"
#include "createsitetositevpnattachmentrequest.h"
#include "createsitetositevpnattachmentresponse.h"
#include "createtransitgatewaypeeringrequest.h"
#include "createtransitgatewaypeeringresponse.h"
#include "createtransitgatewayroutetableattachmentrequest.h"
#include "createtransitgatewayroutetableattachmentresponse.h"
#include "createvpcattachmentrequest.h"
#include "createvpcattachmentresponse.h"
#include "deleteattachmentrequest.h"
#include "deleteattachmentresponse.h"
#include "deleteconnectpeerrequest.h"
#include "deleteconnectpeerresponse.h"
#include "deleteconnectionrequest.h"
#include "deleteconnectionresponse.h"
#include "deletecorenetworkrequest.h"
#include "deletecorenetworkresponse.h"
#include "deletecorenetworkpolicyversionrequest.h"
#include "deletecorenetworkpolicyversionresponse.h"
#include "deletedevicerequest.h"
#include "deletedeviceresponse.h"
#include "deleteglobalnetworkrequest.h"
#include "deleteglobalnetworkresponse.h"
#include "deletelinkrequest.h"
#include "deletelinkresponse.h"
#include "deletepeeringrequest.h"
#include "deletepeeringresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deletesiterequest.h"
#include "deletesiteresponse.h"
#include "deregistertransitgatewayrequest.h"
#include "deregistertransitgatewayresponse.h"
#include "describeglobalnetworksrequest.h"
#include "describeglobalnetworksresponse.h"
#include "disassociateconnectpeerrequest.h"
#include "disassociateconnectpeerresponse.h"
#include "disassociatecustomergatewayrequest.h"
#include "disassociatecustomergatewayresponse.h"
#include "disassociatelinkrequest.h"
#include "disassociatelinkresponse.h"
#include "disassociatetransitgatewayconnectpeerrequest.h"
#include "disassociatetransitgatewayconnectpeerresponse.h"
#include "executecorenetworkchangesetrequest.h"
#include "executecorenetworkchangesetresponse.h"
#include "getconnectattachmentrequest.h"
#include "getconnectattachmentresponse.h"
#include "getconnectpeerrequest.h"
#include "getconnectpeerresponse.h"
#include "getconnectpeerassociationsrequest.h"
#include "getconnectpeerassociationsresponse.h"
#include "getconnectionsrequest.h"
#include "getconnectionsresponse.h"
#include "getcorenetworkrequest.h"
#include "getcorenetworkresponse.h"
#include "getcorenetworkchangeeventsrequest.h"
#include "getcorenetworkchangeeventsresponse.h"
#include "getcorenetworkchangesetrequest.h"
#include "getcorenetworkchangesetresponse.h"
#include "getcorenetworkpolicyrequest.h"
#include "getcorenetworkpolicyresponse.h"
#include "getcustomergatewayassociationsrequest.h"
#include "getcustomergatewayassociationsresponse.h"
#include "getdevicesrequest.h"
#include "getdevicesresponse.h"
#include "getlinkassociationsrequest.h"
#include "getlinkassociationsresponse.h"
#include "getlinksrequest.h"
#include "getlinksresponse.h"
#include "getnetworkresourcecountsrequest.h"
#include "getnetworkresourcecountsresponse.h"
#include "getnetworkresourcerelationshipsrequest.h"
#include "getnetworkresourcerelationshipsresponse.h"
#include "getnetworkresourcesrequest.h"
#include "getnetworkresourcesresponse.h"
#include "getnetworkroutesrequest.h"
#include "getnetworkroutesresponse.h"
#include "getnetworktelemetryrequest.h"
#include "getnetworktelemetryresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getrouteanalysisrequest.h"
#include "getrouteanalysisresponse.h"
#include "getsitetositevpnattachmentrequest.h"
#include "getsitetositevpnattachmentresponse.h"
#include "getsitesrequest.h"
#include "getsitesresponse.h"
#include "gettransitgatewayconnectpeerassociationsrequest.h"
#include "gettransitgatewayconnectpeerassociationsresponse.h"
#include "gettransitgatewaypeeringrequest.h"
#include "gettransitgatewaypeeringresponse.h"
#include "gettransitgatewayregistrationsrequest.h"
#include "gettransitgatewayregistrationsresponse.h"
#include "gettransitgatewayroutetableattachmentrequest.h"
#include "gettransitgatewayroutetableattachmentresponse.h"
#include "getvpcattachmentrequest.h"
#include "getvpcattachmentresponse.h"
#include "listattachmentsrequest.h"
#include "listattachmentsresponse.h"
#include "listconnectpeersrequest.h"
#include "listconnectpeersresponse.h"
#include "listcorenetworkpolicyversionsrequest.h"
#include "listcorenetworkpolicyversionsresponse.h"
#include "listcorenetworksrequest.h"
#include "listcorenetworksresponse.h"
#include "listorganizationserviceaccessstatusrequest.h"
#include "listorganizationserviceaccessstatusresponse.h"
#include "listpeeringsrequest.h"
#include "listpeeringsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putcorenetworkpolicyrequest.h"
#include "putcorenetworkpolicyresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "registertransitgatewayrequest.h"
#include "registertransitgatewayresponse.h"
#include "rejectattachmentrequest.h"
#include "rejectattachmentresponse.h"
#include "restorecorenetworkpolicyversionrequest.h"
#include "restorecorenetworkpolicyversionresponse.h"
#include "startorganizationserviceaccessupdaterequest.h"
#include "startorganizationserviceaccessupdateresponse.h"
#include "startrouteanalysisrequest.h"
#include "startrouteanalysisresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateconnectionrequest.h"
#include "updateconnectionresponse.h"
#include "updatecorenetworkrequest.h"
#include "updatecorenetworkresponse.h"
#include "updatedevicerequest.h"
#include "updatedeviceresponse.h"
#include "updateglobalnetworkrequest.h"
#include "updateglobalnetworkresponse.h"
#include "updatelinkrequest.h"
#include "updatelinkresponse.h"
#include "updatenetworkresourcemetadatarequest.h"
#include "updatenetworkresourcemetadataresponse.h"
#include "updatesiterequest.h"
#include "updatesiteresponse.h"
#include "updatevpcattachmentrequest.h"
#include "updatevpcattachmentresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::NetworkManager
 * \brief Contains classess for accessing AWS Network Manager.
 *
 * \inmodule QtAwsNetworkManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::NetworkManagerClient
 * \brief The NetworkManagerClient class provides access to the AWS Network Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
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
 * AcceptAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Accepts a core network attachment request.
 *
 * </p
 *
 * Once the attachment request is accepted by a core network owner, the attachment is created and connected to a core
 */
AcceptAttachmentResponse * NetworkManagerClient::acceptAttachment(const AcceptAttachmentRequest &request)
{
    return qobject_cast<AcceptAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * AssociateConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a core network Connect peer with a device and optionally, with a link.
 *
 * </p
 *
 * If you specify a link, it must be associated with the specified device. You can only associate core network Connect
 * peers that have been created on a core network Connect attachment on a core network.
 */
AssociateConnectPeerResponse * NetworkManagerClient::associateConnectPeer(const AssociateConnectPeerRequest &request)
{
    return qobject_cast<AssociateConnectPeerResponse *>(send(request));
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
 * You can only associate customer gateways that are connected to a VPN attachment on a transit gateway or core network
 * registered in your global network. When you register a transit gateway or core network, customer gateways that are
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
 * CreateConnectAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a core network Connect attachment from a specified core network attachment.
 *
 * </p
 *
 * A core network Connect attachment is a GRE-based tunnel attachment that you can use to establish a connection between a
 * core network and an appliance. A core network Connect attachment uses an existing VPC attachment as the underlying
 * transport
 */
CreateConnectAttachmentResponse * NetworkManagerClient::createConnectAttachment(const CreateConnectAttachmentRequest &request)
{
    return qobject_cast<CreateConnectAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a core network Connect peer for a specified core network connect attachment between a core network and an
 * appliance. The peer address and transit gateway address must be the same IP address family (IPv4 or
 */
CreateConnectPeerResponse * NetworkManagerClient::createConnectPeer(const CreateConnectPeerRequest &request)
{
    return qobject_cast<CreateConnectPeerResponse *>(send(request));
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
 * CreateCoreNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a core network as part of your global network, and optionally, with a core network
 */
CreateCoreNetworkResponse * NetworkManagerClient::createCoreNetwork(const CreateCoreNetworkRequest &request)
{
    return qobject_cast<CreateCoreNetworkResponse *>(send(request));
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
 * CreateSiteToSiteVpnAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services site-to-site VPN attachment on an edge location of a core
 */
CreateSiteToSiteVpnAttachmentResponse * NetworkManagerClient::createSiteToSiteVpnAttachment(const CreateSiteToSiteVpnAttachmentRequest &request)
{
    return qobject_cast<CreateSiteToSiteVpnAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateTransitGatewayPeeringResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a transit gateway peering
 */
CreateTransitGatewayPeeringResponse * NetworkManagerClient::createTransitGatewayPeering(const CreateTransitGatewayPeeringRequest &request)
{
    return qobject_cast<CreateTransitGatewayPeeringResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateTransitGatewayRouteTableAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a transit gateway route table
 */
CreateTransitGatewayRouteTableAttachmentResponse * NetworkManagerClient::createTransitGatewayRouteTableAttachment(const CreateTransitGatewayRouteTableAttachmentRequest &request)
{
    return qobject_cast<CreateTransitGatewayRouteTableAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * CreateVpcAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a VPC attachment on an edge location of a core
 */
CreateVpcAttachmentResponse * NetworkManagerClient::createVpcAttachment(const CreateVpcAttachmentRequest &request)
{
    return qobject_cast<CreateVpcAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an attachment. Supports all attachment
 */
DeleteAttachmentResponse * NetworkManagerClient::deleteAttachment(const DeleteAttachmentRequest &request)
{
    return qobject_cast<DeleteAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Connect
 */
DeleteConnectPeerResponse * NetworkManagerClient::deleteConnectPeer(const DeleteConnectPeerRequest &request)
{
    return qobject_cast<DeleteConnectPeerResponse *>(send(request));
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
 * DeleteCoreNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a core network along with all core network policies. This can only be done if there are no attachments on a core
 */
DeleteCoreNetworkResponse * NetworkManagerClient::deleteCoreNetwork(const DeleteCoreNetworkRequest &request)
{
    return qobject_cast<DeleteCoreNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteCoreNetworkPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a policy version from a core network. You can't delete the current LIVE
 */
DeleteCoreNetworkPolicyVersionResponse * NetworkManagerClient::deleteCoreNetworkPolicyVersion(const DeleteCoreNetworkPolicyVersionRequest &request)
{
    return qobject_cast<DeleteCoreNetworkPolicyVersionResponse *>(send(request));
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
 * Deletes an existing global network. You must first delete all global network objects (devices, links, and sites),
 * deregister all transit gateways, and delete any core
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
 * DeletePeeringResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing peering
 */
DeletePeeringResponse * NetworkManagerClient::deletePeering(const DeletePeeringRequest &request)
{
    return qobject_cast<DeletePeeringResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource policy for the specified resource. This revokes the access of the principals specified in the
 * resource
 */
DeleteResourcePolicyResponse * NetworkManagerClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
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
 * DisassociateConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a core network Connect peer from a device and a link.
 */
DisassociateConnectPeerResponse * NetworkManagerClient::disassociateConnectPeer(const DisassociateConnectPeerRequest &request)
{
    return qobject_cast<DisassociateConnectPeerResponse *>(send(request));
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
 * ExecuteCoreNetworkChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Executes a change set on your core network. Deploys changes globally based on the policy
 */
ExecuteCoreNetworkChangeSetResponse * NetworkManagerClient::executeCoreNetworkChangeSet(const ExecuteCoreNetworkChangeSetRequest &request)
{
    return qobject_cast<ExecuteCoreNetworkChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetConnectAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a core network Connect
 */
GetConnectAttachmentResponse * NetworkManagerClient::getConnectAttachment(const GetConnectAttachmentRequest &request)
{
    return qobject_cast<GetConnectAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetConnectPeerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a core network Connect
 */
GetConnectPeerResponse * NetworkManagerClient::getConnectPeer(const GetConnectPeerRequest &request)
{
    return qobject_cast<GetConnectPeerResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetConnectPeerAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a core network Connect peer
 */
GetConnectPeerAssociationsResponse * NetworkManagerClient::getConnectPeerAssociations(const GetConnectPeerAssociationsRequest &request)
{
    return qobject_cast<GetConnectPeerAssociationsResponse *>(send(request));
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
 * GetCoreNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about the LIVE policy for a core
 */
GetCoreNetworkResponse * NetworkManagerClient::getCoreNetwork(const GetCoreNetworkRequest &request)
{
    return qobject_cast<GetCoreNetworkResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetCoreNetworkChangeEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a core network change
 */
GetCoreNetworkChangeEventsResponse * NetworkManagerClient::getCoreNetworkChangeEvents(const GetCoreNetworkChangeEventsRequest &request)
{
    return qobject_cast<GetCoreNetworkChangeEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetCoreNetworkChangeSetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a change set between the LIVE core network policy and a submitted
 */
GetCoreNetworkChangeSetResponse * NetworkManagerClient::getCoreNetworkChangeSet(const GetCoreNetworkChangeSetRequest &request)
{
    return qobject_cast<GetCoreNetworkChangeSetResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetCoreNetworkPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about a core network policy. You can get details about your current live policy or any previous policy
 */
GetCoreNetworkPolicyResponse * NetworkManagerClient::getCoreNetworkPolicy(const GetCoreNetworkPolicyRequest &request)
{
    return qobject_cast<GetCoreNetworkPolicyResponse *>(send(request));
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
 * GetNetworkResourceCountsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the count of network resources, by resource type, for the specified global
 */
GetNetworkResourceCountsResponse * NetworkManagerClient::getNetworkResourceCounts(const GetNetworkResourceCountsRequest &request)
{
    return qobject_cast<GetNetworkResourceCountsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetNetworkResourceRelationshipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the network resource relationships for the specified global
 */
GetNetworkResourceRelationshipsResponse * NetworkManagerClient::getNetworkResourceRelationships(const GetNetworkResourceRelationshipsRequest &request)
{
    return qobject_cast<GetNetworkResourceRelationshipsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetNetworkResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the network resources for the specified global
 *
 * network>
 *
 * The results include information from the corresponding Describe call for the resource, minus any sensitive information
 * such as pre-shared
 */
GetNetworkResourcesResponse * NetworkManagerClient::getNetworkResources(const GetNetworkResourcesRequest &request)
{
    return qobject_cast<GetNetworkResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetNetworkRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the network routes of the specified global
 */
GetNetworkRoutesResponse * NetworkManagerClient::getNetworkRoutes(const GetNetworkRoutesRequest &request)
{
    return qobject_cast<GetNetworkRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetNetworkTelemetryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the network telemetry of the specified global
 */
GetNetworkTelemetryResponse * NetworkManagerClient::getNetworkTelemetry(const GetNetworkTelemetryRequest &request)
{
    return qobject_cast<GetNetworkTelemetryResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a resource
 */
GetResourcePolicyResponse * NetworkManagerClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetRouteAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the specified route
 */
GetRouteAnalysisResponse * NetworkManagerClient::getRouteAnalysis(const GetRouteAnalysisRequest &request)
{
    return qobject_cast<GetRouteAnalysisResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetSiteToSiteVpnAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a site-to-site VPN
 */
GetSiteToSiteVpnAttachmentResponse * NetworkManagerClient::getSiteToSiteVpnAttachment(const GetSiteToSiteVpnAttachmentRequest &request)
{
    return qobject_cast<GetSiteToSiteVpnAttachmentResponse *>(send(request));
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
 * GetTransitGatewayPeeringResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a transit gateway
 */
GetTransitGatewayPeeringResponse * NetworkManagerClient::getTransitGatewayPeering(const GetTransitGatewayPeeringRequest &request)
{
    return qobject_cast<GetTransitGatewayPeeringResponse *>(send(request));
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
 * GetTransitGatewayRouteTableAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a transit gateway route table
 */
GetTransitGatewayRouteTableAttachmentResponse * NetworkManagerClient::getTransitGatewayRouteTableAttachment(const GetTransitGatewayRouteTableAttachmentRequest &request)
{
    return qobject_cast<GetTransitGatewayRouteTableAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * GetVpcAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a VPC
 */
GetVpcAttachmentResponse * NetworkManagerClient::getVpcAttachment(const GetVpcAttachmentRequest &request)
{
    return qobject_cast<GetVpcAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListAttachmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of core network
 */
ListAttachmentsResponse * NetworkManagerClient::listAttachments(const ListAttachmentsRequest &request)
{
    return qobject_cast<ListAttachmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListConnectPeersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of core network Connect
 */
ListConnectPeersResponse * NetworkManagerClient::listConnectPeers(const ListConnectPeersRequest &request)
{
    return qobject_cast<ListConnectPeersResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListCoreNetworkPolicyVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of core network policy
 */
ListCoreNetworkPolicyVersionsResponse * NetworkManagerClient::listCoreNetworkPolicyVersions(const ListCoreNetworkPolicyVersionsRequest &request)
{
    return qobject_cast<ListCoreNetworkPolicyVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListCoreNetworksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of owned and shared core
 */
ListCoreNetworksResponse * NetworkManagerClient::listCoreNetworks(const ListCoreNetworksRequest &request)
{
    return qobject_cast<ListCoreNetworksResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListOrganizationServiceAccessStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of the Service Linked Role (SLR) deployment for the accounts in a given Amazon Web Services
 */
ListOrganizationServiceAccessStatusResponse * NetworkManagerClient::listOrganizationServiceAccessStatus(const ListOrganizationServiceAccessStatusRequest &request)
{
    return qobject_cast<ListOrganizationServiceAccessStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * ListPeeringsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the peerings for a core
 */
ListPeeringsResponse * NetworkManagerClient::listPeerings(const ListPeeringsRequest &request)
{
    return qobject_cast<ListPeeringsResponse *>(send(request));
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
 * PutCoreNetworkPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new, immutable version of a core network policy. A subsequent change set is created showing the differences
 * between the LIVE policy and the submitted
 */
PutCoreNetworkPolicyResponse * NetworkManagerClient::putCoreNetworkPolicy(const PutCoreNetworkPolicyRequest &request)
{
    return qobject_cast<PutCoreNetworkPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a resource
 */
PutResourcePolicyResponse * NetworkManagerClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * RegisterTransitGatewayResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a transit gateway in your global network. The transit gateway can be in any Amazon Web Services Region, but it
 * must be owned by the same Amazon Web Services account that owns the global network. You cannot register a transit
 * gateway in more than one global
 */
RegisterTransitGatewayResponse * NetworkManagerClient::registerTransitGateway(const RegisterTransitGatewayRequest &request)
{
    return qobject_cast<RegisterTransitGatewayResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * RejectAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Rejects a core network attachment
 */
RejectAttachmentResponse * NetworkManagerClient::rejectAttachment(const RejectAttachmentRequest &request)
{
    return qobject_cast<RejectAttachmentResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * RestoreCoreNetworkPolicyVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restores a previous policy version as a new, immutable version of a core network policy. A subsequent change set is
 * created showing the differences between the LIVE policy and restored
 */
RestoreCoreNetworkPolicyVersionResponse * NetworkManagerClient::restoreCoreNetworkPolicyVersion(const RestoreCoreNetworkPolicyVersionRequest &request)
{
    return qobject_cast<RestoreCoreNetworkPolicyVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * StartOrganizationServiceAccessUpdateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables for the Network Manager service for an Amazon Web Services Organization. This can only be called by a management
 * account within the organization.
 */
StartOrganizationServiceAccessUpdateResponse * NetworkManagerClient::startOrganizationServiceAccessUpdate(const StartOrganizationServiceAccessUpdateRequest &request)
{
    return qobject_cast<StartOrganizationServiceAccessUpdateResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * StartRouteAnalysisResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts analyzing the routing path between the specified source and destination. For more information, see <a
 * href="https://docs.aws.amazon.com/vpc/latest/tgw/route-analyzer.html">Route
 */
StartRouteAnalysisResponse * NetworkManagerClient::startRouteAnalysis(const StartRouteAnalysisRequest &request)
{
    return qobject_cast<StartRouteAnalysisResponse *>(send(request));
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
 * UpdateCoreNetworkResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the description of a core
 */
UpdateCoreNetworkResponse * NetworkManagerClient::updateCoreNetwork(const UpdateCoreNetworkRequest &request)
{
    return qobject_cast<UpdateCoreNetworkResponse *>(send(request));
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
 * UpdateNetworkResourceMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the resource metadata for the specified global
 */
UpdateNetworkResourceMetadataResponse * NetworkManagerClient::updateNetworkResourceMetadata(const UpdateNetworkResourceMetadataRequest &request)
{
    return qobject_cast<UpdateNetworkResourceMetadataResponse *>(send(request));
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
 * Sends \a request to the NetworkManagerClient service, and returns a pointer to an
 * UpdateVpcAttachmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a VPC
 */
UpdateVpcAttachmentResponse * NetworkManagerClient::updateVpcAttachment(const UpdateVpcAttachmentRequest &request)
{
    return qobject_cast<UpdateVpcAttachmentResponse *>(send(request));
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

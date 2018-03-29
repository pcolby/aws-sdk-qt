/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "directconnectclient.h"
#include "directconnectclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DirectConnectClient
 *
 * @brief  Client for AWS Direct Connect
 *
 * AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 * Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 * With this connection in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon
 * Elastic Compute Cloud (Amazon EC2) and Amazon Simple Storage Service (Amazon S3)) and to Amazon Virtual Private Cloud
 * (Amazon VPC), bypassing Internet service providers in your network path. An AWS Direct Connect location provides access
 * to AWS in the region it is associated with, as well as access to other US regions. For example, you can provision a
 * single connection to any AWS Direct Connect location in the US and use it to access public AWS services in all US
 * Regions and AWS GovCloud
 */

/**
 * @brief  Constructs a new DirectConnectClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DirectConnectClient::DirectConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DirectConnectClientPrivate(this), parent)
{
    Q_D(DirectConnectClient);
    d->apiVersion = QStringLiteral("2012-10-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("directconnect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Direct Connect");
    d->serviceName = QStringLiteral("directconnect");
}

/**
 * @brief  Constructs a new DirectConnectClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
DirectConnectClient::DirectConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DirectConnectClientPrivate(this), parent)
{
    Q_D(DirectConnectClient);
    d->apiVersion = QStringLiteral("2012-10-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("directconnect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Direct Connect");
    d->serviceName = QStringLiteral("directconnect");
}

/**
 * Deprecated in favor of
 *
 * <a>AllocateHostedConnection</a>>
 *
 * Creates a hosted connection on an
 *
 * interconnect>
 *
 * Allocates a VLAN number and a specified amount of bandwidth for use by a hosted connection on the given
 *
 * interconnect> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AllocateConnectionOnInterconnectResponse * DirectConnectClient::allocateConnectionOnInterconnect(const AllocateConnectionOnInterconnectRequest &request)
{
    return qobject_cast<AllocateConnectionOnInterconnectResponse *>(send(request));
}

/**
 * Creates a hosted connection on an interconnect or a link aggregation group
 *
 * (LAG)>
 *
 * Allocates a VLAN number and a specified amount of bandwidth for use by a hosted connection on the given interconnect or
 *
 * LAG> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AllocateHostedConnectionResponse * DirectConnectClient::allocateHostedConnection(const AllocateHostedConnectionRequest &request)
{
    return qobject_cast<AllocateHostedConnectionResponse *>(send(request));
}

/**
 * Provisions a private virtual interface to be owned by another AWS
 *
 * customer>
 *
 * Virtual interfaces created using this action must be confirmed by the virtual interface owner by using the
 * <a>ConfirmPrivateVirtualInterface</a> action. Until then, the virtual interface will be in 'Confirming' state, and will
 * not be available for handling
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AllocatePrivateVirtualInterfaceResponse * DirectConnectClient::allocatePrivateVirtualInterface(const AllocatePrivateVirtualInterfaceRequest &request)
{
    return qobject_cast<AllocatePrivateVirtualInterfaceResponse *>(send(request));
}

/**
 * Provisions a public virtual interface to be owned by a different
 *
 * customer>
 *
 * The owner of a connection calls this function to provision a public virtual interface which will be owned by another AWS
 *
 * customer>
 *
 * Virtual interfaces created using this function must be confirmed by the virtual interface owner by calling
 * ConfirmPublicVirtualInterface. Until this step has been completed, the virtual interface will be in 'Confirming' state,
 * and will not be available for handling
 *
 * traffic>
 *
 * When creating an IPv6 public virtual interface (addressFamily is 'ipv6'), the customer and amazon address fields should
 * be left blank to use auto-assigned IPv6 space. Custom IPv6 Addresses are currently not
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AllocatePublicVirtualInterfaceResponse * DirectConnectClient::allocatePublicVirtualInterface(const AllocatePublicVirtualInterfaceRequest &request)
{
    return qobject_cast<AllocatePublicVirtualInterfaceResponse *>(send(request));
}

/**
 * Associates an existing connection with a link aggregation group (LAG). The connection is interrupted and re-established
 * as a member of the LAG (connectivity to AWS will be interrupted). The connection must be hosted on the same AWS Direct
 * Connect endpoint as the LAG, and its bandwidth must match the bandwidth for the LAG. You can reassociate a connection
 * that's currently associated with a different LAG; however, if removing the connection will cause the original LAG to
 * fall below its setting for minimum number of operational connections, the request
 *
 * fails>
 *
 * Any virtual interfaces that are directly associated with the connection are automatically re-associated with the LAG. If
 * the connection was originally associated with a different LAG, the virtual interfaces remain associated with the
 * original
 *
 * LAG>
 *
 * For interconnects, any hosted connections are automatically re-associated with the LAG. If the interconnect was
 * originally associated with a different LAG, the hosted connections remain associated with the original
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateConnectionWithLagResponse * DirectConnectClient::associateConnectionWithLag(const AssociateConnectionWithLagRequest &request)
{
    return qobject_cast<AssociateConnectionWithLagResponse *>(send(request));
}

/**
 * Associates a hosted connection and its virtual interfaces with a link aggregation group (LAG) or interconnect. If the
 * target interconnect or LAG has an existing hosted connection with a conflicting VLAN number or IP address, the operation
 * fails. This action temporarily interrupts the hosted connection's connectivity to AWS as it is being
 *
 * migrated> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateHostedConnectionResponse * DirectConnectClient::associateHostedConnection(const AssociateHostedConnectionRequest &request)
{
    return qobject_cast<AssociateHostedConnectionResponse *>(send(request));
}

/**
 * Associates a virtual interface with a specified link aggregation group (LAG) or connection. Connectivity to AWS is
 * temporarily interrupted as the virtual interface is being migrated. If the target connection or LAG has an associated
 * virtual interface with a conflicting VLAN number or a conflicting IP address, the operation fails.
 *
 * </p
 *
 * Virtual interfaces associated with a hosted connection cannot be associated with a LAG; hosted connections must be
 * migrated along with their virtual interfaces using
 *
 * <a>AssociateHostedConnection</a>>
 *
 * In order to reassociate a virtual interface to a new connection or LAG, the requester must own either the virtual
 * interface itself or the connection to which the virtual interface is currently associated. Additionally, the requester
 * must own the connection or LAG to which the virtual interface will be newly
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateVirtualInterfaceResponse * DirectConnectClient::associateVirtualInterface(const AssociateVirtualInterfaceRequest &request)
{
    return qobject_cast<AssociateVirtualInterfaceResponse *>(send(request));
}

/**
 * Confirm the creation of a hosted connection on an
 *
 * interconnect>
 *
 * Upon creation, the hosted connection is initially in the 'Ordering' state, and will remain in this state until the owner
 * calls ConfirmConnection to confirm creation of the hosted
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmConnectionResponse * DirectConnectClient::confirmConnection(const ConfirmConnectionRequest &request)
{
    return qobject_cast<ConfirmConnectionResponse *>(send(request));
}

/**
 * Accept ownership of a private virtual interface created by another
 *
 * customer>
 *
 * After the virtual interface owner calls this function, the virtual interface will be created and attached to the given
 * virtual private gateway or direct connect gateway, and will be available for handling
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmPrivateVirtualInterfaceResponse * DirectConnectClient::confirmPrivateVirtualInterface(const ConfirmPrivateVirtualInterfaceRequest &request)
{
    return qobject_cast<ConfirmPrivateVirtualInterfaceResponse *>(send(request));
}

/**
 * Accept ownership of a public virtual interface created by another
 *
 * customer>
 *
 * After the virtual interface owner calls this function, the specified virtual interface will be created and made
 * available for handling
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfirmPublicVirtualInterfaceResponse * DirectConnectClient::confirmPublicVirtualInterface(const ConfirmPublicVirtualInterfaceRequest &request)
{
    return qobject_cast<ConfirmPublicVirtualInterfaceResponse *>(send(request));
}

/**
 * Creates a new BGP peer on a specified virtual interface. The BGP peer cannot be in the same address family (IPv4/IPv6)
 * of an existing BGP peer on the virtual
 *
 * interface>
 *
 * You must create a BGP peer for the corresponding address family in order to access AWS resources that also use that
 * address
 *
 * family>
 *
 * When creating a IPv6 BGP peer, the Amazon address and customer address fields must be left blank. IPv6 addresses are
 * automatically assigned from Amazon's pool of IPv6 addresses; you cannot specify custom IPv6
 *
 * addresses>
 *
 * For a public virtual interface, the Autonomous System Number (ASN) must be private or already whitelisted for the
 * virtual
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateBGPPeerResponse * DirectConnectClient::createBGPPeer(const CreateBGPPeerRequest &request)
{
    return qobject_cast<CreateBGPPeerResponse *>(send(request));
}

/**
 * Creates a new connection between the customer network and a specific AWS Direct Connect
 *
 * location>
 *
 * A connection links your internal network to an AWS Direct Connect location over a standard 1 gigabit or 10 gigabit
 * Ethernet fiber-optic cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router.
 * An AWS Direct Connect location provides access to Amazon Web Services in the region it is associated with. You can
 * establish connections with AWS Direct Connect locations in multiple regions, but a connection in one region does not
 * provide connectivity to other
 *
 * regions>
 *
 * To find the locations for your region, use
 *
 * <a>DescribeLocations</a>>
 *
 * You can automatically add the new connection to a link aggregation group (LAG) by specifying a LAG ID in the request.
 * This ensures that the new connection is allocated on the same AWS Direct Connect endpoint that hosts the specified LAG.
 * If there are no available ports on the endpoint, the request fails and no connection will be
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateConnectionResponse * DirectConnectClient::createConnection(const CreateConnectionRequest &request)
{
    return qobject_cast<CreateConnectionResponse *>(send(request));
}

/**
 * Creates a new direct connect gateway. A direct connect gateway is an intermediate object that enables you to connect a
 * set of virtual interfaces and virtual private gateways. direct connect gateways are global and visible in any AWS region
 * after they are created. The virtual interfaces and virtual private gateways that are connected through a direct connect
 * gateway can be in different regions. This enables you to connect to a VPC in any region, regardless of the region in
 * which the virtual interfaces are located, and pass traffic between
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDirectConnectGatewayResponse * DirectConnectClient::createDirectConnectGateway(const CreateDirectConnectGatewayRequest &request)
{
    return qobject_cast<CreateDirectConnectGatewayResponse *>(send(request));
}

/**
 * Creates an association between a direct connect gateway and a virtual private gateway (VGW). The VGW must be attached to
 * a VPC and must not be associated with another direct connect
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateDirectConnectGatewayAssociationResponse * DirectConnectClient::createDirectConnectGatewayAssociation(const CreateDirectConnectGatewayAssociationRequest &request)
{
    return qobject_cast<CreateDirectConnectGatewayAssociationResponse *>(send(request));
}

/**
 * Creates a new interconnect between a AWS Direct Connect partner's network and a specific AWS Direct Connect
 *
 * location>
 *
 * An interconnect is a connection which is capable of hosting other connections. The AWS Direct Connect partner can use an
 * interconnect to provide sub-1Gbps AWS Direct Connect service to tier 2 customers who do not have their own connections.
 * Like a standard connection, an interconnect links the AWS Direct Connect partner's network to an AWS Direct Connect
 * location over a standard 1 Gbps or 10 Gbps Ethernet fiber-optic cable. One end is connected to the partner's router, the
 * other to an AWS Direct Connect
 *
 * router>
 *
 * You can automatically add the new interconnect to a link aggregation group (LAG) by specifying a LAG ID in the request.
 * This ensures that the new interconnect is allocated on the same AWS Direct Connect endpoint that hosts the specified
 * LAG. If there are no available ports on the endpoint, the request fails and no interconnect will be
 *
 * created>
 *
 * For each end customer, the AWS Direct Connect partner provisions a connection on their interconnect by calling
 * AllocateConnectionOnInterconnect. The end customer can then connect to AWS resources by creating a virtual interface on
 * their connection, using the VLAN assigned to them by the AWS Direct Connect
 *
 * partner> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateInterconnectResponse * DirectConnectClient::createInterconnect(const CreateInterconnectRequest &request)
{
    return qobject_cast<CreateInterconnectResponse *>(send(request));
}

/**
 * Creates a new link aggregation group (LAG) with the specified number of bundled physical connections between the
 * customer network and a specific AWS Direct Connect location. A LAG is a logical interface that uses the Link Aggregation
 * Control Protocol (LACP) to aggregate multiple 1 gigabit or 10 gigabit interfaces, allowing you to treat them as a single
 *
 * interface>
 *
 * All connections in a LAG must use the same bandwidth (for example, 10 Gbps), and must terminate at the same AWS Direct
 * Connect
 *
 * endpoint>
 *
 * You can have up to 10 connections per LAG. Regardless of this limit, if you request more connections for the LAG than
 * AWS Direct Connect can allocate on a single endpoint, no LAG is
 *
 * created>
 *
 * You can specify an existing physical connection or interconnect to include in the LAG (which counts towards the total
 * number of connections). Doing so interrupts the current physical connection or hosted connections, and re-establishes
 * them as a member of the LAG. The LAG will be created on the same AWS Direct Connect endpoint to which the connection
 * terminates. Any virtual interfaces associated with the connection are automatically disassociated and re-associated with
 * the LAG. The connection ID does not
 *
 * change>
 *
 * If the AWS account used to create a LAG is a registered AWS Direct Connect partner, the LAG is automatically enabled to
 * host sub-connections. For a LAG owned by a partner, any associated virtual interfaces cannot be directly
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLagResponse * DirectConnectClient::createLag(const CreateLagRequest &request)
{
    return qobject_cast<CreateLagResponse *>(send(request));
}

/**
 * Creates a new private virtual interface. A virtual interface is the VLAN that transports AWS Direct Connect traffic. A
 * private virtual interface supports sending traffic to a single virtual private cloud
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePrivateVirtualInterfaceResponse * DirectConnectClient::createPrivateVirtualInterface(const CreatePrivateVirtualInterfaceRequest &request)
{
    return qobject_cast<CreatePrivateVirtualInterfaceResponse *>(send(request));
}

/**
 * Creates a new public virtual interface. A virtual interface is the VLAN that transports AWS Direct Connect traffic. A
 * public virtual interface supports sending traffic to public services of AWS such as Amazon Simple Storage Service
 * (Amazon
 *
 * S3)>
 *
 * When creating an IPv6 public virtual interface (addressFamily is 'ipv6'), the customer and amazon address fields should
 * be left blank to use auto-assigned IPv6 space. Custom IPv6 Addresses are currently not
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreatePublicVirtualInterfaceResponse * DirectConnectClient::createPublicVirtualInterface(const CreatePublicVirtualInterfaceRequest &request)
{
    return qobject_cast<CreatePublicVirtualInterfaceResponse *>(send(request));
}

/**
 * Deletes a BGP peer on the specified virtual interface that matches the specified customer address and ASN. You cannot
 * delete the last BGP peer from a virtual
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteBGPPeerResponse * DirectConnectClient::deleteBGPPeer(const DeleteBGPPeerRequest &request)
{
    return qobject_cast<DeleteBGPPeerResponse *>(send(request));
}

/**
 * Deletes the
 *
 * connection>
 *
 * Deleting a connection only stops the AWS Direct Connect port hour and data transfer charges. You need to cancel
 * separately with the providers any services or charges for cross-connects or network circuits that connect you to the AWS
 * Direct Connect
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteConnectionResponse * DirectConnectClient::deleteConnection(const DeleteConnectionRequest &request)
{
    return qobject_cast<DeleteConnectionResponse *>(send(request));
}

/**
 * Deletes a direct connect gateway. You must first delete all virtual interfaces that are attached to the direct connect
 * gateway and disassociate all virtual private gateways that are associated with the direct connect
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDirectConnectGatewayResponse * DirectConnectClient::deleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest &request)
{
    return qobject_cast<DeleteDirectConnectGatewayResponse *>(send(request));
}

/**
 * Deletes the association between a direct connect gateway and a virtual private
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDirectConnectGatewayAssociationResponse * DirectConnectClient::deleteDirectConnectGatewayAssociation(const DeleteDirectConnectGatewayAssociationRequest &request)
{
    return qobject_cast<DeleteDirectConnectGatewayAssociationResponse *>(send(request));
}

/**
 * Deletes the specified
 *
 * interconnect> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteInterconnectResponse * DirectConnectClient::deleteInterconnect(const DeleteInterconnectRequest &request)
{
    return qobject_cast<DeleteInterconnectResponse *>(send(request));
}

/**
 * Deletes a link aggregation group (LAG). You cannot delete a LAG if it has active virtual interfaces or hosted
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLagResponse * DirectConnectClient::deleteLag(const DeleteLagRequest &request)
{
    return qobject_cast<DeleteLagResponse *>(send(request));
}

/**
 * Deletes a virtual
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteVirtualInterfaceResponse * DirectConnectClient::deleteVirtualInterface(const DeleteVirtualInterfaceRequest &request)
{
    return qobject_cast<DeleteVirtualInterfaceResponse *>(send(request));
}

/**
 * Deprecated in favor of
 *
 * <a>DescribeLoa</a>>
 *
 * Returns the LOA-CFA for a
 *
 * Connection>
 *
 * The Letter of Authorization - Connecting Facility Assignment (LOA-CFA) is a document that your APN partner or service
 * provider uses when establishing your cross connect to AWS at the colocation facility. For more information, see <a
 * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting Cross Connects at AWS Direct
 * Connect Locations</a> in the AWS Direct Connect user
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConnectionLoaResponse * DirectConnectClient::describeConnectionLoa(const DescribeConnectionLoaRequest &request)
{
    return qobject_cast<DescribeConnectionLoaResponse *>(send(request));
}

/**
 * Displays all connections in this
 *
 * region>
 *
 * If a connection ID is provided, the call returns only that particular
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConnectionsResponse * DirectConnectClient::describeConnections(const DescribeConnectionsRequest &request)
{
    return qobject_cast<DescribeConnectionsResponse *>(send(request));
}

/**
 * Deprecated in favor of
 *
 * <a>DescribeHostedConnections</a>>
 *
 * Returns a list of connections that have been provisioned on the given
 *
 * interconnect> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeConnectionsOnInterconnectResponse * DirectConnectClient::describeConnectionsOnInterconnect(const DescribeConnectionsOnInterconnectRequest &request)
{
    return qobject_cast<DescribeConnectionsOnInterconnectResponse *>(send(request));
}

/**
 * Returns a list of all direct connect gateway and virtual private gateway (VGW) associations. Either a direct connect
 * gateway ID or a VGW ID must be provided in the request. If a direct connect gateway ID is provided, the response returns
 * all VGWs associated with the direct connect gateway. If a VGW ID is provided, the response returns all direct connect
 * gateways associated with the VGW. If both are provided, the response only returns the association that matches both the
 * direct connect gateway and the
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDirectConnectGatewayAssociationsResponse * DirectConnectClient::describeDirectConnectGatewayAssociations(const DescribeDirectConnectGatewayAssociationsRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewayAssociationsResponse *>(send(request));
}

/**
 * Returns a list of all direct connect gateway and virtual interface (VIF) attachments. Either a direct connect gateway ID
 * or a VIF ID must be provided in the request. If a direct connect gateway ID is provided, the response returns all VIFs
 * attached to the direct connect gateway. If a VIF ID is provided, the response returns all direct connect gateways
 * attached to the VIF. If both are provided, the response only returns the attachment that matches both the direct connect
 * gateway and the
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDirectConnectGatewayAttachmentsResponse * DirectConnectClient::describeDirectConnectGatewayAttachments(const DescribeDirectConnectGatewayAttachmentsRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewayAttachmentsResponse *>(send(request));
}

/**
 * Returns a list of direct connect gateways in your account. Deleted direct connect gateways are not returned. You can
 * provide a direct connect gateway ID in the request to return information about the specific direct connect gateway only.
 * Otherwise, if a direct connect gateway ID is not provided, information about all of your direct connect gateways is
 * returned.
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDirectConnectGatewaysResponse * DirectConnectClient::describeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest &request)
{
    return qobject_cast<DescribeDirectConnectGatewaysResponse *>(send(request));
}

/**
 * Returns a list of hosted connections that have been provisioned on the given interconnect or link aggregation group
 *
 * (LAG)> <note>
 *
 * This is intended for use by AWS Direct Connect partners
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeHostedConnectionsResponse * DirectConnectClient::describeHostedConnections(const DescribeHostedConnectionsRequest &request)
{
    return qobject_cast<DescribeHostedConnectionsResponse *>(send(request));
}

/**
 * Deprecated in favor of
 *
 * <a>DescribeLoa</a>>
 *
 * Returns the LOA-CFA for an
 *
 * Interconnect>
 *
 * The Letter of Authorization - Connecting Facility Assignment (LOA-CFA) is a document that is used when establishing your
 * cross connect to AWS at the colocation facility. For more information, see <a
 * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting Cross Connects at AWS Direct
 * Connect Locations</a> in the AWS Direct Connect user
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInterconnectLoaResponse * DirectConnectClient::describeInterconnectLoa(const DescribeInterconnectLoaRequest &request)
{
    return qobject_cast<DescribeInterconnectLoaResponse *>(send(request));
}

/**
 * Returns a list of interconnects owned by the AWS
 *
 * account>
 *
 * If an interconnect ID is provided, it will only return this particular
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInterconnectsResponse * DirectConnectClient::describeInterconnects(const DescribeInterconnectsRequest &request)
{
    return qobject_cast<DescribeInterconnectsResponse *>(send(request));
}

/**
 * Describes the link aggregation groups (LAGs) in your account.
 *
 * </p
 *
 * If a LAG ID is provided, only information about the specified LAG is
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLagsResponse * DirectConnectClient::describeLags(const DescribeLagsRequest &request)
{
    return qobject_cast<DescribeLagsResponse *>(send(request));
}

/**
 * Returns the LOA-CFA for a connection, interconnect, or link aggregation group
 *
 * (LAG)>
 *
 * The Letter of Authorization - Connecting Facility Assignment (LOA-CFA) is a document that is used when establishing your
 * cross connect to AWS at the colocation facility. For more information, see <a
 * href="http://docs.aws.amazon.com/directconnect/latest/UserGuide/Colocation.html">Requesting Cross Connects at AWS Direct
 * Connect Locations</a> in the AWS Direct Connect user
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoaResponse * DirectConnectClient::describeLoa(const DescribeLoaRequest &request)
{
    return qobject_cast<DescribeLoaResponse *>(send(request));
}

/**
 * Returns the list of AWS Direct Connect locations in the current AWS region. These are the locations that may be selected
 * when calling <a>CreateConnection</a> or
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLocationsResponse * DirectConnectClient::describeLocations()
{
    return qobject_cast<DescribeLocationsResponse *>(send(request));
}

/**
 * Describes the tags associated with the specified Direct Connect
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * DirectConnectClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/**
 * Returns a list of virtual private gateways owned by the AWS
 *
 * account>
 *
 * You can create one or more AWS Direct Connect private virtual interfaces linking to a virtual private gateway. A virtual
 * private gateway can be managed via Amazon Virtual Private Cloud (VPC) console or the <a
 * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/ApiReference-query-CreateVpnGateway.html">EC2
 * CreateVpnGateway</a>
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeVirtualGatewaysResponse * DirectConnectClient::describeVirtualGateways()
{
    return qobject_cast<DescribeVirtualGatewaysResponse *>(send(request));
}

/**
 * Displays all virtual interfaces for an AWS account. Virtual interfaces deleted fewer than 15 minutes before you make the
 * request are also returned. If you specify a connection ID, only the virtual interfaces associated with the connection
 * are returned. If you specify a virtual interface ID, then only a single virtual interface is
 *
 * returned>
 *
 * A virtual interface (VLAN) transmits the traffic between the AWS Direct Connect location and the
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeVirtualInterfacesResponse * DirectConnectClient::describeVirtualInterfaces(const DescribeVirtualInterfacesRequest &request)
{
    return qobject_cast<DescribeVirtualInterfacesResponse *>(send(request));
}

/**
 * Disassociates a connection from a link aggregation group (LAG). The connection is interrupted and re-established as a
 * standalone connection (the connection is not deleted; to delete the connection, use the <a>DeleteConnection</a>
 * request). If the LAG has associated virtual interfaces or hosted connections, they remain associated with the LAG. A
 * disassociated connection owned by an AWS Direct Connect partner is automatically converted to an
 *
 * interconnect>
 *
 * If disassociating the connection will cause the LAG to fall below its setting for minimum number of operational
 * connections, the request fails, except when it's the last member of the LAG. If all connections are disassociated, the
 * LAG continues to exist as an empty LAG with no physical connections.
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateConnectionFromLagResponse * DirectConnectClient::disassociateConnectionFromLag(const DisassociateConnectionFromLagRequest &request)
{
    return qobject_cast<DisassociateConnectionFromLagResponse *>(send(request));
}

/**
 * Adds the specified tags to the specified Direct Connect resource. Each Direct Connect resource can have a maximum of 50
 *
 * tags>
 *
 * Each tag consists of a key and an optional value. If a tag with the same key is already associated with the Direct
 * Connect resource, this action updates its
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * DirectConnectClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/**
 * Removes one or more tags from the specified Direct Connect
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * DirectConnectClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/**
 * Updates the attributes of a link aggregation group (LAG).
 *
 * </p
 *
 * You can update the following attributes:
 *
 * </p <ul> <li>
 *
 * The name of the
 *
 * LAG> </li> <li>
 *
 * The value for the minimum number of connections that must be operational for the LAG itself to be operational.
 *
 * </p </li> </ul>
 *
 * When you create a LAG, the default value for the minimum number of operational connections is zero (0). If you update
 * this value, and the number of operational connections falls below the specified value, the LAG will automatically go
 * down to avoid overutilization of the remaining connections. Adjusting this value should be done with care as it could
 * force the LAG down if the value is set higher than the current number of operational
 *
 * @param  request Request to send to AWS Direct Connect.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateLagResponse * DirectConnectClient::updateLag(const UpdateLagRequest &request)
{
    return qobject_cast<UpdateLagResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  DirectConnectClientPrivate
 *
 * @brief  Private implementation for DirectConnectClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DirectConnectClientPrivate object.
 *
 * @param  q  Pointer to this object's public DirectConnectClient instance.
 */
DirectConnectClientPrivate::DirectConnectClientPrivate(DirectConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DirectConnect
} // namespace QtAws

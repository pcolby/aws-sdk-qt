/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    DirectConnectAllocateConnectionOnInterconnectResponse * allocateConnectionOnInterconnect(const DirectConnectAllocateConnectionOnInterconnectRequest &request);
    DirectConnectAllocatePrivateVirtualInterfaceResponse * allocatePrivateVirtualInterface(const DirectConnectAllocatePrivateVirtualInterfaceRequest &request);
    DirectConnectAllocatePublicVirtualInterfaceResponse * allocatePublicVirtualInterface(const DirectConnectAllocatePublicVirtualInterfaceRequest &request);
    DirectConnectConfirmConnectionResponse * confirmConnection(const DirectConnectConfirmConnectionRequest &request);
    DirectConnectConfirmPrivateVirtualInterfaceResponse * confirmPrivateVirtualInterface(const DirectConnectConfirmPrivateVirtualInterfaceRequest &request);
    DirectConnectConfirmPublicVirtualInterfaceResponse * confirmPublicVirtualInterface(const DirectConnectConfirmPublicVirtualInterfaceRequest &request);
    DirectConnectCreateConnectionResponse * createConnection(const DirectConnectCreateConnectionRequest &request);
    DirectConnectCreateInterconnectResponse * createInterconnect(const DirectConnectCreateInterconnectRequest &request);
    DirectConnectCreatePrivateVirtualInterfaceResponse * createPrivateVirtualInterface(const DirectConnectCreatePrivateVirtualInterfaceRequest &request);
    DirectConnectCreatePublicVirtualInterfaceResponse * createPublicVirtualInterface(const DirectConnectCreatePublicVirtualInterfaceRequest &request);
    DirectConnectDeleteConnectionResponse * deleteConnection(const DirectConnectDeleteConnectionRequest &request);
    DirectConnectDeleteInterconnectResponse * deleteInterconnect(const DirectConnectDeleteInterconnectRequest &request);
    DirectConnectDeleteVirtualInterfaceResponse * deleteVirtualInterface(const DirectConnectDeleteVirtualInterfaceRequest &request);
    DirectConnectDescribeConnectionLoaResponse * describeConnectionLoa(const DirectConnectDescribeConnectionLoaRequest &request);
    DirectConnectDescribeConnectionsResponse * describeConnections(const DirectConnectDescribeConnectionsRequest &request);
    DirectConnectDescribeConnectionsOnInterconnectResponse * describeConnectionsOnInterconnect(const DirectConnectDescribeConnectionsOnInterconnectRequest &request);
    DirectConnectDescribeInterconnectLoaResponse * describeInterconnectLoa(const DirectConnectDescribeInterconnectLoaRequest &request);
    DirectConnectDescribeInterconnectsResponse * describeInterconnects(const DirectConnectDescribeInterconnectsRequest &request);
    DirectConnectDescribeLocationsResponse * describeLocations();
    DirectConnectDescribeVirtualGatewaysResponse * describeVirtualGateways();
    DirectConnectDescribeVirtualInterfacesResponse * describeVirtualInterfaces(const DirectConnectDescribeVirtualInterfacesRequest &request);

private:
    Q_DECLARE_PRIVATE(DirectConnectClient)
    Q_DISABLE_COPY(DirectConnectClient)

};

QTAWS_END_NAMESPACE

#endif

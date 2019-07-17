/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_DIRECTCONNECTREQUEST_H
#define QTAWS_DIRECTCONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DirectConnect {

class DirectConnectRequestPrivate;

class QTAWS_EXPORT DirectConnectRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by DirectConnect.
    enum Action {
        AcceptDirectConnectGatewayAssociationProposalAction,
        AllocateConnectionOnInterconnectAction,
        AllocateHostedConnectionAction,
        AllocatePrivateVirtualInterfaceAction,
        AllocatePublicVirtualInterfaceAction,
        AllocateTransitVirtualInterfaceAction,
        AssociateConnectionWithLagAction,
        AssociateHostedConnectionAction,
        AssociateVirtualInterfaceAction,
        ConfirmConnectionAction,
        ConfirmPrivateVirtualInterfaceAction,
        ConfirmPublicVirtualInterfaceAction,
        ConfirmTransitVirtualInterfaceAction,
        CreateBGPPeerAction,
        CreateConnectionAction,
        CreateDirectConnectGatewayAction,
        CreateDirectConnectGatewayAssociationAction,
        CreateDirectConnectGatewayAssociationProposalAction,
        CreateInterconnectAction,
        CreateLagAction,
        CreatePrivateVirtualInterfaceAction,
        CreatePublicVirtualInterfaceAction,
        CreateTransitVirtualInterfaceAction,
        DeleteBGPPeerAction,
        DeleteConnectionAction,
        DeleteDirectConnectGatewayAction,
        DeleteDirectConnectGatewayAssociationAction,
        DeleteDirectConnectGatewayAssociationProposalAction,
        DeleteInterconnectAction,
        DeleteLagAction,
        DeleteVirtualInterfaceAction,
        DescribeConnectionLoaAction,
        DescribeConnectionsAction,
        DescribeConnectionsOnInterconnectAction,
        DescribeDirectConnectGatewayAssociationProposalsAction,
        DescribeDirectConnectGatewayAssociationsAction,
        DescribeDirectConnectGatewayAttachmentsAction,
        DescribeDirectConnectGatewaysAction,
        DescribeHostedConnectionsAction,
        DescribeInterconnectLoaAction,
        DescribeInterconnectsAction,
        DescribeLagsAction,
        DescribeLoaAction,
        DescribeLocationsAction,
        DescribeTagsAction,
        DescribeVirtualGatewaysAction,
        DescribeVirtualInterfacesAction,
        DisassociateConnectionFromLagAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDirectConnectGatewayAssociationAction,
        UpdateLagAction,
        UpdateVirtualInterfaceAttributesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    DirectConnectRequest(const Action action);
    DirectConnectRequest(const DirectConnectRequest &other);
    DirectConnectRequest &operator=(const DirectConnectRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const DirectConnectRequest &other) const;


protected:
    /// @cond internal
    DirectConnectRequest(DirectConnectRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DirectConnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

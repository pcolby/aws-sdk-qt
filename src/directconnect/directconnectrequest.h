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
        AllocateConnectionOnInterconnectAction,
        AllocateHostedConnectionAction,
        AllocatePrivateVirtualInterfaceAction,
        AllocatePublicVirtualInterfaceAction,
        AssociateConnectionWithLagAction,
        AssociateHostedConnectionAction,
        AssociateVirtualInterfaceAction,
        ConfirmConnectionAction,
        ConfirmPrivateVirtualInterfaceAction,
        ConfirmPublicVirtualInterfaceAction,
        CreateBGPPeerAction,
        CreateConnectionAction,
        CreateDirectConnectGatewayAction,
        CreateDirectConnectGatewayAssociationAction,
        CreateInterconnectAction,
        CreateLagAction,
        CreatePrivateVirtualInterfaceAction,
        CreatePublicVirtualInterfaceAction,
        DeleteBGPPeerAction,
        DeleteConnectionAction,
        DeleteDirectConnectGatewayAction,
        DeleteDirectConnectGatewayAssociationAction,
        DeleteInterconnectAction,
        DeleteLagAction,
        DeleteVirtualInterfaceAction,
        DescribeConnectionLoaAction,
        DescribeConnectionsAction,
        DescribeConnectionsOnInterconnectAction,
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
        UpdateLagAction,
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

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(DirectConnectRequest)

};

} // namespace DirectConnect
} // namespace QtAws

#endif

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DIRECTCONNECTREQUEST_H
#define QTAWS_DIRECTCONNECTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsdirectconnectglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace DirectConnect {

class DirectConnectRequestPrivate;

class QTAWSDIRECTCONNECT_EXPORT DirectConnectRequest : public QtAws::Core::AwsAbstractRequest {

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
        AssociateMacSecKeyAction,
        AssociateVirtualInterfaceAction,
        ConfirmConnectionAction,
        ConfirmCustomerAgreementAction,
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
        DescribeCustomerMetadataAction,
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
        DescribeRouterConfigurationAction,
        DescribeTagsAction,
        DescribeVirtualGatewaysAction,
        DescribeVirtualInterfacesAction,
        DisassociateConnectionFromLagAction,
        DisassociateMacSecKeyAction,
        ListVirtualInterfaceTestHistoryAction,
        StartBgpFailoverTestAction,
        StopBgpFailoverTestAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConnectionAction,
        UpdateDirectConnectGatewayAction,
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
    explicit DirectConnectRequest(DirectConnectRequestPrivate * const d);
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

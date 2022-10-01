// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NETWORKMANAGERREQUEST_H
#define QTAWS_NETWORKMANAGERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsnetworkmanagerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace NetworkManager {

class NetworkManagerRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT NetworkManagerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by NetworkManager.
    enum Action {
        AcceptAttachmentAction,
        AssociateConnectPeerAction,
        AssociateCustomerGatewayAction,
        AssociateLinkAction,
        AssociateTransitGatewayConnectPeerAction,
        CreateConnectAttachmentAction,
        CreateConnectPeerAction,
        CreateConnectionAction,
        CreateCoreNetworkAction,
        CreateDeviceAction,
        CreateGlobalNetworkAction,
        CreateLinkAction,
        CreateSiteAction,
        CreateSiteToSiteVpnAttachmentAction,
        CreateTransitGatewayPeeringAction,
        CreateTransitGatewayRouteTableAttachmentAction,
        CreateVpcAttachmentAction,
        DeleteAttachmentAction,
        DeleteConnectPeerAction,
        DeleteConnectionAction,
        DeleteCoreNetworkAction,
        DeleteCoreNetworkPolicyVersionAction,
        DeleteDeviceAction,
        DeleteGlobalNetworkAction,
        DeleteLinkAction,
        DeletePeeringAction,
        DeleteResourcePolicyAction,
        DeleteSiteAction,
        DeregisterTransitGatewayAction,
        DescribeGlobalNetworksAction,
        DisassociateConnectPeerAction,
        DisassociateCustomerGatewayAction,
        DisassociateLinkAction,
        DisassociateTransitGatewayConnectPeerAction,
        ExecuteCoreNetworkChangeSetAction,
        GetConnectAttachmentAction,
        GetConnectPeerAction,
        GetConnectPeerAssociationsAction,
        GetConnectionsAction,
        GetCoreNetworkAction,
        GetCoreNetworkChangeEventsAction,
        GetCoreNetworkChangeSetAction,
        GetCoreNetworkPolicyAction,
        GetCustomerGatewayAssociationsAction,
        GetDevicesAction,
        GetLinkAssociationsAction,
        GetLinksAction,
        GetNetworkResourceCountsAction,
        GetNetworkResourceRelationshipsAction,
        GetNetworkResourcesAction,
        GetNetworkRoutesAction,
        GetNetworkTelemetryAction,
        GetResourcePolicyAction,
        GetRouteAnalysisAction,
        GetSiteToSiteVpnAttachmentAction,
        GetSitesAction,
        GetTransitGatewayConnectPeerAssociationsAction,
        GetTransitGatewayPeeringAction,
        GetTransitGatewayRegistrationsAction,
        GetTransitGatewayRouteTableAttachmentAction,
        GetVpcAttachmentAction,
        ListAttachmentsAction,
        ListConnectPeersAction,
        ListCoreNetworkPolicyVersionsAction,
        ListCoreNetworksAction,
        ListOrganizationServiceAccessStatusAction,
        ListPeeringsAction,
        ListTagsForResourceAction,
        PutCoreNetworkPolicyAction,
        PutResourcePolicyAction,
        RegisterTransitGatewayAction,
        RejectAttachmentAction,
        RestoreCoreNetworkPolicyVersionAction,
        StartOrganizationServiceAccessUpdateAction,
        StartRouteAnalysisAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConnectionAction,
        UpdateCoreNetworkAction,
        UpdateDeviceAction,
        UpdateGlobalNetworkAction,
        UpdateLinkAction,
        UpdateNetworkResourceMetadataAction,
        UpdateSiteAction,
        UpdateVpcAttachmentAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    NetworkManagerRequest(const Action action);
    NetworkManagerRequest(const NetworkManagerRequest &other);
    NetworkManagerRequest &operator=(const NetworkManagerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const NetworkManagerRequest &other) const;


protected:
    /// @cond internal
    explicit NetworkManagerRequest(NetworkManagerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NetworkManagerRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif

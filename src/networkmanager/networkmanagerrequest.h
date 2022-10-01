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

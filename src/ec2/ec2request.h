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

#ifndef QTAWS_EC2REQUEST_H
#define QTAWS_EC2REQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EC2 {

class Ec2RequestPrivate;

class QTAWS_EXPORT Ec2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EC2.
    enum Action {
        AcceptReservedInstancesExchangeQuoteAction,
        AcceptTransitGatewayMulticastDomainAssociationsAction,
        AcceptTransitGatewayPeeringAttachmentAction,
        AcceptTransitGatewayVpcAttachmentAction,
        AcceptVpcEndpointConnectionsAction,
        AcceptVpcPeeringConnectionAction,
        AdvertiseByoipCidrAction,
        AllocateAddressAction,
        AllocateHostsAction,
        ApplySecurityGroupsToClientVpnTargetNetworkAction,
        AssignIpv6AddressesAction,
        AssignPrivateIpAddressesAction,
        AssociateAddressAction,
        AssociateClientVpnTargetNetworkAction,
        AssociateDhcpOptionsAction,
        AssociateEnclaveCertificateIamRoleAction,
        AssociateIamInstanceProfileAction,
        AssociateRouteTableAction,
        AssociateSubnetCidrBlockAction,
        AssociateTransitGatewayMulticastDomainAction,
        AssociateTransitGatewayRouteTableAction,
        AssociateVpcCidrBlockAction,
        AttachClassicLinkVpcAction,
        AttachInternetGatewayAction,
        AttachNetworkInterfaceAction,
        AttachVolumeAction,
        AttachVpnGatewayAction,
        AuthorizeClientVpnIngressAction,
        AuthorizeSecurityGroupEgressAction,
        AuthorizeSecurityGroupIngressAction,
        BundleInstanceAction,
        CancelBundleTaskAction,
        CancelCapacityReservationAction,
        CancelConversionTaskAction,
        CancelExportTaskAction,
        CancelImportTaskAction,
        CancelReservedInstancesListingAction,
        CancelSpotFleetRequestsAction,
        CancelSpotInstanceRequestsAction,
        ConfirmProductInstanceAction,
        CopyFpgaImageAction,
        CopyImageAction,
        CopySnapshotAction,
        CreateCapacityReservationAction,
        CreateCarrierGatewayAction,
        CreateClientVpnEndpointAction,
        CreateClientVpnRouteAction,
        CreateCustomerGatewayAction,
        CreateDefaultSubnetAction,
        CreateDefaultVpcAction,
        CreateDhcpOptionsAction,
        CreateEgressOnlyInternetGatewayAction,
        CreateFleetAction,
        CreateFlowLogsAction,
        CreateFpgaImageAction,
        CreateImageAction,
        CreateInstanceExportTaskAction,
        CreateInternetGatewayAction,
        CreateKeyPairAction,
        CreateLaunchTemplateAction,
        CreateLaunchTemplateVersionAction,
        CreateLocalGatewayRouteAction,
        CreateLocalGatewayRouteTableVpcAssociationAction,
        CreateManagedPrefixListAction,
        CreateNatGatewayAction,
        CreateNetworkAclAction,
        CreateNetworkAclEntryAction,
        CreateNetworkInsightsPathAction,
        CreateNetworkInterfaceAction,
        CreateNetworkInterfacePermissionAction,
        CreatePlacementGroupAction,
        CreateReplaceRootVolumeTaskAction,
        CreateReservedInstancesListingAction,
        CreateRestoreImageTaskAction,
        CreateRouteAction,
        CreateRouteTableAction,
        CreateSecurityGroupAction,
        CreateSnapshotAction,
        CreateSnapshotsAction,
        CreateSpotDatafeedSubscriptionAction,
        CreateStoreImageTaskAction,
        CreateSubnetAction,
        CreateTagsAction,
        CreateTrafficMirrorFilterAction,
        CreateTrafficMirrorFilterRuleAction,
        CreateTrafficMirrorSessionAction,
        CreateTrafficMirrorTargetAction,
        CreateTransitGatewayAction,
        CreateTransitGatewayConnectAction,
        CreateTransitGatewayConnectPeerAction,
        CreateTransitGatewayMulticastDomainAction,
        CreateTransitGatewayPeeringAttachmentAction,
        CreateTransitGatewayPrefixListReferenceAction,
        CreateTransitGatewayRouteAction,
        CreateTransitGatewayRouteTableAction,
        CreateTransitGatewayVpcAttachmentAction,
        CreateVolumeAction,
        CreateVpcAction,
        CreateVpcEndpointAction,
        CreateVpcEndpointConnectionNotificationAction,
        CreateVpcEndpointServiceConfigurationAction,
        CreateVpcPeeringConnectionAction,
        CreateVpnConnectionAction,
        CreateVpnConnectionRouteAction,
        CreateVpnGatewayAction,
        DeleteCarrierGatewayAction,
        DeleteClientVpnEndpointAction,
        DeleteClientVpnRouteAction,
        DeleteCustomerGatewayAction,
        DeleteDhcpOptionsAction,
        DeleteEgressOnlyInternetGatewayAction,
        DeleteFleetsAction,
        DeleteFlowLogsAction,
        DeleteFpgaImageAction,
        DeleteInternetGatewayAction,
        DeleteKeyPairAction,
        DeleteLaunchTemplateAction,
        DeleteLaunchTemplateVersionsAction,
        DeleteLocalGatewayRouteAction,
        DeleteLocalGatewayRouteTableVpcAssociationAction,
        DeleteManagedPrefixListAction,
        DeleteNatGatewayAction,
        DeleteNetworkAclAction,
        DeleteNetworkAclEntryAction,
        DeleteNetworkInsightsAnalysisAction,
        DeleteNetworkInsightsPathAction,
        DeleteNetworkInterfaceAction,
        DeleteNetworkInterfacePermissionAction,
        DeletePlacementGroupAction,
        DeleteQueuedReservedInstancesAction,
        DeleteRouteAction,
        DeleteRouteTableAction,
        DeleteSecurityGroupAction,
        DeleteSnapshotAction,
        DeleteSpotDatafeedSubscriptionAction,
        DeleteSubnetAction,
        DeleteTagsAction,
        DeleteTrafficMirrorFilterAction,
        DeleteTrafficMirrorFilterRuleAction,
        DeleteTrafficMirrorSessionAction,
        DeleteTrafficMirrorTargetAction,
        DeleteTransitGatewayAction,
        DeleteTransitGatewayConnectAction,
        DeleteTransitGatewayConnectPeerAction,
        DeleteTransitGatewayMulticastDomainAction,
        DeleteTransitGatewayPeeringAttachmentAction,
        DeleteTransitGatewayPrefixListReferenceAction,
        DeleteTransitGatewayRouteAction,
        DeleteTransitGatewayRouteTableAction,
        DeleteTransitGatewayVpcAttachmentAction,
        DeleteVolumeAction,
        DeleteVpcAction,
        DeleteVpcEndpointConnectionNotificationsAction,
        DeleteVpcEndpointServiceConfigurationsAction,
        DeleteVpcEndpointsAction,
        DeleteVpcPeeringConnectionAction,
        DeleteVpnConnectionAction,
        DeleteVpnConnectionRouteAction,
        DeleteVpnGatewayAction,
        DeprovisionByoipCidrAction,
        DeregisterImageAction,
        DeregisterInstanceEventNotificationAttributesAction,
        DeregisterTransitGatewayMulticastGroupMembersAction,
        DeregisterTransitGatewayMulticastGroupSourcesAction,
        DescribeAccountAttributesAction,
        DescribeAddressesAction,
        DescribeAddressesAttributeAction,
        DescribeAggregateIdFormatAction,
        DescribeAvailabilityZonesAction,
        DescribeBundleTasksAction,
        DescribeByoipCidrsAction,
        DescribeCapacityReservationsAction,
        DescribeCarrierGatewaysAction,
        DescribeClassicLinkInstancesAction,
        DescribeClientVpnAuthorizationRulesAction,
        DescribeClientVpnConnectionsAction,
        DescribeClientVpnEndpointsAction,
        DescribeClientVpnRoutesAction,
        DescribeClientVpnTargetNetworksAction,
        DescribeCoipPoolsAction,
        DescribeConversionTasksAction,
        DescribeCustomerGatewaysAction,
        DescribeDhcpOptionsAction,
        DescribeEgressOnlyInternetGatewaysAction,
        DescribeElasticGpusAction,
        DescribeExportImageTasksAction,
        DescribeExportTasksAction,
        DescribeFastSnapshotRestoresAction,
        DescribeFleetHistoryAction,
        DescribeFleetInstancesAction,
        DescribeFleetsAction,
        DescribeFlowLogsAction,
        DescribeFpgaImageAttributeAction,
        DescribeFpgaImagesAction,
        DescribeHostReservationOfferingsAction,
        DescribeHostReservationsAction,
        DescribeHostsAction,
        DescribeIamInstanceProfileAssociationsAction,
        DescribeIdFormatAction,
        DescribeIdentityIdFormatAction,
        DescribeImageAttributeAction,
        DescribeImagesAction,
        DescribeImportImageTasksAction,
        DescribeImportSnapshotTasksAction,
        DescribeInstanceAttributeAction,
        DescribeInstanceCreditSpecificationsAction,
        DescribeInstanceEventNotificationAttributesAction,
        DescribeInstanceStatusAction,
        DescribeInstanceTypeOfferingsAction,
        DescribeInstanceTypesAction,
        DescribeInstancesAction,
        DescribeInternetGatewaysAction,
        DescribeIpv6PoolsAction,
        DescribeKeyPairsAction,
        DescribeLaunchTemplateVersionsAction,
        DescribeLaunchTemplatesAction,
        DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsAction,
        DescribeLocalGatewayRouteTableVpcAssociationsAction,
        DescribeLocalGatewayRouteTablesAction,
        DescribeLocalGatewayVirtualInterfaceGroupsAction,
        DescribeLocalGatewayVirtualInterfacesAction,
        DescribeLocalGatewaysAction,
        DescribeManagedPrefixListsAction,
        DescribeMovingAddressesAction,
        DescribeNatGatewaysAction,
        DescribeNetworkAclsAction,
        DescribeNetworkInsightsAnalysesAction,
        DescribeNetworkInsightsPathsAction,
        DescribeNetworkInterfaceAttributeAction,
        DescribeNetworkInterfacePermissionsAction,
        DescribeNetworkInterfacesAction,
        DescribePlacementGroupsAction,
        DescribePrefixListsAction,
        DescribePrincipalIdFormatAction,
        DescribePublicIpv4PoolsAction,
        DescribeRegionsAction,
        DescribeReplaceRootVolumeTasksAction,
        DescribeReservedInstancesAction,
        DescribeReservedInstancesListingsAction,
        DescribeReservedInstancesModificationsAction,
        DescribeReservedInstancesOfferingsAction,
        DescribeRouteTablesAction,
        DescribeScheduledInstanceAvailabilityAction,
        DescribeScheduledInstancesAction,
        DescribeSecurityGroupReferencesAction,
        DescribeSecurityGroupsAction,
        DescribeSnapshotAttributeAction,
        DescribeSnapshotsAction,
        DescribeSpotDatafeedSubscriptionAction,
        DescribeSpotFleetInstancesAction,
        DescribeSpotFleetRequestHistoryAction,
        DescribeSpotFleetRequestsAction,
        DescribeSpotInstanceRequestsAction,
        DescribeSpotPriceHistoryAction,
        DescribeStaleSecurityGroupsAction,
        DescribeStoreImageTasksAction,
        DescribeSubnetsAction,
        DescribeTagsAction,
        DescribeTrafficMirrorFiltersAction,
        DescribeTrafficMirrorSessionsAction,
        DescribeTrafficMirrorTargetsAction,
        DescribeTransitGatewayAttachmentsAction,
        DescribeTransitGatewayConnectPeersAction,
        DescribeTransitGatewayConnectsAction,
        DescribeTransitGatewayMulticastDomainsAction,
        DescribeTransitGatewayPeeringAttachmentsAction,
        DescribeTransitGatewayRouteTablesAction,
        DescribeTransitGatewayVpcAttachmentsAction,
        DescribeTransitGatewaysAction,
        DescribeVolumeAttributeAction,
        DescribeVolumeStatusAction,
        DescribeVolumesAction,
        DescribeVolumesModificationsAction,
        DescribeVpcAttributeAction,
        DescribeVpcClassicLinkAction,
        DescribeVpcClassicLinkDnsSupportAction,
        DescribeVpcEndpointConnectionNotificationsAction,
        DescribeVpcEndpointConnectionsAction,
        DescribeVpcEndpointServiceConfigurationsAction,
        DescribeVpcEndpointServicePermissionsAction,
        DescribeVpcEndpointServicesAction,
        DescribeVpcEndpointsAction,
        DescribeVpcPeeringConnectionsAction,
        DescribeVpcsAction,
        DescribeVpnConnectionsAction,
        DescribeVpnGatewaysAction,
        DetachClassicLinkVpcAction,
        DetachInternetGatewayAction,
        DetachNetworkInterfaceAction,
        DetachVolumeAction,
        DetachVpnGatewayAction,
        DisableEbsEncryptionByDefaultAction,
        DisableFastSnapshotRestoresAction,
        DisableImageDeprecationAction,
        DisableSerialConsoleAccessAction,
        DisableTransitGatewayRouteTablePropagationAction,
        DisableVgwRoutePropagationAction,
        DisableVpcClassicLinkAction,
        DisableVpcClassicLinkDnsSupportAction,
        DisassociateAddressAction,
        DisassociateClientVpnTargetNetworkAction,
        DisassociateEnclaveCertificateIamRoleAction,
        DisassociateIamInstanceProfileAction,
        DisassociateRouteTableAction,
        DisassociateSubnetCidrBlockAction,
        DisassociateTransitGatewayMulticastDomainAction,
        DisassociateTransitGatewayRouteTableAction,
        DisassociateVpcCidrBlockAction,
        EnableEbsEncryptionByDefaultAction,
        EnableFastSnapshotRestoresAction,
        EnableImageDeprecationAction,
        EnableSerialConsoleAccessAction,
        EnableTransitGatewayRouteTablePropagationAction,
        EnableVgwRoutePropagationAction,
        EnableVolumeIOAction,
        EnableVpcClassicLinkAction,
        EnableVpcClassicLinkDnsSupportAction,
        ExportClientVpnClientCertificateRevocationListAction,
        ExportClientVpnClientConfigurationAction,
        ExportImageAction,
        ExportTransitGatewayRoutesAction,
        GetAssociatedEnclaveCertificateIamRolesAction,
        GetAssociatedIpv6PoolCidrsAction,
        GetCapacityReservationUsageAction,
        GetCoipPoolUsageAction,
        GetConsoleOutputAction,
        GetConsoleScreenshotAction,
        GetDefaultCreditSpecificationAction,
        GetEbsDefaultKmsKeyIdAction,
        GetEbsEncryptionByDefaultAction,
        GetFlowLogsIntegrationTemplateAction,
        GetGroupsForCapacityReservationAction,
        GetHostReservationPurchasePreviewAction,
        GetLaunchTemplateDataAction,
        GetManagedPrefixListAssociationsAction,
        GetManagedPrefixListEntriesAction,
        GetPasswordDataAction,
        GetReservedInstancesExchangeQuoteAction,
        GetSerialConsoleAccessStatusAction,
        GetTransitGatewayAttachmentPropagationsAction,
        GetTransitGatewayMulticastDomainAssociationsAction,
        GetTransitGatewayPrefixListReferencesAction,
        GetTransitGatewayRouteTableAssociationsAction,
        GetTransitGatewayRouteTablePropagationsAction,
        ImportClientVpnClientCertificateRevocationListAction,
        ImportImageAction,
        ImportInstanceAction,
        ImportKeyPairAction,
        ImportSnapshotAction,
        ImportVolumeAction,
        ModifyAddressAttributeAction,
        ModifyAvailabilityZoneGroupAction,
        ModifyCapacityReservationAction,
        ModifyClientVpnEndpointAction,
        ModifyDefaultCreditSpecificationAction,
        ModifyEbsDefaultKmsKeyIdAction,
        ModifyFleetAction,
        ModifyFpgaImageAttributeAction,
        ModifyHostsAction,
        ModifyIdFormatAction,
        ModifyIdentityIdFormatAction,
        ModifyImageAttributeAction,
        ModifyInstanceAttributeAction,
        ModifyInstanceCapacityReservationAttributesAction,
        ModifyInstanceCreditSpecificationAction,
        ModifyInstanceEventStartTimeAction,
        ModifyInstanceMetadataOptionsAction,
        ModifyInstancePlacementAction,
        ModifyLaunchTemplateAction,
        ModifyManagedPrefixListAction,
        ModifyNetworkInterfaceAttributeAction,
        ModifyReservedInstancesAction,
        ModifySnapshotAttributeAction,
        ModifySpotFleetRequestAction,
        ModifySubnetAttributeAction,
        ModifyTrafficMirrorFilterNetworkServicesAction,
        ModifyTrafficMirrorFilterRuleAction,
        ModifyTrafficMirrorSessionAction,
        ModifyTransitGatewayAction,
        ModifyTransitGatewayPrefixListReferenceAction,
        ModifyTransitGatewayVpcAttachmentAction,
        ModifyVolumeAction,
        ModifyVolumeAttributeAction,
        ModifyVpcAttributeAction,
        ModifyVpcEndpointAction,
        ModifyVpcEndpointConnectionNotificationAction,
        ModifyVpcEndpointServiceConfigurationAction,
        ModifyVpcEndpointServicePermissionsAction,
        ModifyVpcPeeringConnectionOptionsAction,
        ModifyVpcTenancyAction,
        ModifyVpnConnectionAction,
        ModifyVpnConnectionOptionsAction,
        ModifyVpnTunnelCertificateAction,
        ModifyVpnTunnelOptionsAction,
        MonitorInstancesAction,
        MoveAddressToVpcAction,
        ProvisionByoipCidrAction,
        PurchaseHostReservationAction,
        PurchaseReservedInstancesOfferingAction,
        PurchaseScheduledInstancesAction,
        RebootInstancesAction,
        RegisterImageAction,
        RegisterInstanceEventNotificationAttributesAction,
        RegisterTransitGatewayMulticastGroupMembersAction,
        RegisterTransitGatewayMulticastGroupSourcesAction,
        RejectTransitGatewayMulticastDomainAssociationsAction,
        RejectTransitGatewayPeeringAttachmentAction,
        RejectTransitGatewayVpcAttachmentAction,
        RejectVpcEndpointConnectionsAction,
        RejectVpcPeeringConnectionAction,
        ReleaseAddressAction,
        ReleaseHostsAction,
        ReplaceIamInstanceProfileAssociationAction,
        ReplaceNetworkAclAssociationAction,
        ReplaceNetworkAclEntryAction,
        ReplaceRouteAction,
        ReplaceRouteTableAssociationAction,
        ReplaceTransitGatewayRouteAction,
        ReportInstanceStatusAction,
        RequestSpotFleetAction,
        RequestSpotInstancesAction,
        ResetAddressAttributeAction,
        ResetEbsDefaultKmsKeyIdAction,
        ResetFpgaImageAttributeAction,
        ResetImageAttributeAction,
        ResetInstanceAttributeAction,
        ResetNetworkInterfaceAttributeAction,
        ResetSnapshotAttributeAction,
        RestoreAddressToClassicAction,
        RestoreManagedPrefixListVersionAction,
        RevokeClientVpnIngressAction,
        RevokeSecurityGroupEgressAction,
        RevokeSecurityGroupIngressAction,
        RunInstancesAction,
        RunScheduledInstancesAction,
        SearchLocalGatewayRoutesAction,
        SearchTransitGatewayMulticastGroupsAction,
        SearchTransitGatewayRoutesAction,
        SendDiagnosticInterruptAction,
        StartInstancesAction,
        StartNetworkInsightsAnalysisAction,
        StartVpcEndpointServicePrivateDnsVerificationAction,
        StopInstancesAction,
        TerminateClientVpnConnectionsAction,
        TerminateInstancesAction,
        UnassignIpv6AddressesAction,
        UnassignPrivateIpAddressesAction,
        UnmonitorInstancesAction,
        UpdateSecurityGroupRuleDescriptionsEgressAction,
        UpdateSecurityGroupRuleDescriptionsIngressAction,
        WithdrawByoipCidrAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Ec2Request(const Action action);
    Ec2Request(const Ec2Request &other);
    Ec2Request &operator=(const Ec2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Ec2Request &other) const;


protected:
    /// @cond internal
    Ec2RequestPrivate * const d_ptr; ///< Internal d-pointer.
    Ec2Request(Ec2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Ec2Request)

};

} // namespace EC2
} // namespace QtAws

#endif

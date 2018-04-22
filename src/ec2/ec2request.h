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
        AcceptVpcEndpointConnectionsAction,
        AcceptVpcPeeringConnectionAction,
        AllocateAddressAction,
        AllocateHostsAction,
        AssignIpv6AddressesAction,
        AssignPrivateIpAddressesAction,
        AssociateAddressAction,
        AssociateDhcpOptionsAction,
        AssociateIamInstanceProfileAction,
        AssociateRouteTableAction,
        AssociateSubnetCidrBlockAction,
        AssociateVpcCidrBlockAction,
        AttachClassicLinkVpcAction,
        AttachInternetGatewayAction,
        AttachNetworkInterfaceAction,
        AttachVolumeAction,
        AttachVpnGatewayAction,
        AuthorizeSecurityGroupEgressAction,
        AuthorizeSecurityGroupIngressAction,
        BundleInstanceAction,
        CancelBundleTaskAction,
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
        CreateCustomerGatewayAction,
        CreateDefaultSubnetAction,
        CreateDefaultVpcAction,
        CreateDhcpOptionsAction,
        CreateEgressOnlyInternetGatewayAction,
        CreateFlowLogsAction,
        CreateFpgaImageAction,
        CreateImageAction,
        CreateInstanceExportTaskAction,
        CreateInternetGatewayAction,
        CreateKeyPairAction,
        CreateLaunchTemplateAction,
        CreateLaunchTemplateVersionAction,
        CreateNatGatewayAction,
        CreateNetworkAclAction,
        CreateNetworkAclEntryAction,
        CreateNetworkInterfaceAction,
        CreateNetworkInterfacePermissionAction,
        CreatePlacementGroupAction,
        CreateReservedInstancesListingAction,
        CreateRouteAction,
        CreateRouteTableAction,
        CreateSecurityGroupAction,
        CreateSnapshotAction,
        CreateSpotDatafeedSubscriptionAction,
        CreateSubnetAction,
        CreateTagsAction,
        CreateVolumeAction,
        CreateVpcAction,
        CreateVpcEndpointAction,
        CreateVpcEndpointConnectionNotificationAction,
        CreateVpcEndpointServiceConfigurationAction,
        CreateVpcPeeringConnectionAction,
        CreateVpnConnectionAction,
        CreateVpnConnectionRouteAction,
        CreateVpnGatewayAction,
        DeleteCustomerGatewayAction,
        DeleteDhcpOptionsAction,
        DeleteEgressOnlyInternetGatewayAction,
        DeleteFlowLogsAction,
        DeleteFpgaImageAction,
        DeleteInternetGatewayAction,
        DeleteKeyPairAction,
        DeleteLaunchTemplateAction,
        DeleteLaunchTemplateVersionsAction,
        DeleteNatGatewayAction,
        DeleteNetworkAclAction,
        DeleteNetworkAclEntryAction,
        DeleteNetworkInterfaceAction,
        DeleteNetworkInterfacePermissionAction,
        DeletePlacementGroupAction,
        DeleteRouteAction,
        DeleteRouteTableAction,
        DeleteSecurityGroupAction,
        DeleteSnapshotAction,
        DeleteSpotDatafeedSubscriptionAction,
        DeleteSubnetAction,
        DeleteTagsAction,
        DeleteVolumeAction,
        DeleteVpcAction,
        DeleteVpcEndpointConnectionNotificationsAction,
        DeleteVpcEndpointServiceConfigurationsAction,
        DeleteVpcEndpointsAction,
        DeleteVpcPeeringConnectionAction,
        DeleteVpnConnectionAction,
        DeleteVpnConnectionRouteAction,
        DeleteVpnGatewayAction,
        DeregisterImageAction,
        DescribeAccountAttributesAction,
        DescribeAddressesAction,
        DescribeAggregateIdFormatAction,
        DescribeAvailabilityZonesAction,
        DescribeBundleTasksAction,
        DescribeClassicLinkInstancesAction,
        DescribeConversionTasksAction,
        DescribeCustomerGatewaysAction,
        DescribeDhcpOptionsAction,
        DescribeEgressOnlyInternetGatewaysAction,
        DescribeElasticGpusAction,
        DescribeExportTasksAction,
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
        DescribeInstanceStatusAction,
        DescribeInstancesAction,
        DescribeInternetGatewaysAction,
        DescribeKeyPairsAction,
        DescribeLaunchTemplateVersionsAction,
        DescribeLaunchTemplatesAction,
        DescribeMovingAddressesAction,
        DescribeNatGatewaysAction,
        DescribeNetworkAclsAction,
        DescribeNetworkInterfaceAttributeAction,
        DescribeNetworkInterfacePermissionsAction,
        DescribeNetworkInterfacesAction,
        DescribePlacementGroupsAction,
        DescribePrefixListsAction,
        DescribePrincipalIdFormatAction,
        DescribeRegionsAction,
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
        DescribeSubnetsAction,
        DescribeTagsAction,
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
        DisableVgwRoutePropagationAction,
        DisableVpcClassicLinkAction,
        DisableVpcClassicLinkDnsSupportAction,
        DisassociateAddressAction,
        DisassociateIamInstanceProfileAction,
        DisassociateRouteTableAction,
        DisassociateSubnetCidrBlockAction,
        DisassociateVpcCidrBlockAction,
        EnableVgwRoutePropagationAction,
        EnableVolumeIOAction,
        EnableVpcClassicLinkAction,
        EnableVpcClassicLinkDnsSupportAction,
        GetConsoleOutputAction,
        GetConsoleScreenshotAction,
        GetHostReservationPurchasePreviewAction,
        GetLaunchTemplateDataAction,
        GetPasswordDataAction,
        GetReservedInstancesExchangeQuoteAction,
        ImportImageAction,
        ImportInstanceAction,
        ImportKeyPairAction,
        ImportSnapshotAction,
        ImportVolumeAction,
        ModifyFpgaImageAttributeAction,
        ModifyHostsAction,
        ModifyIdFormatAction,
        ModifyIdentityIdFormatAction,
        ModifyImageAttributeAction,
        ModifyInstanceAttributeAction,
        ModifyInstanceCreditSpecificationAction,
        ModifyInstancePlacementAction,
        ModifyLaunchTemplateAction,
        ModifyNetworkInterfaceAttributeAction,
        ModifyReservedInstancesAction,
        ModifySnapshotAttributeAction,
        ModifySpotFleetRequestAction,
        ModifySubnetAttributeAction,
        ModifyVolumeAction,
        ModifyVolumeAttributeAction,
        ModifyVpcAttributeAction,
        ModifyVpcEndpointAction,
        ModifyVpcEndpointConnectionNotificationAction,
        ModifyVpcEndpointServiceConfigurationAction,
        ModifyVpcEndpointServicePermissionsAction,
        ModifyVpcPeeringConnectionOptionsAction,
        ModifyVpcTenancyAction,
        MonitorInstancesAction,
        MoveAddressToVpcAction,
        PurchaseHostReservationAction,
        PurchaseReservedInstancesOfferingAction,
        PurchaseScheduledInstancesAction,
        RebootInstancesAction,
        RegisterImageAction,
        RejectVpcEndpointConnectionsAction,
        RejectVpcPeeringConnectionAction,
        ReleaseAddressAction,
        ReleaseHostsAction,
        ReplaceIamInstanceProfileAssociationAction,
        ReplaceNetworkAclAssociationAction,
        ReplaceNetworkAclEntryAction,
        ReplaceRouteAction,
        ReplaceRouteTableAssociationAction,
        ReportInstanceStatusAction,
        RequestSpotFleetAction,
        RequestSpotInstancesAction,
        ResetFpgaImageAttributeAction,
        ResetImageAttributeAction,
        ResetInstanceAttributeAction,
        ResetNetworkInterfaceAttributeAction,
        ResetSnapshotAttributeAction,
        RestoreAddressToClassicAction,
        RevokeSecurityGroupEgressAction,
        RevokeSecurityGroupIngressAction,
        RunInstancesAction,
        RunScheduledInstancesAction,
        StartInstancesAction,
        StopInstancesAction,
        TerminateInstancesAction,
        UnassignIpv6AddressesAction,
        UnassignPrivateIpAddressesAction,
        UnmonitorInstancesAction,
        UpdateSecurityGroupRuleDescriptionsEgressAction,
        UpdateSecurityGroupRuleDescriptionsIngressAction,
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
    Ec2Request(Ec2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(Ec2Request)

};

} // namespace EC2
} // namespace QtAws

#endif

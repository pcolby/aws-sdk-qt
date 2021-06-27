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

#include "ec2request.h"
#include "ec2request_p.h"

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::Ec2Request
 * \brief The Ec2Request class provides an interface for EC2 requests.
 *
 * \inmodule QtAwsEC2
 */

/*!
 * \enum Ec2Request::Action
 *
 * This enum describes the actions that can be performed as EC2
 * requests.
 *
 * \value AcceptReservedInstancesExchangeQuoteAction EC2 AcceptReservedInstancesExchangeQuote action.
 * \value AcceptTransitGatewayMulticastDomainAssociationsAction EC2 AcceptTransitGatewayMulticastDomainAssociations action.
 * \value AcceptTransitGatewayPeeringAttachmentAction EC2 AcceptTransitGatewayPeeringAttachment action.
 * \value AcceptTransitGatewayVpcAttachmentAction EC2 AcceptTransitGatewayVpcAttachment action.
 * \value AcceptVpcEndpointConnectionsAction EC2 AcceptVpcEndpointConnections action.
 * \value AcceptVpcPeeringConnectionAction EC2 AcceptVpcPeeringConnection action.
 * \value AdvertiseByoipCidrAction EC2 AdvertiseByoipCidr action.
 * \value AllocateAddressAction EC2 AllocateAddress action.
 * \value AllocateHostsAction EC2 AllocateHosts action.
 * \value ApplySecurityGroupsToClientVpnTargetNetworkAction EC2 ApplySecurityGroupsToClientVpnTargetNetwork action.
 * \value AssignIpv6AddressesAction EC2 AssignIpv6Addresses action.
 * \value AssignPrivateIpAddressesAction EC2 AssignPrivateIpAddresses action.
 * \value AssociateAddressAction EC2 AssociateAddress action.
 * \value AssociateClientVpnTargetNetworkAction EC2 AssociateClientVpnTargetNetwork action.
 * \value AssociateDhcpOptionsAction EC2 AssociateDhcpOptions action.
 * \value AssociateEnclaveCertificateIamRoleAction EC2 AssociateEnclaveCertificateIamRole action.
 * \value AssociateIamInstanceProfileAction EC2 AssociateIamInstanceProfile action.
 * \value AssociateRouteTableAction EC2 AssociateRouteTable action.
 * \value AssociateSubnetCidrBlockAction EC2 AssociateSubnetCidrBlock action.
 * \value AssociateTransitGatewayMulticastDomainAction EC2 AssociateTransitGatewayMulticastDomain action.
 * \value AssociateTransitGatewayRouteTableAction EC2 AssociateTransitGatewayRouteTable action.
 * \value AssociateVpcCidrBlockAction EC2 AssociateVpcCidrBlock action.
 * \value AttachClassicLinkVpcAction EC2 AttachClassicLinkVpc action.
 * \value AttachInternetGatewayAction EC2 AttachInternetGateway action.
 * \value AttachNetworkInterfaceAction EC2 AttachNetworkInterface action.
 * \value AttachVolumeAction EC2 AttachVolume action.
 * \value AttachVpnGatewayAction EC2 AttachVpnGateway action.
 * \value AuthorizeClientVpnIngressAction EC2 AuthorizeClientVpnIngress action.
 * \value AuthorizeSecurityGroupEgressAction EC2 AuthorizeSecurityGroupEgress action.
 * \value AuthorizeSecurityGroupIngressAction EC2 AuthorizeSecurityGroupIngress action.
 * \value BundleInstanceAction EC2 BundleInstance action.
 * \value CancelBundleTaskAction EC2 CancelBundleTask action.
 * \value CancelCapacityReservationAction EC2 CancelCapacityReservation action.
 * \value CancelConversionTaskAction EC2 CancelConversionTask action.
 * \value CancelExportTaskAction EC2 CancelExportTask action.
 * \value CancelImportTaskAction EC2 CancelImportTask action.
 * \value CancelReservedInstancesListingAction EC2 CancelReservedInstancesListing action.
 * \value CancelSpotFleetRequestsAction EC2 CancelSpotFleetRequests action.
 * \value CancelSpotInstanceRequestsAction EC2 CancelSpotInstanceRequests action.
 * \value ConfirmProductInstanceAction EC2 ConfirmProductInstance action.
 * \value CopyFpgaImageAction EC2 CopyFpgaImage action.
 * \value CopyImageAction EC2 CopyImage action.
 * \value CopySnapshotAction EC2 CopySnapshot action.
 * \value CreateCapacityReservationAction EC2 CreateCapacityReservation action.
 * \value CreateCarrierGatewayAction EC2 CreateCarrierGateway action.
 * \value CreateClientVpnEndpointAction EC2 CreateClientVpnEndpoint action.
 * \value CreateClientVpnRouteAction EC2 CreateClientVpnRoute action.
 * \value CreateCustomerGatewayAction EC2 CreateCustomerGateway action.
 * \value CreateDefaultSubnetAction EC2 CreateDefaultSubnet action.
 * \value CreateDefaultVpcAction EC2 CreateDefaultVpc action.
 * \value CreateDhcpOptionsAction EC2 CreateDhcpOptions action.
 * \value CreateEgressOnlyInternetGatewayAction EC2 CreateEgressOnlyInternetGateway action.
 * \value CreateFleetAction EC2 CreateFleet action.
 * \value CreateFlowLogsAction EC2 CreateFlowLogs action.
 * \value CreateFpgaImageAction EC2 CreateFpgaImage action.
 * \value CreateImageAction EC2 CreateImage action.
 * \value CreateInstanceExportTaskAction EC2 CreateInstanceExportTask action.
 * \value CreateInternetGatewayAction EC2 CreateInternetGateway action.
 * \value CreateKeyPairAction EC2 CreateKeyPair action.
 * \value CreateLaunchTemplateAction EC2 CreateLaunchTemplate action.
 * \value CreateLaunchTemplateVersionAction EC2 CreateLaunchTemplateVersion action.
 * \value CreateLocalGatewayRouteAction EC2 CreateLocalGatewayRoute action.
 * \value CreateLocalGatewayRouteTableVpcAssociationAction EC2 CreateLocalGatewayRouteTableVpcAssociation action.
 * \value CreateManagedPrefixListAction EC2 CreateManagedPrefixList action.
 * \value CreateNatGatewayAction EC2 CreateNatGateway action.
 * \value CreateNetworkAclAction EC2 CreateNetworkAcl action.
 * \value CreateNetworkAclEntryAction EC2 CreateNetworkAclEntry action.
 * \value CreateNetworkInsightsPathAction EC2 CreateNetworkInsightsPath action.
 * \value CreateNetworkInterfaceAction EC2 CreateNetworkInterface action.
 * \value CreateNetworkInterfacePermissionAction EC2 CreateNetworkInterfacePermission action.
 * \value CreatePlacementGroupAction EC2 CreatePlacementGroup action.
 * \value CreateReplaceRootVolumeTaskAction EC2 CreateReplaceRootVolumeTask action.
 * \value CreateReservedInstancesListingAction EC2 CreateReservedInstancesListing action.
 * \value CreateRestoreImageTaskAction EC2 CreateRestoreImageTask action.
 * \value CreateRouteAction EC2 CreateRoute action.
 * \value CreateRouteTableAction EC2 CreateRouteTable action.
 * \value CreateSecurityGroupAction EC2 CreateSecurityGroup action.
 * \value CreateSnapshotAction EC2 CreateSnapshot action.
 * \value CreateSnapshotsAction EC2 CreateSnapshots action.
 * \value CreateSpotDatafeedSubscriptionAction EC2 CreateSpotDatafeedSubscription action.
 * \value CreateStoreImageTaskAction EC2 CreateStoreImageTask action.
 * \value CreateSubnetAction EC2 CreateSubnet action.
 * \value CreateTagsAction EC2 CreateTags action.
 * \value CreateTrafficMirrorFilterAction EC2 CreateTrafficMirrorFilter action.
 * \value CreateTrafficMirrorFilterRuleAction EC2 CreateTrafficMirrorFilterRule action.
 * \value CreateTrafficMirrorSessionAction EC2 CreateTrafficMirrorSession action.
 * \value CreateTrafficMirrorTargetAction EC2 CreateTrafficMirrorTarget action.
 * \value CreateTransitGatewayAction EC2 CreateTransitGateway action.
 * \value CreateTransitGatewayConnectAction EC2 CreateTransitGatewayConnect action.
 * \value CreateTransitGatewayConnectPeerAction EC2 CreateTransitGatewayConnectPeer action.
 * \value CreateTransitGatewayMulticastDomainAction EC2 CreateTransitGatewayMulticastDomain action.
 * \value CreateTransitGatewayPeeringAttachmentAction EC2 CreateTransitGatewayPeeringAttachment action.
 * \value CreateTransitGatewayPrefixListReferenceAction EC2 CreateTransitGatewayPrefixListReference action.
 * \value CreateTransitGatewayRouteAction EC2 CreateTransitGatewayRoute action.
 * \value CreateTransitGatewayRouteTableAction EC2 CreateTransitGatewayRouteTable action.
 * \value CreateTransitGatewayVpcAttachmentAction EC2 CreateTransitGatewayVpcAttachment action.
 * \value CreateVolumeAction EC2 CreateVolume action.
 * \value CreateVpcAction EC2 CreateVpc action.
 * \value CreateVpcEndpointAction EC2 CreateVpcEndpoint action.
 * \value CreateVpcEndpointConnectionNotificationAction EC2 CreateVpcEndpointConnectionNotification action.
 * \value CreateVpcEndpointServiceConfigurationAction EC2 CreateVpcEndpointServiceConfiguration action.
 * \value CreateVpcPeeringConnectionAction EC2 CreateVpcPeeringConnection action.
 * \value CreateVpnConnectionAction EC2 CreateVpnConnection action.
 * \value CreateVpnConnectionRouteAction EC2 CreateVpnConnectionRoute action.
 * \value CreateVpnGatewayAction EC2 CreateVpnGateway action.
 * \value DeleteCarrierGatewayAction EC2 DeleteCarrierGateway action.
 * \value DeleteClientVpnEndpointAction EC2 DeleteClientVpnEndpoint action.
 * \value DeleteClientVpnRouteAction EC2 DeleteClientVpnRoute action.
 * \value DeleteCustomerGatewayAction EC2 DeleteCustomerGateway action.
 * \value DeleteDhcpOptionsAction EC2 DeleteDhcpOptions action.
 * \value DeleteEgressOnlyInternetGatewayAction EC2 DeleteEgressOnlyInternetGateway action.
 * \value DeleteFleetsAction EC2 DeleteFleets action.
 * \value DeleteFlowLogsAction EC2 DeleteFlowLogs action.
 * \value DeleteFpgaImageAction EC2 DeleteFpgaImage action.
 * \value DeleteInternetGatewayAction EC2 DeleteInternetGateway action.
 * \value DeleteKeyPairAction EC2 DeleteKeyPair action.
 * \value DeleteLaunchTemplateAction EC2 DeleteLaunchTemplate action.
 * \value DeleteLaunchTemplateVersionsAction EC2 DeleteLaunchTemplateVersions action.
 * \value DeleteLocalGatewayRouteAction EC2 DeleteLocalGatewayRoute action.
 * \value DeleteLocalGatewayRouteTableVpcAssociationAction EC2 DeleteLocalGatewayRouteTableVpcAssociation action.
 * \value DeleteManagedPrefixListAction EC2 DeleteManagedPrefixList action.
 * \value DeleteNatGatewayAction EC2 DeleteNatGateway action.
 * \value DeleteNetworkAclAction EC2 DeleteNetworkAcl action.
 * \value DeleteNetworkAclEntryAction EC2 DeleteNetworkAclEntry action.
 * \value DeleteNetworkInsightsAnalysisAction EC2 DeleteNetworkInsightsAnalysis action.
 * \value DeleteNetworkInsightsPathAction EC2 DeleteNetworkInsightsPath action.
 * \value DeleteNetworkInterfaceAction EC2 DeleteNetworkInterface action.
 * \value DeleteNetworkInterfacePermissionAction EC2 DeleteNetworkInterfacePermission action.
 * \value DeletePlacementGroupAction EC2 DeletePlacementGroup action.
 * \value DeleteQueuedReservedInstancesAction EC2 DeleteQueuedReservedInstances action.
 * \value DeleteRouteAction EC2 DeleteRoute action.
 * \value DeleteRouteTableAction EC2 DeleteRouteTable action.
 * \value DeleteSecurityGroupAction EC2 DeleteSecurityGroup action.
 * \value DeleteSnapshotAction EC2 DeleteSnapshot action.
 * \value DeleteSpotDatafeedSubscriptionAction EC2 DeleteSpotDatafeedSubscription action.
 * \value DeleteSubnetAction EC2 DeleteSubnet action.
 * \value DeleteTagsAction EC2 DeleteTags action.
 * \value DeleteTrafficMirrorFilterAction EC2 DeleteTrafficMirrorFilter action.
 * \value DeleteTrafficMirrorFilterRuleAction EC2 DeleteTrafficMirrorFilterRule action.
 * \value DeleteTrafficMirrorSessionAction EC2 DeleteTrafficMirrorSession action.
 * \value DeleteTrafficMirrorTargetAction EC2 DeleteTrafficMirrorTarget action.
 * \value DeleteTransitGatewayAction EC2 DeleteTransitGateway action.
 * \value DeleteTransitGatewayConnectAction EC2 DeleteTransitGatewayConnect action.
 * \value DeleteTransitGatewayConnectPeerAction EC2 DeleteTransitGatewayConnectPeer action.
 * \value DeleteTransitGatewayMulticastDomainAction EC2 DeleteTransitGatewayMulticastDomain action.
 * \value DeleteTransitGatewayPeeringAttachmentAction EC2 DeleteTransitGatewayPeeringAttachment action.
 * \value DeleteTransitGatewayPrefixListReferenceAction EC2 DeleteTransitGatewayPrefixListReference action.
 * \value DeleteTransitGatewayRouteAction EC2 DeleteTransitGatewayRoute action.
 * \value DeleteTransitGatewayRouteTableAction EC2 DeleteTransitGatewayRouteTable action.
 * \value DeleteTransitGatewayVpcAttachmentAction EC2 DeleteTransitGatewayVpcAttachment action.
 * \value DeleteVolumeAction EC2 DeleteVolume action.
 * \value DeleteVpcAction EC2 DeleteVpc action.
 * \value DeleteVpcEndpointConnectionNotificationsAction EC2 DeleteVpcEndpointConnectionNotifications action.
 * \value DeleteVpcEndpointServiceConfigurationsAction EC2 DeleteVpcEndpointServiceConfigurations action.
 * \value DeleteVpcEndpointsAction EC2 DeleteVpcEndpoints action.
 * \value DeleteVpcPeeringConnectionAction EC2 DeleteVpcPeeringConnection action.
 * \value DeleteVpnConnectionAction EC2 DeleteVpnConnection action.
 * \value DeleteVpnConnectionRouteAction EC2 DeleteVpnConnectionRoute action.
 * \value DeleteVpnGatewayAction EC2 DeleteVpnGateway action.
 * \value DeprovisionByoipCidrAction EC2 DeprovisionByoipCidr action.
 * \value DeregisterImageAction EC2 DeregisterImage action.
 * \value DeregisterInstanceEventNotificationAttributesAction EC2 DeregisterInstanceEventNotificationAttributes action.
 * \value DeregisterTransitGatewayMulticastGroupMembersAction EC2 DeregisterTransitGatewayMulticastGroupMembers action.
 * \value DeregisterTransitGatewayMulticastGroupSourcesAction EC2 DeregisterTransitGatewayMulticastGroupSources action.
 * \value DescribeAccountAttributesAction EC2 DescribeAccountAttributes action.
 * \value DescribeAddressesAction EC2 DescribeAddresses action.
 * \value DescribeAddressesAttributeAction EC2 DescribeAddressesAttribute action.
 * \value DescribeAggregateIdFormatAction EC2 DescribeAggregateIdFormat action.
 * \value DescribeAvailabilityZonesAction EC2 DescribeAvailabilityZones action.
 * \value DescribeBundleTasksAction EC2 DescribeBundleTasks action.
 * \value DescribeByoipCidrsAction EC2 DescribeByoipCidrs action.
 * \value DescribeCapacityReservationsAction EC2 DescribeCapacityReservations action.
 * \value DescribeCarrierGatewaysAction EC2 DescribeCarrierGateways action.
 * \value DescribeClassicLinkInstancesAction EC2 DescribeClassicLinkInstances action.
 * \value DescribeClientVpnAuthorizationRulesAction EC2 DescribeClientVpnAuthorizationRules action.
 * \value DescribeClientVpnConnectionsAction EC2 DescribeClientVpnConnections action.
 * \value DescribeClientVpnEndpointsAction EC2 DescribeClientVpnEndpoints action.
 * \value DescribeClientVpnRoutesAction EC2 DescribeClientVpnRoutes action.
 * \value DescribeClientVpnTargetNetworksAction EC2 DescribeClientVpnTargetNetworks action.
 * \value DescribeCoipPoolsAction EC2 DescribeCoipPools action.
 * \value DescribeConversionTasksAction EC2 DescribeConversionTasks action.
 * \value DescribeCustomerGatewaysAction EC2 DescribeCustomerGateways action.
 * \value DescribeDhcpOptionsAction EC2 DescribeDhcpOptions action.
 * \value DescribeEgressOnlyInternetGatewaysAction EC2 DescribeEgressOnlyInternetGateways action.
 * \value DescribeElasticGpusAction EC2 DescribeElasticGpus action.
 * \value DescribeExportImageTasksAction EC2 DescribeExportImageTasks action.
 * \value DescribeExportTasksAction EC2 DescribeExportTasks action.
 * \value DescribeFastSnapshotRestoresAction EC2 DescribeFastSnapshotRestores action.
 * \value DescribeFleetHistoryAction EC2 DescribeFleetHistory action.
 * \value DescribeFleetInstancesAction EC2 DescribeFleetInstances action.
 * \value DescribeFleetsAction EC2 DescribeFleets action.
 * \value DescribeFlowLogsAction EC2 DescribeFlowLogs action.
 * \value DescribeFpgaImageAttributeAction EC2 DescribeFpgaImageAttribute action.
 * \value DescribeFpgaImagesAction EC2 DescribeFpgaImages action.
 * \value DescribeHostReservationOfferingsAction EC2 DescribeHostReservationOfferings action.
 * \value DescribeHostReservationsAction EC2 DescribeHostReservations action.
 * \value DescribeHostsAction EC2 DescribeHosts action.
 * \value DescribeIamInstanceProfileAssociationsAction EC2 DescribeIamInstanceProfileAssociations action.
 * \value DescribeIdFormatAction EC2 DescribeIdFormat action.
 * \value DescribeIdentityIdFormatAction EC2 DescribeIdentityIdFormat action.
 * \value DescribeImageAttributeAction EC2 DescribeImageAttribute action.
 * \value DescribeImagesAction EC2 DescribeImages action.
 * \value DescribeImportImageTasksAction EC2 DescribeImportImageTasks action.
 * \value DescribeImportSnapshotTasksAction EC2 DescribeImportSnapshotTasks action.
 * \value DescribeInstanceAttributeAction EC2 DescribeInstanceAttribute action.
 * \value DescribeInstanceCreditSpecificationsAction EC2 DescribeInstanceCreditSpecifications action.
 * \value DescribeInstanceEventNotificationAttributesAction EC2 DescribeInstanceEventNotificationAttributes action.
 * \value DescribeInstanceStatusAction EC2 DescribeInstanceStatus action.
 * \value DescribeInstanceTypeOfferingsAction EC2 DescribeInstanceTypeOfferings action.
 * \value DescribeInstanceTypesAction EC2 DescribeInstanceTypes action.
 * \value DescribeInstancesAction EC2 DescribeInstances action.
 * \value DescribeInternetGatewaysAction EC2 DescribeInternetGateways action.
 * \value DescribeIpv6PoolsAction EC2 DescribeIpv6Pools action.
 * \value DescribeKeyPairsAction EC2 DescribeKeyPairs action.
 * \value DescribeLaunchTemplateVersionsAction EC2 DescribeLaunchTemplateVersions action.
 * \value DescribeLaunchTemplatesAction EC2 DescribeLaunchTemplates action.
 * \value DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsAction EC2 DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations action.
 * \value DescribeLocalGatewayRouteTableVpcAssociationsAction EC2 DescribeLocalGatewayRouteTableVpcAssociations action.
 * \value DescribeLocalGatewayRouteTablesAction EC2 DescribeLocalGatewayRouteTables action.
 * \value DescribeLocalGatewayVirtualInterfaceGroupsAction EC2 DescribeLocalGatewayVirtualInterfaceGroups action.
 * \value DescribeLocalGatewayVirtualInterfacesAction EC2 DescribeLocalGatewayVirtualInterfaces action.
 * \value DescribeLocalGatewaysAction EC2 DescribeLocalGateways action.
 * \value DescribeManagedPrefixListsAction EC2 DescribeManagedPrefixLists action.
 * \value DescribeMovingAddressesAction EC2 DescribeMovingAddresses action.
 * \value DescribeNatGatewaysAction EC2 DescribeNatGateways action.
 * \value DescribeNetworkAclsAction EC2 DescribeNetworkAcls action.
 * \value DescribeNetworkInsightsAnalysesAction EC2 DescribeNetworkInsightsAnalyses action.
 * \value DescribeNetworkInsightsPathsAction EC2 DescribeNetworkInsightsPaths action.
 * \value DescribeNetworkInterfaceAttributeAction EC2 DescribeNetworkInterfaceAttribute action.
 * \value DescribeNetworkInterfacePermissionsAction EC2 DescribeNetworkInterfacePermissions action.
 * \value DescribeNetworkInterfacesAction EC2 DescribeNetworkInterfaces action.
 * \value DescribePlacementGroupsAction EC2 DescribePlacementGroups action.
 * \value DescribePrefixListsAction EC2 DescribePrefixLists action.
 * \value DescribePrincipalIdFormatAction EC2 DescribePrincipalIdFormat action.
 * \value DescribePublicIpv4PoolsAction EC2 DescribePublicIpv4Pools action.
 * \value DescribeRegionsAction EC2 DescribeRegions action.
 * \value DescribeReplaceRootVolumeTasksAction EC2 DescribeReplaceRootVolumeTasks action.
 * \value DescribeReservedInstancesAction EC2 DescribeReservedInstances action.
 * \value DescribeReservedInstancesListingsAction EC2 DescribeReservedInstancesListings action.
 * \value DescribeReservedInstancesModificationsAction EC2 DescribeReservedInstancesModifications action.
 * \value DescribeReservedInstancesOfferingsAction EC2 DescribeReservedInstancesOfferings action.
 * \value DescribeRouteTablesAction EC2 DescribeRouteTables action.
 * \value DescribeScheduledInstanceAvailabilityAction EC2 DescribeScheduledInstanceAvailability action.
 * \value DescribeScheduledInstancesAction EC2 DescribeScheduledInstances action.
 * \value DescribeSecurityGroupReferencesAction EC2 DescribeSecurityGroupReferences action.
 * \value DescribeSecurityGroupsAction EC2 DescribeSecurityGroups action.
 * \value DescribeSnapshotAttributeAction EC2 DescribeSnapshotAttribute action.
 * \value DescribeSnapshotsAction EC2 DescribeSnapshots action.
 * \value DescribeSpotDatafeedSubscriptionAction EC2 DescribeSpotDatafeedSubscription action.
 * \value DescribeSpotFleetInstancesAction EC2 DescribeSpotFleetInstances action.
 * \value DescribeSpotFleetRequestHistoryAction EC2 DescribeSpotFleetRequestHistory action.
 * \value DescribeSpotFleetRequestsAction EC2 DescribeSpotFleetRequests action.
 * \value DescribeSpotInstanceRequestsAction EC2 DescribeSpotInstanceRequests action.
 * \value DescribeSpotPriceHistoryAction EC2 DescribeSpotPriceHistory action.
 * \value DescribeStaleSecurityGroupsAction EC2 DescribeStaleSecurityGroups action.
 * \value DescribeStoreImageTasksAction EC2 DescribeStoreImageTasks action.
 * \value DescribeSubnetsAction EC2 DescribeSubnets action.
 * \value DescribeTagsAction EC2 DescribeTags action.
 * \value DescribeTrafficMirrorFiltersAction EC2 DescribeTrafficMirrorFilters action.
 * \value DescribeTrafficMirrorSessionsAction EC2 DescribeTrafficMirrorSessions action.
 * \value DescribeTrafficMirrorTargetsAction EC2 DescribeTrafficMirrorTargets action.
 * \value DescribeTransitGatewayAttachmentsAction EC2 DescribeTransitGatewayAttachments action.
 * \value DescribeTransitGatewayConnectPeersAction EC2 DescribeTransitGatewayConnectPeers action.
 * \value DescribeTransitGatewayConnectsAction EC2 DescribeTransitGatewayConnects action.
 * \value DescribeTransitGatewayMulticastDomainsAction EC2 DescribeTransitGatewayMulticastDomains action.
 * \value DescribeTransitGatewayPeeringAttachmentsAction EC2 DescribeTransitGatewayPeeringAttachments action.
 * \value DescribeTransitGatewayRouteTablesAction EC2 DescribeTransitGatewayRouteTables action.
 * \value DescribeTransitGatewayVpcAttachmentsAction EC2 DescribeTransitGatewayVpcAttachments action.
 * \value DescribeTransitGatewaysAction EC2 DescribeTransitGateways action.
 * \value DescribeVolumeAttributeAction EC2 DescribeVolumeAttribute action.
 * \value DescribeVolumeStatusAction EC2 DescribeVolumeStatus action.
 * \value DescribeVolumesAction EC2 DescribeVolumes action.
 * \value DescribeVolumesModificationsAction EC2 DescribeVolumesModifications action.
 * \value DescribeVpcAttributeAction EC2 DescribeVpcAttribute action.
 * \value DescribeVpcClassicLinkAction EC2 DescribeVpcClassicLink action.
 * \value DescribeVpcClassicLinkDnsSupportAction EC2 DescribeVpcClassicLinkDnsSupport action.
 * \value DescribeVpcEndpointConnectionNotificationsAction EC2 DescribeVpcEndpointConnectionNotifications action.
 * \value DescribeVpcEndpointConnectionsAction EC2 DescribeVpcEndpointConnections action.
 * \value DescribeVpcEndpointServiceConfigurationsAction EC2 DescribeVpcEndpointServiceConfigurations action.
 * \value DescribeVpcEndpointServicePermissionsAction EC2 DescribeVpcEndpointServicePermissions action.
 * \value DescribeVpcEndpointServicesAction EC2 DescribeVpcEndpointServices action.
 * \value DescribeVpcEndpointsAction EC2 DescribeVpcEndpoints action.
 * \value DescribeVpcPeeringConnectionsAction EC2 DescribeVpcPeeringConnections action.
 * \value DescribeVpcsAction EC2 DescribeVpcs action.
 * \value DescribeVpnConnectionsAction EC2 DescribeVpnConnections action.
 * \value DescribeVpnGatewaysAction EC2 DescribeVpnGateways action.
 * \value DetachClassicLinkVpcAction EC2 DetachClassicLinkVpc action.
 * \value DetachInternetGatewayAction EC2 DetachInternetGateway action.
 * \value DetachNetworkInterfaceAction EC2 DetachNetworkInterface action.
 * \value DetachVolumeAction EC2 DetachVolume action.
 * \value DetachVpnGatewayAction EC2 DetachVpnGateway action.
 * \value DisableEbsEncryptionByDefaultAction EC2 DisableEbsEncryptionByDefault action.
 * \value DisableFastSnapshotRestoresAction EC2 DisableFastSnapshotRestores action.
 * \value DisableImageDeprecationAction EC2 DisableImageDeprecation action.
 * \value DisableSerialConsoleAccessAction EC2 DisableSerialConsoleAccess action.
 * \value DisableTransitGatewayRouteTablePropagationAction EC2 DisableTransitGatewayRouteTablePropagation action.
 * \value DisableVgwRoutePropagationAction EC2 DisableVgwRoutePropagation action.
 * \value DisableVpcClassicLinkAction EC2 DisableVpcClassicLink action.
 * \value DisableVpcClassicLinkDnsSupportAction EC2 DisableVpcClassicLinkDnsSupport action.
 * \value DisassociateAddressAction EC2 DisassociateAddress action.
 * \value DisassociateClientVpnTargetNetworkAction EC2 DisassociateClientVpnTargetNetwork action.
 * \value DisassociateEnclaveCertificateIamRoleAction EC2 DisassociateEnclaveCertificateIamRole action.
 * \value DisassociateIamInstanceProfileAction EC2 DisassociateIamInstanceProfile action.
 * \value DisassociateRouteTableAction EC2 DisassociateRouteTable action.
 * \value DisassociateSubnetCidrBlockAction EC2 DisassociateSubnetCidrBlock action.
 * \value DisassociateTransitGatewayMulticastDomainAction EC2 DisassociateTransitGatewayMulticastDomain action.
 * \value DisassociateTransitGatewayRouteTableAction EC2 DisassociateTransitGatewayRouteTable action.
 * \value DisassociateVpcCidrBlockAction EC2 DisassociateVpcCidrBlock action.
 * \value EnableEbsEncryptionByDefaultAction EC2 EnableEbsEncryptionByDefault action.
 * \value EnableFastSnapshotRestoresAction EC2 EnableFastSnapshotRestores action.
 * \value EnableImageDeprecationAction EC2 EnableImageDeprecation action.
 * \value EnableSerialConsoleAccessAction EC2 EnableSerialConsoleAccess action.
 * \value EnableTransitGatewayRouteTablePropagationAction EC2 EnableTransitGatewayRouteTablePropagation action.
 * \value EnableVgwRoutePropagationAction EC2 EnableVgwRoutePropagation action.
 * \value EnableVolumeIOAction EC2 EnableVolumeIO action.
 * \value EnableVpcClassicLinkAction EC2 EnableVpcClassicLink action.
 * \value EnableVpcClassicLinkDnsSupportAction EC2 EnableVpcClassicLinkDnsSupport action.
 * \value ExportClientVpnClientCertificateRevocationListAction EC2 ExportClientVpnClientCertificateRevocationList action.
 * \value ExportClientVpnClientConfigurationAction EC2 ExportClientVpnClientConfiguration action.
 * \value ExportImageAction EC2 ExportImage action.
 * \value ExportTransitGatewayRoutesAction EC2 ExportTransitGatewayRoutes action.
 * \value GetAssociatedEnclaveCertificateIamRolesAction EC2 GetAssociatedEnclaveCertificateIamRoles action.
 * \value GetAssociatedIpv6PoolCidrsAction EC2 GetAssociatedIpv6PoolCidrs action.
 * \value GetCapacityReservationUsageAction EC2 GetCapacityReservationUsage action.
 * \value GetCoipPoolUsageAction EC2 GetCoipPoolUsage action.
 * \value GetConsoleOutputAction EC2 GetConsoleOutput action.
 * \value GetConsoleScreenshotAction EC2 GetConsoleScreenshot action.
 * \value GetDefaultCreditSpecificationAction EC2 GetDefaultCreditSpecification action.
 * \value GetEbsDefaultKmsKeyIdAction EC2 GetEbsDefaultKmsKeyId action.
 * \value GetEbsEncryptionByDefaultAction EC2 GetEbsEncryptionByDefault action.
 * \value GetFlowLogsIntegrationTemplateAction EC2 GetFlowLogsIntegrationTemplate action.
 * \value GetGroupsForCapacityReservationAction EC2 GetGroupsForCapacityReservation action.
 * \value GetHostReservationPurchasePreviewAction EC2 GetHostReservationPurchasePreview action.
 * \value GetLaunchTemplateDataAction EC2 GetLaunchTemplateData action.
 * \value GetManagedPrefixListAssociationsAction EC2 GetManagedPrefixListAssociations action.
 * \value GetManagedPrefixListEntriesAction EC2 GetManagedPrefixListEntries action.
 * \value GetPasswordDataAction EC2 GetPasswordData action.
 * \value GetReservedInstancesExchangeQuoteAction EC2 GetReservedInstancesExchangeQuote action.
 * \value GetSerialConsoleAccessStatusAction EC2 GetSerialConsoleAccessStatus action.
 * \value GetTransitGatewayAttachmentPropagationsAction EC2 GetTransitGatewayAttachmentPropagations action.
 * \value GetTransitGatewayMulticastDomainAssociationsAction EC2 GetTransitGatewayMulticastDomainAssociations action.
 * \value GetTransitGatewayPrefixListReferencesAction EC2 GetTransitGatewayPrefixListReferences action.
 * \value GetTransitGatewayRouteTableAssociationsAction EC2 GetTransitGatewayRouteTableAssociations action.
 * \value GetTransitGatewayRouteTablePropagationsAction EC2 GetTransitGatewayRouteTablePropagations action.
 * \value ImportClientVpnClientCertificateRevocationListAction EC2 ImportClientVpnClientCertificateRevocationList action.
 * \value ImportImageAction EC2 ImportImage action.
 * \value ImportInstanceAction EC2 ImportInstance action.
 * \value ImportKeyPairAction EC2 ImportKeyPair action.
 * \value ImportSnapshotAction EC2 ImportSnapshot action.
 * \value ImportVolumeAction EC2 ImportVolume action.
 * \value ModifyAddressAttributeAction EC2 ModifyAddressAttribute action.
 * \value ModifyAvailabilityZoneGroupAction EC2 ModifyAvailabilityZoneGroup action.
 * \value ModifyCapacityReservationAction EC2 ModifyCapacityReservation action.
 * \value ModifyClientVpnEndpointAction EC2 ModifyClientVpnEndpoint action.
 * \value ModifyDefaultCreditSpecificationAction EC2 ModifyDefaultCreditSpecification action.
 * \value ModifyEbsDefaultKmsKeyIdAction EC2 ModifyEbsDefaultKmsKeyId action.
 * \value ModifyFleetAction EC2 ModifyFleet action.
 * \value ModifyFpgaImageAttributeAction EC2 ModifyFpgaImageAttribute action.
 * \value ModifyHostsAction EC2 ModifyHosts action.
 * \value ModifyIdFormatAction EC2 ModifyIdFormat action.
 * \value ModifyIdentityIdFormatAction EC2 ModifyIdentityIdFormat action.
 * \value ModifyImageAttributeAction EC2 ModifyImageAttribute action.
 * \value ModifyInstanceAttributeAction EC2 ModifyInstanceAttribute action.
 * \value ModifyInstanceCapacityReservationAttributesAction EC2 ModifyInstanceCapacityReservationAttributes action.
 * \value ModifyInstanceCreditSpecificationAction EC2 ModifyInstanceCreditSpecification action.
 * \value ModifyInstanceEventStartTimeAction EC2 ModifyInstanceEventStartTime action.
 * \value ModifyInstanceMetadataOptionsAction EC2 ModifyInstanceMetadataOptions action.
 * \value ModifyInstancePlacementAction EC2 ModifyInstancePlacement action.
 * \value ModifyLaunchTemplateAction EC2 ModifyLaunchTemplate action.
 * \value ModifyManagedPrefixListAction EC2 ModifyManagedPrefixList action.
 * \value ModifyNetworkInterfaceAttributeAction EC2 ModifyNetworkInterfaceAttribute action.
 * \value ModifyReservedInstancesAction EC2 ModifyReservedInstances action.
 * \value ModifySnapshotAttributeAction EC2 ModifySnapshotAttribute action.
 * \value ModifySpotFleetRequestAction EC2 ModifySpotFleetRequest action.
 * \value ModifySubnetAttributeAction EC2 ModifySubnetAttribute action.
 * \value ModifyTrafficMirrorFilterNetworkServicesAction EC2 ModifyTrafficMirrorFilterNetworkServices action.
 * \value ModifyTrafficMirrorFilterRuleAction EC2 ModifyTrafficMirrorFilterRule action.
 * \value ModifyTrafficMirrorSessionAction EC2 ModifyTrafficMirrorSession action.
 * \value ModifyTransitGatewayAction EC2 ModifyTransitGateway action.
 * \value ModifyTransitGatewayPrefixListReferenceAction EC2 ModifyTransitGatewayPrefixListReference action.
 * \value ModifyTransitGatewayVpcAttachmentAction EC2 ModifyTransitGatewayVpcAttachment action.
 * \value ModifyVolumeAction EC2 ModifyVolume action.
 * \value ModifyVolumeAttributeAction EC2 ModifyVolumeAttribute action.
 * \value ModifyVpcAttributeAction EC2 ModifyVpcAttribute action.
 * \value ModifyVpcEndpointAction EC2 ModifyVpcEndpoint action.
 * \value ModifyVpcEndpointConnectionNotificationAction EC2 ModifyVpcEndpointConnectionNotification action.
 * \value ModifyVpcEndpointServiceConfigurationAction EC2 ModifyVpcEndpointServiceConfiguration action.
 * \value ModifyVpcEndpointServicePermissionsAction EC2 ModifyVpcEndpointServicePermissions action.
 * \value ModifyVpcPeeringConnectionOptionsAction EC2 ModifyVpcPeeringConnectionOptions action.
 * \value ModifyVpcTenancyAction EC2 ModifyVpcTenancy action.
 * \value ModifyVpnConnectionAction EC2 ModifyVpnConnection action.
 * \value ModifyVpnConnectionOptionsAction EC2 ModifyVpnConnectionOptions action.
 * \value ModifyVpnTunnelCertificateAction EC2 ModifyVpnTunnelCertificate action.
 * \value ModifyVpnTunnelOptionsAction EC2 ModifyVpnTunnelOptions action.
 * \value MonitorInstancesAction EC2 MonitorInstances action.
 * \value MoveAddressToVpcAction EC2 MoveAddressToVpc action.
 * \value ProvisionByoipCidrAction EC2 ProvisionByoipCidr action.
 * \value PurchaseHostReservationAction EC2 PurchaseHostReservation action.
 * \value PurchaseReservedInstancesOfferingAction EC2 PurchaseReservedInstancesOffering action.
 * \value PurchaseScheduledInstancesAction EC2 PurchaseScheduledInstances action.
 * \value RebootInstancesAction EC2 RebootInstances action.
 * \value RegisterImageAction EC2 RegisterImage action.
 * \value RegisterInstanceEventNotificationAttributesAction EC2 RegisterInstanceEventNotificationAttributes action.
 * \value RegisterTransitGatewayMulticastGroupMembersAction EC2 RegisterTransitGatewayMulticastGroupMembers action.
 * \value RegisterTransitGatewayMulticastGroupSourcesAction EC2 RegisterTransitGatewayMulticastGroupSources action.
 * \value RejectTransitGatewayMulticastDomainAssociationsAction EC2 RejectTransitGatewayMulticastDomainAssociations action.
 * \value RejectTransitGatewayPeeringAttachmentAction EC2 RejectTransitGatewayPeeringAttachment action.
 * \value RejectTransitGatewayVpcAttachmentAction EC2 RejectTransitGatewayVpcAttachment action.
 * \value RejectVpcEndpointConnectionsAction EC2 RejectVpcEndpointConnections action.
 * \value RejectVpcPeeringConnectionAction EC2 RejectVpcPeeringConnection action.
 * \value ReleaseAddressAction EC2 ReleaseAddress action.
 * \value ReleaseHostsAction EC2 ReleaseHosts action.
 * \value ReplaceIamInstanceProfileAssociationAction EC2 ReplaceIamInstanceProfileAssociation action.
 * \value ReplaceNetworkAclAssociationAction EC2 ReplaceNetworkAclAssociation action.
 * \value ReplaceNetworkAclEntryAction EC2 ReplaceNetworkAclEntry action.
 * \value ReplaceRouteAction EC2 ReplaceRoute action.
 * \value ReplaceRouteTableAssociationAction EC2 ReplaceRouteTableAssociation action.
 * \value ReplaceTransitGatewayRouteAction EC2 ReplaceTransitGatewayRoute action.
 * \value ReportInstanceStatusAction EC2 ReportInstanceStatus action.
 * \value RequestSpotFleetAction EC2 RequestSpotFleet action.
 * \value RequestSpotInstancesAction EC2 RequestSpotInstances action.
 * \value ResetAddressAttributeAction EC2 ResetAddressAttribute action.
 * \value ResetEbsDefaultKmsKeyIdAction EC2 ResetEbsDefaultKmsKeyId action.
 * \value ResetFpgaImageAttributeAction EC2 ResetFpgaImageAttribute action.
 * \value ResetImageAttributeAction EC2 ResetImageAttribute action.
 * \value ResetInstanceAttributeAction EC2 ResetInstanceAttribute action.
 * \value ResetNetworkInterfaceAttributeAction EC2 ResetNetworkInterfaceAttribute action.
 * \value ResetSnapshotAttributeAction EC2 ResetSnapshotAttribute action.
 * \value RestoreAddressToClassicAction EC2 RestoreAddressToClassic action.
 * \value RestoreManagedPrefixListVersionAction EC2 RestoreManagedPrefixListVersion action.
 * \value RevokeClientVpnIngressAction EC2 RevokeClientVpnIngress action.
 * \value RevokeSecurityGroupEgressAction EC2 RevokeSecurityGroupEgress action.
 * \value RevokeSecurityGroupIngressAction EC2 RevokeSecurityGroupIngress action.
 * \value RunInstancesAction EC2 RunInstances action.
 * \value RunScheduledInstancesAction EC2 RunScheduledInstances action.
 * \value SearchLocalGatewayRoutesAction EC2 SearchLocalGatewayRoutes action.
 * \value SearchTransitGatewayMulticastGroupsAction EC2 SearchTransitGatewayMulticastGroups action.
 * \value SearchTransitGatewayRoutesAction EC2 SearchTransitGatewayRoutes action.
 * \value SendDiagnosticInterruptAction EC2 SendDiagnosticInterrupt action.
 * \value StartInstancesAction EC2 StartInstances action.
 * \value StartNetworkInsightsAnalysisAction EC2 StartNetworkInsightsAnalysis action.
 * \value StartVpcEndpointServicePrivateDnsVerificationAction EC2 StartVpcEndpointServicePrivateDnsVerification action.
 * \value StopInstancesAction EC2 StopInstances action.
 * \value TerminateClientVpnConnectionsAction EC2 TerminateClientVpnConnections action.
 * \value TerminateInstancesAction EC2 TerminateInstances action.
 * \value UnassignIpv6AddressesAction EC2 UnassignIpv6Addresses action.
 * \value UnassignPrivateIpAddressesAction EC2 UnassignPrivateIpAddresses action.
 * \value UnmonitorInstancesAction EC2 UnmonitorInstances action.
 * \value UpdateSecurityGroupRuleDescriptionsEgressAction EC2 UpdateSecurityGroupRuleDescriptionsEgress action.
 * \value UpdateSecurityGroupRuleDescriptionsIngressAction EC2 UpdateSecurityGroupRuleDescriptionsIngress action.
 * \value WithdrawByoipCidrAction EC2 WithdrawByoipCidr action.
 */

/*!
 * Constructs a Ec2Request object for EC2 \a action.
 */
Ec2Request::Ec2Request(const Action action)
    : d_ptr(new Ec2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Ec2Request::Ec2Request(const Ec2Request &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new Ec2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Ec2Request object to be equal to \a other.
 */
Ec2Request& Ec2Request::operator=(const Ec2Request &other)
{
    Q_D(Ec2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Ec2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Ec2RequestPrivate.
 */
Ec2Request::Ec2Request(Ec2RequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the EC2 action to be performed by this request.
 */
Ec2Request::Action Ec2Request::action() const
{
    Q_D(const Ec2Request);
    return d->action;
}

/*!
 * Returns the name of the EC2 action to be performed by this request.
 */
QString Ec2Request::actionString() const
{
    return Ec2RequestPrivate::toString(action());
}

/*!
 * Returns the EC2 API version implemented by this request.
 */
QString Ec2Request::apiVersion() const
{
    Q_D(const Ec2Request);
    return d->apiVersion;
}

/*!
 * Sets the EC2 action to be performed by this request to \a action.
 */
void Ec2Request::setAction(const Action action)
{
    Q_D(Ec2Request);
    d->action = action;
}

/*!
 * Sets the EC2 API version to include in this request to \a version.
 */
void Ec2Request::setApiVersion(const QString &version)
{
    Q_D(Ec2Request);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool Ec2Request::operator==(const Ec2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid EC2 queue name.
 *
 * @par From EC2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid EC2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Ec2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Ec2Request::clearParameter(const QString &name)
{
    Q_D(Ec2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Ec2Request::clearParameters()
{
    Q_D(Ec2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Ec2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Ec2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Ec2Request::parameters() const
{
    Q_D(const Ec2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Ec2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Ec2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Ec2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Ec2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the EC2 request using the given
 * \a endpoint.
 *
 * This EC2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Ec2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Ec2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::EC2::Ec2RequestPrivate
 * \brief The Ec2RequestPrivate class provides private implementation for Ec2Request.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a Ec2RequestPrivate object for EC2 \a action,
 * with public implementation \a q.
 */
Ec2RequestPrivate::Ec2RequestPrivate(const Ec2Request::Action action, Ec2Request * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Ec2Request class's copy constructor.
 */
Ec2RequestPrivate::Ec2RequestPrivate(const Ec2RequestPrivate &other,
                                     Ec2Request * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Ec2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the EC2 service's Action
 * query parameters.
 */
QString Ec2RequestPrivate::toString(const Ec2Request::Action &action)
{
    #define ActionToString(action) \
        case Ec2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace EC2
} // namespace QtAws

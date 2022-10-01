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
namespace Ec2 {

/*!
 * \class QtAws::Ec2::Ec2Request
 * \brief The Ec2Request class provides an interface for Ec2 requests.
 *
 * \inmodule QtAwsEc2
 */

/*!
 * \enum Ec2Request::Action
 *
 * This enum describes the actions that can be performed as Ec2
 * requests.
 *
 * \value AcceptReservedInstancesExchangeQuoteAction Ec2 AcceptReservedInstancesExchangeQuote action.
 * \value AcceptTransitGatewayMulticastDomainAssociationsAction Ec2 AcceptTransitGatewayMulticastDomainAssociations action.
 * \value AcceptTransitGatewayPeeringAttachmentAction Ec2 AcceptTransitGatewayPeeringAttachment action.
 * \value AcceptTransitGatewayVpcAttachmentAction Ec2 AcceptTransitGatewayVpcAttachment action.
 * \value AcceptVpcEndpointConnectionsAction Ec2 AcceptVpcEndpointConnections action.
 * \value AcceptVpcPeeringConnectionAction Ec2 AcceptVpcPeeringConnection action.
 * \value AdvertiseByoipCidrAction Ec2 AdvertiseByoipCidr action.
 * \value AllocateAddressAction Ec2 AllocateAddress action.
 * \value AllocateHostsAction Ec2 AllocateHosts action.
 * \value AllocateIpamPoolCidrAction Ec2 AllocateIpamPoolCidr action.
 * \value ApplySecurityGroupsToClientVpnTargetNetworkAction Ec2 ApplySecurityGroupsToClientVpnTargetNetwork action.
 * \value AssignIpv6AddressesAction Ec2 AssignIpv6Addresses action.
 * \value AssignPrivateIpAddressesAction Ec2 AssignPrivateIpAddresses action.
 * \value AssociateAddressAction Ec2 AssociateAddress action.
 * \value AssociateClientVpnTargetNetworkAction Ec2 AssociateClientVpnTargetNetwork action.
 * \value AssociateDhcpOptionsAction Ec2 AssociateDhcpOptions action.
 * \value AssociateEnclaveCertificateIamRoleAction Ec2 AssociateEnclaveCertificateIamRole action.
 * \value AssociateIamInstanceProfileAction Ec2 AssociateIamInstanceProfile action.
 * \value AssociateInstanceEventWindowAction Ec2 AssociateInstanceEventWindow action.
 * \value AssociateRouteTableAction Ec2 AssociateRouteTable action.
 * \value AssociateSubnetCidrBlockAction Ec2 AssociateSubnetCidrBlock action.
 * \value AssociateTransitGatewayMulticastDomainAction Ec2 AssociateTransitGatewayMulticastDomain action.
 * \value AssociateTransitGatewayPolicyTableAction Ec2 AssociateTransitGatewayPolicyTable action.
 * \value AssociateTransitGatewayRouteTableAction Ec2 AssociateTransitGatewayRouteTable action.
 * \value AssociateTrunkInterfaceAction Ec2 AssociateTrunkInterface action.
 * \value AssociateVpcCidrBlockAction Ec2 AssociateVpcCidrBlock action.
 * \value AttachClassicLinkVpcAction Ec2 AttachClassicLinkVpc action.
 * \value AttachInternetGatewayAction Ec2 AttachInternetGateway action.
 * \value AttachNetworkInterfaceAction Ec2 AttachNetworkInterface action.
 * \value AttachVolumeAction Ec2 AttachVolume action.
 * \value AttachVpnGatewayAction Ec2 AttachVpnGateway action.
 * \value AuthorizeClientVpnIngressAction Ec2 AuthorizeClientVpnIngress action.
 * \value AuthorizeSecurityGroupEgressAction Ec2 AuthorizeSecurityGroupEgress action.
 * \value AuthorizeSecurityGroupIngressAction Ec2 AuthorizeSecurityGroupIngress action.
 * \value BundleInstanceAction Ec2 BundleInstance action.
 * \value CancelBundleTaskAction Ec2 CancelBundleTask action.
 * \value CancelCapacityReservationAction Ec2 CancelCapacityReservation action.
 * \value CancelCapacityReservationFleetsAction Ec2 CancelCapacityReservationFleets action.
 * \value CancelConversionTaskAction Ec2 CancelConversionTask action.
 * \value CancelExportTaskAction Ec2 CancelExportTask action.
 * \value CancelImportTaskAction Ec2 CancelImportTask action.
 * \value CancelReservedInstancesListingAction Ec2 CancelReservedInstancesListing action.
 * \value CancelSpotFleetRequestsAction Ec2 CancelSpotFleetRequests action.
 * \value CancelSpotInstanceRequestsAction Ec2 CancelSpotInstanceRequests action.
 * \value ConfirmProductInstanceAction Ec2 ConfirmProductInstance action.
 * \value CopyFpgaImageAction Ec2 CopyFpgaImage action.
 * \value CopyImageAction Ec2 CopyImage action.
 * \value CopySnapshotAction Ec2 CopySnapshot action.
 * \value CreateCapacityReservationAction Ec2 CreateCapacityReservation action.
 * \value CreateCapacityReservationFleetAction Ec2 CreateCapacityReservationFleet action.
 * \value CreateCarrierGatewayAction Ec2 CreateCarrierGateway action.
 * \value CreateClientVpnEndpointAction Ec2 CreateClientVpnEndpoint action.
 * \value CreateClientVpnRouteAction Ec2 CreateClientVpnRoute action.
 * \value CreateCoipCidrAction Ec2 CreateCoipCidr action.
 * \value CreateCoipPoolAction Ec2 CreateCoipPool action.
 * \value CreateCustomerGatewayAction Ec2 CreateCustomerGateway action.
 * \value CreateDefaultSubnetAction Ec2 CreateDefaultSubnet action.
 * \value CreateDefaultVpcAction Ec2 CreateDefaultVpc action.
 * \value CreateDhcpOptionsAction Ec2 CreateDhcpOptions action.
 * \value CreateEgressOnlyInternetGatewayAction Ec2 CreateEgressOnlyInternetGateway action.
 * \value CreateFleetAction Ec2 CreateFleet action.
 * \value CreateFlowLogsAction Ec2 CreateFlowLogs action.
 * \value CreateFpgaImageAction Ec2 CreateFpgaImage action.
 * \value CreateImageAction Ec2 CreateImage action.
 * \value CreateInstanceEventWindowAction Ec2 CreateInstanceEventWindow action.
 * \value CreateInstanceExportTaskAction Ec2 CreateInstanceExportTask action.
 * \value CreateInternetGatewayAction Ec2 CreateInternetGateway action.
 * \value CreateIpamAction Ec2 CreateIpam action.
 * \value CreateIpamPoolAction Ec2 CreateIpamPool action.
 * \value CreateIpamScopeAction Ec2 CreateIpamScope action.
 * \value CreateKeyPairAction Ec2 CreateKeyPair action.
 * \value CreateLaunchTemplateAction Ec2 CreateLaunchTemplate action.
 * \value CreateLaunchTemplateVersionAction Ec2 CreateLaunchTemplateVersion action.
 * \value CreateLocalGatewayRouteAction Ec2 CreateLocalGatewayRoute action.
 * \value CreateLocalGatewayRouteTableAction Ec2 CreateLocalGatewayRouteTable action.
 * \value CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociationAction Ec2 CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation action.
 * \value CreateLocalGatewayRouteTableVpcAssociationAction Ec2 CreateLocalGatewayRouteTableVpcAssociation action.
 * \value CreateManagedPrefixListAction Ec2 CreateManagedPrefixList action.
 * \value CreateNatGatewayAction Ec2 CreateNatGateway action.
 * \value CreateNetworkAclAction Ec2 CreateNetworkAcl action.
 * \value CreateNetworkAclEntryAction Ec2 CreateNetworkAclEntry action.
 * \value CreateNetworkInsightsAccessScopeAction Ec2 CreateNetworkInsightsAccessScope action.
 * \value CreateNetworkInsightsPathAction Ec2 CreateNetworkInsightsPath action.
 * \value CreateNetworkInterfaceAction Ec2 CreateNetworkInterface action.
 * \value CreateNetworkInterfacePermissionAction Ec2 CreateNetworkInterfacePermission action.
 * \value CreatePlacementGroupAction Ec2 CreatePlacementGroup action.
 * \value CreatePublicIpv4PoolAction Ec2 CreatePublicIpv4Pool action.
 * \value CreateReplaceRootVolumeTaskAction Ec2 CreateReplaceRootVolumeTask action.
 * \value CreateReservedInstancesListingAction Ec2 CreateReservedInstancesListing action.
 * \value CreateRestoreImageTaskAction Ec2 CreateRestoreImageTask action.
 * \value CreateRouteAction Ec2 CreateRoute action.
 * \value CreateRouteTableAction Ec2 CreateRouteTable action.
 * \value CreateSecurityGroupAction Ec2 CreateSecurityGroup action.
 * \value CreateSnapshotAction Ec2 CreateSnapshot action.
 * \value CreateSnapshotsAction Ec2 CreateSnapshots action.
 * \value CreateSpotDatafeedSubscriptionAction Ec2 CreateSpotDatafeedSubscription action.
 * \value CreateStoreImageTaskAction Ec2 CreateStoreImageTask action.
 * \value CreateSubnetAction Ec2 CreateSubnet action.
 * \value CreateSubnetCidrReservationAction Ec2 CreateSubnetCidrReservation action.
 * \value CreateTagsAction Ec2 CreateTags action.
 * \value CreateTrafficMirrorFilterAction Ec2 CreateTrafficMirrorFilter action.
 * \value CreateTrafficMirrorFilterRuleAction Ec2 CreateTrafficMirrorFilterRule action.
 * \value CreateTrafficMirrorSessionAction Ec2 CreateTrafficMirrorSession action.
 * \value CreateTrafficMirrorTargetAction Ec2 CreateTrafficMirrorTarget action.
 * \value CreateTransitGatewayAction Ec2 CreateTransitGateway action.
 * \value CreateTransitGatewayConnectAction Ec2 CreateTransitGatewayConnect action.
 * \value CreateTransitGatewayConnectPeerAction Ec2 CreateTransitGatewayConnectPeer action.
 * \value CreateTransitGatewayMulticastDomainAction Ec2 CreateTransitGatewayMulticastDomain action.
 * \value CreateTransitGatewayPeeringAttachmentAction Ec2 CreateTransitGatewayPeeringAttachment action.
 * \value CreateTransitGatewayPolicyTableAction Ec2 CreateTransitGatewayPolicyTable action.
 * \value CreateTransitGatewayPrefixListReferenceAction Ec2 CreateTransitGatewayPrefixListReference action.
 * \value CreateTransitGatewayRouteAction Ec2 CreateTransitGatewayRoute action.
 * \value CreateTransitGatewayRouteTableAction Ec2 CreateTransitGatewayRouteTable action.
 * \value CreateTransitGatewayRouteTableAnnouncementAction Ec2 CreateTransitGatewayRouteTableAnnouncement action.
 * \value CreateTransitGatewayVpcAttachmentAction Ec2 CreateTransitGatewayVpcAttachment action.
 * \value CreateVolumeAction Ec2 CreateVolume action.
 * \value CreateVpcAction Ec2 CreateVpc action.
 * \value CreateVpcEndpointAction Ec2 CreateVpcEndpoint action.
 * \value CreateVpcEndpointConnectionNotificationAction Ec2 CreateVpcEndpointConnectionNotification action.
 * \value CreateVpcEndpointServiceConfigurationAction Ec2 CreateVpcEndpointServiceConfiguration action.
 * \value CreateVpcPeeringConnectionAction Ec2 CreateVpcPeeringConnection action.
 * \value CreateVpnConnectionAction Ec2 CreateVpnConnection action.
 * \value CreateVpnConnectionRouteAction Ec2 CreateVpnConnectionRoute action.
 * \value CreateVpnGatewayAction Ec2 CreateVpnGateway action.
 * \value DeleteCarrierGatewayAction Ec2 DeleteCarrierGateway action.
 * \value DeleteClientVpnEndpointAction Ec2 DeleteClientVpnEndpoint action.
 * \value DeleteClientVpnRouteAction Ec2 DeleteClientVpnRoute action.
 * \value DeleteCoipCidrAction Ec2 DeleteCoipCidr action.
 * \value DeleteCoipPoolAction Ec2 DeleteCoipPool action.
 * \value DeleteCustomerGatewayAction Ec2 DeleteCustomerGateway action.
 * \value DeleteDhcpOptionsAction Ec2 DeleteDhcpOptions action.
 * \value DeleteEgressOnlyInternetGatewayAction Ec2 DeleteEgressOnlyInternetGateway action.
 * \value DeleteFleetsAction Ec2 DeleteFleets action.
 * \value DeleteFlowLogsAction Ec2 DeleteFlowLogs action.
 * \value DeleteFpgaImageAction Ec2 DeleteFpgaImage action.
 * \value DeleteInstanceEventWindowAction Ec2 DeleteInstanceEventWindow action.
 * \value DeleteInternetGatewayAction Ec2 DeleteInternetGateway action.
 * \value DeleteIpamAction Ec2 DeleteIpam action.
 * \value DeleteIpamPoolAction Ec2 DeleteIpamPool action.
 * \value DeleteIpamScopeAction Ec2 DeleteIpamScope action.
 * \value DeleteKeyPairAction Ec2 DeleteKeyPair action.
 * \value DeleteLaunchTemplateAction Ec2 DeleteLaunchTemplate action.
 * \value DeleteLaunchTemplateVersionsAction Ec2 DeleteLaunchTemplateVersions action.
 * \value DeleteLocalGatewayRouteAction Ec2 DeleteLocalGatewayRoute action.
 * \value DeleteLocalGatewayRouteTableAction Ec2 DeleteLocalGatewayRouteTable action.
 * \value DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociationAction Ec2 DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation action.
 * \value DeleteLocalGatewayRouteTableVpcAssociationAction Ec2 DeleteLocalGatewayRouteTableVpcAssociation action.
 * \value DeleteManagedPrefixListAction Ec2 DeleteManagedPrefixList action.
 * \value DeleteNatGatewayAction Ec2 DeleteNatGateway action.
 * \value DeleteNetworkAclAction Ec2 DeleteNetworkAcl action.
 * \value DeleteNetworkAclEntryAction Ec2 DeleteNetworkAclEntry action.
 * \value DeleteNetworkInsightsAccessScopeAction Ec2 DeleteNetworkInsightsAccessScope action.
 * \value DeleteNetworkInsightsAccessScopeAnalysisAction Ec2 DeleteNetworkInsightsAccessScopeAnalysis action.
 * \value DeleteNetworkInsightsAnalysisAction Ec2 DeleteNetworkInsightsAnalysis action.
 * \value DeleteNetworkInsightsPathAction Ec2 DeleteNetworkInsightsPath action.
 * \value DeleteNetworkInterfaceAction Ec2 DeleteNetworkInterface action.
 * \value DeleteNetworkInterfacePermissionAction Ec2 DeleteNetworkInterfacePermission action.
 * \value DeletePlacementGroupAction Ec2 DeletePlacementGroup action.
 * \value DeletePublicIpv4PoolAction Ec2 DeletePublicIpv4Pool action.
 * \value DeleteQueuedReservedInstancesAction Ec2 DeleteQueuedReservedInstances action.
 * \value DeleteRouteAction Ec2 DeleteRoute action.
 * \value DeleteRouteTableAction Ec2 DeleteRouteTable action.
 * \value DeleteSecurityGroupAction Ec2 DeleteSecurityGroup action.
 * \value DeleteSnapshotAction Ec2 DeleteSnapshot action.
 * \value DeleteSpotDatafeedSubscriptionAction Ec2 DeleteSpotDatafeedSubscription action.
 * \value DeleteSubnetAction Ec2 DeleteSubnet action.
 * \value DeleteSubnetCidrReservationAction Ec2 DeleteSubnetCidrReservation action.
 * \value DeleteTagsAction Ec2 DeleteTags action.
 * \value DeleteTrafficMirrorFilterAction Ec2 DeleteTrafficMirrorFilter action.
 * \value DeleteTrafficMirrorFilterRuleAction Ec2 DeleteTrafficMirrorFilterRule action.
 * \value DeleteTrafficMirrorSessionAction Ec2 DeleteTrafficMirrorSession action.
 * \value DeleteTrafficMirrorTargetAction Ec2 DeleteTrafficMirrorTarget action.
 * \value DeleteTransitGatewayAction Ec2 DeleteTransitGateway action.
 * \value DeleteTransitGatewayConnectAction Ec2 DeleteTransitGatewayConnect action.
 * \value DeleteTransitGatewayConnectPeerAction Ec2 DeleteTransitGatewayConnectPeer action.
 * \value DeleteTransitGatewayMulticastDomainAction Ec2 DeleteTransitGatewayMulticastDomain action.
 * \value DeleteTransitGatewayPeeringAttachmentAction Ec2 DeleteTransitGatewayPeeringAttachment action.
 * \value DeleteTransitGatewayPolicyTableAction Ec2 DeleteTransitGatewayPolicyTable action.
 * \value DeleteTransitGatewayPrefixListReferenceAction Ec2 DeleteTransitGatewayPrefixListReference action.
 * \value DeleteTransitGatewayRouteAction Ec2 DeleteTransitGatewayRoute action.
 * \value DeleteTransitGatewayRouteTableAction Ec2 DeleteTransitGatewayRouteTable action.
 * \value DeleteTransitGatewayRouteTableAnnouncementAction Ec2 DeleteTransitGatewayRouteTableAnnouncement action.
 * \value DeleteTransitGatewayVpcAttachmentAction Ec2 DeleteTransitGatewayVpcAttachment action.
 * \value DeleteVolumeAction Ec2 DeleteVolume action.
 * \value DeleteVpcAction Ec2 DeleteVpc action.
 * \value DeleteVpcEndpointConnectionNotificationsAction Ec2 DeleteVpcEndpointConnectionNotifications action.
 * \value DeleteVpcEndpointServiceConfigurationsAction Ec2 DeleteVpcEndpointServiceConfigurations action.
 * \value DeleteVpcEndpointsAction Ec2 DeleteVpcEndpoints action.
 * \value DeleteVpcPeeringConnectionAction Ec2 DeleteVpcPeeringConnection action.
 * \value DeleteVpnConnectionAction Ec2 DeleteVpnConnection action.
 * \value DeleteVpnConnectionRouteAction Ec2 DeleteVpnConnectionRoute action.
 * \value DeleteVpnGatewayAction Ec2 DeleteVpnGateway action.
 * \value DeprovisionByoipCidrAction Ec2 DeprovisionByoipCidr action.
 * \value DeprovisionIpamPoolCidrAction Ec2 DeprovisionIpamPoolCidr action.
 * \value DeprovisionPublicIpv4PoolCidrAction Ec2 DeprovisionPublicIpv4PoolCidr action.
 * \value DeregisterImageAction Ec2 DeregisterImage action.
 * \value DeregisterInstanceEventNotificationAttributesAction Ec2 DeregisterInstanceEventNotificationAttributes action.
 * \value DeregisterTransitGatewayMulticastGroupMembersAction Ec2 DeregisterTransitGatewayMulticastGroupMembers action.
 * \value DeregisterTransitGatewayMulticastGroupSourcesAction Ec2 DeregisterTransitGatewayMulticastGroupSources action.
 * \value DescribeAccountAttributesAction Ec2 DescribeAccountAttributes action.
 * \value DescribeAddressesAction Ec2 DescribeAddresses action.
 * \value DescribeAddressesAttributeAction Ec2 DescribeAddressesAttribute action.
 * \value DescribeAggregateIdFormatAction Ec2 DescribeAggregateIdFormat action.
 * \value DescribeAvailabilityZonesAction Ec2 DescribeAvailabilityZones action.
 * \value DescribeBundleTasksAction Ec2 DescribeBundleTasks action.
 * \value DescribeByoipCidrsAction Ec2 DescribeByoipCidrs action.
 * \value DescribeCapacityReservationFleetsAction Ec2 DescribeCapacityReservationFleets action.
 * \value DescribeCapacityReservationsAction Ec2 DescribeCapacityReservations action.
 * \value DescribeCarrierGatewaysAction Ec2 DescribeCarrierGateways action.
 * \value DescribeClassicLinkInstancesAction Ec2 DescribeClassicLinkInstances action.
 * \value DescribeClientVpnAuthorizationRulesAction Ec2 DescribeClientVpnAuthorizationRules action.
 * \value DescribeClientVpnConnectionsAction Ec2 DescribeClientVpnConnections action.
 * \value DescribeClientVpnEndpointsAction Ec2 DescribeClientVpnEndpoints action.
 * \value DescribeClientVpnRoutesAction Ec2 DescribeClientVpnRoutes action.
 * \value DescribeClientVpnTargetNetworksAction Ec2 DescribeClientVpnTargetNetworks action.
 * \value DescribeCoipPoolsAction Ec2 DescribeCoipPools action.
 * \value DescribeConversionTasksAction Ec2 DescribeConversionTasks action.
 * \value DescribeCustomerGatewaysAction Ec2 DescribeCustomerGateways action.
 * \value DescribeDhcpOptionsAction Ec2 DescribeDhcpOptions action.
 * \value DescribeEgressOnlyInternetGatewaysAction Ec2 DescribeEgressOnlyInternetGateways action.
 * \value DescribeElasticGpusAction Ec2 DescribeElasticGpus action.
 * \value DescribeExportImageTasksAction Ec2 DescribeExportImageTasks action.
 * \value DescribeExportTasksAction Ec2 DescribeExportTasks action.
 * \value DescribeFastLaunchImagesAction Ec2 DescribeFastLaunchImages action.
 * \value DescribeFastSnapshotRestoresAction Ec2 DescribeFastSnapshotRestores action.
 * \value DescribeFleetHistoryAction Ec2 DescribeFleetHistory action.
 * \value DescribeFleetInstancesAction Ec2 DescribeFleetInstances action.
 * \value DescribeFleetsAction Ec2 DescribeFleets action.
 * \value DescribeFlowLogsAction Ec2 DescribeFlowLogs action.
 * \value DescribeFpgaImageAttributeAction Ec2 DescribeFpgaImageAttribute action.
 * \value DescribeFpgaImagesAction Ec2 DescribeFpgaImages action.
 * \value DescribeHostReservationOfferingsAction Ec2 DescribeHostReservationOfferings action.
 * \value DescribeHostReservationsAction Ec2 DescribeHostReservations action.
 * \value DescribeHostsAction Ec2 DescribeHosts action.
 * \value DescribeIamInstanceProfileAssociationsAction Ec2 DescribeIamInstanceProfileAssociations action.
 * \value DescribeIdFormatAction Ec2 DescribeIdFormat action.
 * \value DescribeIdentityIdFormatAction Ec2 DescribeIdentityIdFormat action.
 * \value DescribeImageAttributeAction Ec2 DescribeImageAttribute action.
 * \value DescribeImagesAction Ec2 DescribeImages action.
 * \value DescribeImportImageTasksAction Ec2 DescribeImportImageTasks action.
 * \value DescribeImportSnapshotTasksAction Ec2 DescribeImportSnapshotTasks action.
 * \value DescribeInstanceAttributeAction Ec2 DescribeInstanceAttribute action.
 * \value DescribeInstanceCreditSpecificationsAction Ec2 DescribeInstanceCreditSpecifications action.
 * \value DescribeInstanceEventNotificationAttributesAction Ec2 DescribeInstanceEventNotificationAttributes action.
 * \value DescribeInstanceEventWindowsAction Ec2 DescribeInstanceEventWindows action.
 * \value DescribeInstanceStatusAction Ec2 DescribeInstanceStatus action.
 * \value DescribeInstanceTypeOfferingsAction Ec2 DescribeInstanceTypeOfferings action.
 * \value DescribeInstanceTypesAction Ec2 DescribeInstanceTypes action.
 * \value DescribeInstancesAction Ec2 DescribeInstances action.
 * \value DescribeInternetGatewaysAction Ec2 DescribeInternetGateways action.
 * \value DescribeIpamPoolsAction Ec2 DescribeIpamPools action.
 * \value DescribeIpamScopesAction Ec2 DescribeIpamScopes action.
 * \value DescribeIpamsAction Ec2 DescribeIpams action.
 * \value DescribeIpv6PoolsAction Ec2 DescribeIpv6Pools action.
 * \value DescribeKeyPairsAction Ec2 DescribeKeyPairs action.
 * \value DescribeLaunchTemplateVersionsAction Ec2 DescribeLaunchTemplateVersions action.
 * \value DescribeLaunchTemplatesAction Ec2 DescribeLaunchTemplates action.
 * \value DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociationsAction Ec2 DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations action.
 * \value DescribeLocalGatewayRouteTableVpcAssociationsAction Ec2 DescribeLocalGatewayRouteTableVpcAssociations action.
 * \value DescribeLocalGatewayRouteTablesAction Ec2 DescribeLocalGatewayRouteTables action.
 * \value DescribeLocalGatewayVirtualInterfaceGroupsAction Ec2 DescribeLocalGatewayVirtualInterfaceGroups action.
 * \value DescribeLocalGatewayVirtualInterfacesAction Ec2 DescribeLocalGatewayVirtualInterfaces action.
 * \value DescribeLocalGatewaysAction Ec2 DescribeLocalGateways action.
 * \value DescribeManagedPrefixListsAction Ec2 DescribeManagedPrefixLists action.
 * \value DescribeMovingAddressesAction Ec2 DescribeMovingAddresses action.
 * \value DescribeNatGatewaysAction Ec2 DescribeNatGateways action.
 * \value DescribeNetworkAclsAction Ec2 DescribeNetworkAcls action.
 * \value DescribeNetworkInsightsAccessScopeAnalysesAction Ec2 DescribeNetworkInsightsAccessScopeAnalyses action.
 * \value DescribeNetworkInsightsAccessScopesAction Ec2 DescribeNetworkInsightsAccessScopes action.
 * \value DescribeNetworkInsightsAnalysesAction Ec2 DescribeNetworkInsightsAnalyses action.
 * \value DescribeNetworkInsightsPathsAction Ec2 DescribeNetworkInsightsPaths action.
 * \value DescribeNetworkInterfaceAttributeAction Ec2 DescribeNetworkInterfaceAttribute action.
 * \value DescribeNetworkInterfacePermissionsAction Ec2 DescribeNetworkInterfacePermissions action.
 * \value DescribeNetworkInterfacesAction Ec2 DescribeNetworkInterfaces action.
 * \value DescribePlacementGroupsAction Ec2 DescribePlacementGroups action.
 * \value DescribePrefixListsAction Ec2 DescribePrefixLists action.
 * \value DescribePrincipalIdFormatAction Ec2 DescribePrincipalIdFormat action.
 * \value DescribePublicIpv4PoolsAction Ec2 DescribePublicIpv4Pools action.
 * \value DescribeRegionsAction Ec2 DescribeRegions action.
 * \value DescribeReplaceRootVolumeTasksAction Ec2 DescribeReplaceRootVolumeTasks action.
 * \value DescribeReservedInstancesAction Ec2 DescribeReservedInstances action.
 * \value DescribeReservedInstancesListingsAction Ec2 DescribeReservedInstancesListings action.
 * \value DescribeReservedInstancesModificationsAction Ec2 DescribeReservedInstancesModifications action.
 * \value DescribeReservedInstancesOfferingsAction Ec2 DescribeReservedInstancesOfferings action.
 * \value DescribeRouteTablesAction Ec2 DescribeRouteTables action.
 * \value DescribeScheduledInstanceAvailabilityAction Ec2 DescribeScheduledInstanceAvailability action.
 * \value DescribeScheduledInstancesAction Ec2 DescribeScheduledInstances action.
 * \value DescribeSecurityGroupReferencesAction Ec2 DescribeSecurityGroupReferences action.
 * \value DescribeSecurityGroupRulesAction Ec2 DescribeSecurityGroupRules action.
 * \value DescribeSecurityGroupsAction Ec2 DescribeSecurityGroups action.
 * \value DescribeSnapshotAttributeAction Ec2 DescribeSnapshotAttribute action.
 * \value DescribeSnapshotTierStatusAction Ec2 DescribeSnapshotTierStatus action.
 * \value DescribeSnapshotsAction Ec2 DescribeSnapshots action.
 * \value DescribeSpotDatafeedSubscriptionAction Ec2 DescribeSpotDatafeedSubscription action.
 * \value DescribeSpotFleetInstancesAction Ec2 DescribeSpotFleetInstances action.
 * \value DescribeSpotFleetRequestHistoryAction Ec2 DescribeSpotFleetRequestHistory action.
 * \value DescribeSpotFleetRequestsAction Ec2 DescribeSpotFleetRequests action.
 * \value DescribeSpotInstanceRequestsAction Ec2 DescribeSpotInstanceRequests action.
 * \value DescribeSpotPriceHistoryAction Ec2 DescribeSpotPriceHistory action.
 * \value DescribeStaleSecurityGroupsAction Ec2 DescribeStaleSecurityGroups action.
 * \value DescribeStoreImageTasksAction Ec2 DescribeStoreImageTasks action.
 * \value DescribeSubnetsAction Ec2 DescribeSubnets action.
 * \value DescribeTagsAction Ec2 DescribeTags action.
 * \value DescribeTrafficMirrorFiltersAction Ec2 DescribeTrafficMirrorFilters action.
 * \value DescribeTrafficMirrorSessionsAction Ec2 DescribeTrafficMirrorSessions action.
 * \value DescribeTrafficMirrorTargetsAction Ec2 DescribeTrafficMirrorTargets action.
 * \value DescribeTransitGatewayAttachmentsAction Ec2 DescribeTransitGatewayAttachments action.
 * \value DescribeTransitGatewayConnectPeersAction Ec2 DescribeTransitGatewayConnectPeers action.
 * \value DescribeTransitGatewayConnectsAction Ec2 DescribeTransitGatewayConnects action.
 * \value DescribeTransitGatewayMulticastDomainsAction Ec2 DescribeTransitGatewayMulticastDomains action.
 * \value DescribeTransitGatewayPeeringAttachmentsAction Ec2 DescribeTransitGatewayPeeringAttachments action.
 * \value DescribeTransitGatewayPolicyTablesAction Ec2 DescribeTransitGatewayPolicyTables action.
 * \value DescribeTransitGatewayRouteTableAnnouncementsAction Ec2 DescribeTransitGatewayRouteTableAnnouncements action.
 * \value DescribeTransitGatewayRouteTablesAction Ec2 DescribeTransitGatewayRouteTables action.
 * \value DescribeTransitGatewayVpcAttachmentsAction Ec2 DescribeTransitGatewayVpcAttachments action.
 * \value DescribeTransitGatewaysAction Ec2 DescribeTransitGateways action.
 * \value DescribeTrunkInterfaceAssociationsAction Ec2 DescribeTrunkInterfaceAssociations action.
 * \value DescribeVolumeAttributeAction Ec2 DescribeVolumeAttribute action.
 * \value DescribeVolumeStatusAction Ec2 DescribeVolumeStatus action.
 * \value DescribeVolumesAction Ec2 DescribeVolumes action.
 * \value DescribeVolumesModificationsAction Ec2 DescribeVolumesModifications action.
 * \value DescribeVpcAttributeAction Ec2 DescribeVpcAttribute action.
 * \value DescribeVpcClassicLinkAction Ec2 DescribeVpcClassicLink action.
 * \value DescribeVpcClassicLinkDnsSupportAction Ec2 DescribeVpcClassicLinkDnsSupport action.
 * \value DescribeVpcEndpointConnectionNotificationsAction Ec2 DescribeVpcEndpointConnectionNotifications action.
 * \value DescribeVpcEndpointConnectionsAction Ec2 DescribeVpcEndpointConnections action.
 * \value DescribeVpcEndpointServiceConfigurationsAction Ec2 DescribeVpcEndpointServiceConfigurations action.
 * \value DescribeVpcEndpointServicePermissionsAction Ec2 DescribeVpcEndpointServicePermissions action.
 * \value DescribeVpcEndpointServicesAction Ec2 DescribeVpcEndpointServices action.
 * \value DescribeVpcEndpointsAction Ec2 DescribeVpcEndpoints action.
 * \value DescribeVpcPeeringConnectionsAction Ec2 DescribeVpcPeeringConnections action.
 * \value DescribeVpcsAction Ec2 DescribeVpcs action.
 * \value DescribeVpnConnectionsAction Ec2 DescribeVpnConnections action.
 * \value DescribeVpnGatewaysAction Ec2 DescribeVpnGateways action.
 * \value DetachClassicLinkVpcAction Ec2 DetachClassicLinkVpc action.
 * \value DetachInternetGatewayAction Ec2 DetachInternetGateway action.
 * \value DetachNetworkInterfaceAction Ec2 DetachNetworkInterface action.
 * \value DetachVolumeAction Ec2 DetachVolume action.
 * \value DetachVpnGatewayAction Ec2 DetachVpnGateway action.
 * \value DisableEbsEncryptionByDefaultAction Ec2 DisableEbsEncryptionByDefault action.
 * \value DisableFastLaunchAction Ec2 DisableFastLaunch action.
 * \value DisableFastSnapshotRestoresAction Ec2 DisableFastSnapshotRestores action.
 * \value DisableImageDeprecationAction Ec2 DisableImageDeprecation action.
 * \value DisableIpamOrganizationAdminAccountAction Ec2 DisableIpamOrganizationAdminAccount action.
 * \value DisableSerialConsoleAccessAction Ec2 DisableSerialConsoleAccess action.
 * \value DisableTransitGatewayRouteTablePropagationAction Ec2 DisableTransitGatewayRouteTablePropagation action.
 * \value DisableVgwRoutePropagationAction Ec2 DisableVgwRoutePropagation action.
 * \value DisableVpcClassicLinkAction Ec2 DisableVpcClassicLink action.
 * \value DisableVpcClassicLinkDnsSupportAction Ec2 DisableVpcClassicLinkDnsSupport action.
 * \value DisassociateAddressAction Ec2 DisassociateAddress action.
 * \value DisassociateClientVpnTargetNetworkAction Ec2 DisassociateClientVpnTargetNetwork action.
 * \value DisassociateEnclaveCertificateIamRoleAction Ec2 DisassociateEnclaveCertificateIamRole action.
 * \value DisassociateIamInstanceProfileAction Ec2 DisassociateIamInstanceProfile action.
 * \value DisassociateInstanceEventWindowAction Ec2 DisassociateInstanceEventWindow action.
 * \value DisassociateRouteTableAction Ec2 DisassociateRouteTable action.
 * \value DisassociateSubnetCidrBlockAction Ec2 DisassociateSubnetCidrBlock action.
 * \value DisassociateTransitGatewayMulticastDomainAction Ec2 DisassociateTransitGatewayMulticastDomain action.
 * \value DisassociateTransitGatewayPolicyTableAction Ec2 DisassociateTransitGatewayPolicyTable action.
 * \value DisassociateTransitGatewayRouteTableAction Ec2 DisassociateTransitGatewayRouteTable action.
 * \value DisassociateTrunkInterfaceAction Ec2 DisassociateTrunkInterface action.
 * \value DisassociateVpcCidrBlockAction Ec2 DisassociateVpcCidrBlock action.
 * \value EnableEbsEncryptionByDefaultAction Ec2 EnableEbsEncryptionByDefault action.
 * \value EnableFastLaunchAction Ec2 EnableFastLaunch action.
 * \value EnableFastSnapshotRestoresAction Ec2 EnableFastSnapshotRestores action.
 * \value EnableImageDeprecationAction Ec2 EnableImageDeprecation action.
 * \value EnableIpamOrganizationAdminAccountAction Ec2 EnableIpamOrganizationAdminAccount action.
 * \value EnableSerialConsoleAccessAction Ec2 EnableSerialConsoleAccess action.
 * \value EnableTransitGatewayRouteTablePropagationAction Ec2 EnableTransitGatewayRouteTablePropagation action.
 * \value EnableVgwRoutePropagationAction Ec2 EnableVgwRoutePropagation action.
 * \value EnableVolumeIOAction Ec2 EnableVolumeIO action.
 * \value EnableVpcClassicLinkAction Ec2 EnableVpcClassicLink action.
 * \value EnableVpcClassicLinkDnsSupportAction Ec2 EnableVpcClassicLinkDnsSupport action.
 * \value ExportClientVpnClientCertificateRevocationListAction Ec2 ExportClientVpnClientCertificateRevocationList action.
 * \value ExportClientVpnClientConfigurationAction Ec2 ExportClientVpnClientConfiguration action.
 * \value ExportImageAction Ec2 ExportImage action.
 * \value ExportTransitGatewayRoutesAction Ec2 ExportTransitGatewayRoutes action.
 * \value GetAssociatedEnclaveCertificateIamRolesAction Ec2 GetAssociatedEnclaveCertificateIamRoles action.
 * \value GetAssociatedIpv6PoolCidrsAction Ec2 GetAssociatedIpv6PoolCidrs action.
 * \value GetCapacityReservationUsageAction Ec2 GetCapacityReservationUsage action.
 * \value GetCoipPoolUsageAction Ec2 GetCoipPoolUsage action.
 * \value GetConsoleOutputAction Ec2 GetConsoleOutput action.
 * \value GetConsoleScreenshotAction Ec2 GetConsoleScreenshot action.
 * \value GetDefaultCreditSpecificationAction Ec2 GetDefaultCreditSpecification action.
 * \value GetEbsDefaultKmsKeyIdAction Ec2 GetEbsDefaultKmsKeyId action.
 * \value GetEbsEncryptionByDefaultAction Ec2 GetEbsEncryptionByDefault action.
 * \value GetFlowLogsIntegrationTemplateAction Ec2 GetFlowLogsIntegrationTemplate action.
 * \value GetGroupsForCapacityReservationAction Ec2 GetGroupsForCapacityReservation action.
 * \value GetHostReservationPurchasePreviewAction Ec2 GetHostReservationPurchasePreview action.
 * \value GetInstanceTypesFromInstanceRequirementsAction Ec2 GetInstanceTypesFromInstanceRequirements action.
 * \value GetInstanceUefiDataAction Ec2 GetInstanceUefiData action.
 * \value GetIpamAddressHistoryAction Ec2 GetIpamAddressHistory action.
 * \value GetIpamPoolAllocationsAction Ec2 GetIpamPoolAllocations action.
 * \value GetIpamPoolCidrsAction Ec2 GetIpamPoolCidrs action.
 * \value GetIpamResourceCidrsAction Ec2 GetIpamResourceCidrs action.
 * \value GetLaunchTemplateDataAction Ec2 GetLaunchTemplateData action.
 * \value GetManagedPrefixListAssociationsAction Ec2 GetManagedPrefixListAssociations action.
 * \value GetManagedPrefixListEntriesAction Ec2 GetManagedPrefixListEntries action.
 * \value GetNetworkInsightsAccessScopeAnalysisFindingsAction Ec2 GetNetworkInsightsAccessScopeAnalysisFindings action.
 * \value GetNetworkInsightsAccessScopeContentAction Ec2 GetNetworkInsightsAccessScopeContent action.
 * \value GetPasswordDataAction Ec2 GetPasswordData action.
 * \value GetReservedInstancesExchangeQuoteAction Ec2 GetReservedInstancesExchangeQuote action.
 * \value GetSerialConsoleAccessStatusAction Ec2 GetSerialConsoleAccessStatus action.
 * \value GetSpotPlacementScoresAction Ec2 GetSpotPlacementScores action.
 * \value GetSubnetCidrReservationsAction Ec2 GetSubnetCidrReservations action.
 * \value GetTransitGatewayAttachmentPropagationsAction Ec2 GetTransitGatewayAttachmentPropagations action.
 * \value GetTransitGatewayMulticastDomainAssociationsAction Ec2 GetTransitGatewayMulticastDomainAssociations action.
 * \value GetTransitGatewayPolicyTableAssociationsAction Ec2 GetTransitGatewayPolicyTableAssociations action.
 * \value GetTransitGatewayPolicyTableEntriesAction Ec2 GetTransitGatewayPolicyTableEntries action.
 * \value GetTransitGatewayPrefixListReferencesAction Ec2 GetTransitGatewayPrefixListReferences action.
 * \value GetTransitGatewayRouteTableAssociationsAction Ec2 GetTransitGatewayRouteTableAssociations action.
 * \value GetTransitGatewayRouteTablePropagationsAction Ec2 GetTransitGatewayRouteTablePropagations action.
 * \value GetVpnConnectionDeviceSampleConfigurationAction Ec2 GetVpnConnectionDeviceSampleConfiguration action.
 * \value GetVpnConnectionDeviceTypesAction Ec2 GetVpnConnectionDeviceTypes action.
 * \value ImportClientVpnClientCertificateRevocationListAction Ec2 ImportClientVpnClientCertificateRevocationList action.
 * \value ImportImageAction Ec2 ImportImage action.
 * \value ImportInstanceAction Ec2 ImportInstance action.
 * \value ImportKeyPairAction Ec2 ImportKeyPair action.
 * \value ImportSnapshotAction Ec2 ImportSnapshot action.
 * \value ImportVolumeAction Ec2 ImportVolume action.
 * \value ListImagesInRecycleBinAction Ec2 ListImagesInRecycleBin action.
 * \value ListSnapshotsInRecycleBinAction Ec2 ListSnapshotsInRecycleBin action.
 * \value ModifyAddressAttributeAction Ec2 ModifyAddressAttribute action.
 * \value ModifyAvailabilityZoneGroupAction Ec2 ModifyAvailabilityZoneGroup action.
 * \value ModifyCapacityReservationAction Ec2 ModifyCapacityReservation action.
 * \value ModifyCapacityReservationFleetAction Ec2 ModifyCapacityReservationFleet action.
 * \value ModifyClientVpnEndpointAction Ec2 ModifyClientVpnEndpoint action.
 * \value ModifyDefaultCreditSpecificationAction Ec2 ModifyDefaultCreditSpecification action.
 * \value ModifyEbsDefaultKmsKeyIdAction Ec2 ModifyEbsDefaultKmsKeyId action.
 * \value ModifyFleetAction Ec2 ModifyFleet action.
 * \value ModifyFpgaImageAttributeAction Ec2 ModifyFpgaImageAttribute action.
 * \value ModifyHostsAction Ec2 ModifyHosts action.
 * \value ModifyIdFormatAction Ec2 ModifyIdFormat action.
 * \value ModifyIdentityIdFormatAction Ec2 ModifyIdentityIdFormat action.
 * \value ModifyImageAttributeAction Ec2 ModifyImageAttribute action.
 * \value ModifyInstanceAttributeAction Ec2 ModifyInstanceAttribute action.
 * \value ModifyInstanceCapacityReservationAttributesAction Ec2 ModifyInstanceCapacityReservationAttributes action.
 * \value ModifyInstanceCreditSpecificationAction Ec2 ModifyInstanceCreditSpecification action.
 * \value ModifyInstanceEventStartTimeAction Ec2 ModifyInstanceEventStartTime action.
 * \value ModifyInstanceEventWindowAction Ec2 ModifyInstanceEventWindow action.
 * \value ModifyInstanceMaintenanceOptionsAction Ec2 ModifyInstanceMaintenanceOptions action.
 * \value ModifyInstanceMetadataOptionsAction Ec2 ModifyInstanceMetadataOptions action.
 * \value ModifyInstancePlacementAction Ec2 ModifyInstancePlacement action.
 * \value ModifyIpamAction Ec2 ModifyIpam action.
 * \value ModifyIpamPoolAction Ec2 ModifyIpamPool action.
 * \value ModifyIpamResourceCidrAction Ec2 ModifyIpamResourceCidr action.
 * \value ModifyIpamScopeAction Ec2 ModifyIpamScope action.
 * \value ModifyLaunchTemplateAction Ec2 ModifyLaunchTemplate action.
 * \value ModifyLocalGatewayRouteAction Ec2 ModifyLocalGatewayRoute action.
 * \value ModifyManagedPrefixListAction Ec2 ModifyManagedPrefixList action.
 * \value ModifyNetworkInterfaceAttributeAction Ec2 ModifyNetworkInterfaceAttribute action.
 * \value ModifyPrivateDnsNameOptionsAction Ec2 ModifyPrivateDnsNameOptions action.
 * \value ModifyReservedInstancesAction Ec2 ModifyReservedInstances action.
 * \value ModifySecurityGroupRulesAction Ec2 ModifySecurityGroupRules action.
 * \value ModifySnapshotAttributeAction Ec2 ModifySnapshotAttribute action.
 * \value ModifySnapshotTierAction Ec2 ModifySnapshotTier action.
 * \value ModifySpotFleetRequestAction Ec2 ModifySpotFleetRequest action.
 * \value ModifySubnetAttributeAction Ec2 ModifySubnetAttribute action.
 * \value ModifyTrafficMirrorFilterNetworkServicesAction Ec2 ModifyTrafficMirrorFilterNetworkServices action.
 * \value ModifyTrafficMirrorFilterRuleAction Ec2 ModifyTrafficMirrorFilterRule action.
 * \value ModifyTrafficMirrorSessionAction Ec2 ModifyTrafficMirrorSession action.
 * \value ModifyTransitGatewayAction Ec2 ModifyTransitGateway action.
 * \value ModifyTransitGatewayPrefixListReferenceAction Ec2 ModifyTransitGatewayPrefixListReference action.
 * \value ModifyTransitGatewayVpcAttachmentAction Ec2 ModifyTransitGatewayVpcAttachment action.
 * \value ModifyVolumeAction Ec2 ModifyVolume action.
 * \value ModifyVolumeAttributeAction Ec2 ModifyVolumeAttribute action.
 * \value ModifyVpcAttributeAction Ec2 ModifyVpcAttribute action.
 * \value ModifyVpcEndpointAction Ec2 ModifyVpcEndpoint action.
 * \value ModifyVpcEndpointConnectionNotificationAction Ec2 ModifyVpcEndpointConnectionNotification action.
 * \value ModifyVpcEndpointServiceConfigurationAction Ec2 ModifyVpcEndpointServiceConfiguration action.
 * \value ModifyVpcEndpointServicePayerResponsibilityAction Ec2 ModifyVpcEndpointServicePayerResponsibility action.
 * \value ModifyVpcEndpointServicePermissionsAction Ec2 ModifyVpcEndpointServicePermissions action.
 * \value ModifyVpcPeeringConnectionOptionsAction Ec2 ModifyVpcPeeringConnectionOptions action.
 * \value ModifyVpcTenancyAction Ec2 ModifyVpcTenancy action.
 * \value ModifyVpnConnectionAction Ec2 ModifyVpnConnection action.
 * \value ModifyVpnConnectionOptionsAction Ec2 ModifyVpnConnectionOptions action.
 * \value ModifyVpnTunnelCertificateAction Ec2 ModifyVpnTunnelCertificate action.
 * \value ModifyVpnTunnelOptionsAction Ec2 ModifyVpnTunnelOptions action.
 * \value MonitorInstancesAction Ec2 MonitorInstances action.
 * \value MoveAddressToVpcAction Ec2 MoveAddressToVpc action.
 * \value MoveByoipCidrToIpamAction Ec2 MoveByoipCidrToIpam action.
 * \value ProvisionByoipCidrAction Ec2 ProvisionByoipCidr action.
 * \value ProvisionIpamPoolCidrAction Ec2 ProvisionIpamPoolCidr action.
 * \value ProvisionPublicIpv4PoolCidrAction Ec2 ProvisionPublicIpv4PoolCidr action.
 * \value PurchaseHostReservationAction Ec2 PurchaseHostReservation action.
 * \value PurchaseReservedInstancesOfferingAction Ec2 PurchaseReservedInstancesOffering action.
 * \value PurchaseScheduledInstancesAction Ec2 PurchaseScheduledInstances action.
 * \value RebootInstancesAction Ec2 RebootInstances action.
 * \value RegisterImageAction Ec2 RegisterImage action.
 * \value RegisterInstanceEventNotificationAttributesAction Ec2 RegisterInstanceEventNotificationAttributes action.
 * \value RegisterTransitGatewayMulticastGroupMembersAction Ec2 RegisterTransitGatewayMulticastGroupMembers action.
 * \value RegisterTransitGatewayMulticastGroupSourcesAction Ec2 RegisterTransitGatewayMulticastGroupSources action.
 * \value RejectTransitGatewayMulticastDomainAssociationsAction Ec2 RejectTransitGatewayMulticastDomainAssociations action.
 * \value RejectTransitGatewayPeeringAttachmentAction Ec2 RejectTransitGatewayPeeringAttachment action.
 * \value RejectTransitGatewayVpcAttachmentAction Ec2 RejectTransitGatewayVpcAttachment action.
 * \value RejectVpcEndpointConnectionsAction Ec2 RejectVpcEndpointConnections action.
 * \value RejectVpcPeeringConnectionAction Ec2 RejectVpcPeeringConnection action.
 * \value ReleaseAddressAction Ec2 ReleaseAddress action.
 * \value ReleaseHostsAction Ec2 ReleaseHosts action.
 * \value ReleaseIpamPoolAllocationAction Ec2 ReleaseIpamPoolAllocation action.
 * \value ReplaceIamInstanceProfileAssociationAction Ec2 ReplaceIamInstanceProfileAssociation action.
 * \value ReplaceNetworkAclAssociationAction Ec2 ReplaceNetworkAclAssociation action.
 * \value ReplaceNetworkAclEntryAction Ec2 ReplaceNetworkAclEntry action.
 * \value ReplaceRouteAction Ec2 ReplaceRoute action.
 * \value ReplaceRouteTableAssociationAction Ec2 ReplaceRouteTableAssociation action.
 * \value ReplaceTransitGatewayRouteAction Ec2 ReplaceTransitGatewayRoute action.
 * \value ReportInstanceStatusAction Ec2 ReportInstanceStatus action.
 * \value RequestSpotFleetAction Ec2 RequestSpotFleet action.
 * \value RequestSpotInstancesAction Ec2 RequestSpotInstances action.
 * \value ResetAddressAttributeAction Ec2 ResetAddressAttribute action.
 * \value ResetEbsDefaultKmsKeyIdAction Ec2 ResetEbsDefaultKmsKeyId action.
 * \value ResetFpgaImageAttributeAction Ec2 ResetFpgaImageAttribute action.
 * \value ResetImageAttributeAction Ec2 ResetImageAttribute action.
 * \value ResetInstanceAttributeAction Ec2 ResetInstanceAttribute action.
 * \value ResetNetworkInterfaceAttributeAction Ec2 ResetNetworkInterfaceAttribute action.
 * \value ResetSnapshotAttributeAction Ec2 ResetSnapshotAttribute action.
 * \value RestoreAddressToClassicAction Ec2 RestoreAddressToClassic action.
 * \value RestoreImageFromRecycleBinAction Ec2 RestoreImageFromRecycleBin action.
 * \value RestoreManagedPrefixListVersionAction Ec2 RestoreManagedPrefixListVersion action.
 * \value RestoreSnapshotFromRecycleBinAction Ec2 RestoreSnapshotFromRecycleBin action.
 * \value RestoreSnapshotTierAction Ec2 RestoreSnapshotTier action.
 * \value RevokeClientVpnIngressAction Ec2 RevokeClientVpnIngress action.
 * \value RevokeSecurityGroupEgressAction Ec2 RevokeSecurityGroupEgress action.
 * \value RevokeSecurityGroupIngressAction Ec2 RevokeSecurityGroupIngress action.
 * \value RunInstancesAction Ec2 RunInstances action.
 * \value RunScheduledInstancesAction Ec2 RunScheduledInstances action.
 * \value SearchLocalGatewayRoutesAction Ec2 SearchLocalGatewayRoutes action.
 * \value SearchTransitGatewayMulticastGroupsAction Ec2 SearchTransitGatewayMulticastGroups action.
 * \value SearchTransitGatewayRoutesAction Ec2 SearchTransitGatewayRoutes action.
 * \value SendDiagnosticInterruptAction Ec2 SendDiagnosticInterrupt action.
 * \value StartInstancesAction Ec2 StartInstances action.
 * \value StartNetworkInsightsAccessScopeAnalysisAction Ec2 StartNetworkInsightsAccessScopeAnalysis action.
 * \value StartNetworkInsightsAnalysisAction Ec2 StartNetworkInsightsAnalysis action.
 * \value StartVpcEndpointServicePrivateDnsVerificationAction Ec2 StartVpcEndpointServicePrivateDnsVerification action.
 * \value StopInstancesAction Ec2 StopInstances action.
 * \value TerminateClientVpnConnectionsAction Ec2 TerminateClientVpnConnections action.
 * \value TerminateInstancesAction Ec2 TerminateInstances action.
 * \value UnassignIpv6AddressesAction Ec2 UnassignIpv6Addresses action.
 * \value UnassignPrivateIpAddressesAction Ec2 UnassignPrivateIpAddresses action.
 * \value UnmonitorInstancesAction Ec2 UnmonitorInstances action.
 * \value UpdateSecurityGroupRuleDescriptionsEgressAction Ec2 UpdateSecurityGroupRuleDescriptionsEgress action.
 * \value UpdateSecurityGroupRuleDescriptionsIngressAction Ec2 UpdateSecurityGroupRuleDescriptionsIngress action.
 * \value WithdrawByoipCidrAction Ec2 WithdrawByoipCidr action.
 */

/*!
 * Constructs a Ec2Request object for Ec2 \a action.
 */
Ec2Request::Ec2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new Ec2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Ec2Request::Ec2Request(const Ec2Request &other)
    : QtAws::Core::AwsAbstractRequest(new Ec2RequestPrivate(*other.d_func(), this))
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
Ec2Request::Ec2Request(Ec2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ec2 action to be performed by this request.
 */
Ec2Request::Action Ec2Request::action() const
{
    Q_D(const Ec2Request);
    return d->action;
}

/*!
 * Returns the name of the Ec2 action to be performed by this request.
 */
QString Ec2Request::actionString() const
{
    return Ec2RequestPrivate::toString(action());
}

/*!
 * Returns the Ec2 API version implemented by this request.
 */
QString Ec2Request::apiVersion() const
{
    Q_D(const Ec2Request);
    return d->apiVersion;
}

/*!
 * Sets the Ec2 action to be performed by this request to \a action.
 */
void Ec2Request::setAction(const Action action)
{
    Q_D(Ec2Request);
    d->action = action;
}

/*!
 * Sets the Ec2 API version to include in this request to \a version.
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
 * Returns \c tue if \a queueName is a valid Ec2 queue name.
 *
 * @par From Ec2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ec2 queue name, \c false otherwise.
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
 * Returns a network request for the Ec2 request using the given
 * \a endpoint.
 *
 * This Ec2 implementation builds request URLs by combining the
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
 * \class QtAws::Ec2::Ec2RequestPrivate
 * \brief The Ec2RequestPrivate class provides private implementation for Ec2Request.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a Ec2RequestPrivate object for Ec2 \a action,
 * with public implementation \a q.
 */
Ec2RequestPrivate::Ec2RequestPrivate(const Ec2Request::Action action, Ec2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2016-11-15"))
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
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Ec2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the Ec2 service's Action
 * query parameters.
 */
QString Ec2RequestPrivate::toString(const Ec2Request::Action &action)
{
    #define ActionToString(action) \
        case Ec2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptReservedInstancesExchangeQuote);
        ActionToString(AcceptTransitGatewayMulticastDomainAssociations);
        ActionToString(AcceptTransitGatewayPeeringAttachment);
        ActionToString(AcceptTransitGatewayVpcAttachment);
        ActionToString(AcceptVpcEndpointConnections);
        ActionToString(AcceptVpcPeeringConnection);
        ActionToString(AdvertiseByoipCidr);
        ActionToString(AllocateAddress);
        ActionToString(AllocateHosts);
        ActionToString(AllocateIpamPoolCidr);
        ActionToString(ApplySecurityGroupsToClientVpnTargetNetwork);
        ActionToString(AssignIpv6Addresses);
        ActionToString(AssignPrivateIpAddresses);
        ActionToString(AssociateAddress);
        ActionToString(AssociateClientVpnTargetNetwork);
        ActionToString(AssociateDhcpOptions);
        ActionToString(AssociateEnclaveCertificateIamRole);
        ActionToString(AssociateIamInstanceProfile);
        ActionToString(AssociateInstanceEventWindow);
        ActionToString(AssociateRouteTable);
        ActionToString(AssociateSubnetCidrBlock);
        ActionToString(AssociateTransitGatewayMulticastDomain);
        ActionToString(AssociateTransitGatewayPolicyTable);
        ActionToString(AssociateTransitGatewayRouteTable);
        ActionToString(AssociateTrunkInterface);
        ActionToString(AssociateVpcCidrBlock);
        ActionToString(AttachClassicLinkVpc);
        ActionToString(AttachInternetGateway);
        ActionToString(AttachNetworkInterface);
        ActionToString(AttachVolume);
        ActionToString(AttachVpnGateway);
        ActionToString(AuthorizeClientVpnIngress);
        ActionToString(AuthorizeSecurityGroupEgress);
        ActionToString(AuthorizeSecurityGroupIngress);
        ActionToString(BundleInstance);
        ActionToString(CancelBundleTask);
        ActionToString(CancelCapacityReservation);
        ActionToString(CancelCapacityReservationFleets);
        ActionToString(CancelConversionTask);
        ActionToString(CancelExportTask);
        ActionToString(CancelImportTask);
        ActionToString(CancelReservedInstancesListing);
        ActionToString(CancelSpotFleetRequests);
        ActionToString(CancelSpotInstanceRequests);
        ActionToString(ConfirmProductInstance);
        ActionToString(CopyFpgaImage);
        ActionToString(CopyImage);
        ActionToString(CopySnapshot);
        ActionToString(CreateCapacityReservation);
        ActionToString(CreateCapacityReservationFleet);
        ActionToString(CreateCarrierGateway);
        ActionToString(CreateClientVpnEndpoint);
        ActionToString(CreateClientVpnRoute);
        ActionToString(CreateCoipCidr);
        ActionToString(CreateCoipPool);
        ActionToString(CreateCustomerGateway);
        ActionToString(CreateDefaultSubnet);
        ActionToString(CreateDefaultVpc);
        ActionToString(CreateDhcpOptions);
        ActionToString(CreateEgressOnlyInternetGateway);
        ActionToString(CreateFleet);
        ActionToString(CreateFlowLogs);
        ActionToString(CreateFpgaImage);
        ActionToString(CreateImage);
        ActionToString(CreateInstanceEventWindow);
        ActionToString(CreateInstanceExportTask);
        ActionToString(CreateInternetGateway);
        ActionToString(CreateIpam);
        ActionToString(CreateIpamPool);
        ActionToString(CreateIpamScope);
        ActionToString(CreateKeyPair);
        ActionToString(CreateLaunchTemplate);
        ActionToString(CreateLaunchTemplateVersion);
        ActionToString(CreateLocalGatewayRoute);
        ActionToString(CreateLocalGatewayRouteTable);
        ActionToString(CreateLocalGatewayRouteTableVirtualInterfaceGroupAssociation);
        ActionToString(CreateLocalGatewayRouteTableVpcAssociation);
        ActionToString(CreateManagedPrefixList);
        ActionToString(CreateNatGateway);
        ActionToString(CreateNetworkAcl);
        ActionToString(CreateNetworkAclEntry);
        ActionToString(CreateNetworkInsightsAccessScope);
        ActionToString(CreateNetworkInsightsPath);
        ActionToString(CreateNetworkInterface);
        ActionToString(CreateNetworkInterfacePermission);
        ActionToString(CreatePlacementGroup);
        ActionToString(CreatePublicIpv4Pool);
        ActionToString(CreateReplaceRootVolumeTask);
        ActionToString(CreateReservedInstancesListing);
        ActionToString(CreateRestoreImageTask);
        ActionToString(CreateRoute);
        ActionToString(CreateRouteTable);
        ActionToString(CreateSecurityGroup);
        ActionToString(CreateSnapshot);
        ActionToString(CreateSnapshots);
        ActionToString(CreateSpotDatafeedSubscription);
        ActionToString(CreateStoreImageTask);
        ActionToString(CreateSubnet);
        ActionToString(CreateSubnetCidrReservation);
        ActionToString(CreateTags);
        ActionToString(CreateTrafficMirrorFilter);
        ActionToString(CreateTrafficMirrorFilterRule);
        ActionToString(CreateTrafficMirrorSession);
        ActionToString(CreateTrafficMirrorTarget);
        ActionToString(CreateTransitGateway);
        ActionToString(CreateTransitGatewayConnect);
        ActionToString(CreateTransitGatewayConnectPeer);
        ActionToString(CreateTransitGatewayMulticastDomain);
        ActionToString(CreateTransitGatewayPeeringAttachment);
        ActionToString(CreateTransitGatewayPolicyTable);
        ActionToString(CreateTransitGatewayPrefixListReference);
        ActionToString(CreateTransitGatewayRoute);
        ActionToString(CreateTransitGatewayRouteTable);
        ActionToString(CreateTransitGatewayRouteTableAnnouncement);
        ActionToString(CreateTransitGatewayVpcAttachment);
        ActionToString(CreateVolume);
        ActionToString(CreateVpc);
        ActionToString(CreateVpcEndpoint);
        ActionToString(CreateVpcEndpointConnectionNotification);
        ActionToString(CreateVpcEndpointServiceConfiguration);
        ActionToString(CreateVpcPeeringConnection);
        ActionToString(CreateVpnConnection);
        ActionToString(CreateVpnConnectionRoute);
        ActionToString(CreateVpnGateway);
        ActionToString(DeleteCarrierGateway);
        ActionToString(DeleteClientVpnEndpoint);
        ActionToString(DeleteClientVpnRoute);
        ActionToString(DeleteCoipCidr);
        ActionToString(DeleteCoipPool);
        ActionToString(DeleteCustomerGateway);
        ActionToString(DeleteDhcpOptions);
        ActionToString(DeleteEgressOnlyInternetGateway);
        ActionToString(DeleteFleets);
        ActionToString(DeleteFlowLogs);
        ActionToString(DeleteFpgaImage);
        ActionToString(DeleteInstanceEventWindow);
        ActionToString(DeleteInternetGateway);
        ActionToString(DeleteIpam);
        ActionToString(DeleteIpamPool);
        ActionToString(DeleteIpamScope);
        ActionToString(DeleteKeyPair);
        ActionToString(DeleteLaunchTemplate);
        ActionToString(DeleteLaunchTemplateVersions);
        ActionToString(DeleteLocalGatewayRoute);
        ActionToString(DeleteLocalGatewayRouteTable);
        ActionToString(DeleteLocalGatewayRouteTableVirtualInterfaceGroupAssociation);
        ActionToString(DeleteLocalGatewayRouteTableVpcAssociation);
        ActionToString(DeleteManagedPrefixList);
        ActionToString(DeleteNatGateway);
        ActionToString(DeleteNetworkAcl);
        ActionToString(DeleteNetworkAclEntry);
        ActionToString(DeleteNetworkInsightsAccessScope);
        ActionToString(DeleteNetworkInsightsAccessScopeAnalysis);
        ActionToString(DeleteNetworkInsightsAnalysis);
        ActionToString(DeleteNetworkInsightsPath);
        ActionToString(DeleteNetworkInterface);
        ActionToString(DeleteNetworkInterfacePermission);
        ActionToString(DeletePlacementGroup);
        ActionToString(DeletePublicIpv4Pool);
        ActionToString(DeleteQueuedReservedInstances);
        ActionToString(DeleteRoute);
        ActionToString(DeleteRouteTable);
        ActionToString(DeleteSecurityGroup);
        ActionToString(DeleteSnapshot);
        ActionToString(DeleteSpotDatafeedSubscription);
        ActionToString(DeleteSubnet);
        ActionToString(DeleteSubnetCidrReservation);
        ActionToString(DeleteTags);
        ActionToString(DeleteTrafficMirrorFilter);
        ActionToString(DeleteTrafficMirrorFilterRule);
        ActionToString(DeleteTrafficMirrorSession);
        ActionToString(DeleteTrafficMirrorTarget);
        ActionToString(DeleteTransitGateway);
        ActionToString(DeleteTransitGatewayConnect);
        ActionToString(DeleteTransitGatewayConnectPeer);
        ActionToString(DeleteTransitGatewayMulticastDomain);
        ActionToString(DeleteTransitGatewayPeeringAttachment);
        ActionToString(DeleteTransitGatewayPolicyTable);
        ActionToString(DeleteTransitGatewayPrefixListReference);
        ActionToString(DeleteTransitGatewayRoute);
        ActionToString(DeleteTransitGatewayRouteTable);
        ActionToString(DeleteTransitGatewayRouteTableAnnouncement);
        ActionToString(DeleteTransitGatewayVpcAttachment);
        ActionToString(DeleteVolume);
        ActionToString(DeleteVpc);
        ActionToString(DeleteVpcEndpointConnectionNotifications);
        ActionToString(DeleteVpcEndpointServiceConfigurations);
        ActionToString(DeleteVpcEndpoints);
        ActionToString(DeleteVpcPeeringConnection);
        ActionToString(DeleteVpnConnection);
        ActionToString(DeleteVpnConnectionRoute);
        ActionToString(DeleteVpnGateway);
        ActionToString(DeprovisionByoipCidr);
        ActionToString(DeprovisionIpamPoolCidr);
        ActionToString(DeprovisionPublicIpv4PoolCidr);
        ActionToString(DeregisterImage);
        ActionToString(DeregisterInstanceEventNotificationAttributes);
        ActionToString(DeregisterTransitGatewayMulticastGroupMembers);
        ActionToString(DeregisterTransitGatewayMulticastGroupSources);
        ActionToString(DescribeAccountAttributes);
        ActionToString(DescribeAddresses);
        ActionToString(DescribeAddressesAttribute);
        ActionToString(DescribeAggregateIdFormat);
        ActionToString(DescribeAvailabilityZones);
        ActionToString(DescribeBundleTasks);
        ActionToString(DescribeByoipCidrs);
        ActionToString(DescribeCapacityReservationFleets);
        ActionToString(DescribeCapacityReservations);
        ActionToString(DescribeCarrierGateways);
        ActionToString(DescribeClassicLinkInstances);
        ActionToString(DescribeClientVpnAuthorizationRules);
        ActionToString(DescribeClientVpnConnections);
        ActionToString(DescribeClientVpnEndpoints);
        ActionToString(DescribeClientVpnRoutes);
        ActionToString(DescribeClientVpnTargetNetworks);
        ActionToString(DescribeCoipPools);
        ActionToString(DescribeConversionTasks);
        ActionToString(DescribeCustomerGateways);
        ActionToString(DescribeDhcpOptions);
        ActionToString(DescribeEgressOnlyInternetGateways);
        ActionToString(DescribeElasticGpus);
        ActionToString(DescribeExportImageTasks);
        ActionToString(DescribeExportTasks);
        ActionToString(DescribeFastLaunchImages);
        ActionToString(DescribeFastSnapshotRestores);
        ActionToString(DescribeFleetHistory);
        ActionToString(DescribeFleetInstances);
        ActionToString(DescribeFleets);
        ActionToString(DescribeFlowLogs);
        ActionToString(DescribeFpgaImageAttribute);
        ActionToString(DescribeFpgaImages);
        ActionToString(DescribeHostReservationOfferings);
        ActionToString(DescribeHostReservations);
        ActionToString(DescribeHosts);
        ActionToString(DescribeIamInstanceProfileAssociations);
        ActionToString(DescribeIdFormat);
        ActionToString(DescribeIdentityIdFormat);
        ActionToString(DescribeImageAttribute);
        ActionToString(DescribeImages);
        ActionToString(DescribeImportImageTasks);
        ActionToString(DescribeImportSnapshotTasks);
        ActionToString(DescribeInstanceAttribute);
        ActionToString(DescribeInstanceCreditSpecifications);
        ActionToString(DescribeInstanceEventNotificationAttributes);
        ActionToString(DescribeInstanceEventWindows);
        ActionToString(DescribeInstanceStatus);
        ActionToString(DescribeInstanceTypeOfferings);
        ActionToString(DescribeInstanceTypes);
        ActionToString(DescribeInstances);
        ActionToString(DescribeInternetGateways);
        ActionToString(DescribeIpamPools);
        ActionToString(DescribeIpamScopes);
        ActionToString(DescribeIpams);
        ActionToString(DescribeIpv6Pools);
        ActionToString(DescribeKeyPairs);
        ActionToString(DescribeLaunchTemplateVersions);
        ActionToString(DescribeLaunchTemplates);
        ActionToString(DescribeLocalGatewayRouteTableVirtualInterfaceGroupAssociations);
        ActionToString(DescribeLocalGatewayRouteTableVpcAssociations);
        ActionToString(DescribeLocalGatewayRouteTables);
        ActionToString(DescribeLocalGatewayVirtualInterfaceGroups);
        ActionToString(DescribeLocalGatewayVirtualInterfaces);
        ActionToString(DescribeLocalGateways);
        ActionToString(DescribeManagedPrefixLists);
        ActionToString(DescribeMovingAddresses);
        ActionToString(DescribeNatGateways);
        ActionToString(DescribeNetworkAcls);
        ActionToString(DescribeNetworkInsightsAccessScopeAnalyses);
        ActionToString(DescribeNetworkInsightsAccessScopes);
        ActionToString(DescribeNetworkInsightsAnalyses);
        ActionToString(DescribeNetworkInsightsPaths);
        ActionToString(DescribeNetworkInterfaceAttribute);
        ActionToString(DescribeNetworkInterfacePermissions);
        ActionToString(DescribeNetworkInterfaces);
        ActionToString(DescribePlacementGroups);
        ActionToString(DescribePrefixLists);
        ActionToString(DescribePrincipalIdFormat);
        ActionToString(DescribePublicIpv4Pools);
        ActionToString(DescribeRegions);
        ActionToString(DescribeReplaceRootVolumeTasks);
        ActionToString(DescribeReservedInstances);
        ActionToString(DescribeReservedInstancesListings);
        ActionToString(DescribeReservedInstancesModifications);
        ActionToString(DescribeReservedInstancesOfferings);
        ActionToString(DescribeRouteTables);
        ActionToString(DescribeScheduledInstanceAvailability);
        ActionToString(DescribeScheduledInstances);
        ActionToString(DescribeSecurityGroupReferences);
        ActionToString(DescribeSecurityGroupRules);
        ActionToString(DescribeSecurityGroups);
        ActionToString(DescribeSnapshotAttribute);
        ActionToString(DescribeSnapshotTierStatus);
        ActionToString(DescribeSnapshots);
        ActionToString(DescribeSpotDatafeedSubscription);
        ActionToString(DescribeSpotFleetInstances);
        ActionToString(DescribeSpotFleetRequestHistory);
        ActionToString(DescribeSpotFleetRequests);
        ActionToString(DescribeSpotInstanceRequests);
        ActionToString(DescribeSpotPriceHistory);
        ActionToString(DescribeStaleSecurityGroups);
        ActionToString(DescribeStoreImageTasks);
        ActionToString(DescribeSubnets);
        ActionToString(DescribeTags);
        ActionToString(DescribeTrafficMirrorFilters);
        ActionToString(DescribeTrafficMirrorSessions);
        ActionToString(DescribeTrafficMirrorTargets);
        ActionToString(DescribeTransitGatewayAttachments);
        ActionToString(DescribeTransitGatewayConnectPeers);
        ActionToString(DescribeTransitGatewayConnects);
        ActionToString(DescribeTransitGatewayMulticastDomains);
        ActionToString(DescribeTransitGatewayPeeringAttachments);
        ActionToString(DescribeTransitGatewayPolicyTables);
        ActionToString(DescribeTransitGatewayRouteTableAnnouncements);
        ActionToString(DescribeTransitGatewayRouteTables);
        ActionToString(DescribeTransitGatewayVpcAttachments);
        ActionToString(DescribeTransitGateways);
        ActionToString(DescribeTrunkInterfaceAssociations);
        ActionToString(DescribeVolumeAttribute);
        ActionToString(DescribeVolumeStatus);
        ActionToString(DescribeVolumes);
        ActionToString(DescribeVolumesModifications);
        ActionToString(DescribeVpcAttribute);
        ActionToString(DescribeVpcClassicLink);
        ActionToString(DescribeVpcClassicLinkDnsSupport);
        ActionToString(DescribeVpcEndpointConnectionNotifications);
        ActionToString(DescribeVpcEndpointConnections);
        ActionToString(DescribeVpcEndpointServiceConfigurations);
        ActionToString(DescribeVpcEndpointServicePermissions);
        ActionToString(DescribeVpcEndpointServices);
        ActionToString(DescribeVpcEndpoints);
        ActionToString(DescribeVpcPeeringConnections);
        ActionToString(DescribeVpcs);
        ActionToString(DescribeVpnConnections);
        ActionToString(DescribeVpnGateways);
        ActionToString(DetachClassicLinkVpc);
        ActionToString(DetachInternetGateway);
        ActionToString(DetachNetworkInterface);
        ActionToString(DetachVolume);
        ActionToString(DetachVpnGateway);
        ActionToString(DisableEbsEncryptionByDefault);
        ActionToString(DisableFastLaunch);
        ActionToString(DisableFastSnapshotRestores);
        ActionToString(DisableImageDeprecation);
        ActionToString(DisableIpamOrganizationAdminAccount);
        ActionToString(DisableSerialConsoleAccess);
        ActionToString(DisableTransitGatewayRouteTablePropagation);
        ActionToString(DisableVgwRoutePropagation);
        ActionToString(DisableVpcClassicLink);
        ActionToString(DisableVpcClassicLinkDnsSupport);
        ActionToString(DisassociateAddress);
        ActionToString(DisassociateClientVpnTargetNetwork);
        ActionToString(DisassociateEnclaveCertificateIamRole);
        ActionToString(DisassociateIamInstanceProfile);
        ActionToString(DisassociateInstanceEventWindow);
        ActionToString(DisassociateRouteTable);
        ActionToString(DisassociateSubnetCidrBlock);
        ActionToString(DisassociateTransitGatewayMulticastDomain);
        ActionToString(DisassociateTransitGatewayPolicyTable);
        ActionToString(DisassociateTransitGatewayRouteTable);
        ActionToString(DisassociateTrunkInterface);
        ActionToString(DisassociateVpcCidrBlock);
        ActionToString(EnableEbsEncryptionByDefault);
        ActionToString(EnableFastLaunch);
        ActionToString(EnableFastSnapshotRestores);
        ActionToString(EnableImageDeprecation);
        ActionToString(EnableIpamOrganizationAdminAccount);
        ActionToString(EnableSerialConsoleAccess);
        ActionToString(EnableTransitGatewayRouteTablePropagation);
        ActionToString(EnableVgwRoutePropagation);
        ActionToString(EnableVolumeIO);
        ActionToString(EnableVpcClassicLink);
        ActionToString(EnableVpcClassicLinkDnsSupport);
        ActionToString(ExportClientVpnClientCertificateRevocationList);
        ActionToString(ExportClientVpnClientConfiguration);
        ActionToString(ExportImage);
        ActionToString(ExportTransitGatewayRoutes);
        ActionToString(GetAssociatedEnclaveCertificateIamRoles);
        ActionToString(GetAssociatedIpv6PoolCidrs);
        ActionToString(GetCapacityReservationUsage);
        ActionToString(GetCoipPoolUsage);
        ActionToString(GetConsoleOutput);
        ActionToString(GetConsoleScreenshot);
        ActionToString(GetDefaultCreditSpecification);
        ActionToString(GetEbsDefaultKmsKeyId);
        ActionToString(GetEbsEncryptionByDefault);
        ActionToString(GetFlowLogsIntegrationTemplate);
        ActionToString(GetGroupsForCapacityReservation);
        ActionToString(GetHostReservationPurchasePreview);
        ActionToString(GetInstanceTypesFromInstanceRequirements);
        ActionToString(GetInstanceUefiData);
        ActionToString(GetIpamAddressHistory);
        ActionToString(GetIpamPoolAllocations);
        ActionToString(GetIpamPoolCidrs);
        ActionToString(GetIpamResourceCidrs);
        ActionToString(GetLaunchTemplateData);
        ActionToString(GetManagedPrefixListAssociations);
        ActionToString(GetManagedPrefixListEntries);
        ActionToString(GetNetworkInsightsAccessScopeAnalysisFindings);
        ActionToString(GetNetworkInsightsAccessScopeContent);
        ActionToString(GetPasswordData);
        ActionToString(GetReservedInstancesExchangeQuote);
        ActionToString(GetSerialConsoleAccessStatus);
        ActionToString(GetSpotPlacementScores);
        ActionToString(GetSubnetCidrReservations);
        ActionToString(GetTransitGatewayAttachmentPropagations);
        ActionToString(GetTransitGatewayMulticastDomainAssociations);
        ActionToString(GetTransitGatewayPolicyTableAssociations);
        ActionToString(GetTransitGatewayPolicyTableEntries);
        ActionToString(GetTransitGatewayPrefixListReferences);
        ActionToString(GetTransitGatewayRouteTableAssociations);
        ActionToString(GetTransitGatewayRouteTablePropagations);
        ActionToString(GetVpnConnectionDeviceSampleConfiguration);
        ActionToString(GetVpnConnectionDeviceTypes);
        ActionToString(ImportClientVpnClientCertificateRevocationList);
        ActionToString(ImportImage);
        ActionToString(ImportInstance);
        ActionToString(ImportKeyPair);
        ActionToString(ImportSnapshot);
        ActionToString(ImportVolume);
        ActionToString(ListImagesInRecycleBin);
        ActionToString(ListSnapshotsInRecycleBin);
        ActionToString(ModifyAddressAttribute);
        ActionToString(ModifyAvailabilityZoneGroup);
        ActionToString(ModifyCapacityReservation);
        ActionToString(ModifyCapacityReservationFleet);
        ActionToString(ModifyClientVpnEndpoint);
        ActionToString(ModifyDefaultCreditSpecification);
        ActionToString(ModifyEbsDefaultKmsKeyId);
        ActionToString(ModifyFleet);
        ActionToString(ModifyFpgaImageAttribute);
        ActionToString(ModifyHosts);
        ActionToString(ModifyIdFormat);
        ActionToString(ModifyIdentityIdFormat);
        ActionToString(ModifyImageAttribute);
        ActionToString(ModifyInstanceAttribute);
        ActionToString(ModifyInstanceCapacityReservationAttributes);
        ActionToString(ModifyInstanceCreditSpecification);
        ActionToString(ModifyInstanceEventStartTime);
        ActionToString(ModifyInstanceEventWindow);
        ActionToString(ModifyInstanceMaintenanceOptions);
        ActionToString(ModifyInstanceMetadataOptions);
        ActionToString(ModifyInstancePlacement);
        ActionToString(ModifyIpam);
        ActionToString(ModifyIpamPool);
        ActionToString(ModifyIpamResourceCidr);
        ActionToString(ModifyIpamScope);
        ActionToString(ModifyLaunchTemplate);
        ActionToString(ModifyLocalGatewayRoute);
        ActionToString(ModifyManagedPrefixList);
        ActionToString(ModifyNetworkInterfaceAttribute);
        ActionToString(ModifyPrivateDnsNameOptions);
        ActionToString(ModifyReservedInstances);
        ActionToString(ModifySecurityGroupRules);
        ActionToString(ModifySnapshotAttribute);
        ActionToString(ModifySnapshotTier);
        ActionToString(ModifySpotFleetRequest);
        ActionToString(ModifySubnetAttribute);
        ActionToString(ModifyTrafficMirrorFilterNetworkServices);
        ActionToString(ModifyTrafficMirrorFilterRule);
        ActionToString(ModifyTrafficMirrorSession);
        ActionToString(ModifyTransitGateway);
        ActionToString(ModifyTransitGatewayPrefixListReference);
        ActionToString(ModifyTransitGatewayVpcAttachment);
        ActionToString(ModifyVolume);
        ActionToString(ModifyVolumeAttribute);
        ActionToString(ModifyVpcAttribute);
        ActionToString(ModifyVpcEndpoint);
        ActionToString(ModifyVpcEndpointConnectionNotification);
        ActionToString(ModifyVpcEndpointServiceConfiguration);
        ActionToString(ModifyVpcEndpointServicePayerResponsibility);
        ActionToString(ModifyVpcEndpointServicePermissions);
        ActionToString(ModifyVpcPeeringConnectionOptions);
        ActionToString(ModifyVpcTenancy);
        ActionToString(ModifyVpnConnection);
        ActionToString(ModifyVpnConnectionOptions);
        ActionToString(ModifyVpnTunnelCertificate);
        ActionToString(ModifyVpnTunnelOptions);
        ActionToString(MonitorInstances);
        ActionToString(MoveAddressToVpc);
        ActionToString(MoveByoipCidrToIpam);
        ActionToString(ProvisionByoipCidr);
        ActionToString(ProvisionIpamPoolCidr);
        ActionToString(ProvisionPublicIpv4PoolCidr);
        ActionToString(PurchaseHostReservation);
        ActionToString(PurchaseReservedInstancesOffering);
        ActionToString(PurchaseScheduledInstances);
        ActionToString(RebootInstances);
        ActionToString(RegisterImage);
        ActionToString(RegisterInstanceEventNotificationAttributes);
        ActionToString(RegisterTransitGatewayMulticastGroupMembers);
        ActionToString(RegisterTransitGatewayMulticastGroupSources);
        ActionToString(RejectTransitGatewayMulticastDomainAssociations);
        ActionToString(RejectTransitGatewayPeeringAttachment);
        ActionToString(RejectTransitGatewayVpcAttachment);
        ActionToString(RejectVpcEndpointConnections);
        ActionToString(RejectVpcPeeringConnection);
        ActionToString(ReleaseAddress);
        ActionToString(ReleaseHosts);
        ActionToString(ReleaseIpamPoolAllocation);
        ActionToString(ReplaceIamInstanceProfileAssociation);
        ActionToString(ReplaceNetworkAclAssociation);
        ActionToString(ReplaceNetworkAclEntry);
        ActionToString(ReplaceRoute);
        ActionToString(ReplaceRouteTableAssociation);
        ActionToString(ReplaceTransitGatewayRoute);
        ActionToString(ReportInstanceStatus);
        ActionToString(RequestSpotFleet);
        ActionToString(RequestSpotInstances);
        ActionToString(ResetAddressAttribute);
        ActionToString(ResetEbsDefaultKmsKeyId);
        ActionToString(ResetFpgaImageAttribute);
        ActionToString(ResetImageAttribute);
        ActionToString(ResetInstanceAttribute);
        ActionToString(ResetNetworkInterfaceAttribute);
        ActionToString(ResetSnapshotAttribute);
        ActionToString(RestoreAddressToClassic);
        ActionToString(RestoreImageFromRecycleBin);
        ActionToString(RestoreManagedPrefixListVersion);
        ActionToString(RestoreSnapshotFromRecycleBin);
        ActionToString(RestoreSnapshotTier);
        ActionToString(RevokeClientVpnIngress);
        ActionToString(RevokeSecurityGroupEgress);
        ActionToString(RevokeSecurityGroupIngress);
        ActionToString(RunInstances);
        ActionToString(RunScheduledInstances);
        ActionToString(SearchLocalGatewayRoutes);
        ActionToString(SearchTransitGatewayMulticastGroups);
        ActionToString(SearchTransitGatewayRoutes);
        ActionToString(SendDiagnosticInterrupt);
        ActionToString(StartInstances);
        ActionToString(StartNetworkInsightsAccessScopeAnalysis);
        ActionToString(StartNetworkInsightsAnalysis);
        ActionToString(StartVpcEndpointServicePrivateDnsVerification);
        ActionToString(StopInstances);
        ActionToString(TerminateClientVpnConnections);
        ActionToString(TerminateInstances);
        ActionToString(UnassignIpv6Addresses);
        ActionToString(UnassignPrivateIpAddresses);
        ActionToString(UnmonitorInstances);
        ActionToString(UpdateSecurityGroupRuleDescriptionsEgress);
        ActionToString(UpdateSecurityGroupRuleDescriptionsIngress);
        ActionToString(WithdrawByoipCidr);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ec2
} // namespace QtAws

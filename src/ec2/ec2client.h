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

#ifndef QTAWS_EC2CLIENT_H
#define QTAWS_EC2CLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class Ec2ClientPrivate;

class QTAWS_EXPORT Ec2Client : public AwsAbstractClient {
    Q_OBJECT

public:
    Ec2Client(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    Ec2Client(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    Ec2AcceptVpcPeeringConnectionResponse * acceptVpcPeeringConnection(const Ec2AcceptVpcPeeringConnectionRequest &request);
    Ec2AllocateAddressResponse * allocateAddress(const Ec2AllocateAddressRequest &request);
    Ec2AllocateHostsResponse * allocateHosts(const Ec2AllocateHostsRequest &request);
    Ec2AssignPrivateIpAddressesResponse * assignPrivateIpAddresses(const Ec2AssignPrivateIpAddressesRequest &request);
    Ec2AssociateAddressResponse * associateAddress(const Ec2AssociateAddressRequest &request);
    Ec2AssociateDhcpOptionsResponse * associateDhcpOptions(const Ec2AssociateDhcpOptionsRequest &request);
    Ec2AssociateRouteTableResponse * associateRouteTable(const Ec2AssociateRouteTableRequest &request);
    Ec2AttachClassicLinkVpcResponse * attachClassicLinkVpc(const Ec2AttachClassicLinkVpcRequest &request);
    Ec2AttachInternetGatewayResponse * attachInternetGateway(const Ec2AttachInternetGatewayRequest &request);
    Ec2AttachNetworkInterfaceResponse * attachNetworkInterface(const Ec2AttachNetworkInterfaceRequest &request);
    Ec2AttachVolumeResponse * attachVolume(const Ec2AttachVolumeRequest &request);
    Ec2AttachVpnGatewayResponse * attachVpnGateway(const Ec2AttachVpnGatewayRequest &request);
    Ec2AuthorizeSecurityGroupEgressResponse * authorizeSecurityGroupEgress(const Ec2AuthorizeSecurityGroupEgressRequest &request);
    Ec2AuthorizeSecurityGroupIngressResponse * authorizeSecurityGroupIngress(const Ec2AuthorizeSecurityGroupIngressRequest &request);
    Ec2BundleInstanceResponse * bundleInstance(const Ec2BundleInstanceRequest &request);
    Ec2CancelBundleTaskResponse * cancelBundleTask(const Ec2CancelBundleTaskRequest &request);
    Ec2CancelConversionTaskResponse * cancelConversionTask(const Ec2CancelConversionTaskRequest &request);
    Ec2CancelExportTaskResponse * cancelExportTask(const Ec2CancelExportTaskRequest &request);
    Ec2CancelImportTaskResponse * cancelImportTask(const Ec2CancelImportTaskRequest &request);
    Ec2CancelReservedInstancesListingResponse * cancelReservedInstancesListing(const Ec2CancelReservedInstancesListingRequest &request);
    Ec2CancelSpotFleetRequestsResponse * cancelSpotFleetRequests(const Ec2CancelSpotFleetRequestsRequest &request);
    Ec2CancelSpotInstanceRequestsResponse * cancelSpotInstanceRequests(const Ec2CancelSpotInstanceRequestsRequest &request);
    Ec2ConfirmProductInstanceResponse * confirmProductInstance(const Ec2ConfirmProductInstanceRequest &request);
    Ec2CopyImageResponse * copyImage(const Ec2CopyImageRequest &request);
    Ec2CopySnapshotResponse * copySnapshot(const Ec2CopySnapshotRequest &request);
    Ec2CreateCustomerGatewayResponse * createCustomerGateway(const Ec2CreateCustomerGatewayRequest &request);
    Ec2CreateDhcpOptionsResponse * createDhcpOptions(const Ec2CreateDhcpOptionsRequest &request);
    Ec2CreateFlowLogsResponse * createFlowLogs(const Ec2CreateFlowLogsRequest &request);
    Ec2CreateImageResponse * createImage(const Ec2CreateImageRequest &request);
    Ec2CreateInstanceExportTaskResponse * createInstanceExportTask(const Ec2CreateInstanceExportTaskRequest &request);
    Ec2CreateInternetGatewayResponse * createInternetGateway(const Ec2CreateInternetGatewayRequest &request);
    Ec2CreateKeyPairResponse * createKeyPair(const Ec2CreateKeyPairRequest &request);
    Ec2CreateNatGatewayResponse * createNatGateway(const Ec2CreateNatGatewayRequest &request);
    Ec2CreateNetworkAclResponse * createNetworkAcl(const Ec2CreateNetworkAclRequest &request);
    Ec2CreateNetworkAclEntryResponse * createNetworkAclEntry(const Ec2CreateNetworkAclEntryRequest &request);
    Ec2CreateNetworkInterfaceResponse * createNetworkInterface(const Ec2CreateNetworkInterfaceRequest &request);
    Ec2CreatePlacementGroupResponse * createPlacementGroup(const Ec2CreatePlacementGroupRequest &request);
    Ec2CreateReservedInstancesListingResponse * createReservedInstancesListing(const Ec2CreateReservedInstancesListingRequest &request);
    Ec2CreateRouteResponse * createRoute(const Ec2CreateRouteRequest &request);
    Ec2CreateRouteTableResponse * createRouteTable(const Ec2CreateRouteTableRequest &request);
    Ec2CreateSecurityGroupResponse * createSecurityGroup(const Ec2CreateSecurityGroupRequest &request);
    Ec2CreateSnapshotResponse * createSnapshot(const Ec2CreateSnapshotRequest &request);
    Ec2CreateSpotDatafeedSubscriptionResponse * createSpotDatafeedSubscription(const Ec2CreateSpotDatafeedSubscriptionRequest &request);
    Ec2CreateSubnetResponse * createSubnet(const Ec2CreateSubnetRequest &request);
    Ec2CreateTagsResponse * createTags(const Ec2CreateTagsRequest &request);
    Ec2CreateVolumeResponse * createVolume(const Ec2CreateVolumeRequest &request);
    Ec2CreateVpcResponse * createVpc(const Ec2CreateVpcRequest &request);
    Ec2CreateVpcEndpointResponse * createVpcEndpoint(const Ec2CreateVpcEndpointRequest &request);
    Ec2CreateVpcPeeringConnectionResponse * createVpcPeeringConnection(const Ec2CreateVpcPeeringConnectionRequest &request);
    Ec2CreateVpnConnectionResponse * createVpnConnection(const Ec2CreateVpnConnectionRequest &request);
    Ec2CreateVpnConnectionRouteResponse * createVpnConnectionRoute(const Ec2CreateVpnConnectionRouteRequest &request);
    Ec2CreateVpnGatewayResponse * createVpnGateway(const Ec2CreateVpnGatewayRequest &request);
    Ec2DeleteCustomerGatewayResponse * deleteCustomerGateway(const Ec2DeleteCustomerGatewayRequest &request);
    Ec2DeleteDhcpOptionsResponse * deleteDhcpOptions(const Ec2DeleteDhcpOptionsRequest &request);
    Ec2DeleteFlowLogsResponse * deleteFlowLogs(const Ec2DeleteFlowLogsRequest &request);
    Ec2DeleteInternetGatewayResponse * deleteInternetGateway(const Ec2DeleteInternetGatewayRequest &request);
    Ec2DeleteKeyPairResponse * deleteKeyPair(const Ec2DeleteKeyPairRequest &request);
    Ec2DeleteNatGatewayResponse * deleteNatGateway(const Ec2DeleteNatGatewayRequest &request);
    Ec2DeleteNetworkAclResponse * deleteNetworkAcl(const Ec2DeleteNetworkAclRequest &request);
    Ec2DeleteNetworkAclEntryResponse * deleteNetworkAclEntry(const Ec2DeleteNetworkAclEntryRequest &request);
    Ec2DeleteNetworkInterfaceResponse * deleteNetworkInterface(const Ec2DeleteNetworkInterfaceRequest &request);
    Ec2DeletePlacementGroupResponse * deletePlacementGroup(const Ec2DeletePlacementGroupRequest &request);
    Ec2DeleteRouteResponse * deleteRoute(const Ec2DeleteRouteRequest &request);
    Ec2DeleteRouteTableResponse * deleteRouteTable(const Ec2DeleteRouteTableRequest &request);
    Ec2DeleteSecurityGroupResponse * deleteSecurityGroup(const Ec2DeleteSecurityGroupRequest &request);
    Ec2DeleteSnapshotResponse * deleteSnapshot(const Ec2DeleteSnapshotRequest &request);
    Ec2DeleteSpotDatafeedSubscriptionResponse * deleteSpotDatafeedSubscription(const Ec2DeleteSpotDatafeedSubscriptionRequest &request);
    Ec2DeleteSubnetResponse * deleteSubnet(const Ec2DeleteSubnetRequest &request);
    Ec2DeleteTagsResponse * deleteTags(const Ec2DeleteTagsRequest &request);
    Ec2DeleteVolumeResponse * deleteVolume(const Ec2DeleteVolumeRequest &request);
    Ec2DeleteVpcResponse * deleteVpc(const Ec2DeleteVpcRequest &request);
    Ec2DeleteVpcEndpointsResponse * deleteVpcEndpoints(const Ec2DeleteVpcEndpointsRequest &request);
    Ec2DeleteVpcPeeringConnectionResponse * deleteVpcPeeringConnection(const Ec2DeleteVpcPeeringConnectionRequest &request);
    Ec2DeleteVpnConnectionResponse * deleteVpnConnection(const Ec2DeleteVpnConnectionRequest &request);
    Ec2DeleteVpnConnectionRouteResponse * deleteVpnConnectionRoute(const Ec2DeleteVpnConnectionRouteRequest &request);
    Ec2DeleteVpnGatewayResponse * deleteVpnGateway(const Ec2DeleteVpnGatewayRequest &request);
    Ec2DeregisterImageResponse * deregisterImage(const Ec2DeregisterImageRequest &request);
    Ec2DescribeAccountAttributesResponse * describeAccountAttributes(const Ec2DescribeAccountAttributesRequest &request);
    Ec2DescribeAddressesResponse * describeAddresses(const Ec2DescribeAddressesRequest &request);
    Ec2DescribeAvailabilityZonesResponse * describeAvailabilityZones(const Ec2DescribeAvailabilityZonesRequest &request);
    Ec2DescribeBundleTasksResponse * describeBundleTasks(const Ec2DescribeBundleTasksRequest &request);
    Ec2DescribeClassicLinkInstancesResponse * describeClassicLinkInstances(const Ec2DescribeClassicLinkInstancesRequest &request);
    Ec2DescribeConversionTasksResponse * describeConversionTasks(const Ec2DescribeConversionTasksRequest &request);
    Ec2DescribeCustomerGatewaysResponse * describeCustomerGateways(const Ec2DescribeCustomerGatewaysRequest &request);
    Ec2DescribeDhcpOptionsResponse * describeDhcpOptions(const Ec2DescribeDhcpOptionsRequest &request);
    Ec2DescribeExportTasksResponse * describeExportTasks(const Ec2DescribeExportTasksRequest &request);
    Ec2DescribeFlowLogsResponse * describeFlowLogs(const Ec2DescribeFlowLogsRequest &request);
    Ec2DescribeHostReservationOfferingsResponse * describeHostReservationOfferings(const Ec2DescribeHostReservationOfferingsRequest &request);
    Ec2DescribeHostReservationsResponse * describeHostReservations(const Ec2DescribeHostReservationsRequest &request);
    Ec2DescribeHostsResponse * describeHosts(const Ec2DescribeHostsRequest &request);
    Ec2DescribeIdFormatResponse * describeIdFormat(const Ec2DescribeIdFormatRequest &request);
    Ec2DescribeIdentityIdFormatResponse * describeIdentityIdFormat(const Ec2DescribeIdentityIdFormatRequest &request);
    Ec2DescribeImageAttributeResponse * describeImageAttribute(const Ec2DescribeImageAttributeRequest &request);
    Ec2DescribeImagesResponse * describeImages(const Ec2DescribeImagesRequest &request);
    Ec2DescribeImportImageTasksResponse * describeImportImageTasks(const Ec2DescribeImportImageTasksRequest &request);
    Ec2DescribeImportSnapshotTasksResponse * describeImportSnapshotTasks(const Ec2DescribeImportSnapshotTasksRequest &request);
    Ec2DescribeInstanceAttributeResponse * describeInstanceAttribute(const Ec2DescribeInstanceAttributeRequest &request);
    Ec2DescribeInstanceStatusResponse * describeInstanceStatus(const Ec2DescribeInstanceStatusRequest &request);
    Ec2DescribeInstancesResponse * describeInstances(const Ec2DescribeInstancesRequest &request);
    Ec2DescribeInternetGatewaysResponse * describeInternetGateways(const Ec2DescribeInternetGatewaysRequest &request);
    Ec2DescribeKeyPairsResponse * describeKeyPairs(const Ec2DescribeKeyPairsRequest &request);
    Ec2DescribeMovingAddressesResponse * describeMovingAddresses(const Ec2DescribeMovingAddressesRequest &request);
    Ec2DescribeNatGatewaysResponse * describeNatGateways(const Ec2DescribeNatGatewaysRequest &request);
    Ec2DescribeNetworkAclsResponse * describeNetworkAcls(const Ec2DescribeNetworkAclsRequest &request);
    Ec2DescribeNetworkInterfaceAttributeResponse * describeNetworkInterfaceAttribute(const Ec2DescribeNetworkInterfaceAttributeRequest &request);
    Ec2DescribeNetworkInterfacesResponse * describeNetworkInterfaces(const Ec2DescribeNetworkInterfacesRequest &request);
    Ec2DescribePlacementGroupsResponse * describePlacementGroups(const Ec2DescribePlacementGroupsRequest &request);
    Ec2DescribePrefixListsResponse * describePrefixLists(const Ec2DescribePrefixListsRequest &request);
    Ec2DescribeRegionsResponse * describeRegions(const Ec2DescribeRegionsRequest &request);
    Ec2DescribeReservedInstancesResponse * describeReservedInstances(const Ec2DescribeReservedInstancesRequest &request);
    Ec2DescribeReservedInstancesListingsResponse * describeReservedInstancesListings(const Ec2DescribeReservedInstancesListingsRequest &request);
    Ec2DescribeReservedInstancesModificationsResponse * describeReservedInstancesModifications(const Ec2DescribeReservedInstancesModificationsRequest &request);
    Ec2DescribeReservedInstancesOfferingsResponse * describeReservedInstancesOfferings(const Ec2DescribeReservedInstancesOfferingsRequest &request);
    Ec2DescribeRouteTablesResponse * describeRouteTables(const Ec2DescribeRouteTablesRequest &request);
    Ec2DescribeScheduledInstanceAvailabilityResponse * describeScheduledInstanceAvailability(const Ec2DescribeScheduledInstanceAvailabilityRequest &request);
    Ec2DescribeScheduledInstancesResponse * describeScheduledInstances(const Ec2DescribeScheduledInstancesRequest &request);
    Ec2DescribeSecurityGroupReferencesResponse * describeSecurityGroupReferences(const Ec2DescribeSecurityGroupReferencesRequest &request);
    Ec2DescribeSecurityGroupsResponse * describeSecurityGroups(const Ec2DescribeSecurityGroupsRequest &request);
    Ec2DescribeSnapshotAttributeResponse * describeSnapshotAttribute(const Ec2DescribeSnapshotAttributeRequest &request);
    Ec2DescribeSnapshotsResponse * describeSnapshots(const Ec2DescribeSnapshotsRequest &request);
    Ec2DescribeSpotDatafeedSubscriptionResponse * describeSpotDatafeedSubscription(const Ec2DescribeSpotDatafeedSubscriptionRequest &request);
    Ec2DescribeSpotFleetInstancesResponse * describeSpotFleetInstances(const Ec2DescribeSpotFleetInstancesRequest &request);
    Ec2DescribeSpotFleetRequestHistoryResponse * describeSpotFleetRequestHistory(const Ec2DescribeSpotFleetRequestHistoryRequest &request);
    Ec2DescribeSpotFleetRequestsResponse * describeSpotFleetRequests(const Ec2DescribeSpotFleetRequestsRequest &request);
    Ec2DescribeSpotInstanceRequestsResponse * describeSpotInstanceRequests(const Ec2DescribeSpotInstanceRequestsRequest &request);
    Ec2DescribeSpotPriceHistoryResponse * describeSpotPriceHistory(const Ec2DescribeSpotPriceHistoryRequest &request);
    Ec2DescribeStaleSecurityGroupsResponse * describeStaleSecurityGroups(const Ec2DescribeStaleSecurityGroupsRequest &request);
    Ec2DescribeSubnetsResponse * describeSubnets(const Ec2DescribeSubnetsRequest &request);
    Ec2DescribeTagsResponse * describeTags(const Ec2DescribeTagsRequest &request);
    Ec2DescribeVolumeAttributeResponse * describeVolumeAttribute(const Ec2DescribeVolumeAttributeRequest &request);
    Ec2DescribeVolumeStatusResponse * describeVolumeStatus(const Ec2DescribeVolumeStatusRequest &request);
    Ec2DescribeVolumesResponse * describeVolumes(const Ec2DescribeVolumesRequest &request);
    Ec2DescribeVpcAttributeResponse * describeVpcAttribute(const Ec2DescribeVpcAttributeRequest &request);
    Ec2DescribeVpcClassicLinkResponse * describeVpcClassicLink(const Ec2DescribeVpcClassicLinkRequest &request);
    Ec2DescribeVpcClassicLinkDnsSupportResponse * describeVpcClassicLinkDnsSupport(const Ec2DescribeVpcClassicLinkDnsSupportRequest &request);
    Ec2DescribeVpcEndpointServicesResponse * describeVpcEndpointServices(const Ec2DescribeVpcEndpointServicesRequest &request);
    Ec2DescribeVpcEndpointsResponse * describeVpcEndpoints(const Ec2DescribeVpcEndpointsRequest &request);
    Ec2DescribeVpcPeeringConnectionsResponse * describeVpcPeeringConnections(const Ec2DescribeVpcPeeringConnectionsRequest &request);
    Ec2DescribeVpcsResponse * describeVpcs(const Ec2DescribeVpcsRequest &request);
    Ec2DescribeVpnConnectionsResponse * describeVpnConnections(const Ec2DescribeVpnConnectionsRequest &request);
    Ec2DescribeVpnGatewaysResponse * describeVpnGateways(const Ec2DescribeVpnGatewaysRequest &request);
    Ec2DetachClassicLinkVpcResponse * detachClassicLinkVpc(const Ec2DetachClassicLinkVpcRequest &request);
    Ec2DetachInternetGatewayResponse * detachInternetGateway(const Ec2DetachInternetGatewayRequest &request);
    Ec2DetachNetworkInterfaceResponse * detachNetworkInterface(const Ec2DetachNetworkInterfaceRequest &request);
    Ec2DetachVolumeResponse * detachVolume(const Ec2DetachVolumeRequest &request);
    Ec2DetachVpnGatewayResponse * detachVpnGateway(const Ec2DetachVpnGatewayRequest &request);
    Ec2DisableVgwRoutePropagationResponse * disableVgwRoutePropagation(const Ec2DisableVgwRoutePropagationRequest &request);
    Ec2DisableVpcClassicLinkResponse * disableVpcClassicLink(const Ec2DisableVpcClassicLinkRequest &request);
    Ec2DisableVpcClassicLinkDnsSupportResponse * disableVpcClassicLinkDnsSupport(const Ec2DisableVpcClassicLinkDnsSupportRequest &request);
    Ec2DisassociateAddressResponse * disassociateAddress(const Ec2DisassociateAddressRequest &request);
    Ec2DisassociateRouteTableResponse * disassociateRouteTable(const Ec2DisassociateRouteTableRequest &request);
    Ec2EnableVgwRoutePropagationResponse * enableVgwRoutePropagation(const Ec2EnableVgwRoutePropagationRequest &request);
    Ec2EnableVolumeIOResponse * enableVolumeIO(const Ec2EnableVolumeIORequest &request);
    Ec2EnableVpcClassicLinkResponse * enableVpcClassicLink(const Ec2EnableVpcClassicLinkRequest &request);
    Ec2EnableVpcClassicLinkDnsSupportResponse * enableVpcClassicLinkDnsSupport(const Ec2EnableVpcClassicLinkDnsSupportRequest &request);
    Ec2GetConsoleOutputResponse * getConsoleOutput(const Ec2GetConsoleOutputRequest &request);
    Ec2GetConsoleScreenshotResponse * getConsoleScreenshot(const Ec2GetConsoleScreenshotRequest &request);
    Ec2GetHostReservationPurchasePreviewResponse * getHostReservationPurchasePreview(const Ec2GetHostReservationPurchasePreviewRequest &request);
    Ec2GetPasswordDataResponse * getPasswordData(const Ec2GetPasswordDataRequest &request);
    Ec2ImportImageResponse * importImage(const Ec2ImportImageRequest &request);
    Ec2ImportInstanceResponse * importInstance(const Ec2ImportInstanceRequest &request);
    Ec2ImportKeyPairResponse * importKeyPair(const Ec2ImportKeyPairRequest &request);
    Ec2ImportSnapshotResponse * importSnapshot(const Ec2ImportSnapshotRequest &request);
    Ec2ImportVolumeResponse * importVolume(const Ec2ImportVolumeRequest &request);
    Ec2ModifyHostsResponse * modifyHosts(const Ec2ModifyHostsRequest &request);
    Ec2ModifyIdFormatResponse * modifyIdFormat(const Ec2ModifyIdFormatRequest &request);
    Ec2ModifyIdentityIdFormatResponse * modifyIdentityIdFormat(const Ec2ModifyIdentityIdFormatRequest &request);
    Ec2ModifyImageAttributeResponse * modifyImageAttribute(const Ec2ModifyImageAttributeRequest &request);
    Ec2ModifyInstanceAttributeResponse * modifyInstanceAttribute(const Ec2ModifyInstanceAttributeRequest &request);
    Ec2ModifyInstancePlacementResponse * modifyInstancePlacement(const Ec2ModifyInstancePlacementRequest &request);
    Ec2ModifyNetworkInterfaceAttributeResponse * modifyNetworkInterfaceAttribute(const Ec2ModifyNetworkInterfaceAttributeRequest &request);
    Ec2ModifyReservedInstancesResponse * modifyReservedInstances(const Ec2ModifyReservedInstancesRequest &request);
    Ec2ModifySnapshotAttributeResponse * modifySnapshotAttribute(const Ec2ModifySnapshotAttributeRequest &request);
    Ec2ModifySpotFleetRequestResponse * modifySpotFleetRequest(const Ec2ModifySpotFleetRequestRequest &request);
    Ec2ModifySubnetAttributeResponse * modifySubnetAttribute(const Ec2ModifySubnetAttributeRequest &request);
    Ec2ModifyVolumeAttributeResponse * modifyVolumeAttribute(const Ec2ModifyVolumeAttributeRequest &request);
    Ec2ModifyVpcAttributeResponse * modifyVpcAttribute(const Ec2ModifyVpcAttributeRequest &request);
    Ec2ModifyVpcEndpointResponse * modifyVpcEndpoint(const Ec2ModifyVpcEndpointRequest &request);
    Ec2ModifyVpcPeeringConnectionOptionsResponse * modifyVpcPeeringConnectionOptions(const Ec2ModifyVpcPeeringConnectionOptionsRequest &request);
    Ec2MonitorInstancesResponse * monitorInstances(const Ec2MonitorInstancesRequest &request);
    Ec2MoveAddressToVpcResponse * moveAddressToVpc(const Ec2MoveAddressToVpcRequest &request);
    Ec2PurchaseHostReservationResponse * purchaseHostReservation(const Ec2PurchaseHostReservationRequest &request);
    Ec2PurchaseReservedInstancesOfferingResponse * purchaseReservedInstancesOffering(const Ec2PurchaseReservedInstancesOfferingRequest &request);
    Ec2PurchaseScheduledInstancesResponse * purchaseScheduledInstances(const Ec2PurchaseScheduledInstancesRequest &request);
    Ec2RebootInstancesResponse * rebootInstances(const Ec2RebootInstancesRequest &request);
    Ec2RegisterImageResponse * registerImage(const Ec2RegisterImageRequest &request);
    Ec2RejectVpcPeeringConnectionResponse * rejectVpcPeeringConnection(const Ec2RejectVpcPeeringConnectionRequest &request);
    Ec2ReleaseAddressResponse * releaseAddress(const Ec2ReleaseAddressRequest &request);
    Ec2ReleaseHostsResponse * releaseHosts(const Ec2ReleaseHostsRequest &request);
    Ec2ReplaceNetworkAclAssociationResponse * replaceNetworkAclAssociation(const Ec2ReplaceNetworkAclAssociationRequest &request);
    Ec2ReplaceNetworkAclEntryResponse * replaceNetworkAclEntry(const Ec2ReplaceNetworkAclEntryRequest &request);
    Ec2ReplaceRouteResponse * replaceRoute(const Ec2ReplaceRouteRequest &request);
    Ec2ReplaceRouteTableAssociationResponse * replaceRouteTableAssociation(const Ec2ReplaceRouteTableAssociationRequest &request);
    Ec2ReportInstanceStatusResponse * reportInstanceStatus(const Ec2ReportInstanceStatusRequest &request);
    Ec2RequestSpotFleetResponse * requestSpotFleet(const Ec2RequestSpotFleetRequest &request);
    Ec2RequestSpotInstancesResponse * requestSpotInstances(const Ec2RequestSpotInstancesRequest &request);
    Ec2ResetImageAttributeResponse * resetImageAttribute(const Ec2ResetImageAttributeRequest &request);
    Ec2ResetInstanceAttributeResponse * resetInstanceAttribute(const Ec2ResetInstanceAttributeRequest &request);
    Ec2ResetNetworkInterfaceAttributeResponse * resetNetworkInterfaceAttribute(const Ec2ResetNetworkInterfaceAttributeRequest &request);
    Ec2ResetSnapshotAttributeResponse * resetSnapshotAttribute(const Ec2ResetSnapshotAttributeRequest &request);
    Ec2RestoreAddressToClassicResponse * restoreAddressToClassic(const Ec2RestoreAddressToClassicRequest &request);
    Ec2RevokeSecurityGroupEgressResponse * revokeSecurityGroupEgress(const Ec2RevokeSecurityGroupEgressRequest &request);
    Ec2RevokeSecurityGroupIngressResponse * revokeSecurityGroupIngress(const Ec2RevokeSecurityGroupIngressRequest &request);
    Ec2RunInstancesResponse * runInstances(const Ec2RunInstancesRequest &request);
    Ec2RunScheduledInstancesResponse * runScheduledInstances(const Ec2RunScheduledInstancesRequest &request);
    Ec2StartInstancesResponse * startInstances(const Ec2StartInstancesRequest &request);
    Ec2StopInstancesResponse * stopInstances(const Ec2StopInstancesRequest &request);
    Ec2TerminateInstancesResponse * terminateInstances(const Ec2TerminateInstancesRequest &request);
    Ec2UnassignPrivateIpAddressesResponse * unassignPrivateIpAddresses(const Ec2UnassignPrivateIpAddressesRequest &request);
    Ec2UnmonitorInstancesResponse * unmonitorInstances(const Ec2UnmonitorInstancesRequest &request);

private:
    Q_DECLARE_PRIVATE(Ec2Client)
    Q_DISABLE_COPY(Ec2Client)

};

QTAWS_END_NAMESPACE

#endif

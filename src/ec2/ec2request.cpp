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
 * \value AcceptVpcEndpointConnectionsAction EC2 AcceptVpcEndpointConnections action.
 * \value AcceptVpcPeeringConnectionAction EC2 AcceptVpcPeeringConnection action.
 * \value AllocateAddressAction EC2 AllocateAddress action.
 * \value AllocateHostsAction EC2 AllocateHosts action.
 * \value AssignIpv6AddressesAction EC2 AssignIpv6Addresses action.
 * \value AssignPrivateIpAddressesAction EC2 AssignPrivateIpAddresses action.
 * \value AssociateAddressAction EC2 AssociateAddress action.
 * \value AssociateDhcpOptionsAction EC2 AssociateDhcpOptions action.
 * \value AssociateIamInstanceProfileAction EC2 AssociateIamInstanceProfile action.
 * \value AssociateRouteTableAction EC2 AssociateRouteTable action.
 * \value AssociateSubnetCidrBlockAction EC2 AssociateSubnetCidrBlock action.
 * \value AssociateVpcCidrBlockAction EC2 AssociateVpcCidrBlock action.
 * \value AttachClassicLinkVpcAction EC2 AttachClassicLinkVpc action.
 * \value AttachInternetGatewayAction EC2 AttachInternetGateway action.
 * \value AttachNetworkInterfaceAction EC2 AttachNetworkInterface action.
 * \value AttachVolumeAction EC2 AttachVolume action.
 * \value AttachVpnGatewayAction EC2 AttachVpnGateway action.
 * \value AuthorizeSecurityGroupEgressAction EC2 AuthorizeSecurityGroupEgress action.
 * \value AuthorizeSecurityGroupIngressAction EC2 AuthorizeSecurityGroupIngress action.
 * \value BundleInstanceAction EC2 BundleInstance action.
 * \value CancelBundleTaskAction EC2 CancelBundleTask action.
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
 * \value CreateCustomerGatewayAction EC2 CreateCustomerGateway action.
 * \value CreateDefaultSubnetAction EC2 CreateDefaultSubnet action.
 * \value CreateDefaultVpcAction EC2 CreateDefaultVpc action.
 * \value CreateDhcpOptionsAction EC2 CreateDhcpOptions action.
 * \value CreateEgressOnlyInternetGatewayAction EC2 CreateEgressOnlyInternetGateway action.
 * \value CreateFlowLogsAction EC2 CreateFlowLogs action.
 * \value CreateFpgaImageAction EC2 CreateFpgaImage action.
 * \value CreateImageAction EC2 CreateImage action.
 * \value CreateInstanceExportTaskAction EC2 CreateInstanceExportTask action.
 * \value CreateInternetGatewayAction EC2 CreateInternetGateway action.
 * \value CreateKeyPairAction EC2 CreateKeyPair action.
 * \value CreateLaunchTemplateAction EC2 CreateLaunchTemplate action.
 * \value CreateLaunchTemplateVersionAction EC2 CreateLaunchTemplateVersion action.
 * \value CreateNatGatewayAction EC2 CreateNatGateway action.
 * \value CreateNetworkAclAction EC2 CreateNetworkAcl action.
 * \value CreateNetworkAclEntryAction EC2 CreateNetworkAclEntry action.
 * \value CreateNetworkInterfaceAction EC2 CreateNetworkInterface action.
 * \value CreateNetworkInterfacePermissionAction EC2 CreateNetworkInterfacePermission action.
 * \value CreatePlacementGroupAction EC2 CreatePlacementGroup action.
 * \value CreateReservedInstancesListingAction EC2 CreateReservedInstancesListing action.
 * \value CreateRouteAction EC2 CreateRoute action.
 * \value CreateRouteTableAction EC2 CreateRouteTable action.
 * \value CreateSecurityGroupAction EC2 CreateSecurityGroup action.
 * \value CreateSnapshotAction EC2 CreateSnapshot action.
 * \value CreateSpotDatafeedSubscriptionAction EC2 CreateSpotDatafeedSubscription action.
 * \value CreateSubnetAction EC2 CreateSubnet action.
 * \value CreateTagsAction EC2 CreateTags action.
 * \value CreateVolumeAction EC2 CreateVolume action.
 * \value CreateVpcAction EC2 CreateVpc action.
 * \value CreateVpcEndpointAction EC2 CreateVpcEndpoint action.
 * \value CreateVpcEndpointConnectionNotificationAction EC2 CreateVpcEndpointConnectionNotification action.
 * \value CreateVpcEndpointServiceConfigurationAction EC2 CreateVpcEndpointServiceConfiguration action.
 * \value CreateVpcPeeringConnectionAction EC2 CreateVpcPeeringConnection action.
 * \value CreateVpnConnectionAction EC2 CreateVpnConnection action.
 * \value CreateVpnConnectionRouteAction EC2 CreateVpnConnectionRoute action.
 * \value CreateVpnGatewayAction EC2 CreateVpnGateway action.
 * \value DeleteCustomerGatewayAction EC2 DeleteCustomerGateway action.
 * \value DeleteDhcpOptionsAction EC2 DeleteDhcpOptions action.
 * \value DeleteEgressOnlyInternetGatewayAction EC2 DeleteEgressOnlyInternetGateway action.
 * \value DeleteFlowLogsAction EC2 DeleteFlowLogs action.
 * \value DeleteFpgaImageAction EC2 DeleteFpgaImage action.
 * \value DeleteInternetGatewayAction EC2 DeleteInternetGateway action.
 * \value DeleteKeyPairAction EC2 DeleteKeyPair action.
 * \value DeleteLaunchTemplateAction EC2 DeleteLaunchTemplate action.
 * \value DeleteLaunchTemplateVersionsAction EC2 DeleteLaunchTemplateVersions action.
 * \value DeleteNatGatewayAction EC2 DeleteNatGateway action.
 * \value DeleteNetworkAclAction EC2 DeleteNetworkAcl action.
 * \value DeleteNetworkAclEntryAction EC2 DeleteNetworkAclEntry action.
 * \value DeleteNetworkInterfaceAction EC2 DeleteNetworkInterface action.
 * \value DeleteNetworkInterfacePermissionAction EC2 DeleteNetworkInterfacePermission action.
 * \value DeletePlacementGroupAction EC2 DeletePlacementGroup action.
 * \value DeleteRouteAction EC2 DeleteRoute action.
 * \value DeleteRouteTableAction EC2 DeleteRouteTable action.
 * \value DeleteSecurityGroupAction EC2 DeleteSecurityGroup action.
 * \value DeleteSnapshotAction EC2 DeleteSnapshot action.
 * \value DeleteSpotDatafeedSubscriptionAction EC2 DeleteSpotDatafeedSubscription action.
 * \value DeleteSubnetAction EC2 DeleteSubnet action.
 * \value DeleteTagsAction EC2 DeleteTags action.
 * \value DeleteVolumeAction EC2 DeleteVolume action.
 * \value DeleteVpcAction EC2 DeleteVpc action.
 * \value DeleteVpcEndpointConnectionNotificationsAction EC2 DeleteVpcEndpointConnectionNotifications action.
 * \value DeleteVpcEndpointServiceConfigurationsAction EC2 DeleteVpcEndpointServiceConfigurations action.
 * \value DeleteVpcEndpointsAction EC2 DeleteVpcEndpoints action.
 * \value DeleteVpcPeeringConnectionAction EC2 DeleteVpcPeeringConnection action.
 * \value DeleteVpnConnectionAction EC2 DeleteVpnConnection action.
 * \value DeleteVpnConnectionRouteAction EC2 DeleteVpnConnectionRoute action.
 * \value DeleteVpnGatewayAction EC2 DeleteVpnGateway action.
 * \value DeregisterImageAction EC2 DeregisterImage action.
 * \value DescribeAccountAttributesAction EC2 DescribeAccountAttributes action.
 * \value DescribeAddressesAction EC2 DescribeAddresses action.
 * \value DescribeAggregateIdFormatAction EC2 DescribeAggregateIdFormat action.
 * \value DescribeAvailabilityZonesAction EC2 DescribeAvailabilityZones action.
 * \value DescribeBundleTasksAction EC2 DescribeBundleTasks action.
 * \value DescribeClassicLinkInstancesAction EC2 DescribeClassicLinkInstances action.
 * \value DescribeConversionTasksAction EC2 DescribeConversionTasks action.
 * \value DescribeCustomerGatewaysAction EC2 DescribeCustomerGateways action.
 * \value DescribeDhcpOptionsAction EC2 DescribeDhcpOptions action.
 * \value DescribeEgressOnlyInternetGatewaysAction EC2 DescribeEgressOnlyInternetGateways action.
 * \value DescribeElasticGpusAction EC2 DescribeElasticGpus action.
 * \value DescribeExportTasksAction EC2 DescribeExportTasks action.
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
 * \value DescribeInstanceStatusAction EC2 DescribeInstanceStatus action.
 * \value DescribeInstancesAction EC2 DescribeInstances action.
 * \value DescribeInternetGatewaysAction EC2 DescribeInternetGateways action.
 * \value DescribeKeyPairsAction EC2 DescribeKeyPairs action.
 * \value DescribeLaunchTemplateVersionsAction EC2 DescribeLaunchTemplateVersions action.
 * \value DescribeLaunchTemplatesAction EC2 DescribeLaunchTemplates action.
 * \value DescribeMovingAddressesAction EC2 DescribeMovingAddresses action.
 * \value DescribeNatGatewaysAction EC2 DescribeNatGateways action.
 * \value DescribeNetworkAclsAction EC2 DescribeNetworkAcls action.
 * \value DescribeNetworkInterfaceAttributeAction EC2 DescribeNetworkInterfaceAttribute action.
 * \value DescribeNetworkInterfacePermissionsAction EC2 DescribeNetworkInterfacePermissions action.
 * \value DescribeNetworkInterfacesAction EC2 DescribeNetworkInterfaces action.
 * \value DescribePlacementGroupsAction EC2 DescribePlacementGroups action.
 * \value DescribePrefixListsAction EC2 DescribePrefixLists action.
 * \value DescribePrincipalIdFormatAction EC2 DescribePrincipalIdFormat action.
 * \value DescribeRegionsAction EC2 DescribeRegions action.
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
 * \value DescribeSubnetsAction EC2 DescribeSubnets action.
 * \value DescribeTagsAction EC2 DescribeTags action.
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
 * \value DisableVgwRoutePropagationAction EC2 DisableVgwRoutePropagation action.
 * \value DisableVpcClassicLinkAction EC2 DisableVpcClassicLink action.
 * \value DisableVpcClassicLinkDnsSupportAction EC2 DisableVpcClassicLinkDnsSupport action.
 * \value DisassociateAddressAction EC2 DisassociateAddress action.
 * \value DisassociateIamInstanceProfileAction EC2 DisassociateIamInstanceProfile action.
 * \value DisassociateRouteTableAction EC2 DisassociateRouteTable action.
 * \value DisassociateSubnetCidrBlockAction EC2 DisassociateSubnetCidrBlock action.
 * \value DisassociateVpcCidrBlockAction EC2 DisassociateVpcCidrBlock action.
 * \value EnableVgwRoutePropagationAction EC2 EnableVgwRoutePropagation action.
 * \value EnableVolumeIOAction EC2 EnableVolumeIO action.
 * \value EnableVpcClassicLinkAction EC2 EnableVpcClassicLink action.
 * \value EnableVpcClassicLinkDnsSupportAction EC2 EnableVpcClassicLinkDnsSupport action.
 * \value GetConsoleOutputAction EC2 GetConsoleOutput action.
 * \value GetConsoleScreenshotAction EC2 GetConsoleScreenshot action.
 * \value GetHostReservationPurchasePreviewAction EC2 GetHostReservationPurchasePreview action.
 * \value GetLaunchTemplateDataAction EC2 GetLaunchTemplateData action.
 * \value GetPasswordDataAction EC2 GetPasswordData action.
 * \value GetReservedInstancesExchangeQuoteAction EC2 GetReservedInstancesExchangeQuote action.
 * \value ImportImageAction EC2 ImportImage action.
 * \value ImportInstanceAction EC2 ImportInstance action.
 * \value ImportKeyPairAction EC2 ImportKeyPair action.
 * \value ImportSnapshotAction EC2 ImportSnapshot action.
 * \value ImportVolumeAction EC2 ImportVolume action.
 * \value ModifyFpgaImageAttributeAction EC2 ModifyFpgaImageAttribute action.
 * \value ModifyHostsAction EC2 ModifyHosts action.
 * \value ModifyIdFormatAction EC2 ModifyIdFormat action.
 * \value ModifyIdentityIdFormatAction EC2 ModifyIdentityIdFormat action.
 * \value ModifyImageAttributeAction EC2 ModifyImageAttribute action.
 * \value ModifyInstanceAttributeAction EC2 ModifyInstanceAttribute action.
 * \value ModifyInstanceCreditSpecificationAction EC2 ModifyInstanceCreditSpecification action.
 * \value ModifyInstancePlacementAction EC2 ModifyInstancePlacement action.
 * \value ModifyLaunchTemplateAction EC2 ModifyLaunchTemplate action.
 * \value ModifyNetworkInterfaceAttributeAction EC2 ModifyNetworkInterfaceAttribute action.
 * \value ModifyReservedInstancesAction EC2 ModifyReservedInstances action.
 * \value ModifySnapshotAttributeAction EC2 ModifySnapshotAttribute action.
 * \value ModifySpotFleetRequestAction EC2 ModifySpotFleetRequest action.
 * \value ModifySubnetAttributeAction EC2 ModifySubnetAttribute action.
 * \value ModifyVolumeAction EC2 ModifyVolume action.
 * \value ModifyVolumeAttributeAction EC2 ModifyVolumeAttribute action.
 * \value ModifyVpcAttributeAction EC2 ModifyVpcAttribute action.
 * \value ModifyVpcEndpointAction EC2 ModifyVpcEndpoint action.
 * \value ModifyVpcEndpointConnectionNotificationAction EC2 ModifyVpcEndpointConnectionNotification action.
 * \value ModifyVpcEndpointServiceConfigurationAction EC2 ModifyVpcEndpointServiceConfiguration action.
 * \value ModifyVpcEndpointServicePermissionsAction EC2 ModifyVpcEndpointServicePermissions action.
 * \value ModifyVpcPeeringConnectionOptionsAction EC2 ModifyVpcPeeringConnectionOptions action.
 * \value ModifyVpcTenancyAction EC2 ModifyVpcTenancy action.
 * \value MonitorInstancesAction EC2 MonitorInstances action.
 * \value MoveAddressToVpcAction EC2 MoveAddressToVpc action.
 * \value PurchaseHostReservationAction EC2 PurchaseHostReservation action.
 * \value PurchaseReservedInstancesOfferingAction EC2 PurchaseReservedInstancesOffering action.
 * \value PurchaseScheduledInstancesAction EC2 PurchaseScheduledInstances action.
 * \value RebootInstancesAction EC2 RebootInstances action.
 * \value RegisterImageAction EC2 RegisterImage action.
 * \value RejectVpcEndpointConnectionsAction EC2 RejectVpcEndpointConnections action.
 * \value RejectVpcPeeringConnectionAction EC2 RejectVpcPeeringConnection action.
 * \value ReleaseAddressAction EC2 ReleaseAddress action.
 * \value ReleaseHostsAction EC2 ReleaseHosts action.
 * \value ReplaceIamInstanceProfileAssociationAction EC2 ReplaceIamInstanceProfileAssociation action.
 * \value ReplaceNetworkAclAssociationAction EC2 ReplaceNetworkAclAssociation action.
 * \value ReplaceNetworkAclEntryAction EC2 ReplaceNetworkAclEntry action.
 * \value ReplaceRouteAction EC2 ReplaceRoute action.
 * \value ReplaceRouteTableAssociationAction EC2 ReplaceRouteTableAssociation action.
 * \value ReportInstanceStatusAction EC2 ReportInstanceStatus action.
 * \value RequestSpotFleetAction EC2 RequestSpotFleet action.
 * \value RequestSpotInstancesAction EC2 RequestSpotInstances action.
 * \value ResetFpgaImageAttributeAction EC2 ResetFpgaImageAttribute action.
 * \value ResetImageAttributeAction EC2 ResetImageAttribute action.
 * \value ResetInstanceAttributeAction EC2 ResetInstanceAttribute action.
 * \value ResetNetworkInterfaceAttributeAction EC2 ResetNetworkInterfaceAttribute action.
 * \value ResetSnapshotAttributeAction EC2 ResetSnapshotAttribute action.
 * \value RestoreAddressToClassicAction EC2 RestoreAddressToClassic action.
 * \value RevokeSecurityGroupEgressAction EC2 RevokeSecurityGroupEgress action.
 * \value RevokeSecurityGroupIngressAction EC2 RevokeSecurityGroupIngress action.
 * \value RunInstancesAction EC2 RunInstances action.
 * \value RunScheduledInstancesAction EC2 RunScheduledInstances action.
 * \value StartInstancesAction EC2 StartInstances action.
 * \value StopInstancesAction EC2 StopInstances action.
 * \value TerminateInstancesAction EC2 TerminateInstances action.
 * \value UnassignIpv6AddressesAction EC2 UnassignIpv6Addresses action.
 * \value UnassignPrivateIpAddressesAction EC2 UnassignPrivateIpAddresses action.
 * \value UnmonitorInstancesAction EC2 UnmonitorInstances action.
 * \value UpdateSecurityGroupRuleDescriptionsEgressAction EC2 UpdateSecurityGroupRuleDescriptionsEgress action.
 * \value UpdateSecurityGroupRuleDescriptionsIngressAction EC2 UpdateSecurityGroupRuleDescriptionsIngress action.
 */

/*!
 * Constructs a Ec2Request object for EC2 \a action.
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
    Q_D(const Ec2Request);
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
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
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

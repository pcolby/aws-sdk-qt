// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALACCELERATORCLIENT_H
#define QTAWS_GLOBALACCELERATORCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsglobalacceleratorglobal.h"

class QNetworkReply;

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorClientPrivate;
class AddCustomRoutingEndpointsRequest;
class AddCustomRoutingEndpointsResponse;
class AdvertiseByoipCidrRequest;
class AdvertiseByoipCidrResponse;
class AllowCustomRoutingTrafficRequest;
class AllowCustomRoutingTrafficResponse;
class CreateAcceleratorRequest;
class CreateAcceleratorResponse;
class CreateCustomRoutingAcceleratorRequest;
class CreateCustomRoutingAcceleratorResponse;
class CreateCustomRoutingEndpointGroupRequest;
class CreateCustomRoutingEndpointGroupResponse;
class CreateCustomRoutingListenerRequest;
class CreateCustomRoutingListenerResponse;
class CreateEndpointGroupRequest;
class CreateEndpointGroupResponse;
class CreateListenerRequest;
class CreateListenerResponse;
class DeleteAcceleratorRequest;
class DeleteAcceleratorResponse;
class DeleteCustomRoutingAcceleratorRequest;
class DeleteCustomRoutingAcceleratorResponse;
class DeleteCustomRoutingEndpointGroupRequest;
class DeleteCustomRoutingEndpointGroupResponse;
class DeleteCustomRoutingListenerRequest;
class DeleteCustomRoutingListenerResponse;
class DeleteEndpointGroupRequest;
class DeleteEndpointGroupResponse;
class DeleteListenerRequest;
class DeleteListenerResponse;
class DenyCustomRoutingTrafficRequest;
class DenyCustomRoutingTrafficResponse;
class DeprovisionByoipCidrRequest;
class DeprovisionByoipCidrResponse;
class DescribeAcceleratorRequest;
class DescribeAcceleratorResponse;
class DescribeAcceleratorAttributesRequest;
class DescribeAcceleratorAttributesResponse;
class DescribeCustomRoutingAcceleratorRequest;
class DescribeCustomRoutingAcceleratorResponse;
class DescribeCustomRoutingAcceleratorAttributesRequest;
class DescribeCustomRoutingAcceleratorAttributesResponse;
class DescribeCustomRoutingEndpointGroupRequest;
class DescribeCustomRoutingEndpointGroupResponse;
class DescribeCustomRoutingListenerRequest;
class DescribeCustomRoutingListenerResponse;
class DescribeEndpointGroupRequest;
class DescribeEndpointGroupResponse;
class DescribeListenerRequest;
class DescribeListenerResponse;
class ListAcceleratorsRequest;
class ListAcceleratorsResponse;
class ListByoipCidrsRequest;
class ListByoipCidrsResponse;
class ListCustomRoutingAcceleratorsRequest;
class ListCustomRoutingAcceleratorsResponse;
class ListCustomRoutingEndpointGroupsRequest;
class ListCustomRoutingEndpointGroupsResponse;
class ListCustomRoutingListenersRequest;
class ListCustomRoutingListenersResponse;
class ListCustomRoutingPortMappingsRequest;
class ListCustomRoutingPortMappingsResponse;
class ListCustomRoutingPortMappingsByDestinationRequest;
class ListCustomRoutingPortMappingsByDestinationResponse;
class ListEndpointGroupsRequest;
class ListEndpointGroupsResponse;
class ListListenersRequest;
class ListListenersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ProvisionByoipCidrRequest;
class ProvisionByoipCidrResponse;
class RemoveCustomRoutingEndpointsRequest;
class RemoveCustomRoutingEndpointsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAcceleratorRequest;
class UpdateAcceleratorResponse;
class UpdateAcceleratorAttributesRequest;
class UpdateAcceleratorAttributesResponse;
class UpdateCustomRoutingAcceleratorRequest;
class UpdateCustomRoutingAcceleratorResponse;
class UpdateCustomRoutingAcceleratorAttributesRequest;
class UpdateCustomRoutingAcceleratorAttributesResponse;
class UpdateCustomRoutingListenerRequest;
class UpdateCustomRoutingListenerResponse;
class UpdateEndpointGroupRequest;
class UpdateEndpointGroupResponse;
class UpdateListenerRequest;
class UpdateListenerResponse;
class WithdrawByoipCidrRequest;
class WithdrawByoipCidrResponse;

class QTAWSGLOBALACCELERATOR_EXPORT GlobalAcceleratorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlobalAcceleratorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GlobalAcceleratorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddCustomRoutingEndpointsResponse * addCustomRoutingEndpoints(const AddCustomRoutingEndpointsRequest &request);
    AdvertiseByoipCidrResponse * advertiseByoipCidr(const AdvertiseByoipCidrRequest &request);
    AllowCustomRoutingTrafficResponse * allowCustomRoutingTraffic(const AllowCustomRoutingTrafficRequest &request);
    CreateAcceleratorResponse * createAccelerator(const CreateAcceleratorRequest &request);
    CreateCustomRoutingAcceleratorResponse * createCustomRoutingAccelerator(const CreateCustomRoutingAcceleratorRequest &request);
    CreateCustomRoutingEndpointGroupResponse * createCustomRoutingEndpointGroup(const CreateCustomRoutingEndpointGroupRequest &request);
    CreateCustomRoutingListenerResponse * createCustomRoutingListener(const CreateCustomRoutingListenerRequest &request);
    CreateEndpointGroupResponse * createEndpointGroup(const CreateEndpointGroupRequest &request);
    CreateListenerResponse * createListener(const CreateListenerRequest &request);
    DeleteAcceleratorResponse * deleteAccelerator(const DeleteAcceleratorRequest &request);
    DeleteCustomRoutingAcceleratorResponse * deleteCustomRoutingAccelerator(const DeleteCustomRoutingAcceleratorRequest &request);
    DeleteCustomRoutingEndpointGroupResponse * deleteCustomRoutingEndpointGroup(const DeleteCustomRoutingEndpointGroupRequest &request);
    DeleteCustomRoutingListenerResponse * deleteCustomRoutingListener(const DeleteCustomRoutingListenerRequest &request);
    DeleteEndpointGroupResponse * deleteEndpointGroup(const DeleteEndpointGroupRequest &request);
    DeleteListenerResponse * deleteListener(const DeleteListenerRequest &request);
    DenyCustomRoutingTrafficResponse * denyCustomRoutingTraffic(const DenyCustomRoutingTrafficRequest &request);
    DeprovisionByoipCidrResponse * deprovisionByoipCidr(const DeprovisionByoipCidrRequest &request);
    DescribeAcceleratorResponse * describeAccelerator(const DescribeAcceleratorRequest &request);
    DescribeAcceleratorAttributesResponse * describeAcceleratorAttributes(const DescribeAcceleratorAttributesRequest &request);
    DescribeCustomRoutingAcceleratorResponse * describeCustomRoutingAccelerator(const DescribeCustomRoutingAcceleratorRequest &request);
    DescribeCustomRoutingAcceleratorAttributesResponse * describeCustomRoutingAcceleratorAttributes(const DescribeCustomRoutingAcceleratorAttributesRequest &request);
    DescribeCustomRoutingEndpointGroupResponse * describeCustomRoutingEndpointGroup(const DescribeCustomRoutingEndpointGroupRequest &request);
    DescribeCustomRoutingListenerResponse * describeCustomRoutingListener(const DescribeCustomRoutingListenerRequest &request);
    DescribeEndpointGroupResponse * describeEndpointGroup(const DescribeEndpointGroupRequest &request);
    DescribeListenerResponse * describeListener(const DescribeListenerRequest &request);
    ListAcceleratorsResponse * listAccelerators(const ListAcceleratorsRequest &request);
    ListByoipCidrsResponse * listByoipCidrs(const ListByoipCidrsRequest &request);
    ListCustomRoutingAcceleratorsResponse * listCustomRoutingAccelerators(const ListCustomRoutingAcceleratorsRequest &request);
    ListCustomRoutingEndpointGroupsResponse * listCustomRoutingEndpointGroups(const ListCustomRoutingEndpointGroupsRequest &request);
    ListCustomRoutingListenersResponse * listCustomRoutingListeners(const ListCustomRoutingListenersRequest &request);
    ListCustomRoutingPortMappingsResponse * listCustomRoutingPortMappings(const ListCustomRoutingPortMappingsRequest &request);
    ListCustomRoutingPortMappingsByDestinationResponse * listCustomRoutingPortMappingsByDestination(const ListCustomRoutingPortMappingsByDestinationRequest &request);
    ListEndpointGroupsResponse * listEndpointGroups(const ListEndpointGroupsRequest &request);
    ListListenersResponse * listListeners(const ListListenersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ProvisionByoipCidrResponse * provisionByoipCidr(const ProvisionByoipCidrRequest &request);
    RemoveCustomRoutingEndpointsResponse * removeCustomRoutingEndpoints(const RemoveCustomRoutingEndpointsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAcceleratorResponse * updateAccelerator(const UpdateAcceleratorRequest &request);
    UpdateAcceleratorAttributesResponse * updateAcceleratorAttributes(const UpdateAcceleratorAttributesRequest &request);
    UpdateCustomRoutingAcceleratorResponse * updateCustomRoutingAccelerator(const UpdateCustomRoutingAcceleratorRequest &request);
    UpdateCustomRoutingAcceleratorAttributesResponse * updateCustomRoutingAcceleratorAttributes(const UpdateCustomRoutingAcceleratorAttributesRequest &request);
    UpdateCustomRoutingListenerResponse * updateCustomRoutingListener(const UpdateCustomRoutingListenerRequest &request);
    UpdateEndpointGroupResponse * updateEndpointGroup(const UpdateEndpointGroupRequest &request);
    UpdateListenerResponse * updateListener(const UpdateListenerRequest &request);
    WithdrawByoipCidrResponse * withdrawByoipCidr(const WithdrawByoipCidrRequest &request);

private:
    Q_DECLARE_PRIVATE(GlobalAcceleratorClient)
    Q_DISABLE_COPY(GlobalAcceleratorClient)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif

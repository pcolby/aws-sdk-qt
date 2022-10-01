// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVICEDISCOVERYCLIENT_H
#define QTAWS_SERVICEDISCOVERYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsservicediscoveryglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ServiceDiscovery {

class ServiceDiscoveryClientPrivate;
class CreateHttpNamespaceRequest;
class CreateHttpNamespaceResponse;
class CreatePrivateDnsNamespaceRequest;
class CreatePrivateDnsNamespaceResponse;
class CreatePublicDnsNamespaceRequest;
class CreatePublicDnsNamespaceResponse;
class CreateServiceRequest;
class CreateServiceResponse;
class DeleteNamespaceRequest;
class DeleteNamespaceResponse;
class DeleteServiceRequest;
class DeleteServiceResponse;
class DeregisterInstanceRequest;
class DeregisterInstanceResponse;
class DiscoverInstancesRequest;
class DiscoverInstancesResponse;
class GetInstanceRequest;
class GetInstanceResponse;
class GetInstancesHealthStatusRequest;
class GetInstancesHealthStatusResponse;
class GetNamespaceRequest;
class GetNamespaceResponse;
class GetOperationRequest;
class GetOperationResponse;
class GetServiceRequest;
class GetServiceResponse;
class ListInstancesRequest;
class ListInstancesResponse;
class ListNamespacesRequest;
class ListNamespacesResponse;
class ListOperationsRequest;
class ListOperationsResponse;
class ListServicesRequest;
class ListServicesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RegisterInstanceRequest;
class RegisterInstanceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateHttpNamespaceRequest;
class UpdateHttpNamespaceResponse;
class UpdateInstanceCustomHealthStatusRequest;
class UpdateInstanceCustomHealthStatusResponse;
class UpdatePrivateDnsNamespaceRequest;
class UpdatePrivateDnsNamespaceResponse;
class UpdatePublicDnsNamespaceRequest;
class UpdatePublicDnsNamespaceResponse;
class UpdateServiceRequest;
class UpdateServiceResponse;

class QTAWSSERVICEDISCOVERY_EXPORT ServiceDiscoveryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServiceDiscoveryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ServiceDiscoveryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateHttpNamespaceResponse * createHttpNamespace(const CreateHttpNamespaceRequest &request);
    CreatePrivateDnsNamespaceResponse * createPrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest &request);
    CreatePublicDnsNamespaceResponse * createPublicDnsNamespace(const CreatePublicDnsNamespaceRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    DeleteNamespaceResponse * deleteNamespace(const DeleteNamespaceRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeregisterInstanceResponse * deregisterInstance(const DeregisterInstanceRequest &request);
    DiscoverInstancesResponse * discoverInstances(const DiscoverInstancesRequest &request);
    GetInstanceResponse * getInstance(const GetInstanceRequest &request);
    GetInstancesHealthStatusResponse * getInstancesHealthStatus(const GetInstancesHealthStatusRequest &request);
    GetNamespaceResponse * getNamespace(const GetNamespaceRequest &request);
    GetOperationResponse * getOperation(const GetOperationRequest &request);
    GetServiceResponse * getService(const GetServiceRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListNamespacesResponse * listNamespaces(const ListNamespacesRequest &request);
    ListOperationsResponse * listOperations(const ListOperationsRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RegisterInstanceResponse * registerInstance(const RegisterInstanceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateHttpNamespaceResponse * updateHttpNamespace(const UpdateHttpNamespaceRequest &request);
    UpdateInstanceCustomHealthStatusResponse * updateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest &request);
    UpdatePrivateDnsNamespaceResponse * updatePrivateDnsNamespace(const UpdatePrivateDnsNamespaceRequest &request);
    UpdatePublicDnsNamespaceResponse * updatePublicDnsNamespace(const UpdatePublicDnsNamespaceRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);

private:
    Q_DECLARE_PRIVATE(ServiceDiscoveryClient)
    Q_DISABLE_COPY(ServiceDiscoveryClient)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif

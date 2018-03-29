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

#ifndef QTAWS_SERVICEDISCOVERYCLIENT_H
#define QTAWS_SERVICEDISCOVERYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ServiceDiscovery {

class ServiceDiscoveryClientPrivate;
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
class RegisterInstanceRequest;
class RegisterInstanceResponse;
class UpdateInstanceCustomHealthStatusRequest;
class UpdateInstanceCustomHealthStatusResponse;
class UpdateServiceRequest;
class UpdateServiceResponse;

class QTAWS_EXPORT ServiceDiscoveryClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ServiceDiscoveryClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServiceDiscoveryClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreatePrivateDnsNamespaceResponse * createPrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest &request);
    CreatePublicDnsNamespaceResponse * createPublicDnsNamespace(const CreatePublicDnsNamespaceRequest &request);
    CreateServiceResponse * createService(const CreateServiceRequest &request);
    DeleteNamespaceResponse * deleteNamespace(const DeleteNamespaceRequest &request);
    DeleteServiceResponse * deleteService(const DeleteServiceRequest &request);
    DeregisterInstanceResponse * deregisterInstance(const DeregisterInstanceRequest &request);
    GetInstanceResponse * getInstance(const GetInstanceRequest &request);
    GetInstancesHealthStatusResponse * getInstancesHealthStatus(const GetInstancesHealthStatusRequest &request);
    GetNamespaceResponse * getNamespace(const GetNamespaceRequest &request);
    GetOperationResponse * getOperation(const GetOperationRequest &request);
    GetServiceResponse * getService(const GetServiceRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListNamespacesResponse * listNamespaces(const ListNamespacesRequest &request);
    ListOperationsResponse * listOperations(const ListOperationsRequest &request);
    ListServicesResponse * listServices(const ListServicesRequest &request);
    RegisterInstanceResponse * registerInstance(const RegisterInstanceRequest &request);
    UpdateInstanceCustomHealthStatusResponse * updateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest &request);
    UpdateServiceResponse * updateService(const UpdateServiceRequest &request);

private:
    Q_DECLARE_PRIVATE(ServiceDiscoveryClient)
    Q_DISABLE_COPY(ServiceDiscoveryClient)

};

} // namespace ServiceDiscovery
} // namespace AWS

#endif

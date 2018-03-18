/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_SERVICEDISCOVERYCLIENT_H
#define QTAWS_SERVICEDISCOVERYCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ServiceDiscovery {

class ServiceDiscoveryClientPrivate;

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

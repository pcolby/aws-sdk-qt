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

#include "servicediscoveryclient.h"
#include "servicediscoveryclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  ServiceDiscoveryClient
 *
 * @brief  Client for Amazon Route 53 Auto Naming (ServiceDiscovery)
 *
 * Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 * When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 * automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 * service receive an answer that contains up to eight healthy
 */

/**
 * @brief  Constructs a new ServiceDiscoveryClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ServiceDiscoveryClient::ServiceDiscoveryClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServiceDiscoveryClientPrivate(this), parent)
{
    Q_D(ServiceDiscoveryClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ServiceDiscoveryClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
ServiceDiscoveryClient::ServiceDiscoveryClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ServiceDiscoveryClientPrivate(this), parent)
{
    Q_D(ServiceDiscoveryClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Creates a private namespace based on DNS, which will be visible only inside a specified Amazon VPC. The namespace
 * defines your service naming scheme. For example, if you name your namespace <code>example.com</code> and name your
 * service <code>backend</code>, the resulting DNS name for the service will be <code>backend.example.com</code>. For the
 * current limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-autonaming">Limits
 * on Auto Naming</a> in the <i>Route 53 Developer
 */
CreatePrivateDnsNamespaceResponse * ServiceDiscoveryClient::createPrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest &request)
{

}

/**
 * Creates a public namespace based on DNS, which will be visible on the internet. The namespace defines your service
 * naming scheme. For example, if you name your namespace <code>example.com</code> and name your service
 * <code>backend</code>, the resulting DNS name for the service will be <code>backend.example.com</code>. For the current
 * limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-autonaming">Limits
 * on Auto Naming</a> in the <i>Route 53 Developer
 */
CreatePublicDnsNamespaceResponse * ServiceDiscoveryClient::createPublicDnsNamespace(const CreatePublicDnsNamespaceRequest &request)
{

}

/**
 * Creates a service, which defines the configuration for the following
 *
 * entities> <ul> <li>
 *
 * Up to three records (A, AAAA, and SRV) or one CNAME
 *
 * recor> </li> <li>
 *
 * Optionally, a health
 *
 * chec> </li> </ul>
 *
 * After you create the service, you can submit a <a>RegisterInstance</a> request, and Amazon Route 53 uses the values in
 * the configuration to create the specified
 *
 * entities>
 *
 * For the current limit on the number of instances that you can register using the same namespace and using the same
 * service, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-autonaming">Limits
 * on Auto Naming</a> in the <i>Route 53 Developer
 */
CreateServiceResponse * ServiceDiscoveryClient::createService(const CreateServiceRequest &request)
{

}

/**
 * Deletes a namespace from the current account. If the namespace still contains one or more services, the request
 */
DeleteNamespaceResponse * ServiceDiscoveryClient::deleteNamespace(const DeleteNamespaceRequest &request)
{

}

/**
 * Deletes a specified service. If the service still contains one or more registered instances, the request
 */
DeleteServiceResponse * ServiceDiscoveryClient::deleteService(const DeleteServiceRequest &request)
{

}

/**
 * Deletes the records and the health check, if any, that Amazon Route 53 created for the specified
 */
DeregisterInstanceResponse * ServiceDiscoveryClient::deregisterInstance(const DeregisterInstanceRequest &request)
{

}

/**
 * Gets information about a specified
 */
GetInstanceResponse * ServiceDiscoveryClient::getInstance(const GetInstanceRequest &request)
{

}

/**
 * Gets the current health status (<code>Healthy</code>, <code>Unhealthy</code>, or <code>Unknown</code>) of one or more
 * instances that are associated with a specified
 *
 * service> <note>
 *
 * There is a brief delay between when you register an instance and when the health status for the instance is available.
 */
GetInstancesHealthStatusResponse * ServiceDiscoveryClient::getInstancesHealthStatus(const GetInstancesHealthStatusRequest &request)
{

}

/**
 * Gets information about a
 */
GetNamespaceResponse * ServiceDiscoveryClient::getNamespace(const GetNamespaceRequest &request)
{

}

/**
 * Gets information about any operation that returns an operation ID in the response, such as a <code>CreateService</code>
 *
 * request> <note>
 *
 * To get a list of operations that match specified criteria, see
 */
GetOperationResponse * ServiceDiscoveryClient::getOperation(const GetOperationRequest &request)
{

}

/**
 * Gets the settings for a specified
 */
GetServiceResponse * ServiceDiscoveryClient::getService(const GetServiceRequest &request)
{

}

/**
 * Lists summary information about the instances that you registered by using a specified
 */
ListInstancesResponse * ServiceDiscoveryClient::listInstances(const ListInstancesRequest &request)
{

}

/**
 * Lists summary information about the namespaces that were created by the current AWS
 */
ListNamespacesResponse * ServiceDiscoveryClient::listNamespaces(const ListNamespacesRequest &request)
{

}

/**
 * Lists operations that match the criteria that you
 */
ListOperationsResponse * ServiceDiscoveryClient::listOperations(const ListOperationsRequest &request)
{

}

/**
 * Lists summary information for all the services that are associated with one or more specified
 */
ListServicesResponse * ServiceDiscoveryClient::listServices(const ListServicesRequest &request)
{

}

/**
 * Creates or updates one or more records and optionally a health check based on the settings in a specified service. When
 * you submit a <code>RegisterInstance</code> request, Amazon Route 53 does the
 *
 * following> <ul> <li>
 *
 * For each DNS record that you define in the service specified by <code>ServiceId</code>, creates or updates a record in
 * the hosted zone that is associated with the corresponding
 *
 * namespac> </li> <li>
 *
 * If the service includes <code>HealthCheckConfig</code>, creates or updates a health check based on the settings in the
 * health check
 *
 * configuratio> </li> <li>
 *
 * Associates the health check, if any, with each of the
 *
 * record> </li> </ul> <important>
 *
 * One <code>RegisterInstance</code> request must complete before you can submit another request and specify the same
 * service ID and instance
 *
 * ID> </important>
 *
 * For more information, see
 *
 * <a>CreateService</a>>
 *
 * When Route 53 receives a DNS query for the specified DNS name, it returns the applicable
 *
 * value> <ul> <li>
 *
 * <b>If the health check is healthy</b>: returns all the
 *
 * record> </li> <li>
 *
 * <b>If the health check is unhealthy</b>: returns the applicable value for the last healthy
 *
 * instanc> </li> <li>
 *
 * <b>If you didn't specify a health check configuration</b>: returns all the
 *
 * record> </li> </ul>
 *
 * For the current limit on the number of instances that you can register using the same namespace and using the same
 * service, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-autonaming">Limits
 * on Auto Naming</a> in the <i>Route 53 Developer
 */
RegisterInstanceResponse * ServiceDiscoveryClient::registerInstance(const RegisterInstanceRequest &request)
{

}

/**
 */
UpdateInstanceCustomHealthStatusResponse * ServiceDiscoveryClient::updateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest &request)
{

}

/**
 * Submits a request to perform the following
 *
 * operations> <ul> <li>
 *
 * Add or delete <code>DnsRecords</code>
 *
 * configuration> </li> <li>
 *
 * Update the TTL setting for existing <code>DnsRecords</code>
 *
 * configuration> </li> <li>
 *
 * Add, update, or delete <code>HealthCheckConfig</code> for a specified
 *
 * servic> </li> </ul>
 *
 * You must specify all <code>DnsRecords</code> configurations (and, optionally, <code>HealthCheckConfig</code>) that you
 * want to appear in the updated service. Any current configurations that don't appear in an <code>UpdateService</code>
 * request are
 *
 * deleted>
 *
 * When you update the TTL setting for a service, Amazon Route 53 also updates the corresponding settings in all the
 * records and health checks that were created by using the specified
 */
UpdateServiceResponse * ServiceDiscoveryClient::updateService(const UpdateServiceRequest &request)
{

}

/**
 * @internal
 *
 * @class  ServiceDiscoveryClientPrivate
 *
 * @brief  Private implementation for ServiceDiscoveryClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ServiceDiscoveryClientPrivate object.
 *
 * @param  q  Pointer to this object's public ServiceDiscoveryClient instance.
 */
ServiceDiscoveryClientPrivate::ServiceDiscoveryClientPrivate(ServiceDiscoveryClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ServiceDiscovery
} // namespace AWS

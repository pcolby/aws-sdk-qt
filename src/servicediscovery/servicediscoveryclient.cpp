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

#include "servicediscoveryclient.h"
#include "servicediscoveryclient_p.h"

#include "core/awssignaturev4.h"
#include "createprivatednsnamespacerequest.h"
#include "createprivatednsnamespaceresponse.h"
#include "createpublicdnsnamespacerequest.h"
#include "createpublicdnsnamespaceresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "deletenamespacerequest.h"
#include "deletenamespaceresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "deregisterinstancerequest.h"
#include "deregisterinstanceresponse.h"
#include "getinstancerequest.h"
#include "getinstanceresponse.h"
#include "getinstanceshealthstatusrequest.h"
#include "getinstanceshealthstatusresponse.h"
#include "getnamespacerequest.h"
#include "getnamespaceresponse.h"
#include "getoperationrequest.h"
#include "getoperationresponse.h"
#include "getservicerequest.h"
#include "getserviceresponse.h"
#include "listinstancesrequest.h"
#include "listinstancesresponse.h"
#include "listnamespacesrequest.h"
#include "listnamespacesresponse.h"
#include "listoperationsrequest.h"
#include "listoperationsresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "registerinstancerequest.h"
#include "registerinstanceresponse.h"
#include "updateinstancecustomhealthstatusrequest.h"
#include "updateinstancecustomhealthstatusresponse.h"
#include "updateservicerequest.h"
#include "updateserviceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ServiceDiscovery
 * \brief The QtAws::ServiceDiscovery contains stuff...
 *
 * \inmodule QtAwsServiceDiscovery
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryClient
 * \brief The ServiceDiscoveryClient class provides access to the Amazon Route 53 Auto Naming (ServiceDiscovery) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 */

/*!
 * \brief Constructs a ServiceDiscoveryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ServiceDiscoveryClient::ServiceDiscoveryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ServiceDiscoveryClientPrivate(this), parent)
{
    Q_D(ServiceDiscoveryClient);
    d->apiVersion = QStringLiteral("2017-03-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("servicediscovery");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Route 53 Auto Naming");
    d->serviceName = QStringLiteral("servicediscovery");
}

/*!
 * \overload ServiceDiscoveryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ServiceDiscoveryClient::ServiceDiscoveryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ServiceDiscoveryClientPrivate(this), parent)
{
    Q_D(ServiceDiscoveryClient);
    d->apiVersion = QStringLiteral("2017-03-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("servicediscovery");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Route 53 Auto Naming");
    d->serviceName = QStringLiteral("servicediscovery");
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreatePrivateDnsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a private namespace based on DNS, which will be visible only inside a specified Amazon VPC. The namespace
 * defines your service naming scheme. For example, if you name your namespace <code>example.com</code> and name your
 * service <code>backend</code>, the resulting DNS name for the service will be <code>backend.example.com</code>. For the
 * current limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-autonaming">Limits
 * on Auto Naming</a> in the <i>Route 53 Developer
 */
CreatePrivateDnsNamespaceResponse * ServiceDiscoveryClient::createPrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest &request)
{
    return qobject_cast<CreatePrivateDnsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreatePublicDnsNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a public namespace based on DNS, which will be visible on the internet. The namespace defines your service
 * naming scheme. For example, if you name your namespace <code>example.com</code> and name your service
 * <code>backend</code>, the resulting DNS name for the service will be <code>backend.example.com</code>. For the current
 * limit on the number of namespaces that you can create using the same AWS account, see <a
 * href="http://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html#limits-api-entities-autonaming">Limits
 * on Auto Naming</a> in the <i>Route 53 Developer
 */
CreatePublicDnsNamespaceResponse * ServiceDiscoveryClient::createPublicDnsNamespace(const CreatePublicDnsNamespaceRequest &request)
{
    return qobject_cast<CreatePublicDnsNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<CreateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DeleteNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a namespace from the current account. If the namespace still contains one or more services, the request
 */
DeleteNamespaceResponse * ServiceDiscoveryClient::deleteNamespace(const DeleteNamespaceRequest &request)
{
    return qobject_cast<DeleteNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified service. If the service still contains one or more registered instances, the request
 */
DeleteServiceResponse * ServiceDiscoveryClient::deleteService(const DeleteServiceRequest &request)
{
    return qobject_cast<DeleteServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * DeregisterInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the records and the health check, if any, that Amazon Route 53 created for the specified
 */
DeregisterInstanceResponse * ServiceDiscoveryClient::deregisterInstance(const DeregisterInstanceRequest &request)
{
    return qobject_cast<DeregisterInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified
 */
GetInstanceResponse * ServiceDiscoveryClient::getInstance(const GetInstanceRequest &request)
{
    return qobject_cast<GetInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetInstancesHealthStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the current health status (<code>Healthy</code>, <code>Unhealthy</code>, or <code>Unknown</code>) of one or more
 * instances that are associated with a specified
 *
 * service> <note>
 *
 * There is a brief delay between when you register an instance and when the health status for the instance is available.
 */
GetInstancesHealthStatusResponse * ServiceDiscoveryClient::getInstancesHealthStatus(const GetInstancesHealthStatusRequest &request)
{
    return qobject_cast<GetInstancesHealthStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetNamespaceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a
 */
GetNamespaceResponse * ServiceDiscoveryClient::getNamespace(const GetNamespaceRequest &request)
{
    return qobject_cast<GetNamespaceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetOperationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about any operation that returns an operation ID in the response, such as a <code>CreateService</code>
 *
 * request> <note>
 *
 * To get a list of operations that match specified criteria, see
 */
GetOperationResponse * ServiceDiscoveryClient::getOperation(const GetOperationRequest &request)
{
    return qobject_cast<GetOperationResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * GetServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the settings for a specified
 */
GetServiceResponse * ServiceDiscoveryClient::getService(const GetServiceRequest &request)
{
    return qobject_cast<GetServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information about the instances that you registered by using a specified
 */
ListInstancesResponse * ServiceDiscoveryClient::listInstances(const ListInstancesRequest &request)
{
    return qobject_cast<ListInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListNamespacesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information about the namespaces that were created by the current AWS
 */
ListNamespacesResponse * ServiceDiscoveryClient::listNamespaces(const ListNamespacesRequest &request)
{
    return qobject_cast<ListNamespacesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListOperationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists operations that match the criteria that you
 */
ListOperationsResponse * ServiceDiscoveryClient::listOperations(const ListOperationsRequest &request)
{
    return qobject_cast<ListOperationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information for all the services that are associated with one or more specified
 */
ListServicesResponse * ServiceDiscoveryClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * RegisterInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * record> </li> </ul> <b>
 *
 * One <code>RegisterInstance</code> request must complete before you can submit another request and specify the same
 * service ID and instance
 *
 * ID> </b>
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
    return qobject_cast<RegisterInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * UpdateInstanceCustomHealthStatusResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateInstanceCustomHealthStatusResponse * ServiceDiscoveryClient::updateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest &request)
{
    return qobject_cast<UpdateInstanceCustomHealthStatusResponse *>(send(request));
}

/*!
 * Sends \a request to the ServiceDiscoveryClient service, and returns a pointer to an
 * UpdateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
    return qobject_cast<UpdateServiceResponse *>(send(request));
}

/*!
 * \class QtAws::ServiceDiscovery::ServiceDiscoveryClientPrivate
 * \brief The ServiceDiscoveryClientPrivate class provides private implementation for ServiceDiscoveryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a ServiceDiscoveryClientPrivate object with public implementation \a q.
 */
ServiceDiscoveryClientPrivate::ServiceDiscoveryClientPrivate(ServiceDiscoveryClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ServiceDiscovery
} // namespace QtAws

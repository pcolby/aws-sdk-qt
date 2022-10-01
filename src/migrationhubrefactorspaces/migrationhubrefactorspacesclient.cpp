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

#include "migrationhubrefactorspacesclient.h"
#include "migrationhubrefactorspacesclient_p.h"

#include "core/awssignaturev4.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "createrouterequest.h"
#include "createrouteresponse.h"
#include "createservicerequest.h"
#include "createserviceresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleterouterequest.h"
#include "deleterouteresponse.h"
#include "deleteservicerequest.h"
#include "deleteserviceresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "getrouterequest.h"
#include "getrouteresponse.h"
#include "getservicerequest.h"
#include "getserviceresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listenvironmentvpcsrequest.h"
#include "listenvironmentvpcsresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listroutesrequest.h"
#include "listroutesresponse.h"
#include "listservicesrequest.h"
#include "listservicesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updaterouterequest.h"
#include "updaterouteresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MigrationHubRefactorSpaces
 * \brief Contains classess for accessing AWS Migration Hub Refactor Spaces.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClient
 * \brief The MigrationHubRefactorSpacesClient class provides access to the AWS Migration Hub Refactor Spaces service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 */

/*!
 * \brief Constructs a MigrationHubRefactorSpacesClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MigrationHubRefactorSpacesClientPrivate(this), parent)
{
    Q_D(MigrationHubRefactorSpacesClient);
    d->apiVersion = QStringLiteral("2021-10-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("refactor-spaces");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Migration Hub Refactor Spaces");
    d->serviceName = QStringLiteral("refactor-spaces");
}

/*!
 * \overload MigrationHubRefactorSpacesClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MigrationHubRefactorSpacesClient::MigrationHubRefactorSpacesClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MigrationHubRefactorSpacesClientPrivate(this), parent)
{
    Q_D(MigrationHubRefactorSpacesClient);
    d->apiVersion = QStringLiteral("2021-10-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("refactor-spaces");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Migration Hub Refactor Spaces");
    d->serviceName = QStringLiteral("refactor-spaces");
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services Migration Hub Refactor Spaces application. The account that owns the environment also
 * owns the applications created inside the environment, regardless of the account that creates the application. Refactor
 * Spaces provisions an Amazon API Gateway, API Gateway VPC link, and Network Load Balancer for the application proxy
 * inside your
 */
CreateApplicationResponse * MigrationHubRefactorSpacesClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services Migration Hub Refactor Spaces environment. The caller owns the environment resource, and
 * all Refactor Spaces applications, services, and routes created within the environment. They are referred to as the
 * <i>environment owner</i>. The environment owner has cross-account visibility and control of Refactor Spaces resources
 * that are added to the environment by other accounts that the environment is shared with. When creating an environment,
 * Refactor Spaces provisions a transit gateway in your
 */
CreateEnvironmentResponse * MigrationHubRefactorSpacesClient::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * CreateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services Migration Hub Refactor Spaces route. The account owner of the service resource is always
 * the environment owner, regardless of which account creates the route. Routes target a service in the application. If an
 * application does not have any routes, then the first route must be created as a <code>DEFAULT</code>
 *
 * <code>RouteType</code>>
 *
 * When created, the default route defaults to an active state so state is not a required input. However, like all other
 * state values the state of the default route can be updated after creation, but only when all other routes are also
 * inactive. Conversely, no route can be active without the default route also being
 *
 * active>
 *
 * When you create a route, Refactor Spaces configures the Amazon API Gateway to send traffic to the target service as
 *
 * follows> <ul> <li>
 *
 * If the service has a URL endpoint, and the endpoint resolves to a private IP address, Refactor Spaces routes traffic
 * using the API Gateway VPC link.
 *
 * </p </li> <li>
 *
 * If the service has a URL endpoint, and the endpoint resolves to a public IP address, Refactor Spaces routes traffic over
 * the public
 *
 * internet> </li> <li>
 *
 * If the service has an Lambda function endpoint, then Refactor Spaces configures the Lambda function's resource policy to
 * allow the application's API Gateway to invoke the
 *
 * function> </li> </ul>
 *
 * A one-time health check is performed on the service when either the route is updated from inactive to active, or when it
 * is created with an active state. If the health check fails, the route transitions the route state to
 * <code>FAILED</code>, an error code of <code>SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE</code> is provided, and no traffic is
 * sent to the
 *
 * service>
 *
 * For Lambda functions, the Lambda function state is checked. If the function is not active, the function configuration is
 * updated so that Lambda resources are provisioned. If the Lambda state is <code>Failed</code>, then the route creation
 * fails. For more information, see the <a
 * href="https://docs.aws.amazon.com/lambda/latest/dg/API_GetFunctionConfiguration.html#SSS-GetFunctionConfiguration-response-State">GetFunctionConfiguration's
 * State response parameter</a> in the <i>Lambda Developer
 *
 * Guide</i>>
 *
 * For Lambda endpoints, a check is performed to determine that a Lambda function with the specified ARN exists. If it does
 * not exist, the health check fails. For public URLs, a connection is opened to the public endpoint. If the URL is not
 * reachable, the health check fails.
 *
 * </p
 *
 * For private URLS, a target group is created on the Elastic Load Balancing and the target group health check is run. The
 * <code>HealthCheckProtocol</code>, <code>HealthCheckPort</code>, and <code>HealthCheckPath</code> are the same protocol,
 * port, and path specified in the URL or health URL, if used. All other settings use the default values, as described in
 * <a href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/target-group-health-checks.html">Health
 * checks for your target groups</a>. The health check is considered successful if at least one target within the target
 * group transitions to a healthy
 *
 * state>
 *
 * Services can have HTTP or HTTPS URL endpoints. For HTTPS URLs, publicly-signed certificates are supported. Private
 * Certificate Authorities (CAs) are permitted only if the CA's domain is also publicly
 */
CreateRouteResponse * MigrationHubRefactorSpacesClient::createRoute(const CreateRouteRequest &request)
{
    return qobject_cast<CreateRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * CreateServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Web Services Migration Hub Refactor Spaces service. The account owner of the service is always the
 * environment owner, regardless of which account in the environment creates the service. Services have either a URL
 * endpoint in a virtual private cloud (VPC), or a Lambda function
 *
 * endpoint> <b>
 *
 * If an Amazon Web Services resource is launched in a service VPC, and you want it to be accessible to all of an
 * environment’s services with VPCs and routes, apply the <code>RefactorSpacesSecurityGroup</code> to the resource.
 * Alternatively, to add more cross-account constraints, apply your own security
 */
CreateServiceResponse * MigrationHubRefactorSpacesClient::createService(const CreateServiceRequest &request)
{
    return qobject_cast<CreateServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Web Services Migration Hub Refactor Spaces application. Before you can delete an application, you must
 * first delete any services or routes within the
 */
DeleteApplicationResponse * MigrationHubRefactorSpacesClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Web Services Migration Hub Refactor Spaces environment. Before you can delete an environment, you must
 * first delete any applications and services within the
 */
DeleteEnvironmentResponse * MigrationHubRefactorSpacesClient::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the resource policy set for the environment.
 */
DeleteResourcePolicyResponse * MigrationHubRefactorSpacesClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * DeleteRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Web Services Migration Hub Refactor Spaces
 */
DeleteRouteResponse * MigrationHubRefactorSpacesClient::deleteRoute(const DeleteRouteRequest &request)
{
    return qobject_cast<DeleteRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * DeleteServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Amazon Web Services Migration Hub Refactor Spaces service.
 */
DeleteServiceResponse * MigrationHubRefactorSpacesClient::deleteService(const DeleteServiceRequest &request)
{
    return qobject_cast<DeleteServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * GetApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Amazon Web Services Migration Hub Refactor Spaces
 */
GetApplicationResponse * MigrationHubRefactorSpacesClient::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Amazon Web Services Migration Hub Refactor Spaces
 */
GetEnvironmentResponse * MigrationHubRefactorSpacesClient::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the resource-based permission policy that is set for the given environment.
 */
GetResourcePolicyResponse * MigrationHubRefactorSpacesClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * GetRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Amazon Web Services Migration Hub Refactor Spaces
 */
GetRouteResponse * MigrationHubRefactorSpacesClient::getRoute(const GetRouteRequest &request)
{
    return qobject_cast<GetRouteResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * GetServiceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an Amazon Web Services Migration Hub Refactor Spaces service.
 */
GetServiceResponse * MigrationHubRefactorSpacesClient::getService(const GetServiceRequest &request)
{
    return qobject_cast<GetServiceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the Amazon Web Services Migration Hub Refactor Spaces applications within an environment.
 */
ListApplicationsResponse * MigrationHubRefactorSpacesClient::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * ListEnvironmentVpcsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Amazon Web Services Migration Hub Refactor Spaces service virtual private clouds (VPCs) that are part of the
 * environment.
 */
ListEnvironmentVpcsResponse * MigrationHubRefactorSpacesClient::listEnvironmentVpcs(const ListEnvironmentVpcsRequest &request)
{
    return qobject_cast<ListEnvironmentVpcsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists Amazon Web Services Migration Hub Refactor Spaces environments owned by a caller account or shared with the caller
 * account.
 */
ListEnvironmentsResponse * MigrationHubRefactorSpacesClient::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * ListRoutesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the Amazon Web Services Migration Hub Refactor Spaces routes within an application.
 */
ListRoutesResponse * MigrationHubRefactorSpacesClient::listRoutes(const ListRoutesRequest &request)
{
    return qobject_cast<ListRoutesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * ListServicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the Amazon Web Services Migration Hub Refactor Spaces services within an application.
 */
ListServicesResponse * MigrationHubRefactorSpacesClient::listServices(const ListServicesRequest &request)
{
    return qobject_cast<ListServicesResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags of a resource. The caller account must be the same as the resource’s <code>OwnerAccountId</code>. Listing
 * tags in other accounts is not supported.
 */
ListTagsForResourceResponse * MigrationHubRefactorSpacesClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches a resource-based permission policy to the Amazon Web Services Migration Hub Refactor Spaces environment. The
 * policy must contain the same actions and condition statements as the
 * <code>arn:aws:ram::aws:permission/AWSRAMDefaultPermissionRefactorSpacesEnvironment</code> permission in Resource Access
 * Manager. The policy must not contain new lines or blank lines.
 */
PutResourcePolicyResponse * MigrationHubRefactorSpacesClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the tags of a given resource. Tags are metadata which can be used to manage a resource. To tag a resource, the
 * caller account must be the same as the resource’s <code>OwnerAccountId</code>. Tagging resources in other accounts is
 * not
 *
 * supported> <note>
 *
 * Amazon Web Services Migration Hub Refactor Spaces does not propagate tags to orchestrated resources, such as an
 * environment’s transit
 */
TagResourceResponse * MigrationHubRefactorSpacesClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds to or modifies the tags of the given resource. Tags are metadata which can be used to manage a resource. To untag a
 * resource, the caller account must be the same as the resource’s <code>OwnerAccountId</code>. Untagging resources across
 * accounts is not supported.
 */
UntagResourceResponse * MigrationHubRefactorSpacesClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MigrationHubRefactorSpacesClient service, and returns a pointer to an
 * UpdateRouteResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon Web Services Migration Hub Refactor Spaces route.
 */
UpdateRouteResponse * MigrationHubRefactorSpacesClient::updateRoute(const UpdateRouteRequest &request)
{
    return qobject_cast<UpdateRouteResponse *>(send(request));
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientPrivate
 * \brief The MigrationHubRefactorSpacesClientPrivate class provides private implementation for MigrationHubRefactorSpacesClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a MigrationHubRefactorSpacesClientPrivate object with public implementation \a q.
 */
MigrationHubRefactorSpacesClientPrivate::MigrationHubRefactorSpacesClientPrivate(MigrationHubRefactorSpacesClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

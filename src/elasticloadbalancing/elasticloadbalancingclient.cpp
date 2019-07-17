/*
    Copyright 2013-2019 Paul Colby

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

#include "elasticloadbalancingclient.h"
#include "elasticloadbalancingclient_p.h"

#include "core/awssignaturev4.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "applysecuritygroupstoloadbalancerrequest.h"
#include "applysecuritygroupstoloadbalancerresponse.h"
#include "attachloadbalancertosubnetsrequest.h"
#include "attachloadbalancertosubnetsresponse.h"
#include "configurehealthcheckrequest.h"
#include "configurehealthcheckresponse.h"
#include "createappcookiestickinesspolicyrequest.h"
#include "createappcookiestickinesspolicyresponse.h"
#include "createlbcookiestickinesspolicyrequest.h"
#include "createlbcookiestickinesspolicyresponse.h"
#include "createloadbalancerrequest.h"
#include "createloadbalancerresponse.h"
#include "createloadbalancerlistenersrequest.h"
#include "createloadbalancerlistenersresponse.h"
#include "createloadbalancerpolicyrequest.h"
#include "createloadbalancerpolicyresponse.h"
#include "deleteloadbalancerrequest.h"
#include "deleteloadbalancerresponse.h"
#include "deleteloadbalancerlistenersrequest.h"
#include "deleteloadbalancerlistenersresponse.h"
#include "deleteloadbalancerpolicyrequest.h"
#include "deleteloadbalancerpolicyresponse.h"
#include "deregisterinstancesfromloadbalancerrequest.h"
#include "deregisterinstancesfromloadbalancerresponse.h"
#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsresponse.h"
#include "describeinstancehealthrequest.h"
#include "describeinstancehealthresponse.h"
#include "describeloadbalancerattributesrequest.h"
#include "describeloadbalancerattributesresponse.h"
#include "describeloadbalancerpoliciesrequest.h"
#include "describeloadbalancerpoliciesresponse.h"
#include "describeloadbalancerpolicytypesrequest.h"
#include "describeloadbalancerpolicytypesresponse.h"
#include "describeloadbalancersrequest.h"
#include "describeloadbalancersresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "detachloadbalancerfromsubnetsrequest.h"
#include "detachloadbalancerfromsubnetsresponse.h"
#include "disableavailabilityzonesforloadbalancerrequest.h"
#include "disableavailabilityzonesforloadbalancerresponse.h"
#include "enableavailabilityzonesforloadbalancerrequest.h"
#include "enableavailabilityzonesforloadbalancerresponse.h"
#include "modifyloadbalancerattributesrequest.h"
#include "modifyloadbalancerattributesresponse.h"
#include "registerinstanceswithloadbalancerrequest.h"
#include "registerinstanceswithloadbalancerresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "setloadbalancerlistenersslcertificaterequest.h"
#include "setloadbalancerlistenersslcertificateresponse.h"
#include "setloadbalancerpoliciesforbackendserverrequest.h"
#include "setloadbalancerpoliciesforbackendserverresponse.h"
#include "setloadbalancerpoliciesoflistenerrequest.h"
#include "setloadbalancerpoliciesoflistenerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElasticLoadBalancing
 * \brief Contains classess for accessing Elastic Load Balancing.
 *
 * \inmodule QtAwsElasticLoadBalancing
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElasticLoadBalancing {

/*!
 * \class QtAws::ElasticLoadBalancing::ElasticLoadBalancingClient
 * \brief The ElasticLoadBalancingClient class provides access to the Elastic Load Balancing service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticLoadBalancing
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 *  of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 *  traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 *  listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 *  protocol and port number for connections from the load balancer to the
 * 
 *  instances>
 * 
 *  Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 *  Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 *  href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 *  Load Balancers and Network Load
 * 
 *  Balancers>
 * 
 *  To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 *  instances with the load balancer using
 * 
 *  <a>RegisterInstancesWithLoadBalancer</a>>
 * 
 *  All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 *  repeat an operation, it succeeds with a 200 OK response
 */

/*!
 * \brief Constructs a ElasticLoadBalancingClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticLoadBalancingClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingClient);
    d->apiVersion = QStringLiteral("2012-06-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("elasticloadbalancing");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Elastic Load Balancing");
    d->serviceName = QStringLiteral("elasticloadbalancing");
}

/*!
 * \overload ElasticLoadBalancingClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticLoadBalancingClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingClient);
    d->apiVersion = QStringLiteral("2012-06-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("elasticloadbalancing");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Elastic Load Balancing");
    d->serviceName = QStringLiteral("elasticloadbalancing");
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified load balancer. Each load balancer can have a maximum of 10
 *
 * tags>
 *
 * Each tag consists of a key and an optional value. If a tag with the same key is already associated with the load
 * balancer, <code>AddTags</code> updates its
 *
 * value>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag Your Classic Load
 * Balancer</a> in the <i>Classic Load Balancers
 */
AddTagsResponse * ElasticLoadBalancingClient::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * ApplySecurityGroupsToLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates one or more security groups with your load balancer in a virtual private cloud (VPC). The specified security
 * groups override the previously associated security
 *
 * groups>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-security-groups.html#elb-vpc-security-groups">Security
 * Groups for Load Balancers in a VPC</a> in the <i>Classic Load Balancers
 */
ApplySecurityGroupsToLoadBalancerResponse * ElasticLoadBalancingClient::applySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest &request)
{
    return qobject_cast<ApplySecurityGroupsToLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * AttachLoadBalancerToSubnetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more subnets to the set of configured subnets for the specified load
 *
 * balancer>
 *
 * The load balancer evenly distributes requests across all registered subnets. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-manage-subnets.html">Add or Remove Subnets for
 * Your Load Balancer in a VPC</a> in the <i>Classic Load Balancers
 */
AttachLoadBalancerToSubnetsResponse * ElasticLoadBalancingClient::attachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest &request)
{
    return qobject_cast<AttachLoadBalancerToSubnetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * ConfigureHealthCheckResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies the health check settings to use when evaluating the health state of your EC2
 *
 * instances>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-healthchecks.html">Configure Health Checks for
 * Your Load Balancer</a> in the <i>Classic Load Balancers
 */
ConfigureHealthCheckResponse * ElasticLoadBalancingClient::configureHealthCheck(const ConfigureHealthCheckRequest &request)
{
    return qobject_cast<ConfigureHealthCheckResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * CreateAppCookieStickinessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a stickiness policy with sticky session lifetimes that follow that of an application-generated cookie. This
 * policy can be associated only with HTTP/HTTPS
 *
 * listeners>
 *
 * This policy is similar to the policy created by <a>CreateLBCookieStickinessPolicy</a>, except that the lifetime of the
 * special Elastic Load Balancing cookie, <code>AWSELB</code>, follows the lifetime of the application-generated cookie
 * specified in the policy configuration. The load balancer only inserts a new stickiness cookie when the application
 * response includes a new application
 *
 * cookie>
 *
 * If the application cookie is explicitly removed or expires, the session stops being sticky until a new application
 * cookie is
 *
 * issued>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
 * Session Stickiness</a> in the <i>Classic Load Balancers
 */
CreateAppCookieStickinessPolicyResponse * ElasticLoadBalancingClient::createAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest &request)
{
    return qobject_cast<CreateAppCookieStickinessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * CreateLBCookieStickinessPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a stickiness policy with sticky session lifetimes controlled by the lifetime of the browser (user-agent) or a
 * specified expiration period. This policy can be associated only with HTTP/HTTPS
 *
 * listeners>
 *
 * When a load balancer implements this policy, the load balancer uses a special cookie to track the instance for each
 * request. When the load balancer receives a request, it first checks to see if this cookie is present in the request. If
 * so, the load balancer sends the request to the application server specified in the cookie. If not, the load balancer
 * sends the request to a server that is chosen based on the existing load-balancing
 *
 * algorithm>
 *
 * A cookie is inserted into the response for binding subsequent requests from the same user to that server. The validity
 * of the cookie is based on the cookie expiration time, which is specified in the policy
 *
 * configuration>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
 * Session Stickiness</a> in the <i>Classic Load Balancers
 */
CreateLBCookieStickinessPolicyResponse * ElasticLoadBalancingClient::createLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest &request)
{
    return qobject_cast<CreateLBCookieStickinessPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * CreateLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Classic Load
 *
 * Balancer>
 *
 * You can add listeners, security groups, subnets, and tags when you create your load balancer, or you can add them later
 * using <a>CreateLoadBalancerListeners</a>, <a>ApplySecurityGroupsToLoadBalancer</a>, <a>AttachLoadBalancerToSubnets</a>,
 * and
 *
 * <a>AddTags</a>>
 *
 * To describe your current load balancers, see <a>DescribeLoadBalancers</a>. When you are finished with a load balancer,
 * you can delete it using
 *
 * <a>DeleteLoadBalancer</a>>
 *
 * You can create up to 20 load balancers per region per account. You can request an increase for the number of load
 * balancers for your account. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits for Your Classic Load
 * Balancer</a> in the <i>Classic Load Balancers
 */
CreateLoadBalancerResponse * ElasticLoadBalancingClient::createLoadBalancer(const CreateLoadBalancerRequest &request)
{
    return qobject_cast<CreateLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * CreateLoadBalancerListenersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates one or more listeners for the specified load balancer. If a listener with the specified port does not already
 * exist, it is created; otherwise, the properties of the new listener must match the properties of the existing
 *
 * listener>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners for Your
 * Classic Load Balancer</a> in the <i>Classic Load Balancers
 */
CreateLoadBalancerListenersResponse * ElasticLoadBalancingClient::createLoadBalancerListeners(const CreateLoadBalancerListenersRequest &request)
{
    return qobject_cast<CreateLoadBalancerListenersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * CreateLoadBalancerPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a policy with the specified attributes for the specified load
 *
 * balancer>
 *
 * Policies are settings that are saved for your load balancer and that can be applied to the listener or the application
 * server, depending on the policy
 */
CreateLoadBalancerPolicyResponse * ElasticLoadBalancingClient::createLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest &request)
{
    return qobject_cast<CreateLoadBalancerPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DeleteLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified load
 *
 * balancer>
 *
 * If you are attempting to recreate a load balancer, you must reconfigure all settings. The DNS name associated with a
 * deleted load balancer are no longer usable. The name and associated DNS record of the deleted load balancer no longer
 * exist and traffic sent to any of its IP addresses is no longer delivered to your
 *
 * instances>
 *
 * If the load balancer does not exist or has already been deleted, the call to <code>DeleteLoadBalancer</code> still
 */
DeleteLoadBalancerResponse * ElasticLoadBalancingClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    return qobject_cast<DeleteLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DeleteLoadBalancerListenersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified listeners from the specified load
 */
DeleteLoadBalancerListenersResponse * ElasticLoadBalancingClient::deleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request)
{
    return qobject_cast<DeleteLoadBalancerListenersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DeleteLoadBalancerPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified policy from the specified load balancer. This policy must not be enabled for any
 */
DeleteLoadBalancerPolicyResponse * ElasticLoadBalancingClient::deleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest &request)
{
    return qobject_cast<DeleteLoadBalancerPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DeregisterInstancesFromLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the specified instances from the specified load balancer. After the instance is deregistered, it no longer
 * receives traffic from the load
 *
 * balancer>
 *
 * You can use <a>DescribeLoadBalancers</a> to verify that the instance is deregistered from the load
 *
 * balancer>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register or
 * De-Register EC2 Instances</a> in the <i>Classic Load Balancers
 */
DeregisterInstancesFromLoadBalancerResponse * ElasticLoadBalancingClient::deregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest &request)
{
    return qobject_cast<DeregisterInstancesFromLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Elastic Load Balancing resource limits for your AWS
 *
 * account>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits for Your Classic Load
 * Balancer</a> in the <i>Classic Load Balancers
 */
DescribeAccountLimitsResponse * ElasticLoadBalancingClient::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    return qobject_cast<DescribeAccountLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeInstanceHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the state of the specified instances with respect to the specified load balancer. If no instances are
 * specified, the call describes the state of all instances that are currently registered with the load balancer. If
 * instances are specified, their state is returned even if they are no longer registered with the load balancer. The state
 * of terminated instances is not
 */
DescribeInstanceHealthResponse * ElasticLoadBalancingClient::describeInstanceHealth(const DescribeInstanceHealthRequest &request)
{
    return qobject_cast<DescribeInstanceHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeLoadBalancerAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the attributes for the specified load
 */
DescribeLoadBalancerAttributesResponse * ElasticLoadBalancingClient::describeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &request)
{
    return qobject_cast<DescribeLoadBalancerAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeLoadBalancerPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified
 *
 * policies>
 *
 * If you specify a load balancer name, the action returns the descriptions of all policies created for the load balancer.
 * If you specify a policy name associated with your load balancer, the action returns the description of that policy. If
 * you don't specify a load balancer name, the action returns descriptions of the specified sample policies, or
 * descriptions of all sample policies. The names of the sample policies have the <code>ELBSample-</code>
 */
DescribeLoadBalancerPoliciesResponse * ElasticLoadBalancingClient::describeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest &request)
{
    return qobject_cast<DescribeLoadBalancerPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeLoadBalancerPolicyTypesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified load balancer policy types or all load balancer policy
 *
 * types>
 *
 * The description of each type indicates how it can be used. For example, some policies can be used only with layer 7
 * listeners, some policies can be used only with layer 4 listeners, and some policies can be used only with your EC2
 *
 * instances>
 *
 * You can use <a>CreateLoadBalancerPolicy</a> to create a policy configuration for any of these policy types. Then,
 * depending on the policy type, use either <a>SetLoadBalancerPoliciesOfListener</a> or
 * <a>SetLoadBalancerPoliciesForBackendServer</a> to set the
 */
DescribeLoadBalancerPolicyTypesResponse * ElasticLoadBalancingClient::describeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest &request)
{
    return qobject_cast<DescribeLoadBalancerPolicyTypesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified the load balancers. If no load balancers are specified, the call describes all of your load
 */
DescribeLoadBalancersResponse * ElasticLoadBalancingClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    return qobject_cast<DescribeLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the tags associated with the specified load
 */
DescribeTagsResponse * ElasticLoadBalancingClient::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DetachLoadBalancerFromSubnetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified subnets from the set of configured subnets for the load
 *
 * balancer>
 *
 * After a subnet is removed, all EC2 instances registered with the load balancer in the removed subnet go into the
 * <code>OutOfService</code> state. Then, the load balancer balances the traffic among the remaining routable
 */
DetachLoadBalancerFromSubnetsResponse * ElasticLoadBalancingClient::detachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest &request)
{
    return qobject_cast<DetachLoadBalancerFromSubnetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * DisableAvailabilityZonesForLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified Availability Zones from the set of Availability Zones for the specified load balancer in
 * EC2-Classic or a default
 *
 * VPC>
 *
 * For load balancers in a non-default VPC, use
 *
 * <a>DetachLoadBalancerFromSubnets</a>>
 *
 * There must be at least one Availability Zone registered with a load balancer at all times. After an Availability Zone is
 * removed, all instances registered with the load balancer that are in the removed Availability Zone go into the
 * <code>OutOfService</code> state. Then, the load balancer attempts to equally balance the traffic among its remaining
 * Availability
 *
 * Zones>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add or Remove Availability
 * Zones</a> in the <i>Classic Load Balancers
 */
DisableAvailabilityZonesForLoadBalancerResponse * ElasticLoadBalancingClient::disableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest &request)
{
    return qobject_cast<DisableAvailabilityZonesForLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * EnableAvailabilityZonesForLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified Availability Zones to the set of Availability Zones for the specified load balancer in EC2-Classic or
 * a default
 *
 * VPC>
 *
 * For load balancers in a non-default VPC, use
 *
 * <a>AttachLoadBalancerToSubnets</a>>
 *
 * The load balancer evenly distributes requests across all its registered Availability Zones that contain instances. For
 * more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add or Remove Availability
 * Zones</a> in the <i>Classic Load Balancers
 */
EnableAvailabilityZonesForLoadBalancerResponse * ElasticLoadBalancingClient::enableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest &request)
{
    return qobject_cast<EnableAvailabilityZonesForLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * ModifyLoadBalancerAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the attributes of the specified load
 *
 * balancer>
 *
 * You can modify the load balancer attributes, such as <code>AccessLogs</code>, <code>ConnectionDraining</code>, and
 * <code>CrossZoneLoadBalancing</code> by either enabling or disabling them. Or, you can modify the load balancer attribute
 * <code>ConnectionSettings</code> by specifying an idle connection timeout value for your load
 *
 * balancer>
 *
 * For more information, see the following in the <i>Classic Load Balancers
 *
 * Guide</i>> <ul> <li>
 *
 * <a href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-crosszone-lb.html">Cross-Zone
 * Load Balancing</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-conn-drain.html">Connection Draining</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/access-log-collection.html">Access Logs</a>
 *
 * </p </li> <li>
 *
 * <a href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/config-idle-timeout.html">Idle Connection
 * Timeout</a>
 */
ModifyLoadBalancerAttributesResponse * ElasticLoadBalancingClient::modifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    return qobject_cast<ModifyLoadBalancerAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * RegisterInstancesWithLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified instances to the specified load
 *
 * balancer>
 *
 * The instance must be a running instance in the same network as the load balancer (EC2-Classic or the same VPC). If you
 * have EC2-Classic instances and a load balancer in a VPC with ClassicLink enabled, you can link the EC2-Classic instances
 * to that VPC and then register the linked EC2-Classic instances with the load balancer in the
 *
 * VPC>
 *
 * Note that <code>RegisterInstanceWithLoadBalancer</code> completes when the request has been registered. Instance
 * registration takes a little time to complete. To check the state of the registered instances, use
 * <a>DescribeLoadBalancers</a> or
 *
 * <a>DescribeInstanceHealth</a>>
 *
 * After the instance is registered, it starts receiving traffic and requests from the load balancer. Any instance that is
 * not in one of the Availability Zones registered for the load balancer is moved to the <code>OutOfService</code> state.
 * If an Availability Zone is added to the load balancer later, any instances registered with the load balancer move to the
 * <code>InService</code>
 *
 * state>
 *
 * To deregister instances from a load balancer, use
 *
 * <a>DeregisterInstancesFromLoadBalancer</a>>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-deregister-register-instances.html">Register or
 * De-Register EC2 Instances</a> in the <i>Classic Load Balancers
 */
RegisterInstancesWithLoadBalancerResponse * ElasticLoadBalancingClient::registerInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest &request)
{
    return qobject_cast<RegisterInstancesWithLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified load
 */
RemoveTagsResponse * ElasticLoadBalancingClient::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * SetLoadBalancerListenerSSLCertificateResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the certificate that terminates the specified listener's SSL connections. The specified certificate replaces any
 * prior certificate that was used on the same load balancer and
 *
 * port>
 *
 * For more information about updating your SSL certificate, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-update-ssl-cert.html">Replace the SSL
 * Certificate for Your Load Balancer</a> in the <i>Classic Load Balancers
 */
SetLoadBalancerListenerSSLCertificateResponse * ElasticLoadBalancingClient::setLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest &request)
{
    return qobject_cast<SetLoadBalancerListenerSSLCertificateResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * SetLoadBalancerPoliciesForBackendServerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the set of policies associated with the specified port on which the EC2 instance is listening with a new set of
 * policies. At this time, only the back-end server authentication policy type can be applied to the instance ports; this
 * policy type is composed of multiple public key
 *
 * policies>
 *
 * Each time you use <code>SetLoadBalancerPoliciesForBackendServer</code> to enable the policies, use the
 * <code>PolicyNames</code> parameter to list the policies that you want to
 *
 * enable>
 *
 * You can use <a>DescribeLoadBalancers</a> or <a>DescribeLoadBalancerPolicies</a> to verify that the policy is associated
 * with the EC2
 *
 * instance>
 *
 * For more information about enabling back-end instance authentication, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-create-https-ssl-load-balancer.html#configure_backendauth_clt">Configure
 * Back-end Instance Authentication</a> in the <i>Classic Load Balancers Guide</i>. For more information about Proxy
 * Protocol, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-proxy-protocol.html">Configure Proxy
 * Protocol Support</a> in the <i>Classic Load Balancers
 */
SetLoadBalancerPoliciesForBackendServerResponse * ElasticLoadBalancingClient::setLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest &request)
{
    return qobject_cast<SetLoadBalancerPoliciesForBackendServerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingClient service, and returns a pointer to an
 * SetLoadBalancerPoliciesOfListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Replaces the current set of policies for the specified load balancer port with the specified set of
 *
 * policies>
 *
 * To enable back-end server authentication, use
 *
 * <a>SetLoadBalancerPoliciesForBackendServer</a>>
 *
 * For more information about setting policies, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/ssl-config-update.html">Update the SSL Negotiation
 * Configuration</a>, <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-duration">Duration-Based
 * Session Stickiness</a>, and <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-sticky-sessions.html#enable-sticky-sessions-application">Application-Controlled
 * Session Stickiness</a> in the <i>Classic Load Balancers
 */
SetLoadBalancerPoliciesOfListenerResponse * ElasticLoadBalancingClient::setLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest &request)
{
    return qobject_cast<SetLoadBalancerPoliciesOfListenerResponse *>(send(request));
}

/*!
 * \class QtAws::ElasticLoadBalancing::ElasticLoadBalancingClientPrivate
 * \brief The ElasticLoadBalancingClientPrivate class provides private implementation for ElasticLoadBalancingClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticLoadBalancing
 */

/*!
 * Constructs a ElasticLoadBalancingClientPrivate object with public implementation \a q.
 */
ElasticLoadBalancingClientPrivate::ElasticLoadBalancingClientPrivate(ElasticLoadBalancingClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ElasticLoadBalancing
} // namespace QtAws

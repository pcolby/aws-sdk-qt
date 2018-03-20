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

#include "elasticloadbalancingclient.h"
#include "elasticloadbalancingclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ElasticLoadBalancingClient
 *
 * @brief  Client for Elastic Load Balancing
 *
 * <fullname>Elastic Load Balancing</fullname>
 *
 * A load balancer can distribute incoming traffic across your EC2 instances. This enables you to increase the availability
 * of your application. The load balancer also monitors the health of its registered instances and ensures that it routes
 * traffic only to healthy instances. You configure your load balancer to accept incoming traffic by specifying one or more
 * listeners, which are configured with a protocol and port number for connections from clients to the load balancer and a
 * protocol and port number for connections from the load balancer to the
 *
 * instances>
 *
 * Elastic Load Balancing supports three types of load balancers: Application Load Balancers, Network Load Balancers, and
 * Classic Load Balancers. You can select a load balancer based on your application needs. For more information, see the <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 *
 * Guide</a>>
 *
 * This reference covers the 2012-06-01 API, which supports Classic Load Balancers. The 2015-12-01 API supports Application
 * Load Balancers and Network Load
 *
 * Balancers>
 *
 * To get started, create a load balancer with one or more listeners using <a>CreateLoadBalancer</a>. Register your
 * instances with the load balancer using
 *
 * <a>RegisterInstancesWithLoadBalancer</a>>
 *
 * All Elastic Load Balancing operations are <i>idempotent</i>, which means that they complete at most one time. If you
 * repeat an operation, it succeeds with a 200 OK response
 */

/**
 * @brief  Constructs a new ElasticLoadBalancingClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticLoadBalancingClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new ElasticLoadBalancingClient object.
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
ElasticLoadBalancingClient::ElasticLoadBalancingClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ElasticLoadBalancingClientPrivate(this), parent)
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

/**
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
 * Balancer</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AddTagsResponse * ElasticLoadBalancingClient::addTags(const AddTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Associates one or more security groups with your load balancer in a virtual private cloud (VPC). The specified security
 * groups override the previously associated security
 *
 * groups>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-security-groups.html#elb-vpc-security-groups">Security
 * Groups for Load Balancers in a VPC</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ApplySecurityGroupsToLoadBalancerResponse * ElasticLoadBalancingClient::applySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Adds one or more subnets to the set of configured subnets for the specified load
 *
 * balancer>
 *
 * The load balancer evenly distributes requests across all registered subnets. For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-manage-subnets.html">Add or Remove Subnets for
 * Your Load Balancer in a VPC</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AttachLoadBalancerToSubnetsResponse * ElasticLoadBalancingClient::attachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Specifies the health check settings to use when evaluating the health state of your EC2
 *
 * instances>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-healthchecks.html">Configure Health Checks for
 * Your Load Balancer</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ConfigureHealthCheckResponse * ElasticLoadBalancingClient::configureHealthCheck(const ConfigureHealthCheckRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * Session Stickiness</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateAppCookieStickinessPolicyResponse * ElasticLoadBalancingClient::createAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * Session Stickiness</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLBCookieStickinessPolicyResponse * ElasticLoadBalancingClient::createLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * Balancer</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoadBalancerResponse * ElasticLoadBalancingClient::createLoadBalancer(const CreateLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates one or more listeners for the specified load balancer. If a listener with the specified port does not already
 * exist, it is created; otherwise, the properties of the new listener must match the properties of the existing
 *
 * listener>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners for Your
 * Classic Load Balancer</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoadBalancerListenersResponse * ElasticLoadBalancingClient::createLoadBalancerListeners(const CreateLoadBalancerListenersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Creates a policy with the specified attributes for the specified load
 *
 * balancer>
 *
 * Policies are settings that are saved for your load balancer and that can be applied to the listener or the application
 * server, depending on the policy
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateLoadBalancerPolicyResponse * ElasticLoadBalancingClient::createLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoadBalancerResponse * ElasticLoadBalancingClient::deleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified listeners from the specified load
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoadBalancerListenersResponse * ElasticLoadBalancingClient::deleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Deletes the specified policy from the specified load balancer. This policy must not be enabled for any
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteLoadBalancerPolicyResponse * ElasticLoadBalancingClient::deleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * De-Register EC2 Instances</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeregisterInstancesFromLoadBalancerResponse * ElasticLoadBalancingClient::deregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the current Elastic Load Balancing resource limits for your AWS
 *
 * account>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-limits.html">Limits for Your Classic Load
 * Balancer</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeAccountLimitsResponse * ElasticLoadBalancingClient::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the state of the specified instances with respect to the specified load balancer. If no instances are
 * specified, the call describes the state of all instances that are currently registered with the load balancer. If
 * instances are specified, their state is returned even if they are no longer registered with the load balancer. The state
 * of terminated instances is not
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeInstanceHealthResponse * ElasticLoadBalancingClient::describeInstanceHealth(const DescribeInstanceHealthRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the attributes for the specified load
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoadBalancerAttributesResponse * ElasticLoadBalancingClient::describeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the specified
 *
 * policies>
 *
 * If you specify a load balancer name, the action returns the descriptions of all policies created for the load balancer.
 * If you specify a policy name associated with your load balancer, the action returns the description of that policy. If
 * you don't specify a load balancer name, the action returns descriptions of the specified sample policies, or
 * descriptions of all sample policies. The names of the sample policies have the <code>ELBSample-</code>
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoadBalancerPoliciesResponse * ElasticLoadBalancingClient::describeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoadBalancerPolicyTypesResponse * ElasticLoadBalancingClient::describeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the specified the load balancers. If no load balancers are specified, the call describes all of your load
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeLoadBalancersResponse * ElasticLoadBalancingClient::describeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Describes the tags associated with the specified load
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeTagsResponse * ElasticLoadBalancingClient::describeTags(const DescribeTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes the specified subnets from the set of configured subnets for the load
 *
 * balancer>
 *
 * After a subnet is removed, all EC2 instances registered with the load balancer in the removed subnet go into the
 * <code>OutOfService</code> state. Then, the load balancer balances the traffic among the remaining routable
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DetachLoadBalancerFromSubnetsResponse * ElasticLoadBalancingClient::detachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes the specified Availability Zones from the set of Availability Zones for the specified load
 *
 * balancer>
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
 * Zones</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisableAvailabilityZonesForLoadBalancerResponse * ElasticLoadBalancingClient::disableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Adds the specified Availability Zones to the set of Availability Zones for the specified load
 *
 * balancer>
 *
 * The load balancer evenly distributes requests across all its registered Availability Zones that contain
 *
 * instances>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-disable-az.html">Add or Remove Availability
 * Zones</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
EnableAvailabilityZonesForLoadBalancerResponse * ElasticLoadBalancingClient::enableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * For more information, see the following in the <i>Classic Load Balancer
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
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ModifyLoadBalancerAttributesResponse * ElasticLoadBalancingClient::modifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * De-Register EC2 Instances</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterInstancesWithLoadBalancerResponse * ElasticLoadBalancingClient::registerInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Removes one or more tags from the specified load
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RemoveTagsResponse * ElasticLoadBalancingClient::removeTags(const RemoveTagsRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * Sets the certificate that terminates the specified listener's SSL connections. The specified certificate replaces any
 * prior certificate that was used on the same load balancer and
 *
 * port>
 *
 * For more information about updating your SSL certificate, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-update-ssl-cert.html">Replace the SSL
 * Certificate for Your Load Balancer</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetLoadBalancerListenerSSLCertificateResponse * ElasticLoadBalancingClient::setLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * Back-end Instance Authentication</a> in the <i>Classic Load Balancer Guide</i>. For more information about Proxy
 * Protocol, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/enable-proxy-protocol.html">Configure Proxy
 * Protocol Support</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetLoadBalancerPoliciesForBackendServerResponse * ElasticLoadBalancingClient::setLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
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
 * Session Stickiness</a> in the <i>Classic Load Balancer
 *
 * @param  request Request to send to Elastic Load Balancing.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetLoadBalancerPoliciesOfListenerResponse * ElasticLoadBalancingClient::setLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest &request)
{
    return nullptr; /// @todo Return the right response object.
}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingClientPrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingClientPrivate object.
 *
 * @param  q  Pointer to this object's public ElasticLoadBalancingClient instance.
 */
ElasticLoadBalancingClientPrivate::ElasticLoadBalancingClientPrivate(ElasticLoadBalancingClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace ElasticLoadBalancing
} // namespace AWS

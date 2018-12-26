/*
    Copyright 2013-2018 Paul Colby

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

#include "elasticloadbalancingv2client.h"
#include "elasticloadbalancingv2client_p.h"

#include "core/awssignaturev4.h"
#include "addlistenercertificatesrequest.h"
#include "addlistenercertificatesresponse.h"
#include "addtagsrequest.h"
#include "addtagsresponse.h"
#include "createlistenerrequest.h"
#include "createlistenerresponse.h"
#include "createloadbalancerrequest.h"
#include "createloadbalancerresponse.h"
#include "createrulerequest.h"
#include "createruleresponse.h"
#include "createtargetgrouprequest.h"
#include "createtargetgroupresponse.h"
#include "deletelistenerrequest.h"
#include "deletelistenerresponse.h"
#include "deleteloadbalancerrequest.h"
#include "deleteloadbalancerresponse.h"
#include "deleterulerequest.h"
#include "deleteruleresponse.h"
#include "deletetargetgrouprequest.h"
#include "deletetargetgroupresponse.h"
#include "deregistertargetsrequest.h"
#include "deregistertargetsresponse.h"
#include "describeaccountlimitsrequest.h"
#include "describeaccountlimitsresponse.h"
#include "describelistenercertificatesrequest.h"
#include "describelistenercertificatesresponse.h"
#include "describelistenersrequest.h"
#include "describelistenersresponse.h"
#include "describeloadbalancerattributesrequest.h"
#include "describeloadbalancerattributesresponse.h"
#include "describeloadbalancersrequest.h"
#include "describeloadbalancersresponse.h"
#include "describerulesrequest.h"
#include "describerulesresponse.h"
#include "describesslpoliciesrequest.h"
#include "describesslpoliciesresponse.h"
#include "describetagsrequest.h"
#include "describetagsresponse.h"
#include "describetargetgroupattributesrequest.h"
#include "describetargetgroupattributesresponse.h"
#include "describetargetgroupsrequest.h"
#include "describetargetgroupsresponse.h"
#include "describetargethealthrequest.h"
#include "describetargethealthresponse.h"
#include "modifylistenerrequest.h"
#include "modifylistenerresponse.h"
#include "modifyloadbalancerattributesrequest.h"
#include "modifyloadbalancerattributesresponse.h"
#include "modifyrulerequest.h"
#include "modifyruleresponse.h"
#include "modifytargetgrouprequest.h"
#include "modifytargetgroupresponse.h"
#include "modifytargetgroupattributesrequest.h"
#include "modifytargetgroupattributesresponse.h"
#include "registertargetsrequest.h"
#include "registertargetsresponse.h"
#include "removelistenercertificatesrequest.h"
#include "removelistenercertificatesresponse.h"
#include "removetagsrequest.h"
#include "removetagsresponse.h"
#include "setipaddresstyperequest.h"
#include "setipaddresstyperesponse.h"
#include "setruleprioritiesrequest.h"
#include "setruleprioritiesresponse.h"
#include "setsecuritygroupsrequest.h"
#include "setsecuritygroupsresponse.h"
#include "setsubnetsrequest.h"
#include "setsubnetsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ElasticLoadBalancingv2
 * \brief Contains classess for accessing Elastic Load Balancing (Elastic Load Balancing v2).
 *
 * \inmodule QtAwsElasticLoadBalancingv2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2Client
 * \brief The ElasticLoadBalancingv2Client class provides access to the Elastic Load Balancing (Elastic Load Balancing v2) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticLoadBalancingv2
 *
 *  <fullname>Elastic Load Balancing</fullname>
 * 
 *  A load balancer distributes incoming traffic across targets, such as your EC2 instances. This enables you to increase
 *  the availability of your application. The load balancer also monitors the health of its registered targets and ensures
 *  that it routes traffic only to healthy targets. You configure your load balancer to accept incoming traffic by
 *  specifying one or more listeners, which are configured with a protocol and port number for connections from clients to
 *  the load balancer. You configure a target group with a protocol and port number for connections from the load balancer
 *  to the targets, and with health check settings to be used when checking the health status of the
 * 
 *  targets>
 * 
 *  Elastic Load Balancing supports the following types of load balancers: Application Load Balancers, Network Load
 *  Balancers, and Classic Load
 * 
 *  Balancers>
 * 
 *  An Application Load Balancer makes routing and load balancing decisions at the application layer (HTTP/HTTPS). A Network
 *  Load Balancer makes routing and load balancing decisions at the transport layer (TCP). Both Application Load Balancers
 *  and Network Load Balancers can route requests to one or more ports on each EC2 instance or container instance in your
 *  virtual private cloud
 * 
 *  (VPC)>
 * 
 *  A Classic Load Balancer makes routing and load balancing decisions either at the transport layer (TCP/SSL) or the
 *  application layer (HTTP/HTTPS), and supports either EC2-Classic or a VPC. For more information, see the <a
 *  href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/">Elastic Load Balancing User
 * 
 *  Guide</a>>
 * 
 *  This reference covers the 2015-12-01 API, which supports Application Load Balancers and Network Load Balancers. The
 *  2012-06-01 API supports Classic Load
 * 
 *  Balancers>
 * 
 *  To get started, complete the following
 * 
 *  tasks> <ol> <li>
 * 
 *  Create a load balancer using
 * 
 *  <a>CreateLoadBalancer</a>> </li> <li>
 * 
 *  Create a target group using
 * 
 *  <a>CreateTargetGroup</a>> </li> <li>
 * 
 *  Register targets for the target group using
 * 
 *  <a>RegisterTargets</a>> </li> <li>
 * 
 *  Create one or more listeners for your load balancer using
 * 
 *  <a>CreateListener</a>> </li> </ol>
 * 
 *  To delete a load balancer and its related resources, complete the following
 * 
 *  tasks> <ol> <li>
 * 
 *  Delete the load balancer using
 * 
 *  <a>DeleteLoadBalancer</a>> </li> <li>
 * 
 *  Delete the target group using
 * 
 *  <a>DeleteTargetGroup</a>> </li> </ol>
 * 
 *  All Elastic Load Balancing operations are idempotent, which means that they complete at most one time. If you repeat an
 *  operation, it
 */

/*!
 * \brief Constructs a ElasticLoadBalancingv2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticLoadBalancingv2ClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingv2Client);
    d->apiVersion = QStringLiteral("2015-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("elasticloadbalancing");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Elastic Load Balancing");
    d->serviceName = QStringLiteral("elasticloadbalancing");
}

/*!
 * \overload ElasticLoadBalancingv2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ElasticLoadBalancingv2ClientPrivate(this), parent)
{
    Q_D(ElasticLoadBalancingv2Client);
    d->apiVersion = QStringLiteral("2015-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("elasticloadbalancing");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Elastic Load Balancing");
    d->serviceName = QStringLiteral("elasticloadbalancing");
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * AddListenerCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified certificate to the specified secure
 *
 * listener>
 *
 * If the certificate was already added, the call is successful but the certificate is not added
 *
 * again>
 *
 * To list the certificates for your listener, use <a>DescribeListenerCertificates</a>. To remove certificates from your
 * listener, use <a>RemoveListenerCertificates</a>. To specify the default SSL server certificate, use
 */
AddListenerCertificatesResponse * ElasticLoadBalancingv2Client::addListenerCertificates(const AddListenerCertificatesRequest &request)
{
    return qobject_cast<AddListenerCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * AddTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified Elastic Load Balancing resource. You can tag your Application Load Balancers,
 * Network Load Balancers, and your target
 *
 * groups>
 *
 * Each tag consists of a key and an optional value. If a resource already has a tag with the same key,
 * <code>AddTags</code> updates its
 *
 * value>
 *
 * To list the current tags for your resources, use <a>DescribeTags</a>. To remove tags from your resources, use
 */
AddTagsResponse * ElasticLoadBalancingv2Client::addTags(const AddTagsRequest &request)
{
    return qobject_cast<AddTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * CreateListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a listener for the specified Application Load Balancer or Network Load
 *
 * Balancer>
 *
 * To update a listener, use <a>ModifyListener</a>. When you are finished with a listener, you can delete it using
 * <a>DeleteListener</a>. If you are finished with both the listener and the load balancer, you can delete them both using
 *
 * <a>DeleteLoadBalancer</a>>
 *
 * This operation is idempotent, which means that it completes at most one time. If you attempt to create multiple
 * listeners with the same settings, each call
 *
 * succeeds>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html">Listeners for
 * Your Application Load Balancers</a> in the <i>Application Load Balancers Guide</i> and <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-listeners.html">Listeners for Your
 * Network Load Balancers</a> in the <i>Network Load Balancers
 */
CreateListenerResponse * ElasticLoadBalancingv2Client::createListener(const CreateListenerRequest &request)
{
    return qobject_cast<CreateListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * CreateLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Application Load Balancer or a Network Load
 *
 * Balancer>
 *
 * When you create a load balancer, you can specify security groups, public subnets, IP address type, and tags. Otherwise,
 * you could do so later using <a>SetSecurityGroups</a>, <a>SetSubnets</a>, <a>SetIpAddressType</a>, and
 *
 * <a>AddTags</a>>
 *
 * To create listeners for your load balancer, use <a>CreateListener</a>. To describe your current load balancers, see
 * <a>DescribeLoadBalancers</a>. When you are finished with a load balancer, you can delete it using
 *
 * <a>DeleteLoadBalancer</a>>
 *
 * For limit information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Limits for Your
 * Application Load Balancer</a> in the <i>Application Load Balancers Guide</i> and <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Limits for Your Network
 * Load Balancer</a> in the <i>Network Load Balancers
 *
 * Guide</i>>
 *
 * This operation is idempotent, which means that it completes at most one time. If you attempt to create multiple load
 * balancers with the same settings, each call
 *
 * succeeds>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html">Application
 * Load Balancers</a> in the <i>Application Load Balancers Guide</i> and <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html">Network Load
 * Balancers</a> in the <i>Network Load Balancers
 */
CreateLoadBalancerResponse * ElasticLoadBalancingv2Client::createLoadBalancer(const CreateLoadBalancerRequest &request)
{
    return qobject_cast<CreateLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * CreateRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a rule for the specified listener. The listener must be associated with an Application Load
 *
 * Balancer>
 *
 * Rules are evaluated in priority order, from the lowest value to the highest value. When the conditions for a rule are
 * met, its actions are performed. If the conditions for no rules are met, the actions for the default rule are performed.
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-listeners.html#listener-rules">Listener
 * Rules</a> in the <i>Application Load Balancers
 *
 * Guide</i>>
 *
 * To view your current rules, use <a>DescribeRules</a>. To update a rule, use <a>ModifyRule</a>. To set the priorities of
 * your rules, use <a>SetRulePriorities</a>. To delete a rule, use
 */
CreateRuleResponse * ElasticLoadBalancingv2Client::createRule(const CreateRuleRequest &request)
{
    return qobject_cast<CreateRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * CreateTargetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a target
 *
 * group>
 *
 * To register targets with the target group, use <a>RegisterTargets</a>. To update the health check settings for the
 * target group, use <a>ModifyTargetGroup</a>. To monitor the health of targets in the target group, use
 *
 * <a>DescribeTargetHealth</a>>
 *
 * To route traffic to the targets in a target group, specify the target group in an action using <a>CreateListener</a> or
 *
 * <a>CreateRule</a>>
 *
 * To delete a target group, use
 *
 * <a>DeleteTargetGroup</a>>
 *
 * This operation is idempotent, which means that it completes at most one time. If you attempt to create multiple target
 * groups with the same settings, each call
 *
 * succeeds>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html">Target Groups
 * for Your Application Load Balancers</a> in the <i>Application Load Balancers Guide</i> or <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html">Target Groups for
 * Your Network Load Balancers</a> in the <i>Network Load Balancers
 */
CreateTargetGroupResponse * ElasticLoadBalancingv2Client::createTargetGroup(const CreateTargetGroupRequest &request)
{
    return qobject_cast<CreateTargetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DeleteListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 *
 * listener>
 *
 * Alternatively, your listener is deleted when you delete the load balancer to which it is attached, using
 */
DeleteListenerResponse * ElasticLoadBalancingv2Client::deleteListener(const DeleteListenerRequest &request)
{
    return qobject_cast<DeleteListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DeleteLoadBalancerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Application Load Balancer or Network Load Balancer and its attached
 *
 * listeners>
 *
 * You can't delete a load balancer if deletion protection is enabled. If the load balancer does not exist or has already
 * been deleted, the call
 *
 * succeeds>
 *
 * Deleting a load balancer does not affect its registered targets. For example, your EC2 instances continue to run and are
 * still registered to their target groups. If you no longer need these EC2 instances, you can stop or terminate
 */
DeleteLoadBalancerResponse * ElasticLoadBalancingv2Client::deleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    return qobject_cast<DeleteLoadBalancerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DeleteRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteRuleResponse * ElasticLoadBalancingv2Client::deleteRule(const DeleteRuleRequest &request)
{
    return qobject_cast<DeleteRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DeleteTargetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified target
 *
 * group>
 *
 * You can delete a target group if it is not referenced by any actions. Deleting a target group also deletes any
 * associated health
 */
DeleteTargetGroupResponse * ElasticLoadBalancingv2Client::deleteTargetGroup(const DeleteTargetGroupRequest &request)
{
    return qobject_cast<DeleteTargetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DeregisterTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters the specified targets from the specified target group. After the targets are deregistered, they no longer
 * receive traffic from the load
 */
DeregisterTargetsResponse * ElasticLoadBalancingv2Client::deregisterTargets(const DeregisterTargetsRequest &request)
{
    return qobject_cast<DeregisterTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeAccountLimitsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the current Elastic Load Balancing resource limits for your AWS
 *
 * account>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Limits for Your
 * Application Load Balancers</a> in the <i>Application Load Balancer Guide</i> or <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Limits for Your Network
 * Load Balancers</a> in the <i>Network Load Balancers
 */
DescribeAccountLimitsResponse * ElasticLoadBalancingv2Client::describeAccountLimits(const DescribeAccountLimitsRequest &request)
{
    return qobject_cast<DescribeAccountLimitsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeListenerCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the certificates for the specified secure
 */
DescribeListenerCertificatesResponse * ElasticLoadBalancingv2Client::describeListenerCertificates(const DescribeListenerCertificatesRequest &request)
{
    return qobject_cast<DescribeListenerCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeListenersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified listeners or the listeners for the specified Application Load Balancer or Network Load Balancer.
 * You must specify either a load balancer or one or more
 */
DescribeListenersResponse * ElasticLoadBalancingv2Client::describeListeners(const DescribeListenersRequest &request)
{
    return qobject_cast<DescribeListenersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeLoadBalancerAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the attributes for the specified Application Load Balancer or Network Load
 *
 * Balancer>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/application-load-balancers.html#load-balancer-attributes">Load
 * Balancer Attributes</a> in the <i>Application Load Balancers Guide</i> or <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/network-load-balancers.html#load-balancer-attributes">Load
 * Balancer Attributes</a> in the <i>Network Load Balancers
 */
DescribeLoadBalancerAttributesResponse * ElasticLoadBalancingv2Client::describeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &request)
{
    return qobject_cast<DescribeLoadBalancerAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeLoadBalancersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified load balancers or all of your load
 *
 * balancers>
 *
 * To describe the listeners for a load balancer, use <a>DescribeListeners</a>. To describe the attributes for a load
 * balancer, use
 */
DescribeLoadBalancersResponse * ElasticLoadBalancingv2Client::describeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    return qobject_cast<DescribeLoadBalancersResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified rules or the rules for the specified listener. You must specify either a listener or one or more
 */
DescribeRulesResponse * ElasticLoadBalancingv2Client::describeRules(const DescribeRulesRequest &request)
{
    return qobject_cast<DescribeRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeSSLPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified policies or all policies used for SSL
 *
 * negotiation>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/create-https-listener.html#describe-ssl-policies">Security
 * Policies</a> in the <i>Application Load Balancers
 */
DescribeSSLPoliciesResponse * ElasticLoadBalancingv2Client::describeSSLPolicies(const DescribeSSLPoliciesRequest &request)
{
    return qobject_cast<DescribeSSLPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the tags for the specified resources. You can describe the tags for one or more Application Load Balancers,
 * Network Load Balancers, and target
 */
DescribeTagsResponse * ElasticLoadBalancingv2Client::describeTags(const DescribeTagsRequest &request)
{
    return qobject_cast<DescribeTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeTargetGroupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the attributes for the specified target
 *
 * group>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-target-groups.html#target-group-attributes">Target
 * Group Attributes</a> in the <i>Application Load Balancers Guide</i> or <a
 * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-target-groups.html#target-group-attributes">Target
 * Group Attributes</a> in the <i>Network Load Balancers
 */
DescribeTargetGroupAttributesResponse * ElasticLoadBalancingv2Client::describeTargetGroupAttributes(const DescribeTargetGroupAttributesRequest &request)
{
    return qobject_cast<DescribeTargetGroupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeTargetGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the specified target groups or all of your target groups. By default, all target groups are described.
 * Alternatively, you can specify one of the following to filter the results: the ARN of the load balancer, the names of
 * one or more target groups, or the ARNs of one or more target
 *
 * groups>
 *
 * To describe the targets for a target group, use <a>DescribeTargetHealth</a>. To describe the attributes of a target
 * group, use
 */
DescribeTargetGroupsResponse * ElasticLoadBalancingv2Client::describeTargetGroups(const DescribeTargetGroupsRequest &request)
{
    return qobject_cast<DescribeTargetGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * DescribeTargetHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the health of the specified targets or all of your
 */
DescribeTargetHealthResponse * ElasticLoadBalancingv2Client::describeTargetHealth(const DescribeTargetHealthRequest &request)
{
    return qobject_cast<DescribeTargetHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * ModifyListenerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified properties of the specified
 *
 * listener>
 *
 * Any properties that you do not specify retain their current values. However, changing the protocol from HTTPS to HTTP
 * removes the security policy and SSL certificate properties. If you change the protocol from HTTP to HTTPS, you must add
 * the security policy and server
 */
ModifyListenerResponse * ElasticLoadBalancingv2Client::modifyListener(const ModifyListenerRequest &request)
{
    return qobject_cast<ModifyListenerResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * ModifyLoadBalancerAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified attributes of the specified Application Load Balancer or Network Load
 *
 * Balancer>
 *
 * If any of the specified attributes can't be modified as requested, the call fails. Any existing attributes that you do
 * not modify retain their current
 */
ModifyLoadBalancerAttributesResponse * ElasticLoadBalancingv2Client::modifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request)
{
    return qobject_cast<ModifyLoadBalancerAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * ModifyRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified
 *
 * rule>
 *
 * Any existing properties that you do not modify retain their current
 *
 * values>
 *
 * To modify the actions for the default rule, use
 */
ModifyRuleResponse * ElasticLoadBalancingv2Client::modifyRule(const ModifyRuleRequest &request)
{
    return qobject_cast<ModifyRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * ModifyTargetGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the health checks used when evaluating the health state of the targets in the specified target
 *
 * group>
 *
 * To monitor the health of the targets, use
 */
ModifyTargetGroupResponse * ElasticLoadBalancingv2Client::modifyTargetGroup(const ModifyTargetGroupRequest &request)
{
    return qobject_cast<ModifyTargetGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * ModifyTargetGroupAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the specified attributes of the specified target
 */
ModifyTargetGroupAttributesResponse * ElasticLoadBalancingv2Client::modifyTargetGroupAttributes(const ModifyTargetGroupAttributesRequest &request)
{
    return qobject_cast<ModifyTargetGroupAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * RegisterTargetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers the specified targets with the specified target
 *
 * group>
 *
 * If the target is an EC2 instance, it must be in the <code>running</code> state when you register
 *
 * it>
 *
 * By default, the load balancer routes requests to registered targets using the protocol and port for the target group.
 * Alternatively, you can override the port for a target when you register it. You can register each EC2 instance or IP
 * address with the same target group multiple times using different
 *
 * ports>
 *
 * With a Network Load Balancer, you cannot register instances by instance ID if they have the following instance types:
 * C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and T1. You can register instances of these types by IP
 *
 * address>
 *
 * To remove a target from a target group, use
 */
RegisterTargetsResponse * ElasticLoadBalancingv2Client::registerTargets(const RegisterTargetsRequest &request)
{
    return qobject_cast<RegisterTargetsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * RemoveListenerCertificatesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified certificate from the specified secure
 *
 * listener>
 *
 * You can't remove the default certificate for a listener. To replace the default certificate, call
 *
 * <a>ModifyListener</a>>
 *
 * To list the certificates for your listener, use
 */
RemoveListenerCertificatesResponse * ElasticLoadBalancingv2Client::removeListenerCertificates(const RemoveListenerCertificatesRequest &request)
{
    return qobject_cast<RemoveListenerCertificatesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * RemoveTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified Elastic Load Balancing
 *
 * resource>
 *
 * To list the current tags for your resources, use
 */
RemoveTagsResponse * ElasticLoadBalancingv2Client::removeTags(const RemoveTagsRequest &request)
{
    return qobject_cast<RemoveTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * SetIpAddressTypeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the type of IP addresses used by the subnets of the specified Application Load Balancer or Network Load
 *
 * Balancer>
 *
 * Network Load Balancers must use
 */
SetIpAddressTypeResponse * ElasticLoadBalancingv2Client::setIpAddressType(const SetIpAddressTypeRequest &request)
{
    return qobject_cast<SetIpAddressTypeResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * SetRulePrioritiesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the priorities of the specified
 *
 * rules>
 *
 * You can reorder the rules as long as there are no priority conflicts in the new order. Any existing rules that you do
 * not specify retain their current
 */
SetRulePrioritiesResponse * ElasticLoadBalancingv2Client::setRulePriorities(const SetRulePrioritiesRequest &request)
{
    return qobject_cast<SetRulePrioritiesResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * SetSecurityGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified security groups with the specified Application Load Balancer. The specified security groups
 * override the previously associated security
 *
 * groups>
 *
 * You can't specify a security group for a Network Load
 */
SetSecurityGroupsResponse * ElasticLoadBalancingv2Client::setSecurityGroups(const SetSecurityGroupsRequest &request)
{
    return qobject_cast<SetSecurityGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ElasticLoadBalancingv2Client service, and returns a pointer to an
 * SetSubnetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables the Availability Zone for the specified public subnets for the specified Application Load Balancer. The
 * specified subnets replace the previously enabled
 *
 * subnets>
 *
 * You can't change the subnets for a Network Load
 */
SetSubnetsResponse * ElasticLoadBalancingv2Client::setSubnets(const SetSubnetsRequest &request)
{
    return qobject_cast<SetSubnetsResponse *>(send(request));
}

/*!
 * \class QtAws::ElasticLoadBalancingv2::ElasticLoadBalancingv2ClientPrivate
 * \brief The ElasticLoadBalancingv2ClientPrivate class provides private implementation for ElasticLoadBalancingv2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsElasticLoadBalancingv2
 */

/*!
 * Constructs a ElasticLoadBalancingv2ClientPrivate object with public implementation \a q.
 */
ElasticLoadBalancingv2ClientPrivate::ElasticLoadBalancingv2ClientPrivate(ElasticLoadBalancingv2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

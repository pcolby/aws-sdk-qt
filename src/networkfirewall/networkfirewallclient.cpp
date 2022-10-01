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

#include "networkfirewallclient.h"
#include "networkfirewallclient_p.h"

#include "core/awssignaturev4.h"
#include "associatefirewallpolicyrequest.h"
#include "associatefirewallpolicyresponse.h"
#include "associatesubnetsrequest.h"
#include "associatesubnetsresponse.h"
#include "createfirewallrequest.h"
#include "createfirewallresponse.h"
#include "createfirewallpolicyrequest.h"
#include "createfirewallpolicyresponse.h"
#include "createrulegrouprequest.h"
#include "createrulegroupresponse.h"
#include "deletefirewallrequest.h"
#include "deletefirewallresponse.h"
#include "deletefirewallpolicyrequest.h"
#include "deletefirewallpolicyresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deleterulegrouprequest.h"
#include "deleterulegroupresponse.h"
#include "describefirewallrequest.h"
#include "describefirewallresponse.h"
#include "describefirewallpolicyrequest.h"
#include "describefirewallpolicyresponse.h"
#include "describeloggingconfigurationrequest.h"
#include "describeloggingconfigurationresponse.h"
#include "describeresourcepolicyrequest.h"
#include "describeresourcepolicyresponse.h"
#include "describerulegrouprequest.h"
#include "describerulegroupresponse.h"
#include "describerulegroupmetadatarequest.h"
#include "describerulegroupmetadataresponse.h"
#include "disassociatesubnetsrequest.h"
#include "disassociatesubnetsresponse.h"
#include "listfirewallpoliciesrequest.h"
#include "listfirewallpoliciesresponse.h"
#include "listfirewallsrequest.h"
#include "listfirewallsresponse.h"
#include "listrulegroupsrequest.h"
#include "listrulegroupsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatefirewalldeleteprotectionrequest.h"
#include "updatefirewalldeleteprotectionresponse.h"
#include "updatefirewalldescriptionrequest.h"
#include "updatefirewalldescriptionresponse.h"
#include "updatefirewallencryptionconfigurationrequest.h"
#include "updatefirewallencryptionconfigurationresponse.h"
#include "updatefirewallpolicyrequest.h"
#include "updatefirewallpolicyresponse.h"
#include "updatefirewallpolicychangeprotectionrequest.h"
#include "updatefirewallpolicychangeprotectionresponse.h"
#include "updateloggingconfigurationrequest.h"
#include "updateloggingconfigurationresponse.h"
#include "updaterulegrouprequest.h"
#include "updaterulegroupresponse.h"
#include "updatesubnetchangeprotectionrequest.h"
#include "updatesubnetchangeprotectionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::NetworkFirewall
 * \brief Contains classess for accessing AWS Network Firewall.
 *
 * \inmodule QtAwsNetworkFirewall
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace NetworkFirewall {

/*!
 * \class QtAws::NetworkFirewall::NetworkFirewallClient
 * \brief The NetworkFirewallClient class provides access to the AWS Network Firewall service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNetworkFirewall
 *
 *  This is the API Reference for Network Firewall. This guide is for developers who need detailed information about the
 *  Network Firewall API actions, data types, and errors.
 * 
 *  </p <ul> <li>
 * 
 *  The REST API requires you to handle connection details, such as calculating signatures, handling request retries, and
 *  error handling. For general information about using the Amazon Web Services REST APIs, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services APIs</a>.
 * 
 *  </p
 * 
 *  To access Network Firewall using the REST API endpoint: <code>https://network-firewall.<region>.amazonaws.com </code>
 * 
 *  </p </li> <li>
 * 
 *  Alternatively, you can use one of the Amazon Web Services SDKs to access an API that's tailored to the programming
 *  language or platform that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">Amazon Web
 *  Services
 * 
 *  SDKs</a>> </li> <li>
 * 
 *  For descriptions of Network Firewall features, including and step-by-step instructions on how to use them through the
 *  Network Firewall console, see the <a href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/">Network
 *  Firewall Developer
 * 
 *  Guide</a>> </li> </ul>
 * 
 *  Network Firewall is a stateful, managed, network firewall and intrusion detection and prevention service for Amazon
 *  Virtual Private Cloud (Amazon VPC). With Network Firewall, you can filter traffic at the perimeter of your VPC. This
 *  includes filtering traffic going to and coming from an internet gateway, NAT gateway, or over VPN or Direct Connect.
 *  Network Firewall uses rules that are compatible with Suricata, a free, open source intrusion detection system (IDS)
 *  engine. Network Firewall supports Suricata version 5.0.2. For information about Suricata, see the <a
 *  href="https://suricata-ids.org/">Suricata
 * 
 *  website</a>>
 * 
 *  You can use Network Firewall to monitor and protect your VPC traffic in a number of ways. The following are just a few
 *  examples:
 * 
 *  </p <ul> <li>
 * 
 *  Allow domains or IP addresses for known Amazon Web Services service endpoints, such as Amazon S3, and block all other
 *  forms of
 * 
 *  traffic> </li> <li>
 * 
 *  Use custom lists of known bad domains to limit the types of domain names that your applications can
 * 
 *  access> </li> <li>
 * 
 *  Perform deep packet inspection on traffic entering or leaving your
 * 
 *  VPC> </li> <li>
 * 
 *  Use stateful protocol detection to filter protocols like HTTPS, regardless of the port
 * 
 *  used> </li> </ul>
 * 
 *  To enable Network Firewall for your VPCs, you perform steps in both Amazon VPC and in Network Firewall. For information
 *  about using Amazon VPC, see <a href="https://docs.aws.amazon.com/vpc/latest/userguide/">Amazon VPC User
 * 
 *  Guide</a>>
 * 
 *  To start using Network Firewall, do the following:
 * 
 *  </p <ol> <li>
 * 
 *  (Optional) If you don't already have a VPC that you want to protect, create it in Amazon VPC.
 * 
 *  </p </li> <li>
 * 
 *  In Amazon VPC, in each Availability Zone where you want to have a firewall endpoint, create a subnet for the sole use of
 *  Network Firewall.
 * 
 *  </p </li> <li>
 * 
 *  In Network Firewall, create stateless and stateful rule groups, to define the components of the network traffic
 *  filtering behavior that you want your firewall to have.
 * 
 *  </p </li> <li>
 * 
 *  In Network Firewall, create a firewall policy that uses your rule groups and specifies additional default traffic
 *  filtering behavior.
 * 
 *  </p </li> <li>
 * 
 *  In Network Firewall, create a firewall and specify your new firewall policy and VPC subnets. Network Firewall creates a
 *  firewall endpoint in each subnet that you specify, with the behavior that's defined in the firewall
 * 
 *  policy> </li> <li>
 * 
 *  In Amazon VPC, use ingress routing enhancements to route traffic through the new firewall
 */

/*!
 * \brief Constructs a NetworkFirewallClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
NetworkFirewallClient::NetworkFirewallClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NetworkFirewallClientPrivate(this), parent)
{
    Q_D(NetworkFirewallClient);
    d->apiVersion = QStringLiteral("2020-11-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("network-firewall");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Network Firewall");
    d->serviceName = QStringLiteral("network-firewall");
}

/*!
 * \overload NetworkFirewallClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
NetworkFirewallClient::NetworkFirewallClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new NetworkFirewallClientPrivate(this), parent)
{
    Q_D(NetworkFirewallClient);
    d->apiVersion = QStringLiteral("2020-11-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("network-firewall");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Network Firewall");
    d->serviceName = QStringLiteral("network-firewall");
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * AssociateFirewallPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a <a>FirewallPolicy</a> to a <a>Firewall</a>.
 *
 * </p
 *
 * A firewall policy defines how to monitor and manage your VPC network traffic, using a collection of inspection rule
 * groups and other settings. Each firewall requires one firewall policy association, and you can use the same firewall
 * policy for multiple firewalls.
 */
AssociateFirewallPolicyResponse * NetworkFirewallClient::associateFirewallPolicy(const AssociateFirewallPolicyRequest &request)
{
    return qobject_cast<AssociateFirewallPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * AssociateSubnetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified subnets in the Amazon VPC to the firewall. You can specify one subnet for each of the
 * Availability Zones that the VPC spans.
 *
 * </p
 *
 * This request creates an Network Firewall firewall endpoint in each of the subnets. To enable the firewall's protections,
 * you must also modify the VPC's route tables for each subnet's Availability Zone, to redirect the traffic that's coming
 * into and going out of the zone through the firewall endpoint.
 */
AssociateSubnetsResponse * NetworkFirewallClient::associateSubnets(const AssociateSubnetsRequest &request)
{
    return qobject_cast<AssociateSubnetsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * CreateFirewallResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Network Firewall <a>Firewall</a> and accompanying <a>FirewallStatus</a> for a VPC.
 *
 * </p
 *
 * The firewall defines the configuration settings for an Network Firewall firewall. The settings that you can define at
 * creation include the firewall policy, the subnets in your VPC to use for the firewall endpoints, and any tags that are
 * attached to the firewall Amazon Web Services resource.
 *
 * </p
 *
 * After you create a firewall, you can provide additional settings, like the logging configuration.
 *
 * </p
 *
 * To update the settings for a firewall, you use the operations that apply to the settings themselves, for example
 * <a>UpdateLoggingConfiguration</a>, <a>AssociateSubnets</a>, and <a>UpdateFirewallDeleteProtection</a>.
 *
 * </p
 *
 * To manage a firewall's tags, use the standard Amazon Web Services resource tagging operations,
 * <a>ListTagsForResource</a>, <a>TagResource</a>, and
 *
 * <a>UntagResource</a>>
 *
 * To retrieve information about firewalls, use <a>ListFirewalls</a> and
 */
CreateFirewallResponse * NetworkFirewallClient::createFirewall(const CreateFirewallRequest &request)
{
    return qobject_cast<CreateFirewallResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * CreateFirewallPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the firewall policy for the firewall according to the specifications.
 *
 * </p
 *
 * An Network Firewall firewall policy defines the behavior of a firewall, in a collection of stateless and stateful rule
 * groups and other settings. You can use one firewall policy for multiple firewalls.
 */
CreateFirewallPolicyResponse * NetworkFirewallClient::createFirewallPolicy(const CreateFirewallPolicyRequest &request)
{
    return qobject_cast<CreateFirewallPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * CreateRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates the specified stateless or stateful rule group, which includes the rules for network traffic inspection, a
 * capacity setting, and tags.
 *
 * </p
 *
 * You provide your rule group specification in your request using either <code>RuleGroup</code> or
 */
CreateRuleGroupResponse * NetworkFirewallClient::createRuleGroup(const CreateRuleGroupRequest &request)
{
    return qobject_cast<CreateRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DeleteFirewallResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified <a>Firewall</a> and its <a>FirewallStatus</a>. This operation requires the firewall's
 * <code>DeleteProtection</code> flag to be <code>FALSE</code>. You can't revert this operation.
 *
 * </p
 *
 * You can check whether a firewall is in use by reviewing the route tables for the Availability Zones where you have
 * firewall subnet mappings. Retrieve the subnet mappings by calling <a>DescribeFirewall</a>. You define and update the
 * route tables through Amazon VPC. As needed, update the route tables for the zones to remove the firewall endpoints. When
 * the route tables no longer use the firewall endpoints, you can remove the firewall
 *
 * safely>
 *
 * To delete a firewall, remove the delete protection if you need to using <a>UpdateFirewallDeleteProtection</a>, then
 * delete the firewall by calling <a>DeleteFirewall</a>.
 */
DeleteFirewallResponse * NetworkFirewallClient::deleteFirewall(const DeleteFirewallRequest &request)
{
    return qobject_cast<DeleteFirewallResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DeleteFirewallPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified <a>FirewallPolicy</a>.
 */
DeleteFirewallPolicyResponse * NetworkFirewallClient::deleteFirewallPolicy(const DeleteFirewallPolicyRequest &request)
{
    return qobject_cast<DeleteFirewallPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource policy that you created in a <a>PutResourcePolicy</a> request.
 */
DeleteResourcePolicyResponse * NetworkFirewallClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DeleteRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified <a>RuleGroup</a>.
 */
DeleteRuleGroupResponse * NetworkFirewallClient::deleteRuleGroup(const DeleteRuleGroupRequest &request)
{
    return qobject_cast<DeleteRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DescribeFirewallResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data objects for the specified firewall.
 */
DescribeFirewallResponse * NetworkFirewallClient::describeFirewall(const DescribeFirewallRequest &request)
{
    return qobject_cast<DescribeFirewallResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DescribeFirewallPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data objects for the specified firewall policy.
 */
DescribeFirewallPolicyResponse * NetworkFirewallClient::describeFirewallPolicy(const DescribeFirewallPolicyRequest &request)
{
    return qobject_cast<DescribeFirewallPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DescribeLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the logging configuration for the specified firewall.
 */
DescribeLoggingConfigurationResponse * NetworkFirewallClient::describeLoggingConfiguration(const DescribeLoggingConfigurationRequest &request)
{
    return qobject_cast<DescribeLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DescribeResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a resource policy that you created in a <a>PutResourcePolicy</a> request.
 */
DescribeResourcePolicyResponse * NetworkFirewallClient::describeResourcePolicy(const DescribeResourcePolicyRequest &request)
{
    return qobject_cast<DescribeResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DescribeRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the data objects for the specified rule group.
 */
DescribeRuleGroupResponse * NetworkFirewallClient::describeRuleGroup(const DescribeRuleGroupRequest &request)
{
    return qobject_cast<DescribeRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DescribeRuleGroupMetadataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * High-level information about a rule group, returned by operations like create and describe. You can use the information
 * provided in the metadata to retrieve and manage a rule group. You can retrieve all objects for a rule group by calling
 * <a>DescribeRuleGroup</a>.
 */
DescribeRuleGroupMetadataResponse * NetworkFirewallClient::describeRuleGroupMetadata(const DescribeRuleGroupMetadataRequest &request)
{
    return qobject_cast<DescribeRuleGroupMetadataResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * DisassociateSubnetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified subnet associations from the firewall. This removes the firewall endpoints from the subnets and
 * removes any network filtering protections that the endpoints were providing.
 */
DisassociateSubnetsResponse * NetworkFirewallClient::disassociateSubnets(const DisassociateSubnetsRequest &request)
{
    return qobject_cast<DisassociateSubnetsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * ListFirewallPoliciesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for the firewall policies that you have defined. Depending on your setting for max results and
 * the number of firewall policies, a single call might not return the full list.
 */
ListFirewallPoliciesResponse * NetworkFirewallClient::listFirewallPolicies(const ListFirewallPoliciesRequest &request)
{
    return qobject_cast<ListFirewallPoliciesResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * ListFirewallsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for the firewalls that you have defined. If you provide VPC identifiers in your request, this
 * returns only the firewalls for those
 *
 * VPCs>
 *
 * Depending on your setting for max results and the number of firewalls, a single call might not return the full list.
 */
ListFirewallsResponse * NetworkFirewallClient::listFirewalls(const ListFirewallsRequest &request)
{
    return qobject_cast<ListFirewallsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * ListRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the metadata for the rule groups that you have defined. Depending on your setting for max results and the
 * number of rule groups, a single call might not return the full list.
 */
ListRuleGroupsResponse * NetworkFirewallClient::listRuleGroups(const ListRuleGroupsRequest &request)
{
    return qobject_cast<ListRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the tags associated with the specified resource. Tags are key:value pairs that you can use to categorize and
 * manage your resources, for purposes like billing. For example, you might set the tag key to "customer" and the value to
 * the customer name or ID. You can specify one or more tags to add to each Amazon Web Services resource, up to 50 tags for
 * a
 *
 * resource>
 *
 * You can tag the Amazon Web Services resources that you manage through Network Firewall: firewalls, firewall policies,
 * and rule groups.
 */
ListTagsForResourceResponse * NetworkFirewallClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates an IAM policy for your rule group or firewall policy. Use this to share rule groups and firewall
 * policies between accounts. This operation works in conjunction with the Amazon Web Services Resource Access Manager
 * (RAM) service to manage resource sharing for Network Firewall.
 *
 * </p
 *
 * Use this operation to create or update a resource policy for your rule group or firewall policy. In the policy, you
 * specify the accounts that you want to share the resource with and the operations that you want the accounts to be able
 * to perform.
 *
 * </p
 *
 * When you add an account in the resource policy, you then run the following Resource Access Manager (RAM) operations to
 * access and accept the shared rule group or firewall policy.
 *
 * </p <ul> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_GetResourceShareInvitations.html">GetResourceShareInvitations</a>
 * - Returns the Amazon Resource Names (ARNs) of the resource share invitations.
 *
 * </p </li> <li>
 *
 * <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_AcceptResourceShareInvitation.html">AcceptResourceShareInvitation</a>
 * - Accepts the share invitation for a specified resource share.
 *
 * </p </li> </ul>
 *
 * For additional information about resource sharing using RAM, see <a
 * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">Resource Access Manager User
 */
PutResourcePolicyResponse * NetworkFirewallClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds the specified tags to the specified resource. Tags are key:value pairs that you can use to categorize and manage
 * your resources, for purposes like billing. For example, you might set the tag key to "customer" and the value to the
 * customer name or ID. You can specify one or more tags to add to each Amazon Web Services resource, up to 50 tags for a
 *
 * resource>
 *
 * You can tag the Amazon Web Services resources that you manage through Network Firewall: firewalls, firewall policies,
 * and rule groups.
 */
TagResourceResponse * NetworkFirewallClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the tags with the specified keys from the specified resource. Tags are key:value pairs that you can use to
 * categorize and manage your resources, for purposes like billing. For example, you might set the tag key to "customer"
 * and the value to the customer name or ID. You can specify one or more tags to add to each Amazon Web Services resource,
 * up to 50 tags for a
 *
 * resource>
 *
 * You can manage tags for the Amazon Web Services resources that you manage through Network Firewall: firewalls, firewall
 * policies, and rule groups.
 */
UntagResourceResponse * NetworkFirewallClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateFirewallDeleteProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the flag, <code>DeleteProtection</code>, which indicates whether it is possible to delete the firewall. If the
 * flag is set to <code>TRUE</code>, the firewall is protected against deletion. This setting helps protect against
 * accidentally deleting a firewall that's in use.
 */
UpdateFirewallDeleteProtectionResponse * NetworkFirewallClient::updateFirewallDeleteProtection(const UpdateFirewallDeleteProtectionRequest &request)
{
    return qobject_cast<UpdateFirewallDeleteProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateFirewallDescriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the description for the specified firewall. Use the description to help you identify the firewall when you're
 * working with it.
 */
UpdateFirewallDescriptionResponse * NetworkFirewallClient::updateFirewallDescription(const UpdateFirewallDescriptionRequest &request)
{
    return qobject_cast<UpdateFirewallDescriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateFirewallEncryptionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A complex type that contains settings for encryption of your firewall
 */
UpdateFirewallEncryptionConfigurationResponse * NetworkFirewallClient::updateFirewallEncryptionConfiguration(const UpdateFirewallEncryptionConfigurationRequest &request)
{
    return qobject_cast<UpdateFirewallEncryptionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateFirewallPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the properties of the specified firewall
 */
UpdateFirewallPolicyResponse * NetworkFirewallClient::updateFirewallPolicy(const UpdateFirewallPolicyRequest &request)
{
    return qobject_cast<UpdateFirewallPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateFirewallPolicyChangeProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the flag, <code>ChangeProtection</code>, which indicates whether it is possible to change the firewall. If the
 * flag is set to <code>TRUE</code>, the firewall is protected from changes. This setting helps protect against
 * accidentally changing a firewall that's in
 */
UpdateFirewallPolicyChangeProtectionResponse * NetworkFirewallClient::updateFirewallPolicyChangeProtection(const UpdateFirewallPolicyChangeProtectionRequest &request)
{
    return qobject_cast<UpdateFirewallPolicyChangeProtectionResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateLoggingConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the logging configuration for the specified firewall.
 *
 * </p
 *
 * To change the logging configuration, retrieve the <a>LoggingConfiguration</a> by calling
 * <a>DescribeLoggingConfiguration</a>, then change it and provide the modified object to this update call. You must change
 * the logging configuration one <a>LogDestinationConfig</a> at a time inside the retrieved <a>LoggingConfiguration</a>
 * object.
 *
 * </p
 *
 * You can perform only one of the following actions in any call to <code>UpdateLoggingConfiguration</code>:
 *
 * </p <ul> <li>
 *
 * Create a new log destination object by adding a single <code>LogDestinationConfig</code> array element to
 *
 * <code>LogDestinationConfigs</code>> </li> <li>
 *
 * Delete a log destination object by removing a single <code>LogDestinationConfig</code> array element from
 *
 * <code>LogDestinationConfigs</code>> </li> <li>
 *
 * Change the <code>LogDestination</code> setting in a single <code>LogDestinationConfig</code> array
 *
 * element> </li> </ul>
 *
 * You can't change the <code>LogDestinationType</code> or <code>LogType</code> in a <code>LogDestinationConfig</code>. To
 * change these settings, delete the existing <code>LogDestinationConfig</code> object and create a new one, using two
 * separate calls to this update
 */
UpdateLoggingConfigurationResponse * NetworkFirewallClient::updateLoggingConfiguration(const UpdateLoggingConfigurationRequest &request)
{
    return qobject_cast<UpdateLoggingConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the rule settings for the specified rule group. You use a rule group by reference in one or more firewall
 * policies. When you modify a rule group, you modify all firewall policies that use the rule group.
 *
 * </p
 *
 * To update a rule group, first call <a>DescribeRuleGroup</a> to retrieve the current <a>RuleGroup</a> object, update the
 * object as needed, and then provide the updated object to this call.
 */
UpdateRuleGroupResponse * NetworkFirewallClient::updateRuleGroup(const UpdateRuleGroupRequest &request)
{
    return qobject_cast<UpdateRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the NetworkFirewallClient service, and returns a pointer to an
 * UpdateSubnetChangeProtectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 */
UpdateSubnetChangeProtectionResponse * NetworkFirewallClient::updateSubnetChangeProtection(const UpdateSubnetChangeProtectionRequest &request)
{
    return qobject_cast<UpdateSubnetChangeProtectionResponse *>(send(request));
}

/*!
 * \class QtAws::NetworkFirewall::NetworkFirewallClientPrivate
 * \brief The NetworkFirewallClientPrivate class provides private implementation for NetworkFirewallClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsNetworkFirewall
 */

/*!
 * Constructs a NetworkFirewallClientPrivate object with public implementation \a q.
 */
NetworkFirewallClientPrivate::NetworkFirewallClientPrivate(NetworkFirewallClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace NetworkFirewall
} // namespace QtAws

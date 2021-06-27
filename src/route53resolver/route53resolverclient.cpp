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

#include "route53resolverclient.h"
#include "route53resolverclient_p.h"

#include "core/awssignaturev4.h"
#include "associatefirewallrulegrouprequest.h"
#include "associatefirewallrulegroupresponse.h"
#include "associateresolverendpointipaddressrequest.h"
#include "associateresolverendpointipaddressresponse.h"
#include "associateresolverquerylogconfigrequest.h"
#include "associateresolverquerylogconfigresponse.h"
#include "associateresolverrulerequest.h"
#include "associateresolverruleresponse.h"
#include "createfirewalldomainlistrequest.h"
#include "createfirewalldomainlistresponse.h"
#include "createfirewallrulerequest.h"
#include "createfirewallruleresponse.h"
#include "createfirewallrulegrouprequest.h"
#include "createfirewallrulegroupresponse.h"
#include "createresolverendpointrequest.h"
#include "createresolverendpointresponse.h"
#include "createresolverquerylogconfigrequest.h"
#include "createresolverquerylogconfigresponse.h"
#include "createresolverrulerequest.h"
#include "createresolverruleresponse.h"
#include "deletefirewalldomainlistrequest.h"
#include "deletefirewalldomainlistresponse.h"
#include "deletefirewallrulerequest.h"
#include "deletefirewallruleresponse.h"
#include "deletefirewallrulegrouprequest.h"
#include "deletefirewallrulegroupresponse.h"
#include "deleteresolverendpointrequest.h"
#include "deleteresolverendpointresponse.h"
#include "deleteresolverquerylogconfigrequest.h"
#include "deleteresolverquerylogconfigresponse.h"
#include "deleteresolverrulerequest.h"
#include "deleteresolverruleresponse.h"
#include "disassociatefirewallrulegrouprequest.h"
#include "disassociatefirewallrulegroupresponse.h"
#include "disassociateresolverendpointipaddressrequest.h"
#include "disassociateresolverendpointipaddressresponse.h"
#include "disassociateresolverquerylogconfigrequest.h"
#include "disassociateresolverquerylogconfigresponse.h"
#include "disassociateresolverrulerequest.h"
#include "disassociateresolverruleresponse.h"
#include "getfirewallconfigrequest.h"
#include "getfirewallconfigresponse.h"
#include "getfirewalldomainlistrequest.h"
#include "getfirewalldomainlistresponse.h"
#include "getfirewallrulegrouprequest.h"
#include "getfirewallrulegroupresponse.h"
#include "getfirewallrulegroupassociationrequest.h"
#include "getfirewallrulegroupassociationresponse.h"
#include "getfirewallrulegrouppolicyrequest.h"
#include "getfirewallrulegrouppolicyresponse.h"
#include "getresolverdnssecconfigrequest.h"
#include "getresolverdnssecconfigresponse.h"
#include "getresolverendpointrequest.h"
#include "getresolverendpointresponse.h"
#include "getresolverquerylogconfigrequest.h"
#include "getresolverquerylogconfigresponse.h"
#include "getresolverquerylogconfigassociationrequest.h"
#include "getresolverquerylogconfigassociationresponse.h"
#include "getresolverquerylogconfigpolicyrequest.h"
#include "getresolverquerylogconfigpolicyresponse.h"
#include "getresolverrulerequest.h"
#include "getresolverruleresponse.h"
#include "getresolverruleassociationrequest.h"
#include "getresolverruleassociationresponse.h"
#include "getresolverrulepolicyrequest.h"
#include "getresolverrulepolicyresponse.h"
#include "importfirewalldomainsrequest.h"
#include "importfirewalldomainsresponse.h"
#include "listfirewallconfigsrequest.h"
#include "listfirewallconfigsresponse.h"
#include "listfirewalldomainlistsrequest.h"
#include "listfirewalldomainlistsresponse.h"
#include "listfirewalldomainsrequest.h"
#include "listfirewalldomainsresponse.h"
#include "listfirewallrulegroupassociationsrequest.h"
#include "listfirewallrulegroupassociationsresponse.h"
#include "listfirewallrulegroupsrequest.h"
#include "listfirewallrulegroupsresponse.h"
#include "listfirewallrulesrequest.h"
#include "listfirewallrulesresponse.h"
#include "listresolverdnssecconfigsrequest.h"
#include "listresolverdnssecconfigsresponse.h"
#include "listresolverendpointipaddressesrequest.h"
#include "listresolverendpointipaddressesresponse.h"
#include "listresolverendpointsrequest.h"
#include "listresolverendpointsresponse.h"
#include "listresolverquerylogconfigassociationsrequest.h"
#include "listresolverquerylogconfigassociationsresponse.h"
#include "listresolverquerylogconfigsrequest.h"
#include "listresolverquerylogconfigsresponse.h"
#include "listresolverruleassociationsrequest.h"
#include "listresolverruleassociationsresponse.h"
#include "listresolverrulesrequest.h"
#include "listresolverrulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putfirewallrulegrouppolicyrequest.h"
#include "putfirewallrulegrouppolicyresponse.h"
#include "putresolverquerylogconfigpolicyrequest.h"
#include "putresolverquerylogconfigpolicyresponse.h"
#include "putresolverrulepolicyrequest.h"
#include "putresolverrulepolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatefirewallconfigrequest.h"
#include "updatefirewallconfigresponse.h"
#include "updatefirewalldomainsrequest.h"
#include "updatefirewalldomainsresponse.h"
#include "updatefirewallrulerequest.h"
#include "updatefirewallruleresponse.h"
#include "updatefirewallrulegroupassociationrequest.h"
#include "updatefirewallrulegroupassociationresponse.h"
#include "updateresolverdnssecconfigrequest.h"
#include "updateresolverdnssecconfigresponse.h"
#include "updateresolverendpointrequest.h"
#include "updateresolverendpointresponse.h"
#include "updateresolverrulerequest.h"
#include "updateresolverruleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Route53Resolver
 * \brief Contains classess for accessing Amazon Route 53 Resolver (Route53Resolver).
 *
 * \inmodule QtAwsRoute53Resolver
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::Route53ResolverClient
 * \brief The Route53ResolverClient class provides access to the Amazon Route 53 Resolver (Route53Resolver) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53Resolver
 *
 *  When you create a VPC using Amazon VPC, you automatically get DNS resolution within the VPC from Route 53 Resolver. By
 *  default, Resolver answers DNS queries for VPC domain names such as domain names for EC2 instances or Elastic Load
 *  Balancing load balancers. Resolver performs recursive lookups against public name servers for all other domain
 * 
 *  names>
 * 
 *  You can also configure DNS resolution between your VPC and your network over a Direct Connect or VPN
 * 
 *  connection>
 * 
 *  <b>Forward DNS queries from resolvers on your network to Route 53 Resolver</b>
 * 
 *  </p
 * 
 *  DNS resolvers on your network can forward DNS queries to Resolver in a specified VPC. This allows your DNS resolvers to
 *  easily resolve domain names for AWS resources such as EC2 instances or records in a Route 53 private hosted zone. For
 *  more information, see <a
 *  href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-network-to-vpc">How
 *  DNS Resolvers on Your Network Forward DNS Queries to Route 53 Resolver</a> in the <i>Amazon Route 53 Developer
 * 
 *  Guide</i>>
 * 
 *  <b>Conditionally forward queries from a VPC to resolvers on your network</b>
 * 
 *  </p
 * 
 *  You can configure Resolver to forward queries that it receives from EC2 instances in your VPCs to DNS resolvers on your
 *  network. To forward selected queries, you create Resolver rules that specify the domain names for the DNS queries that
 *  you want to forward (such as example.com), and the IP addresses of the DNS resolvers on your network that you want to
 *  forward the queries to. If a query matches multiple rules (example.com, acme.example.com), Resolver chooses the rule
 *  with the most specific match (acme.example.com) and forwards the query to the IP addresses that you specified in that
 *  rule. For more information, see <a
 *  href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-vpc-to-network">How
 *  Route 53 Resolver Forwards DNS Queries from Your VPCs to Your Network</a> in the <i>Amazon Route 53 Developer
 * 
 *  Guide</i>>
 * 
 *  Like Amazon VPC, Resolver is Regional. In each Region where you have VPCs, you can choose whether to forward queries
 *  from your VPCs to your network (outbound queries), from your network to your VPCs (inbound queries), or
 */

/*!
 * \brief Constructs a Route53ResolverClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
Route53ResolverClient::Route53ResolverClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-04-01"),
    QStringLiteral("route53resolver"),
    QStringLiteral("Amazon Route 53 Resolver"),
    QStringLiteral("route53resolver"),
    parent), d_ptr(new Route53ResolverClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload Route53ResolverClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
Route53ResolverClient::Route53ResolverClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2018-04-01"),
    QStringLiteral("route53resolver"),
    QStringLiteral("Amazon Route 53 Resolver"),
    QStringLiteral("route53resolver"),
    parent), d_ptr(new Route53ResolverClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * AssociateFirewallRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering for the VPC.
 */
AssociateFirewallRuleGroupResponse * Route53ResolverClient::associateFirewallRuleGroup(const AssociateFirewallRuleGroupRequest &request)
{
    return qobject_cast<AssociateFirewallRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * AssociateResolverEndpointIpAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds IP addresses to an inbound or an outbound Resolver endpoint. If you want to add more than one IP address, submit
 * one <code>AssociateResolverEndpointIpAddress</code> request for each IP
 *
 * address>
 *
 * To remove an IP address from an endpoint, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverEndpointIpAddress.html">DisassociateResolverEndpointIpAddress</a>.
 */
AssociateResolverEndpointIpAddressResponse * Route53ResolverClient::associateResolverEndpointIpAddress(const AssociateResolverEndpointIpAddressRequest &request)
{
    return qobject_cast<AssociateResolverEndpointIpAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * AssociateResolverQueryLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an Amazon VPC with a specified query logging configuration. Route 53 Resolver logs DNS queries that originate
 * in all of the Amazon VPCs that are associated with a specified query logging configuration. To associate more than one
 * VPC with a configuration, submit one <code>AssociateResolverQueryLogConfig</code> request for each
 *
 * VPC> <note>
 *
 * The VPCs that you associate with a query logging configuration must be in the same Region as the
 *
 * configuration> </note>
 *
 * To remove a VPC from a query logging configuration, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.
 */
AssociateResolverQueryLogConfigResponse * Route53ResolverClient::associateResolverQueryLogConfig(const AssociateResolverQueryLogConfigRequest &request)
{
    return qobject_cast<AssociateResolverQueryLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * AssociateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a Resolver rule with a VPC. When you associate a rule with a VPC, Resolver forwards all DNS queries for the
 * domain name that is specified in the rule and that originate in the VPC. The queries are forwarded to the IP addresses
 * for the DNS resolvers that are specified in the rule. For more information about rules, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>.
 */
AssociateResolverRuleResponse * Route53ResolverClient::associateResolverRule(const AssociateResolverRuleRequest &request)
{
    return qobject_cast<AssociateResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateFirewallDomainListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty firewall domain list for use in DNS Firewall rules. You can populate the domains for the new list with
 * a file, using <a>ImportFirewallDomains</a>, or with domain strings, using <a>UpdateFirewallDomains</a>.
 */
CreateFirewallDomainListResponse * Route53ResolverClient::createFirewallDomainList(const CreateFirewallDomainListRequest &request)
{
    return qobject_cast<CreateFirewallDomainListResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateFirewallRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a single DNS Firewall rule in the specified rule group, using the specified domain
 */
CreateFirewallRuleResponse * Route53ResolverClient::createFirewallRule(const CreateFirewallRuleRequest &request)
{
    return qobject_cast<CreateFirewallRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateFirewallRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an empty DNS Firewall rule group for filtering DNS network traffic in a VPC. You can add rules to the new rule
 * group by calling <a>CreateFirewallRule</a>.
 */
CreateFirewallRuleGroupResponse * Route53ResolverClient::createFirewallRuleGroup(const CreateFirewallRuleGroupRequest &request)
{
    return qobject_cast<CreateFirewallRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Resolver endpoint. There are two types of Resolver endpoints, inbound and
 *
 * outbound> <ul> <li>
 *
 * An <i>inbound Resolver endpoint</i> forwards DNS queries to the DNS service for a VPC from your
 *
 * network> </li> <li>
 *
 * An <i>outbound Resolver endpoint</i> forwards DNS queries from the DNS service for a VPC to your
 */
CreateResolverEndpointResponse * Route53ResolverClient::createResolverEndpoint(const CreateResolverEndpointRequest &request)
{
    return qobject_cast<CreateResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateResolverQueryLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Resolver query logging configuration, which defines where you want Resolver to save DNS query logs that
 * originate in your VPCs. Resolver can log queries only for VPCs that are in the same Region as the query logging
 *
 * configuration>
 *
 * To specify which VPCs you want to log queries for, you use <code>AssociateResolverQueryLogConfig</code>. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>.
 *
 * </p
 *
 * You can optionally use AWS Resource Access Manager (AWS RAM) to share a query logging configuration with other AWS
 * accounts. The other accounts can then associate VPCs with the configuration. The query logs that Resolver creates for a
 * configuration include all DNS queries that originate in all VPCs that are associated with the
 */
CreateResolverQueryLogConfigResponse * Route53ResolverClient::createResolverQueryLogConfig(const CreateResolverQueryLogConfigRequest &request)
{
    return qobject_cast<CreateResolverQueryLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For DNS queries that originate in your VPCs, specifies which Resolver endpoint the queries pass through, one domain name
 * that you want to forward to your network, and the IP addresses of the DNS resolvers in your
 */
CreateResolverRuleResponse * Route53ResolverClient::createResolverRule(const CreateResolverRuleRequest &request)
{
    return qobject_cast<CreateResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteFirewallDomainListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified domain list.
 */
DeleteFirewallDomainListResponse * Route53ResolverClient::deleteFirewallDomainList(const DeleteFirewallDomainListRequest &request)
{
    return qobject_cast<DeleteFirewallDomainListResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteFirewallRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified firewall
 */
DeleteFirewallRuleResponse * Route53ResolverClient::deleteFirewallRule(const DeleteFirewallRuleRequest &request)
{
    return qobject_cast<DeleteFirewallRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteFirewallRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified firewall rule group.
 */
DeleteFirewallRuleGroupResponse * Route53ResolverClient::deleteFirewallRuleGroup(const DeleteFirewallRuleGroupRequest &request)
{
    return qobject_cast<DeleteFirewallRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Resolver endpoint. The effect of deleting a Resolver endpoint depends on whether it's an inbound or an
 * outbound Resolver
 *
 * endpoint> <ul> <li>
 *
 * <b>Inbound</b>: DNS queries from your network are no longer routed to the DNS service for the specified
 *
 * VPC> </li> <li>
 *
 * <b>Outbound</b>: DNS queries from a VPC are no longer routed to your
 */
DeleteResolverEndpointResponse * Route53ResolverClient::deleteResolverEndpoint(const DeleteResolverEndpointRequest &request)
{
    return qobject_cast<DeleteResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteResolverQueryLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a query logging configuration. When you delete a configuration, Resolver stops logging DNS queries for all of
 * the Amazon VPCs that are associated with the configuration. This also applies if the query logging configuration is
 * shared with other AWS accounts, and the other accounts have associated VPCs with the shared
 *
 * configuration>
 *
 * Before you can delete a query logging configuration, you must first disassociate all VPCs from the configuration. See <a
 *
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>>
 *
 * If you used Resource Access Manager (RAM) to share a query logging configuration with other accounts, you must stop
 * sharing the configuration before you can delete a configuration. The accounts that you shared the configuration with can
 * first disassociate VPCs that they associated with the configuration, but that's not necessary. If you stop sharing the
 * configuration, those VPCs are automatically disassociated from the
 */
DeleteResolverQueryLogConfigResponse * Route53ResolverClient::deleteResolverQueryLogConfig(const DeleteResolverQueryLogConfigRequest &request)
{
    return qobject_cast<DeleteResolverQueryLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Resolver rule. Before you can delete a Resolver rule, you must disassociate it from all the VPCs that you
 * associated the Resolver rule with. For more information, see <a
 */
DeleteResolverRuleResponse * Route53ResolverClient::deleteResolverRule(const DeleteResolverRuleRequest &request)
{
    return qobject_cast<DeleteResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DisassociateFirewallRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a <a>FirewallRuleGroup</a> from a VPC, to remove DNS filtering from the VPC.
 */
DisassociateFirewallRuleGroupResponse * Route53ResolverClient::disassociateFirewallRuleGroup(const DisassociateFirewallRuleGroupRequest &request)
{
    return qobject_cast<DisassociateFirewallRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DisassociateResolverEndpointIpAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes IP addresses from an inbound or an outbound Resolver endpoint. If you want to remove more than one IP address,
 * submit one <code>DisassociateResolverEndpointIpAddress</code> request for each IP
 *
 * address>
 *
 * To add an IP address to an endpoint, see <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverEndpointIpAddress.html">AssociateResolverEndpointIpAddress</a>.
 */
DisassociateResolverEndpointIpAddressResponse * Route53ResolverClient::disassociateResolverEndpointIpAddress(const DisassociateResolverEndpointIpAddressRequest &request)
{
    return qobject_cast<DisassociateResolverEndpointIpAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DisassociateResolverQueryLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a VPC from a query logging
 *
 * configuration> <note>
 *
 * Before you can delete a query logging configuration, you must first disassociate all VPCs from the configuration. If you
 * used AWS Resource Access Manager (AWS RAM) to share a query logging configuration with other accounts, VPCs can be
 * disassociated from the configuration in the following
 *
 * ways> <ul> <li>
 *
 * The accounts that you shared the configuration with can disassociate VPCs from the
 *
 * configuration> </li> <li>
 *
 * You can stop sharing the
 */
DisassociateResolverQueryLogConfigResponse * Route53ResolverClient::disassociateResolverQueryLogConfig(const DisassociateResolverQueryLogConfigRequest &request)
{
    return qobject_cast<DisassociateResolverQueryLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DisassociateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between a specified Resolver rule and a specified
 *
 * VPC> <b>
 *
 * If you disassociate a Resolver rule from a VPC, Resolver stops forwarding DNS queries for the domain name that you
 * specified in the Resolver rule.
 */
DisassociateResolverRuleResponse * Route53ResolverClient::disassociateResolverRule(const DisassociateResolverRuleRequest &request)
{
    return qobject_cast<DisassociateResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetFirewallConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the configuration of the firewall behavior provided by DNS Firewall for a single VPC from Amazon Virtual
 * Private Cloud (Amazon VPC).
 */
GetFirewallConfigResponse * Route53ResolverClient::getFirewallConfig(const GetFirewallConfigRequest &request)
{
    return qobject_cast<GetFirewallConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetFirewallDomainListResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified firewall domain
 */
GetFirewallDomainListResponse * Route53ResolverClient::getFirewallDomainList(const GetFirewallDomainListRequest &request)
{
    return qobject_cast<GetFirewallDomainListResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetFirewallRuleGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the specified firewall rule group.
 */
GetFirewallRuleGroupResponse * Route53ResolverClient::getFirewallRuleGroup(const GetFirewallRuleGroupRequest &request)
{
    return qobject_cast<GetFirewallRuleGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetFirewallRuleGroupAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a firewall rule group association, which enables DNS filtering for a VPC with one rule group. A VPC can have
 * more than one firewall rule group association, and a rule group can be associated with more than one
 */
GetFirewallRuleGroupAssociationResponse * Route53ResolverClient::getFirewallRuleGroupAssociation(const GetFirewallRuleGroupAssociationRequest &request)
{
    return qobject_cast<GetFirewallRuleGroupAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetFirewallRuleGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the AWS Identity and Access Management (AWS IAM) policy for sharing the specified rule group. You can use the
 * policy to share the rule group using AWS Resource Access Manager (AWS RAM).
 */
GetFirewallRuleGroupPolicyResponse * Route53ResolverClient::getFirewallRuleGroupPolicy(const GetFirewallRuleGroupPolicyRequest &request)
{
    return qobject_cast<GetFirewallRuleGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverDnssecConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets DNSSEC validation information for a specified
 */
GetResolverDnssecConfigResponse * Route53ResolverClient::getResolverDnssecConfig(const GetResolverDnssecConfigRequest &request)
{
    return qobject_cast<GetResolverDnssecConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified Resolver endpoint, such as whether it's an inbound or an outbound Resolver endpoint,
 * and the current status of the
 */
GetResolverEndpointResponse * Route53ResolverClient::getResolverEndpoint(const GetResolverEndpointRequest &request)
{
    return qobject_cast<GetResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverQueryLogConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified Resolver query logging configuration, such as the number of VPCs that the
 * configuration is logging queries for and the location that logs are sent to.
 */
GetResolverQueryLogConfigResponse * Route53ResolverClient::getResolverQueryLogConfig(const GetResolverQueryLogConfigRequest &request)
{
    return qobject_cast<GetResolverQueryLogConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverQueryLogConfigAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified association between a Resolver query logging configuration and an Amazon VPC. When
 * you associate a VPC with a query logging configuration, Resolver logs DNS queries that originate in that
 */
GetResolverQueryLogConfigAssociationResponse * Route53ResolverClient::getResolverQueryLogConfigAssociation(const GetResolverQueryLogConfigAssociationRequest &request)
{
    return qobject_cast<GetResolverQueryLogConfigAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverQueryLogConfigPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a query logging policy. A query logging policy specifies the Resolver query logging operations
 * and resources that you want to allow another AWS account to be able to
 */
GetResolverQueryLogConfigPolicyResponse * Route53ResolverClient::getResolverQueryLogConfigPolicy(const GetResolverQueryLogConfigPolicyRequest &request)
{
    return qobject_cast<GetResolverQueryLogConfigPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified Resolver rule, such as the domain name that the rule forwards DNS queries for and the
 * ID of the outbound Resolver endpoint that the rule is associated
 */
GetResolverRuleResponse * Route53ResolverClient::getResolverRule(const GetResolverRuleRequest &request)
{
    return qobject_cast<GetResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverRuleAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about an association between a specified Resolver rule and a VPC. You associate a Resolver rule and a
 * VPC using <a
 * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>.
 */
GetResolverRuleAssociationResponse * Route53ResolverClient::getResolverRuleAssociation(const GetResolverRuleAssociationRequest &request)
{
    return qobject_cast<GetResolverRuleAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverRulePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about the Resolver rule policy for a specified rule. A Resolver rule policy includes the rule that you
 * want to share with another account, the account that you want to share the rule with, and the Resolver operations that
 * you want to allow the account to use.
 */
GetResolverRulePolicyResponse * Route53ResolverClient::getResolverRulePolicy(const GetResolverRulePolicyRequest &request)
{
    return qobject_cast<GetResolverRulePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ImportFirewallDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports domain names from a file into a domain list, for use in a DNS firewall rule group.
 *
 * </p
 *
 * Each domain specification in your domain list must satisfy the following requirements:
 *
 * </p <ul> <li>
 *
 * It can optionally start with <code>*</code>
 *
 * (asterisk)> </li> <li>
 *
 * With the exception of the optional starting asterisk, it must only contain the following characters: <code>A-Z</code>,
 * <code>a-z</code>, <code>0-9</code>, <code>-</code>
 *
 * (hyphen)> </li> <li>
 *
 * It must be from 1-255 characters in length.
 */
ImportFirewallDomainsResponse * Route53ResolverClient::importFirewallDomains(const ImportFirewallDomainsRequest &request)
{
    return qobject_cast<ImportFirewallDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListFirewallConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the firewall configurations that you have defined. DNS Firewall uses the configurations to manage firewall
 * behavior for your VPCs.
 *
 * </p
 *
 * A single call might return only a partial list of the configurations. For information, see <code>MaxResults</code>.
 */
ListFirewallConfigsResponse * Route53ResolverClient::listFirewallConfigs(const ListFirewallConfigsRequest &request)
{
    return qobject_cast<ListFirewallConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListFirewallDomainListsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the firewall domain lists that you have defined. For each firewall domain list, you can retrieve the domains
 * that are defined for a list by calling <a>ListFirewallDomains</a>.
 *
 * </p
 *
 * A single call to this list operation might return only a partial list of the domain lists. For information, see
 * <code>MaxResults</code>.
 */
ListFirewallDomainListsResponse * Route53ResolverClient::listFirewallDomainLists(const ListFirewallDomainListsRequest &request)
{
    return qobject_cast<ListFirewallDomainListsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListFirewallDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the domains that you have defined for the specified firewall domain list.
 *
 * </p
 *
 * A single call might return only a partial list of the domains. For information, see <code>MaxResults</code>.
 */
ListFirewallDomainsResponse * Route53ResolverClient::listFirewallDomains(const ListFirewallDomainsRequest &request)
{
    return qobject_cast<ListFirewallDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListFirewallRuleGroupAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the firewall rule group associations that you have defined. Each association enables DNS filtering for a VPC
 * with one rule group.
 *
 * </p
 *
 * A single call might return only a partial list of the associations. For information, see <code>MaxResults</code>.
 */
ListFirewallRuleGroupAssociationsResponse * Route53ResolverClient::listFirewallRuleGroupAssociations(const ListFirewallRuleGroupAssociationsRequest &request)
{
    return qobject_cast<ListFirewallRuleGroupAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListFirewallRuleGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the minimal high-level information for the rule groups that you have defined.
 *
 * </p
 *
 * A single call might return only a partial list of the rule groups. For information, see <code>MaxResults</code>.
 */
ListFirewallRuleGroupsResponse * Route53ResolverClient::listFirewallRuleGroups(const ListFirewallRuleGroupsRequest &request)
{
    return qobject_cast<ListFirewallRuleGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListFirewallRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the firewall rules that you have defined for the specified firewall rule group. DNS Firewall uses the rules in
 * a rule group to filter DNS network traffic for a VPC.
 *
 * </p
 *
 * A single call might return only a partial list of the rules. For information, see <code>MaxResults</code>.
 */
ListFirewallRulesResponse * Route53ResolverClient::listFirewallRules(const ListFirewallRulesRequest &request)
{
    return qobject_cast<ListFirewallRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverDnssecConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the configurations for DNSSEC validation that are associated with the current AWS
 */
ListResolverDnssecConfigsResponse * Route53ResolverClient::listResolverDnssecConfigs(const ListResolverDnssecConfigsRequest &request)
{
    return qobject_cast<ListResolverDnssecConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverEndpointIpAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the IP addresses for a specified Resolver
 */
ListResolverEndpointIpAddressesResponse * Route53ResolverClient::listResolverEndpointIpAddresses(const ListResolverEndpointIpAddressesRequest &request)
{
    return qobject_cast<ListResolverEndpointIpAddressesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the Resolver endpoints that were created using the current AWS
 */
ListResolverEndpointsResponse * Route53ResolverClient::listResolverEndpoints(const ListResolverEndpointsRequest &request)
{
    return qobject_cast<ListResolverEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverQueryLogConfigAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about associations between Amazon VPCs and query logging
 */
ListResolverQueryLogConfigAssociationsResponse * Route53ResolverClient::listResolverQueryLogConfigAssociations(const ListResolverQueryLogConfigAssociationsRequest &request)
{
    return qobject_cast<ListResolverQueryLogConfigAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverQueryLogConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists information about the specified query logging configurations. Each configuration defines where you want Resolver
 * to save DNS query logs and specifies the VPCs that you want to log queries
 */
ListResolverQueryLogConfigsResponse * Route53ResolverClient::listResolverQueryLogConfigs(const ListResolverQueryLogConfigsRequest &request)
{
    return qobject_cast<ListResolverQueryLogConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverRuleAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the associations that were created between Resolver rules and VPCs using the current AWS
 */
ListResolverRuleAssociationsResponse * Route53ResolverClient::listResolverRuleAssociations(const ListResolverRuleAssociationsRequest &request)
{
    return qobject_cast<ListResolverRuleAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverRulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Resolver rules that were created using the current AWS
 */
ListResolverRulesResponse * Route53ResolverClient::listResolverRules(const ListResolverRulesRequest &request)
{
    return qobject_cast<ListResolverRulesResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags that you associated with the specified
 */
ListTagsForResourceResponse * Route53ResolverClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * PutFirewallRuleGroupPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attaches an AWS Identity and Access Management (AWS IAM) policy for sharing the rule group. You can use the policy to
 * share the rule group using AWS Resource Access Manager (AWS RAM).
 */
PutFirewallRuleGroupPolicyResponse * Route53ResolverClient::putFirewallRuleGroupPolicy(const PutFirewallRuleGroupPolicyRequest &request)
{
    return qobject_cast<PutFirewallRuleGroupPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * PutResolverQueryLogConfigPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies an AWS account that you want to share a query logging configuration with, the query logging configuration that
 * you want to share, and the operations that you want the account to be able to perform on the
 */
PutResolverQueryLogConfigPolicyResponse * Route53ResolverClient::putResolverQueryLogConfigPolicy(const PutResolverQueryLogConfigPolicyRequest &request)
{
    return qobject_cast<PutResolverQueryLogConfigPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * PutResolverRulePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies an AWS rule that you want to share with another account, the account that you want to share the rule with, and
 * the operations that you want the account to be able to perform on the
 */
PutResolverRulePolicyResponse * Route53ResolverClient::putResolverRulePolicy(const PutResolverRulePolicyRequest &request)
{
    return qobject_cast<PutResolverRulePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to a specified
 */
TagResourceResponse * Route53ResolverClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from a specified
 */
UntagResourceResponse * Route53ResolverClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateFirewallConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of the firewall behavior provided by DNS Firewall for a single VPC from Amazon Virtual Private
 * Cloud (Amazon VPC).
 */
UpdateFirewallConfigResponse * Route53ResolverClient::updateFirewallConfig(const UpdateFirewallConfigRequest &request)
{
    return qobject_cast<UpdateFirewallConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateFirewallDomainsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the firewall domain list from an array of domain specifications.
 */
UpdateFirewallDomainsResponse * Route53ResolverClient::updateFirewallDomains(const UpdateFirewallDomainsRequest &request)
{
    return qobject_cast<UpdateFirewallDomainsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateFirewallRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified firewall rule.
 */
UpdateFirewallRuleResponse * Route53ResolverClient::updateFirewallRule(const UpdateFirewallRuleRequest &request)
{
    return qobject_cast<UpdateFirewallRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateFirewallRuleGroupAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the association of a <a>FirewallRuleGroup</a> with a VPC. The association enables DNS filtering for the VPC.
 */
UpdateFirewallRuleGroupAssociationResponse * Route53ResolverClient::updateFirewallRuleGroupAssociation(const UpdateFirewallRuleGroupAssociationRequest &request)
{
    return qobject_cast<UpdateFirewallRuleGroupAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateResolverDnssecConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing DNSSEC validation configuration. If there is no existing DNSSEC validation configuration, one is
 */
UpdateResolverDnssecConfigResponse * Route53ResolverClient::updateResolverDnssecConfig(const UpdateResolverDnssecConfigRequest &request)
{
    return qobject_cast<UpdateResolverDnssecConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of an inbound or an outbound Resolver endpoint.
 */
UpdateResolverEndpointResponse * Route53ResolverClient::updateResolverEndpoint(const UpdateResolverEndpointRequest &request)
{
    return qobject_cast<UpdateResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * UpdateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates settings for a specified Resolver rule. <code>ResolverRuleId</code> is required, and all other parameters are
 * optional. If you don't specify a parameter, it retains its current
 */
UpdateResolverRuleResponse * Route53ResolverClient::updateResolverRule(const UpdateResolverRuleRequest &request)
{
    return qobject_cast<UpdateResolverRuleResponse *>(send(request));
}

/*!
 * \class QtAws::Route53Resolver::Route53ResolverClientPrivate
 * \brief The Route53ResolverClientPrivate class provides private implementation for Route53ResolverClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a Route53ResolverClientPrivate object with public implementation \a q.
 */
Route53ResolverClientPrivate::Route53ResolverClientPrivate(Route53ResolverClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace Route53Resolver
} // namespace QtAws

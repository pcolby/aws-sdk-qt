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

#include "route53resolverclient.h"
#include "route53resolverclient_p.h"

#include "core/awssignaturev4.h"
#include "associateresolverendpointipaddressrequest.h"
#include "associateresolverendpointipaddressresponse.h"
#include "associateresolverrulerequest.h"
#include "associateresolverruleresponse.h"
#include "createresolverendpointrequest.h"
#include "createresolverendpointresponse.h"
#include "createresolverrulerequest.h"
#include "createresolverruleresponse.h"
#include "deleteresolverendpointrequest.h"
#include "deleteresolverendpointresponse.h"
#include "deleteresolverrulerequest.h"
#include "deleteresolverruleresponse.h"
#include "disassociateresolverendpointipaddressrequest.h"
#include "disassociateresolverendpointipaddressresponse.h"
#include "disassociateresolverrulerequest.h"
#include "disassociateresolverruleresponse.h"
#include "getresolverendpointrequest.h"
#include "getresolverendpointresponse.h"
#include "getresolverrulerequest.h"
#include "getresolverruleresponse.h"
#include "getresolverruleassociationrequest.h"
#include "getresolverruleassociationresponse.h"
#include "getresolverrulepolicyrequest.h"
#include "getresolverrulepolicyresponse.h"
#include "listresolverendpointipaddressesrequest.h"
#include "listresolverendpointipaddressesresponse.h"
#include "listresolverendpointsrequest.h"
#include "listresolverendpointsresponse.h"
#include "listresolverruleassociationsrequest.h"
#include "listresolverruleassociationsresponse.h"
#include "listresolverrulesrequest.h"
#include "listresolverrulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putresolverrulepolicyrequest.h"
#include "putresolverrulepolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
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
 *  Here's how you set up to query an Amazon Route 53 private hosted zone from your
 * 
 *  network> <ol> <li>
 * 
 *  Connect your network to a VPC using AWS Direct Connect or a
 * 
 *  VPN> </li> <li>
 * 
 *  Run the following AWS CLI command to create a Resolver
 * 
 *  endpoint>
 * 
 *  <code>create-resolver-endpoint --name [endpoint_name] --direction INBOUND --creator-request-id [unique_string]
 *  --security-group-ids [security_group_with_inbound_rules] --ip-addresses SubnetId=[subnet_id]
 *  SubnetId=[subnet_id_in_different_AZ]</code>
 * 
 *  </p
 * 
 *  Note the resolver endpoint ID that appears in the response. You'll use it in step
 * 
 *  3> </li> <li>
 * 
 *  Get the IP addresses for the Resolver
 * 
 *  endpoints>
 * 
 *  <code>get-resolver-endpoint --resolver-endpoint-id [resolver_endpoint_id]</code>
 * 
 *  </p </li> <li>
 * 
 *  In your network configuration, define the IP addresses that you got in step 3 as DNS
 * 
 *  servers>
 * 
 *  You can now query instance names in your VPCs and the names of records in your private hosted
 * 
 *  zone> </li> </ol>
 * 
 *  You can also perform the following operations using the AWS
 * 
 *  CLI> <ul> <li>
 * 
 *  <code>list-resolver-endpoints</code>: List all endpoints. The syntax includes options for pagination and
 * 
 *  filtering> </li> <li>
 * 
 *  <code>update-resolver-endpoints</code>: Add IP addresses to an endpoint or remove IP addresses from an endpoint.
 * 
 *  </p </li> </ul>
 * 
 *  To delete an endpoint, use the following AWS CLI
 * 
 *  command>
 * 
 *  <code>delete-resolver-endpoint --resolver-endpoint-id [resolver_endpoint_id]</code>
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
: QtAws::Core::AwsAbstractClient(new Route53ResolverClientPrivate(this), parent)
{
    Q_D(Route53ResolverClient);
    d->apiVersion = QStringLiteral("2018-04-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("route53resolver");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Route 53 Resolver");
    d->serviceName = QStringLiteral("route53resolver");
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
: QtAws::Core::AwsAbstractClient(new Route53ResolverClientPrivate(this), parent)
{
    Q_D(Route53ResolverClient);
    d->apiVersion = QStringLiteral("2018-04-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("route53resolver");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Route 53 Resolver");
    d->serviceName = QStringLiteral("route53resolver");
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * AssociateResolverEndpointIpAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds IP addresses to an inbound or an outbound resolver endpoint. If you want to adding more than one IP address, submit
 * one <code>AssociateResolverEndpointIpAddress</code> request for each IP
 *
 * address>
 *
 * To remove an IP address from an endpoint, see
 */
AssociateResolverEndpointIpAddressResponse * Route53ResolverClient::associateResolverEndpointIpAddress(const AssociateResolverEndpointIpAddressRequest &request)
{
    return qobject_cast<AssociateResolverEndpointIpAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * AssociateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a resolver rule with a VPC. When you associate a rule with a VPC, Resolver forwards all DNS queries for the
 * domain name that is specified in the rule and that originate in the VPC. The queries are forwarded to the IP addresses
 * for the DNS resolvers that are specified in the rule. For more information about rules, see <a>CreateResolverRule</a>.
 */
AssociateResolverRuleResponse * Route53ResolverClient::associateResolverRule(const AssociateResolverRuleRequest &request)
{
    return qobject_cast<AssociateResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a resolver endpoint. There are two types of resolver endpoints, inbound and
 *
 * outbound> <ul> <li>
 *
 * An <i>inbound resolver endpoint</i> forwards DNS queries to the DNS service for a VPC from your network or another
 *
 * VPC> </li> <li>
 *
 * An <i>outbound resolver endpoint</i> forwards DNS queries from the DNS service for a VPC to your network or another
 */
CreateResolverEndpointResponse * Route53ResolverClient::createResolverEndpoint(const CreateResolverEndpointRequest &request)
{
    return qobject_cast<CreateResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * CreateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For DNS queries that originate in your VPCs, specifies which resolver endpoint the queries pass through, one domain name
 * that you want to forward to your network, and the IP addresses of the DNS resolvers in your
 */
CreateResolverRuleResponse * Route53ResolverClient::createResolverRule(const CreateResolverRuleRequest &request)
{
    return qobject_cast<CreateResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resolver endpoint. The effect of deleting a resolver endpoint depends on whether it's an inbound or an
 * outbound resolver
 *
 * endpoint> <ul> <li>
 *
 * <b>Inbound</b>: DNS queries from your network or another VPC are no longer routed to the DNS service for the specified
 *
 * VPC> </li> <li>
 *
 * <b>Outbound</b>: DNS queries from a VPC are no longer routed to your network or to another
 */
DeleteResolverEndpointResponse * Route53ResolverClient::deleteResolverEndpoint(const DeleteResolverEndpointRequest &request)
{
    return qobject_cast<DeleteResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DeleteResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resolver rule. Before you can delete a resolver rule, you must disassociate it from all the VPCs that you
 * associated the resolver rule with. For more infomation, see
 */
DeleteResolverRuleResponse * Route53ResolverClient::deleteResolverRule(const DeleteResolverRuleRequest &request)
{
    return qobject_cast<DeleteResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DisassociateResolverEndpointIpAddressResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes IP addresses from an inbound or an outbound resolver endpoint. If you want to remove more than one IP address,
 * submit one <code>DisassociateResolverEndpointIpAddress</code> request for each IP
 *
 * address>
 *
 * To add an IP address to an endpoint, see
 */
DisassociateResolverEndpointIpAddressResponse * Route53ResolverClient::disassociateResolverEndpointIpAddress(const DisassociateResolverEndpointIpAddressRequest &request)
{
    return qobject_cast<DisassociateResolverEndpointIpAddressResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * DisassociateResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the association between a specified resolver rule and a specified
 *
 * VPC> <b>
 *
 * If you disassociate a resolver rule from a VPC, Resolver stops forwarding DNS queries for the domain name that you
 * specified in the resolver rule.
 */
DisassociateResolverRuleResponse * Route53ResolverClient::disassociateResolverRule(const DisassociateResolverRuleRequest &request)
{
    return qobject_cast<DisassociateResolverRuleResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified resolver endpoint, such as whether it's an inbound or an outbound resolver endpoint,
 * and the current status of the
 */
GetResolverEndpointResponse * Route53ResolverClient::getResolverEndpoint(const GetResolverEndpointRequest &request)
{
    return qobject_cast<GetResolverEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * GetResolverRuleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about a specified resolver rule, such as the domain name that the rule forwards DNS queries for and the
 * ID of the outbound resolver endpoint that the rule is associated
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
 * Gets information about an association between a specified resolver rule and a VPC. You associate a resolver rule and a
 * VPC using <a>AssociateResolverRule</a>.
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
 * Gets information about a resolver rule policy. A resolver rule policy specifies the Resolver operations and resources
 * that you want to allow another AWS account to be able to use.
 */
GetResolverRulePolicyResponse * Route53ResolverClient::getResolverRulePolicy(const GetResolverRulePolicyRequest &request)
{
    return qobject_cast<GetResolverRulePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverEndpointIpAddressesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the IP addresses for a specified resolver
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
 * Lists all the resolver endpoints that were created using the current AWS
 */
ListResolverEndpointsResponse * Route53ResolverClient::listResolverEndpoints(const ListResolverEndpointsRequest &request)
{
    return qobject_cast<ListResolverEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the Route53ResolverClient service, and returns a pointer to an
 * ListResolverRuleAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the associations that were created between resolver rules and VPCs using the current AWS
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
 * Lists the resolver rules that were created using the current AWS
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
 * PutResolverRulePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Specifies the Resolver operations and resources that you want to allow another AWS account to be able to
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
 * UpdateResolverEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the name of an inbound or an outbound resolver endpoint.
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
 * Updates settings for a specified resolver rule. <code>ResolverRuleId</code> is required, and all other parameters are
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
Route53ResolverClientPrivate::Route53ResolverClientPrivate(Route53ResolverClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Route53Resolver
} // namespace QtAws

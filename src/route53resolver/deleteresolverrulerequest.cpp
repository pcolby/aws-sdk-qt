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

#include "deleteresolverrulerequest.h"
#include "deleteresolverrulerequest_p.h"
#include "deleteresolverruleresponse.h"
#include "route53resolverrequest_p.h"

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::DeleteResolverRuleRequest
 * \brief The DeleteResolverRuleRequest class provides an interface for Route53Resolver DeleteResolverRule requests.
 *
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
 *  easily resolve domain names for Amazon Web Services resources such as EC2 instances or records in a Route 53 private
 *  hosted zone. For more information, see <a
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
 *
 * \sa Route53ResolverClient::deleteResolverRule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResolverRuleRequest::DeleteResolverRuleRequest(const DeleteResolverRuleRequest &other)
    : Route53ResolverRequest(new DeleteResolverRuleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResolverRuleRequest object.
 */
DeleteResolverRuleRequest::DeleteResolverRuleRequest()
    : Route53ResolverRequest(new DeleteResolverRuleRequestPrivate(Route53ResolverRequest::DeleteResolverRuleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResolverRuleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResolverRuleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResolverRuleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResolverRuleResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Resolver::DeleteResolverRuleRequestPrivate
 * \brief The DeleteResolverRuleRequestPrivate class provides private implementation for DeleteResolverRuleRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a DeleteResolverRuleRequestPrivate object for Route53Resolver \a action,
 * with public implementation \a q.
 */
DeleteResolverRuleRequestPrivate::DeleteResolverRuleRequestPrivate(
    const Route53ResolverRequest::Action action, DeleteResolverRuleRequest * const q)
    : Route53ResolverRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResolverRuleRequest
 * class' copy constructor.
 */
DeleteResolverRuleRequestPrivate::DeleteResolverRuleRequestPrivate(
    const DeleteResolverRuleRequestPrivate &other, DeleteResolverRuleRequest * const q)
    : Route53ResolverRequestPrivate(other, q)
{

}

} // namespace Route53Resolver
} // namespace QtAws

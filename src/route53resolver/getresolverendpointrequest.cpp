/*
    Copyright 2013-2020 Paul Colby

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

#include "getresolverendpointrequest.h"
#include "getresolverendpointrequest_p.h"
#include "getresolverendpointresponse.h"
#include "route53resolverrequest_p.h"

namespace QtAws {
namespace Route53Resolver {

/*!
 * \class QtAws::Route53Resolver::GetResolverEndpointRequest
 * \brief The GetResolverEndpointRequest class provides an interface for Route53Resolver GetResolverEndpoint requests.
 *
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
 *
 * \sa Route53ResolverClient::getResolverEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetResolverEndpointRequest::GetResolverEndpointRequest(const GetResolverEndpointRequest &other)
    : Route53ResolverRequest(new GetResolverEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResolverEndpointRequest object.
 */
GetResolverEndpointRequest::GetResolverEndpointRequest()
    : Route53ResolverRequest(new GetResolverEndpointRequestPrivate(Route53ResolverRequest::GetResolverEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetResolverEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResolverEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResolverEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetResolverEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Resolver::GetResolverEndpointRequestPrivate
 * \brief The GetResolverEndpointRequestPrivate class provides private implementation for GetResolverEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Resolver
 */

/*!
 * Constructs a GetResolverEndpointRequestPrivate object for Route53Resolver \a action,
 * with public implementation \a q.
 */
GetResolverEndpointRequestPrivate::GetResolverEndpointRequestPrivate(
    const Route53ResolverRequest::Action action, GetResolverEndpointRequest * const q)
    : Route53ResolverRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResolverEndpointRequest
 * class' copy constructor.
 */
GetResolverEndpointRequestPrivate::GetResolverEndpointRequestPrivate(
    const GetResolverEndpointRequestPrivate &other, GetResolverEndpointRequest * const q)
    : Route53ResolverRequestPrivate(other, q)
{

}

} // namespace Route53Resolver
} // namespace QtAws

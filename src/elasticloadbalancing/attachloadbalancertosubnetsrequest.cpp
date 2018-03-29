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

#include "attachloadbalancertosubnetsrequest.h"
#include "attachloadbalancertosubnetsrequest_p.h"
#include "attachloadbalancertosubnetsresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  AttachLoadBalancerToSubnetsRequest
 *
 * @brief  Implements ElasticLoadBalancing AttachLoadBalancerToSubnets requests.
 *
 * @see    ElasticLoadBalancingClient::attachLoadBalancerToSubnets
 */

/**
 * @brief  Constructs a new AttachLoadBalancerToSubnetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AttachLoadBalancerToSubnetsRequest::AttachLoadBalancerToSubnetsRequest(const AttachLoadBalancerToSubnetsRequest &other)
    : ElasticLoadBalancingRequest(new AttachLoadBalancerToSubnetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AttachLoadBalancerToSubnetsRequest object.
 */
AttachLoadBalancerToSubnetsRequest::AttachLoadBalancerToSubnetsRequest()
    : ElasticLoadBalancingRequest(new AttachLoadBalancerToSubnetsRequestPrivate(ElasticLoadBalancingRequest::AttachLoadBalancerToSubnetsAction, this))
{

}

bool AttachLoadBalancerToSubnetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AttachLoadBalancerToSubnetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AttachLoadBalancerToSubnetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * AttachLoadBalancerToSubnetsRequest::response(QNetworkReply * const reply) const
{
    return new AttachLoadBalancerToSubnetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AttachLoadBalancerToSubnetsRequestPrivate
 *
 * @brief  Private implementation for AttachLoadBalancerToSubnetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerToSubnetsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public AttachLoadBalancerToSubnetsRequest instance.
 */
AttachLoadBalancerToSubnetsRequestPrivate::AttachLoadBalancerToSubnetsRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, AttachLoadBalancerToSubnetsRequest * const q)
    : AttachLoadBalancerToSubnetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerToSubnetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AttachLoadBalancerToSubnetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AttachLoadBalancerToSubnetsRequest instance.
 */
AttachLoadBalancerToSubnetsRequestPrivate::AttachLoadBalancerToSubnetsRequestPrivate(
    const AttachLoadBalancerToSubnetsRequestPrivate &other, AttachLoadBalancerToSubnetsRequest * const q)
    : AttachLoadBalancerToSubnetsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws

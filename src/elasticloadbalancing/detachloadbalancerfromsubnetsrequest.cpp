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

#include "detachloadbalancerfromsubnetsrequest.h"
#include "detachloadbalancerfromsubnetsrequest_p.h"
#include "detachloadbalancerfromsubnetsresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DetachLoadBalancerFromSubnetsRequest
 *
 * @brief  Implements ElasticLoadBalancing DetachLoadBalancerFromSubnets requests.
 *
 * @see    ElasticLoadBalancingClient::detachLoadBalancerFromSubnets
 */

/**
 * @brief  Constructs a new DetachLoadBalancerFromSubnetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DetachLoadBalancerFromSubnetsRequest::DetachLoadBalancerFromSubnetsRequest(const DetachLoadBalancerFromSubnetsRequest &other)
    : ElasticLoadBalancingRequest(new DetachLoadBalancerFromSubnetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DetachLoadBalancerFromSubnetsRequest object.
 */
DetachLoadBalancerFromSubnetsRequest::DetachLoadBalancerFromSubnetsRequest()
    : ElasticLoadBalancingRequest(new DetachLoadBalancerFromSubnetsRequestPrivate(ElasticLoadBalancingRequest::DetachLoadBalancerFromSubnetsAction, this))
{

}

bool DetachLoadBalancerFromSubnetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DetachLoadBalancerFromSubnetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DetachLoadBalancerFromSubnetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachLoadBalancerFromSubnetsRequest::response(QNetworkReply * const reply) const
{
    return new DetachLoadBalancerFromSubnetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DetachLoadBalancerFromSubnetsRequestPrivate
 *
 * @brief  Private implementation for DetachLoadBalancerFromSubnetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancerFromSubnetsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DetachLoadBalancerFromSubnetsRequest instance.
 */
DetachLoadBalancerFromSubnetsRequestPrivate::DetachLoadBalancerFromSubnetsRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DetachLoadBalancerFromSubnetsRequest * const q)
    : DetachLoadBalancerFromSubnetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancerFromSubnetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DetachLoadBalancerFromSubnetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DetachLoadBalancerFromSubnetsRequest instance.
 */
DetachLoadBalancerFromSubnetsRequestPrivate::DetachLoadBalancerFromSubnetsRequestPrivate(
    const DetachLoadBalancerFromSubnetsRequestPrivate &other, DetachLoadBalancerFromSubnetsRequest * const q)
    : DetachLoadBalancerFromSubnetsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws

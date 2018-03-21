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

#include "deregisterinstancesfromloadbalancerrequest.h"
#include "deregisterinstancesfromloadbalancerrequest_p.h"
#include "deregisterinstancesfromloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DeregisterInstancesFromLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancing DeregisterInstancesFromLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingClient::deregisterInstancesFromLoadBalancer
 */

/**
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterInstancesFromLoadBalancerRequest::DeregisterInstancesFromLoadBalancerRequest(const DeregisterInstancesFromLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new DeregisterInstancesFromLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerRequest object.
 */
DeregisterInstancesFromLoadBalancerRequest::DeregisterInstancesFromLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new DeregisterInstancesFromLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::DeregisterInstancesFromLoadBalancerAction, this))
{

}

bool DeregisterInstancesFromLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterInstancesFromLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterInstancesFromLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * DeregisterInstancesFromLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterInstancesFromLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterInstancesFromLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for DeregisterInstancesFromLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DeregisterInstancesFromLoadBalancerRequest instance.
 */
DeregisterInstancesFromLoadBalancerRequestPrivate::DeregisterInstancesFromLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DeregisterInstancesFromLoadBalancerRequest * const q)
    : DeregisterInstancesFromLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterInstancesFromLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterInstancesFromLoadBalancerRequest instance.
 */
DeregisterInstancesFromLoadBalancerRequestPrivate::DeregisterInstancesFromLoadBalancerRequestPrivate(
    const DeregisterInstancesFromLoadBalancerRequestPrivate &other, DeregisterInstancesFromLoadBalancerRequest * const q)
    : DeregisterInstancesFromLoadBalancerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS

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

#include "registerinstanceswithloadbalancerrequest.h"
#include "registerinstanceswithloadbalancerrequest_p.h"
#include "registerinstanceswithloadbalancerresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  RegisterInstancesWithLoadBalancerRequest
 *
 * @brief  Implements ElasticLoadBalancing RegisterInstancesWithLoadBalancer requests.
 *
 * @see    ElasticLoadBalancingClient::registerInstancesWithLoadBalancer
 */

/**
 * @brief  Constructs a new RegisterInstancesWithLoadBalancerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RegisterInstancesWithLoadBalancerRequest::RegisterInstancesWithLoadBalancerRequest(const RegisterInstancesWithLoadBalancerRequest &other)
    : ElasticLoadBalancingRequest(new RegisterInstancesWithLoadBalancerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RegisterInstancesWithLoadBalancerRequest object.
 */
RegisterInstancesWithLoadBalancerRequest::RegisterInstancesWithLoadBalancerRequest()
    : ElasticLoadBalancingRequest(new RegisterInstancesWithLoadBalancerRequestPrivate(ElasticLoadBalancingRequest::RegisterInstancesWithLoadBalancerAction, this))
{

}

bool RegisterInstancesWithLoadBalancerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RegisterInstancesWithLoadBalancerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RegisterInstancesWithLoadBalancerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * RegisterInstancesWithLoadBalancerRequest::response(QNetworkReply * const reply) const
{
    return new RegisterInstancesWithLoadBalancerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RegisterInstancesWithLoadBalancerRequestPrivate
 *
 * @brief  Private implementation for RegisterInstancesWithLoadBalancerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstancesWithLoadBalancerRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public RegisterInstancesWithLoadBalancerRequest instance.
 */
RegisterInstancesWithLoadBalancerRequestPrivate::RegisterInstancesWithLoadBalancerRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, RegisterInstancesWithLoadBalancerRequest * const q)
    : RegisterInstancesWithLoadBalancerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstancesWithLoadBalancerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RegisterInstancesWithLoadBalancerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RegisterInstancesWithLoadBalancerRequest instance.
 */
RegisterInstancesWithLoadBalancerRequestPrivate::RegisterInstancesWithLoadBalancerRequestPrivate(
    const RegisterInstancesWithLoadBalancerRequestPrivate &other, RegisterInstancesWithLoadBalancerRequest * const q)
    : RegisterInstancesWithLoadBalancerPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS

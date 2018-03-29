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

#include "modifyloadbalancerattributesrequest.h"
#include "modifyloadbalancerattributesrequest_p.h"
#include "modifyloadbalancerattributesresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  ModifyLoadBalancerAttributesRequest
 *
 * @brief  Implements ElasticLoadBalancing ModifyLoadBalancerAttributes requests.
 *
 * @see    ElasticLoadBalancingClient::modifyLoadBalancerAttributes
 */

/**
 * @brief  Constructs a new ModifyLoadBalancerAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest(const ModifyLoadBalancerAttributesRequest &other)
    : ElasticLoadBalancingRequest(new ModifyLoadBalancerAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyLoadBalancerAttributesRequest object.
 */
ModifyLoadBalancerAttributesRequest::ModifyLoadBalancerAttributesRequest()
    : ElasticLoadBalancingRequest(new ModifyLoadBalancerAttributesRequestPrivate(ElasticLoadBalancingRequest::ModifyLoadBalancerAttributesAction, this))
{

}

bool ModifyLoadBalancerAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyLoadBalancerAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyLoadBalancerAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * ModifyLoadBalancerAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyLoadBalancerAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyLoadBalancerAttributesRequestPrivate
 *
 * @brief  Private implementation for ModifyLoadBalancerAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyLoadBalancerAttributesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public ModifyLoadBalancerAttributesRequest instance.
 */
ModifyLoadBalancerAttributesRequestPrivate::ModifyLoadBalancerAttributesRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, ModifyLoadBalancerAttributesRequest * const q)
    : ModifyLoadBalancerAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyLoadBalancerAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyLoadBalancerAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyLoadBalancerAttributesRequest instance.
 */
ModifyLoadBalancerAttributesRequestPrivate::ModifyLoadBalancerAttributesRequestPrivate(
    const ModifyLoadBalancerAttributesRequestPrivate &other, ModifyLoadBalancerAttributesRequest * const q)
    : ModifyLoadBalancerAttributesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws

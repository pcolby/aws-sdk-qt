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

#include "createloadbalancerpolicyrequest.h"
#include "createloadbalancerpolicyrequest_p.h"
#include "createloadbalancerpolicyresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  CreateLoadBalancerPolicyRequest
 *
 * @brief  Implements ElasticLoadBalancing CreateLoadBalancerPolicy requests.
 *
 * @see    ElasticLoadBalancingClient::createLoadBalancerPolicy
 */

/**
 * @brief  Constructs a new CreateLoadBalancerPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateLoadBalancerPolicyRequest::CreateLoadBalancerPolicyRequest(const CreateLoadBalancerPolicyRequest &other)
    : ElasticLoadBalancingRequest(new CreateLoadBalancerPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateLoadBalancerPolicyRequest object.
 */
CreateLoadBalancerPolicyRequest::CreateLoadBalancerPolicyRequest()
    : ElasticLoadBalancingRequest(new CreateLoadBalancerPolicyRequestPrivate(ElasticLoadBalancingRequest::CreateLoadBalancerPolicyAction, this))
{

}

bool CreateLoadBalancerPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateLoadBalancerPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateLoadBalancerPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * CreateLoadBalancerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoadBalancerPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerPolicyRequestPrivate
 *
 * @brief  Private implementation for CreateLoadBalancerPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerPolicyRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public CreateLoadBalancerPolicyRequest instance.
 */
CreateLoadBalancerPolicyRequestPrivate::CreateLoadBalancerPolicyRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, CreateLoadBalancerPolicyRequest * const q)
    : CreateLoadBalancerPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateLoadBalancerPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateLoadBalancerPolicyRequest instance.
 */
CreateLoadBalancerPolicyRequestPrivate::CreateLoadBalancerPolicyRequestPrivate(
    const CreateLoadBalancerPolicyRequestPrivate &other, CreateLoadBalancerPolicyRequest * const q)
    : CreateLoadBalancerPolicyPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS

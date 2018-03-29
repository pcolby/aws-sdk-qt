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

#include "deleteloadbalancerpolicyrequest.h"
#include "deleteloadbalancerpolicyrequest_p.h"
#include "deleteloadbalancerpolicyresponse.h"
#include "elasticloadbalancingrequest_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DeleteLoadBalancerPolicyRequest
 *
 * @brief  Implements ElasticLoadBalancing DeleteLoadBalancerPolicy requests.
 *
 * @see    ElasticLoadBalancingClient::deleteLoadBalancerPolicy
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerPolicyRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteLoadBalancerPolicyRequest::DeleteLoadBalancerPolicyRequest(const DeleteLoadBalancerPolicyRequest &other)
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerPolicyRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteLoadBalancerPolicyRequest object.
 */
DeleteLoadBalancerPolicyRequest::DeleteLoadBalancerPolicyRequest()
    : ElasticLoadBalancingRequest(new DeleteLoadBalancerPolicyRequestPrivate(ElasticLoadBalancingRequest::DeleteLoadBalancerPolicyAction, this))
{

}

bool DeleteLoadBalancerPolicyRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteLoadBalancerPolicyResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteLoadBalancerPolicyResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingClient::send
 */
AwsAbstractResponse * DeleteLoadBalancerPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoadBalancerPolicyResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerPolicyRequestPrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerPolicyRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerPolicyRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancing action being performed.
 * @param  q       Pointer to this object's public DeleteLoadBalancerPolicyRequest instance.
 */
DeleteLoadBalancerPolicyRequestPrivate::DeleteLoadBalancerPolicyRequestPrivate(
    const ElasticLoadBalancingRequest::Action action, DeleteLoadBalancerPolicyRequest * const q)
    : DeleteLoadBalancerPolicyPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerPolicyRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoadBalancerPolicyRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteLoadBalancerPolicyRequest instance.
 */
DeleteLoadBalancerPolicyRequestPrivate::DeleteLoadBalancerPolicyRequestPrivate(
    const DeleteLoadBalancerPolicyRequestPrivate &other, DeleteLoadBalancerPolicyRequest * const q)
    : DeleteLoadBalancerPolicyPrivate(other, q)
{

}

} // namespace ElasticLoadBalancing
} // namespace QtAws

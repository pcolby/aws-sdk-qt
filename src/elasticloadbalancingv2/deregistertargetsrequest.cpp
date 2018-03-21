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

#include "deregistertargetsrequest.h"
#include "deregistertargetsrequest_p.h"
#include "deregistertargetsresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeregisterTargetsRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DeregisterTargets requests.
 *
 * @see    ElasticLoadBalancingv2Client::deregisterTargets
 */

/**
 * @brief  Constructs a new DeregisterTargetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeregisterTargetsRequest::DeregisterTargetsRequest(const DeregisterTargetsRequest &other)
    : ElasticLoadBalancingv2Request(new DeregisterTargetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeregisterTargetsRequest object.
 */
DeregisterTargetsRequest::DeregisterTargetsRequest()
    : ElasticLoadBalancingv2Request(new DeregisterTargetsRequestPrivate(ElasticLoadBalancingv2Request::DeregisterTargetsAction, this))
{

}

bool DeregisterTargetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeregisterTargetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeregisterTargetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DeregisterTargetsRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterTargetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeregisterTargetsRequestPrivate
 *
 * @brief  Private implementation for DeregisterTargetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTargetsRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DeregisterTargetsRequest instance.
 */
DeregisterTargetsRequestPrivate::DeregisterTargetsRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DeregisterTargetsRequest * const q)
    : DeregisterTargetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterTargetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeregisterTargetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeregisterTargetsRequest instance.
 */
DeregisterTargetsRequestPrivate::DeregisterTargetsRequestPrivate(
    const DeregisterTargetsRequestPrivate &other, DeregisterTargetsRequest * const q)
    : DeregisterTargetsPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS

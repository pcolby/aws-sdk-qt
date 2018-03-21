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

#include "modifytargetgrouprequest.h"
#include "modifytargetgrouprequest_p.h"
#include "modifytargetgroupresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyTargetGroupRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 ModifyTargetGroup requests.
 *
 * @see    ElasticLoadBalancingv2Client::modifyTargetGroup
 */

/**
 * @brief  Constructs a new ModifyTargetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyTargetGroupRequest::ModifyTargetGroupRequest(const ModifyTargetGroupRequest &other)
    : ElasticLoadBalancingv2Request(new ModifyTargetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyTargetGroupRequest object.
 */
ModifyTargetGroupRequest::ModifyTargetGroupRequest()
    : ElasticLoadBalancingv2Request(new ModifyTargetGroupRequestPrivate(ElasticLoadBalancingv2Request::ModifyTargetGroupAction, this))
{

}

bool ModifyTargetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyTargetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyTargetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * ModifyTargetGroupRequest::response(QNetworkReply * const reply) const
{
    return new ModifyTargetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyTargetGroupRequestPrivate
 *
 * @brief  Private implementation for ModifyTargetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyTargetGroupRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public ModifyTargetGroupRequest instance.
 */
ModifyTargetGroupRequestPrivate::ModifyTargetGroupRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, ModifyTargetGroupRequest * const q)
    : ModifyTargetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyTargetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyTargetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyTargetGroupRequest instance.
 */
ModifyTargetGroupRequestPrivate::ModifyTargetGroupRequestPrivate(
    const ModifyTargetGroupRequestPrivate &other, ModifyTargetGroupRequest * const q)
    : ModifyTargetGroupPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS

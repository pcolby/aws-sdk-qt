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

#include "modifytargetgroupattributesrequest.h"
#include "modifytargetgroupattributesrequest_p.h"
#include "modifytargetgroupattributesresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyTargetGroupAttributesRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 ModifyTargetGroupAttributes requests.
 *
 * @see    ElasticLoadBalancingv2Client::modifyTargetGroupAttributes
 */

/**
 * @brief  Constructs a new ModifyTargetGroupAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ModifyTargetGroupAttributesRequest::ModifyTargetGroupAttributesRequest(const ModifyTargetGroupAttributesRequest &other)
    : ElasticLoadBalancingv2Request(new ModifyTargetGroupAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ModifyTargetGroupAttributesRequest object.
 */
ModifyTargetGroupAttributesRequest::ModifyTargetGroupAttributesRequest()
    : ElasticLoadBalancingv2Request(new ModifyTargetGroupAttributesRequestPrivate(ElasticLoadBalancingv2Request::ModifyTargetGroupAttributesAction, this))
{

}

bool ModifyTargetGroupAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ModifyTargetGroupAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ModifyTargetGroupAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * ModifyTargetGroupAttributesRequest::response(QNetworkReply * const reply) const
{
    return new ModifyTargetGroupAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ModifyTargetGroupAttributesRequestPrivate
 *
 * @brief  Private implementation for ModifyTargetGroupAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyTargetGroupAttributesRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public ModifyTargetGroupAttributesRequest instance.
 */
ModifyTargetGroupAttributesRequestPrivate::ModifyTargetGroupAttributesRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, ModifyTargetGroupAttributesRequest * const q)
    : ModifyTargetGroupAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ModifyTargetGroupAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ModifyTargetGroupAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ModifyTargetGroupAttributesRequest instance.
 */
ModifyTargetGroupAttributesRequestPrivate::ModifyTargetGroupAttributesRequestPrivate(
    const ModifyTargetGroupAttributesRequestPrivate &other, ModifyTargetGroupAttributesRequest * const q)
    : ModifyTargetGroupAttributesPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS

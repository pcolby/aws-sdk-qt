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

#include "createtargetgrouprequest.h"
#include "createtargetgrouprequest_p.h"
#include "createtargetgroupresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  CreateTargetGroupRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 CreateTargetGroup requests.
 *
 * @see    ElasticLoadBalancingv2Client::createTargetGroup
 */

/**
 * @brief  Constructs a new CreateTargetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTargetGroupRequest::CreateTargetGroupRequest(const CreateTargetGroupRequest &other)
    : ElasticLoadBalancingv2Request(new CreateTargetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTargetGroupRequest object.
 */
CreateTargetGroupRequest::CreateTargetGroupRequest()
    : ElasticLoadBalancingv2Request(new CreateTargetGroupRequestPrivate(ElasticLoadBalancingv2Request::CreateTargetGroupAction, this))
{

}

bool CreateTargetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTargetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTargetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * CreateTargetGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateTargetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTargetGroupRequestPrivate
 *
 * @brief  Private implementation for CreateTargetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTargetGroupRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public CreateTargetGroupRequest instance.
 */
CreateTargetGroupRequestPrivate::CreateTargetGroupRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, CreateTargetGroupRequest * const q)
    : CreateTargetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTargetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTargetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTargetGroupRequest instance.
 */
CreateTargetGroupRequestPrivate::CreateTargetGroupRequestPrivate(
    const CreateTargetGroupRequestPrivate &other, CreateTargetGroupRequest * const q)
    : CreateTargetGroupPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace AWS

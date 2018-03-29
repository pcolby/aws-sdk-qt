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

#include "deletetargetgrouprequest.h"
#include "deletetargetgrouprequest_p.h"
#include "deletetargetgroupresponse.h"
#include "elasticloadbalancingv2request_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteTargetGroupRequest
 *
 * @brief  Implements ElasticLoadBalancingv2 DeleteTargetGroup requests.
 *
 * @see    ElasticLoadBalancingv2Client::deleteTargetGroup
 */

/**
 * @brief  Constructs a new DeleteTargetGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTargetGroupRequest::DeleteTargetGroupRequest(const DeleteTargetGroupRequest &other)
    : ElasticLoadBalancingv2Request(new DeleteTargetGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTargetGroupRequest object.
 */
DeleteTargetGroupRequest::DeleteTargetGroupRequest()
    : ElasticLoadBalancingv2Request(new DeleteTargetGroupRequestPrivate(ElasticLoadBalancingv2Request::DeleteTargetGroupAction, this))
{

}

bool DeleteTargetGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTargetGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTargetGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticLoadBalancingv2Client::send
 */
AwsAbstractResponse * DeleteTargetGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTargetGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTargetGroupRequestPrivate
 *
 * @brief  Private implementation for DeleteTargetGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTargetGroupRequestPrivate object.
 *
 * @param  action  ElasticLoadBalancingv2 action being performed.
 * @param  q       Pointer to this object's public DeleteTargetGroupRequest instance.
 */
DeleteTargetGroupRequestPrivate::DeleteTargetGroupRequestPrivate(
    const ElasticLoadBalancingv2Request::Action action, DeleteTargetGroupRequest * const q)
    : DeleteTargetGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTargetGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTargetGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTargetGroupRequest instance.
 */
DeleteTargetGroupRequestPrivate::DeleteTargetGroupRequestPrivate(
    const DeleteTargetGroupRequestPrivate &other, DeleteTargetGroupRequest * const q)
    : DeleteTargetGroupPrivate(other, q)
{

}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

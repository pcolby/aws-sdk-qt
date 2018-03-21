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

#include "createautoscalinggrouprequest.h"
#include "createautoscalinggrouprequest_p.h"
#include "createautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  CreateAutoScalingGroupRequest
 *
 * @brief  Implements AutoScaling CreateAutoScalingGroup requests.
 *
 * @see    AutoScalingClient::createAutoScalingGroup
 */

/**
 * @brief  Constructs a new CreateAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAutoScalingGroupResponse::CreateAutoScalingGroupResponse(

/**
 * @brief  Constructs a new CreateAutoScalingGroupRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest(const CreateAutoScalingGroupRequest &other)
    : AutoScalingRequest(new CreateAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateAutoScalingGroupRequest object.
 */
CreateAutoScalingGroupRequest::CreateAutoScalingGroupRequest()
    : AutoScalingRequest(new CreateAutoScalingGroupRequestPrivate(AutoScalingRequest::CreateAutoScalingGroupAction, this))
{

}

bool CreateAutoScalingGroupRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateAutoScalingGroupResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateAutoScalingGroupResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * CreateAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateAutoScalingGroupResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateAutoScalingGroupRequestPrivate
 *
 * @brief  Private implementation for CreateAutoScalingGroupRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAutoScalingGroupRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public CreateAutoScalingGroupRequest instance.
 */
CreateAutoScalingGroupRequestPrivate::CreateAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, CreateAutoScalingGroupRequest * const q)
    : CreateAutoScalingGroupPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateAutoScalingGroupRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateAutoScalingGroupRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateAutoScalingGroupRequest instance.
 */
CreateAutoScalingGroupRequestPrivate::CreateAutoScalingGroupRequestPrivate(
    const CreateAutoScalingGroupRequestPrivate &other, CreateAutoScalingGroupRequest * const q)
    : CreateAutoScalingGroupPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS

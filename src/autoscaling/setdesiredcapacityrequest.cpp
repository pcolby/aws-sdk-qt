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

#include "setdesiredcapacityrequest.h"
#include "setdesiredcapacityrequest_p.h"
#include "setdesiredcapacityresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  SetDesiredCapacityRequest
 *
 * @brief  Implements AutoScaling SetDesiredCapacity requests.
 *
 * @see    AutoScalingClient::setDesiredCapacity
 */

/**
 * @brief  Constructs a new SetDesiredCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetDesiredCapacityResponse::SetDesiredCapacityResponse(

/**
 * @brief  Constructs a new SetDesiredCapacityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetDesiredCapacityRequest::SetDesiredCapacityRequest(const SetDesiredCapacityRequest &other)
    : AutoScalingRequest(new SetDesiredCapacityRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetDesiredCapacityRequest object.
 */
SetDesiredCapacityRequest::SetDesiredCapacityRequest()
    : AutoScalingRequest(new SetDesiredCapacityRequestPrivate(AutoScalingRequest::SetDesiredCapacityAction, this))
{

}

bool SetDesiredCapacityRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetDesiredCapacityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetDesiredCapacityResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * SetDesiredCapacityRequest::response(QNetworkReply * const reply) const
{
    return new SetDesiredCapacityResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetDesiredCapacityRequestPrivate
 *
 * @brief  Private implementation for SetDesiredCapacityRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetDesiredCapacityRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public SetDesiredCapacityRequest instance.
 */
SetDesiredCapacityRequestPrivate::SetDesiredCapacityRequestPrivate(
    const AutoScalingRequest::Action action, SetDesiredCapacityRequest * const q)
    : SetDesiredCapacityPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetDesiredCapacityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetDesiredCapacityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetDesiredCapacityRequest instance.
 */
SetDesiredCapacityRequestPrivate::SetDesiredCapacityRequestPrivate(
    const SetDesiredCapacityRequestPrivate &other, SetDesiredCapacityRequest * const q)
    : SetDesiredCapacityPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS

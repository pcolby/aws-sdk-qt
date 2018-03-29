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

#include "setinstancehealthrequest.h"
#include "setinstancehealthrequest_p.h"
#include "setinstancehealthresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/**
 * @class  SetInstanceHealthRequest
 *
 * @brief  Implements AutoScaling SetInstanceHealth requests.
 *
 * @see    AutoScalingClient::setInstanceHealth
 */

/**
 * @brief  Constructs a new SetInstanceHealthRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetInstanceHealthRequest::SetInstanceHealthRequest(const SetInstanceHealthRequest &other)
    : AutoScalingRequest(new SetInstanceHealthRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetInstanceHealthRequest object.
 */
SetInstanceHealthRequest::SetInstanceHealthRequest()
    : AutoScalingRequest(new SetInstanceHealthRequestPrivate(AutoScalingRequest::SetInstanceHealthAction, this))
{

}

bool SetInstanceHealthRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetInstanceHealthResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetInstanceHealthResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
QtAws::Core::AwsAbstractResponse * SetInstanceHealthRequest::response(QNetworkReply * const reply) const
{
    return new SetInstanceHealthResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetInstanceHealthRequestPrivate
 *
 * @brief  Private implementation for SetInstanceHealthRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetInstanceHealthRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public SetInstanceHealthRequest instance.
 */
SetInstanceHealthRequestPrivate::SetInstanceHealthRequestPrivate(
    const AutoScalingRequest::Action action, SetInstanceHealthRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetInstanceHealthRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetInstanceHealthRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetInstanceHealthRequest instance.
 */
SetInstanceHealthRequestPrivate::SetInstanceHealthRequestPrivate(
    const SetInstanceHealthRequestPrivate &other, SetInstanceHealthRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws

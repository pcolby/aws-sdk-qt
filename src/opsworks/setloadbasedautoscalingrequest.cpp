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

#include "setloadbasedautoscalingrequest.h"
#include "setloadbasedautoscalingrequest_p.h"
#include "setloadbasedautoscalingresponse.h"
#include "opsworksrequest_p.h"

namespace AWS {
namespace OpsWorks {

/**
 * @class  SetLoadBasedAutoScalingRequest
 *
 * @brief  Implements OpsWorks SetLoadBasedAutoScaling requests.
 *
 * @see    OpsWorksClient::setLoadBasedAutoScaling
 */

/**
 * @brief  Constructs a new SetLoadBasedAutoScalingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetLoadBasedAutoScalingRequest::SetLoadBasedAutoScalingRequest(const SetLoadBasedAutoScalingRequest &other)
    : OpsWorksRequest(new SetLoadBasedAutoScalingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetLoadBasedAutoScalingRequest object.
 */
SetLoadBasedAutoScalingRequest::SetLoadBasedAutoScalingRequest()
    : OpsWorksRequest(new SetLoadBasedAutoScalingRequestPrivate(OpsWorksRequest::SetLoadBasedAutoScalingAction, this))
{

}

bool SetLoadBasedAutoScalingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetLoadBasedAutoScalingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetLoadBasedAutoScalingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OpsWorksClient::send
 */
AwsAbstractResponse * SetLoadBasedAutoScalingRequest::response(QNetworkReply * const reply) const
{
    return new SetLoadBasedAutoScalingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetLoadBasedAutoScalingRequestPrivate
 *
 * @brief  Private implementation for SetLoadBasedAutoScalingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBasedAutoScalingRequestPrivate object.
 *
 * @param  action  OpsWorks action being performed.
 * @param  q       Pointer to this object's public SetLoadBasedAutoScalingRequest instance.
 */
SetLoadBasedAutoScalingRequestPrivate::SetLoadBasedAutoScalingRequestPrivate(
    const OpsWorksRequest::Action action, SetLoadBasedAutoScalingRequest * const q)
    : SetLoadBasedAutoScalingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBasedAutoScalingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetLoadBasedAutoScalingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetLoadBasedAutoScalingRequest instance.
 */
SetLoadBasedAutoScalingRequestPrivate::SetLoadBasedAutoScalingRequestPrivate(
    const SetLoadBasedAutoScalingRequestPrivate &other, SetLoadBasedAutoScalingRequest * const q)
    : SetLoadBasedAutoScalingPrivate(other, q)
{

}

} // namespace OpsWorks
} // namespace AWS

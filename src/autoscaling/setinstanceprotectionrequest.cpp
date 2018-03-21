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

#include "setinstanceprotectionrequest.h"
#include "setinstanceprotectionrequest_p.h"
#include "setinstanceprotectionresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  SetInstanceProtectionRequest
 *
 * @brief  Implements AutoScaling SetInstanceProtection requests.
 *
 * @see    AutoScalingClient::setInstanceProtection
 */

/**
 * @brief  Constructs a new SetInstanceProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetInstanceProtectionResponse::SetInstanceProtectionResponse(

/**
 * @brief  Constructs a new SetInstanceProtectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SetInstanceProtectionRequest::SetInstanceProtectionRequest(const SetInstanceProtectionRequest &other)
    : AutoScalingRequest(new SetInstanceProtectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SetInstanceProtectionRequest object.
 */
SetInstanceProtectionRequest::SetInstanceProtectionRequest()
    : AutoScalingRequest(new SetInstanceProtectionRequestPrivate(AutoScalingRequest::SetInstanceProtectionAction, this))
{

}

bool SetInstanceProtectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SetInstanceProtectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SetInstanceProtectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * SetInstanceProtectionRequest::response(QNetworkReply * const reply) const
{
    return new SetInstanceProtectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SetInstanceProtectionRequestPrivate
 *
 * @brief  Private implementation for SetInstanceProtectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetInstanceProtectionRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public SetInstanceProtectionRequest instance.
 */
SetInstanceProtectionRequestPrivate::SetInstanceProtectionRequestPrivate(
    const AutoScalingRequest::Action action, SetInstanceProtectionRequest * const q)
    : SetInstanceProtectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SetInstanceProtectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SetInstanceProtectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SetInstanceProtectionRequest instance.
 */
SetInstanceProtectionRequestPrivate::SetInstanceProtectionRequestPrivate(
    const SetInstanceProtectionRequestPrivate &other, SetInstanceProtectionRequest * const q)
    : SetInstanceProtectionPrivate(other, q)
{

}

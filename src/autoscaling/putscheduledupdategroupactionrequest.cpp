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

#include "putscheduledupdategroupactionrequest.h"
#include "putscheduledupdategroupactionrequest_p.h"
#include "putscheduledupdategroupactionresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  PutScheduledUpdateGroupActionRequest
 *
 * @brief  Implements AutoScaling PutScheduledUpdateGroupAction requests.
 *
 * @see    AutoScalingClient::putScheduledUpdateGroupAction
 */

/**
 * @brief  Constructs a new PutScheduledUpdateGroupActionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutScheduledUpdateGroupActionResponse::PutScheduledUpdateGroupActionResponse(

/**
 * @brief  Constructs a new PutScheduledUpdateGroupActionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutScheduledUpdateGroupActionRequest::PutScheduledUpdateGroupActionRequest(const PutScheduledUpdateGroupActionRequest &other)
    : AutoScalingRequest(new PutScheduledUpdateGroupActionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutScheduledUpdateGroupActionRequest object.
 */
PutScheduledUpdateGroupActionRequest::PutScheduledUpdateGroupActionRequest()
    : AutoScalingRequest(new PutScheduledUpdateGroupActionRequestPrivate(AutoScalingRequest::PutScheduledUpdateGroupActionAction, this))
{

}

bool PutScheduledUpdateGroupActionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutScheduledUpdateGroupActionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutScheduledUpdateGroupActionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * PutScheduledUpdateGroupActionRequest::response(QNetworkReply * const reply) const
{
    return new PutScheduledUpdateGroupActionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutScheduledUpdateGroupActionRequestPrivate
 *
 * @brief  Private implementation for PutScheduledUpdateGroupActionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutScheduledUpdateGroupActionRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public PutScheduledUpdateGroupActionRequest instance.
 */
PutScheduledUpdateGroupActionRequestPrivate::PutScheduledUpdateGroupActionRequestPrivate(
    const AutoScalingRequest::Action action, PutScheduledUpdateGroupActionRequest * const q)
    : PutScheduledUpdateGroupActionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutScheduledUpdateGroupActionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutScheduledUpdateGroupActionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutScheduledUpdateGroupActionRequest instance.
 */
PutScheduledUpdateGroupActionRequestPrivate::PutScheduledUpdateGroupActionRequestPrivate(
    const PutScheduledUpdateGroupActionRequestPrivate &other, PutScheduledUpdateGroupActionRequest * const q)
    : PutScheduledUpdateGroupActionPrivate(other, q)
{

}

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

#include "recordlifecycleactionheartbeatrequest.h"
#include "recordlifecycleactionheartbeatrequest_p.h"
#include "recordlifecycleactionheartbeatresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  RecordLifecycleActionHeartbeatRequest
 *
 * @brief  Implements AutoScaling RecordLifecycleActionHeartbeat requests.
 *
 * @see    AutoScalingClient::recordLifecycleActionHeartbeat
 */

/**
 * @brief  Constructs a new RecordLifecycleActionHeartbeatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RecordLifecycleActionHeartbeatResponse::RecordLifecycleActionHeartbeatResponse(

/**
 * @brief  Constructs a new RecordLifecycleActionHeartbeatRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RecordLifecycleActionHeartbeatRequest::RecordLifecycleActionHeartbeatRequest(const RecordLifecycleActionHeartbeatRequest &other)
    : AutoScalingRequest(new RecordLifecycleActionHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RecordLifecycleActionHeartbeatRequest object.
 */
RecordLifecycleActionHeartbeatRequest::RecordLifecycleActionHeartbeatRequest()
    : AutoScalingRequest(new RecordLifecycleActionHeartbeatRequestPrivate(AutoScalingRequest::RecordLifecycleActionHeartbeatAction, this))
{

}

bool RecordLifecycleActionHeartbeatRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RecordLifecycleActionHeartbeatResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RecordLifecycleActionHeartbeatResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * RecordLifecycleActionHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new RecordLifecycleActionHeartbeatResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RecordLifecycleActionHeartbeatRequestPrivate
 *
 * @brief  Private implementation for RecordLifecycleActionHeartbeatRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RecordLifecycleActionHeartbeatRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public RecordLifecycleActionHeartbeatRequest instance.
 */
RecordLifecycleActionHeartbeatRequestPrivate::RecordLifecycleActionHeartbeatRequestPrivate(
    const AutoScalingRequest::Action action, RecordLifecycleActionHeartbeatRequest * const q)
    : RecordLifecycleActionHeartbeatPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RecordLifecycleActionHeartbeatRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RecordLifecycleActionHeartbeatRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RecordLifecycleActionHeartbeatRequest instance.
 */
RecordLifecycleActionHeartbeatRequestPrivate::RecordLifecycleActionHeartbeatRequestPrivate(
    const RecordLifecycleActionHeartbeatRequestPrivate &other, RecordLifecycleActionHeartbeatRequest * const q)
    : RecordLifecycleActionHeartbeatPrivate(other, q)
{

}

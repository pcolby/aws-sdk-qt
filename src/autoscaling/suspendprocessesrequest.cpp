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

#include "suspendprocessesrequest.h"
#include "suspendprocessesrequest_p.h"
#include "suspendprocessesresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  SuspendProcessesRequest
 *
 * @brief  Implements AutoScaling SuspendProcesses requests.
 *
 * @see    AutoScalingClient::suspendProcesses
 */

/**
 * @brief  Constructs a new SuspendProcessesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SuspendProcessesRequest::SuspendProcessesRequest(const SuspendProcessesRequest &other)
    : AutoScalingRequest(new SuspendProcessesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SuspendProcessesRequest object.
 */
SuspendProcessesRequest::SuspendProcessesRequest()
    : AutoScalingRequest(new SuspendProcessesRequestPrivate(AutoScalingRequest::SuspendProcessesAction, this))
{

}

bool SuspendProcessesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SuspendProcessesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SuspendProcessesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * SuspendProcessesRequest::response(QNetworkReply * const reply) const
{
    return new SuspendProcessesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SuspendProcessesRequestPrivate
 *
 * @brief  Private implementation for SuspendProcessesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SuspendProcessesRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public SuspendProcessesRequest instance.
 */
SuspendProcessesRequestPrivate::SuspendProcessesRequestPrivate(
    const AutoScalingRequest::Action action, SuspendProcessesRequest * const q)
    : SuspendProcessesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SuspendProcessesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SuspendProcessesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SuspendProcessesRequest instance.
 */
SuspendProcessesRequestPrivate::SuspendProcessesRequestPrivate(
    const SuspendProcessesRequestPrivate &other, SuspendProcessesRequest * const q)
    : SuspendProcessesPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS

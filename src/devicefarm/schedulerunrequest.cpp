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

#include "schedulerunrequest.h"
#include "schedulerunrequest_p.h"
#include "schedulerunresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ScheduleRunRequest
 *
 * @brief  Implements DeviceFarm ScheduleRun requests.
 *
 * @see    DeviceFarmClient::scheduleRun
 */

/**
 * @brief  Constructs a new ScheduleRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ScheduleRunRequest::ScheduleRunRequest(const ScheduleRunRequest &other)
    : DeviceFarmRequest(new ScheduleRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ScheduleRunRequest object.
 */
ScheduleRunRequest::ScheduleRunRequest()
    : DeviceFarmRequest(new ScheduleRunRequestPrivate(DeviceFarmRequest::ScheduleRunAction, this))
{

}

bool ScheduleRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ScheduleRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ScheduleRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * ScheduleRunRequest::response(QNetworkReply * const reply) const
{
    return new ScheduleRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ScheduleRunRequestPrivate
 *
 * @brief  Private implementation for ScheduleRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleRunRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ScheduleRunRequest instance.
 */
ScheduleRunRequestPrivate::ScheduleRunRequestPrivate(
    const DeviceFarmRequest::Action action, ScheduleRunRequest * const q)
    : ScheduleRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ScheduleRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ScheduleRunRequest instance.
 */
ScheduleRunRequestPrivate::ScheduleRunRequestPrivate(
    const ScheduleRunRequestPrivate &other, ScheduleRunRequest * const q)
    : ScheduleRunPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace AWS

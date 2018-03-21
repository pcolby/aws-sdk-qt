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

#include "stoprunrequest.h"
#include "stoprunrequest_p.h"
#include "stoprunresponse.h"
#include "devicefarmrequest_p.h"

namespace AWS {
namespace DeviceFarm {

/**
 * @class  StopRunRequest
 *
 * @brief  Implements DeviceFarm StopRun requests.
 *
 * @see    DeviceFarmClient::stopRun
 */

/**
 * @brief  Constructs a new StopRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopRunResponse::StopRunResponse(

/**
 * @brief  Constructs a new StopRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopRunRequest::StopRunRequest(const StopRunRequest &other)
    : DeviceFarmRequest(new StopRunRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopRunRequest object.
 */
StopRunRequest::StopRunRequest()
    : DeviceFarmRequest(new StopRunRequestPrivate(DeviceFarmRequest::StopRunAction, this))
{

}

bool StopRunRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopRunResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
AwsAbstractResponse * StopRunRequest::response(QNetworkReply * const reply) const
{
    return new StopRunResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopRunRequestPrivate
 *
 * @brief  Private implementation for StopRunRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopRunRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public StopRunRequest instance.
 */
StopRunRequestPrivate::StopRunRequestPrivate(
    const DeviceFarmRequest::Action action, StopRunRequest * const q)
    : StopRunPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopRunRequest instance.
 */
StopRunRequestPrivate::StopRunRequestPrivate(
    const StopRunRequestPrivate &other, StopRunRequest * const q)
    : StopRunPrivate(other, q)
{

}

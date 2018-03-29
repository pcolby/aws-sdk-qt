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

#include "stoptaskrequest.h"
#include "stoptaskrequest_p.h"
#include "stoptaskresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  StopTaskRequest
 *
 * @brief  Implements ECS StopTask requests.
 *
 * @see    ECSClient::stopTask
 */

/**
 * @brief  Constructs a new StopTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopTaskRequest::StopTaskRequest(const StopTaskRequest &other)
    : ECSRequest(new StopTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopTaskRequest object.
 */
StopTaskRequest::StopTaskRequest()
    : ECSRequest(new StopTaskRequestPrivate(ECSRequest::StopTaskAction, this))
{

}

bool StopTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * StopTaskRequest::response(QNetworkReply * const reply) const
{
    return new StopTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopTaskRequestPrivate
 *
 * @brief  Private implementation for StopTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopTaskRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public StopTaskRequest instance.
 */
StopTaskRequestPrivate::StopTaskRequestPrivate(
    const ECSRequest::Action action, StopTaskRequest * const q)
    : StopTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopTaskRequest instance.
 */
StopTaskRequestPrivate::StopTaskRequestPrivate(
    const StopTaskRequestPrivate &other, StopTaskRequest * const q)
    : StopTaskPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS

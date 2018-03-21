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

#include "runtaskrequest.h"
#include "runtaskrequest_p.h"
#include "runtaskresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  RunTaskRequest
 *
 * @brief  Implements ECS RunTask requests.
 *
 * @see    ECSClient::runTask
 */

/**
 * @brief  Constructs a new RunTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RunTaskResponse::RunTaskResponse(

/**
 * @brief  Constructs a new RunTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RunTaskRequest::RunTaskRequest(const RunTaskRequest &other)
    : ECSRequest(new RunTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RunTaskRequest object.
 */
RunTaskRequest::RunTaskRequest()
    : ECSRequest(new RunTaskRequestPrivate(ECSRequest::RunTaskAction, this))
{

}

bool RunTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RunTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RunTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * RunTaskRequest::response(QNetworkReply * const reply) const
{
    return new RunTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RunTaskRequestPrivate
 *
 * @brief  Private implementation for RunTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RunTaskRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public RunTaskRequest instance.
 */
RunTaskRequestPrivate::RunTaskRequestPrivate(
    const ECSRequest::Action action, RunTaskRequest * const q)
    : RunTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RunTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RunTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RunTaskRequest instance.
 */
RunTaskRequestPrivate::RunTaskRequestPrivate(
    const RunTaskRequestPrivate &other, RunTaskRequest * const q)
    : RunTaskPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS

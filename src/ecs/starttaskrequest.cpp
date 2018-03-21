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

#include "starttaskrequest.h"
#include "starttaskrequest_p.h"
#include "starttaskresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  StartTaskRequest
 *
 * @brief  Implements ECS StartTask requests.
 *
 * @see    ECSClient::startTask
 */

/**
 * @brief  Constructs a new StartTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartTaskResponse::StartTaskResponse(

/**
 * @brief  Constructs a new StartTaskRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartTaskRequest::StartTaskRequest(const StartTaskRequest &other)
    : ECSRequest(new StartTaskRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartTaskRequest object.
 */
StartTaskRequest::StartTaskRequest()
    : ECSRequest(new StartTaskRequestPrivate(ECSRequest::StartTaskAction, this))
{

}

bool StartTaskRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartTaskResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartTaskResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * StartTaskRequest::response(QNetworkReply * const reply) const
{
    return new StartTaskResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartTaskRequestPrivate
 *
 * @brief  Private implementation for StartTaskRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTaskRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public StartTaskRequest instance.
 */
StartTaskRequestPrivate::StartTaskRequestPrivate(
    const ECSRequest::Action action, StartTaskRequest * const q)
    : StartTaskPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartTaskRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartTaskRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartTaskRequest instance.
 */
StartTaskRequestPrivate::StartTaskRequestPrivate(
    const StartTaskRequestPrivate &other, StartTaskRequest * const q)
    : StartTaskPrivate(other, q)
{

}

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

#include "startexecutionrequest.h"
#include "startexecutionrequest_p.h"
#include "startexecutionresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  StartExecutionRequest
 *
 * @brief  Implements SFN StartExecution requests.
 *
 * @see    SFNClient::startExecution
 */

/**
 * @brief  Constructs a new StartExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartExecutionRequest::StartExecutionRequest(const StartExecutionRequest &other)
    : SFNRequest(new StartExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartExecutionRequest object.
 */
StartExecutionRequest::StartExecutionRequest()
    : SFNRequest(new StartExecutionRequestPrivate(SFNRequest::StartExecutionAction, this))
{

}

bool StartExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * StartExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartExecutionRequestPrivate
 *
 * @brief  Private implementation for StartExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartExecutionRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public StartExecutionRequest instance.
 */
StartExecutionRequestPrivate::StartExecutionRequestPrivate(
    const SFNRequest::Action action, StartExecutionRequest * const q)
    : StartExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartExecutionRequest instance.
 */
StartExecutionRequestPrivate::StartExecutionRequestPrivate(
    const StartExecutionRequestPrivate &other, StartExecutionRequest * const q)
    : StartExecutionPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS

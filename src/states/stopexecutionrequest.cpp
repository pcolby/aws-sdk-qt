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

#include "stopexecutionrequest.h"
#include "stopexecutionrequest_p.h"
#include "stopexecutionresponse.h"
#include "sfnrequest_p.h"

namespace QtAws {
namespace SFN {

/**
 * @class  StopExecutionRequest
 *
 * @brief  Implements SFN StopExecution requests.
 *
 * @see    SFNClient::stopExecution
 */

/**
 * @brief  Constructs a new StopExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopExecutionRequest::StopExecutionRequest(const StopExecutionRequest &other)
    : SFNRequest(new StopExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopExecutionRequest object.
 */
StopExecutionRequest::StopExecutionRequest()
    : SFNRequest(new StopExecutionRequestPrivate(SFNRequest::StopExecutionAction, this))
{

}

bool StopExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * StopExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StopExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopExecutionRequestPrivate
 *
 * @brief  Private implementation for StopExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopExecutionRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public StopExecutionRequest instance.
 */
StopExecutionRequestPrivate::StopExecutionRequestPrivate(
    const SFNRequest::Action action, StopExecutionRequest * const q)
    : StopExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopExecutionRequest instance.
 */
StopExecutionRequestPrivate::StopExecutionRequestPrivate(
    const StopExecutionRequestPrivate &other, StopExecutionRequest * const q)
    : StopExecutionPrivate(other, q)
{

}

} // namespace SFN
} // namespace QtAws

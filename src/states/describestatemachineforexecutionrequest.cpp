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

#include "describestatemachineforexecutionrequest.h"
#include "describestatemachineforexecutionrequest_p.h"
#include "describestatemachineforexecutionresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  DescribeStateMachineForExecutionRequest
 *
 * @brief  Implements SFN DescribeStateMachineForExecution requests.
 *
 * @see    SFNClient::describeStateMachineForExecution
 */

/**
 * @brief  Constructs a new DescribeStateMachineForExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStateMachineForExecutionResponse::DescribeStateMachineForExecutionResponse(

/**
 * @brief  Constructs a new DescribeStateMachineForExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStateMachineForExecutionRequest::DescribeStateMachineForExecutionRequest(const DescribeStateMachineForExecutionRequest &other)
    : SFNRequest(new DescribeStateMachineForExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeStateMachineForExecutionRequest object.
 */
DescribeStateMachineForExecutionRequest::DescribeStateMachineForExecutionRequest()
    : SFNRequest(new DescribeStateMachineForExecutionRequestPrivate(SFNRequest::DescribeStateMachineForExecutionAction, this))
{

}

bool DescribeStateMachineForExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeStateMachineForExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStateMachineForExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * DescribeStateMachineForExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStateMachineForExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeStateMachineForExecutionRequestPrivate
 *
 * @brief  Private implementation for DescribeStateMachineForExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStateMachineForExecutionRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DescribeStateMachineForExecutionRequest instance.
 */
DescribeStateMachineForExecutionRequestPrivate::DescribeStateMachineForExecutionRequestPrivate(
    const SFNRequest::Action action, DescribeStateMachineForExecutionRequest * const q)
    : DescribeStateMachineForExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStateMachineForExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStateMachineForExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStateMachineForExecutionRequest instance.
 */
DescribeStateMachineForExecutionRequestPrivate::DescribeStateMachineForExecutionRequestPrivate(
    const DescribeStateMachineForExecutionRequestPrivate &other, DescribeStateMachineForExecutionRequest * const q)
    : DescribeStateMachineForExecutionPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS

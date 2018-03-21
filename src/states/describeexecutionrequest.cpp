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

#include "describeexecutionrequest.h"
#include "describeexecutionrequest_p.h"
#include "describeexecutionresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  DescribeExecutionRequest
 *
 * @brief  Implements SFN DescribeExecution requests.
 *
 * @see    SFNClient::describeExecution
 */

/**
 * @brief  Constructs a new DescribeExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeExecutionRequest::DescribeExecutionRequest(const DescribeExecutionRequest &other)
    : SFNRequest(new DescribeExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeExecutionRequest object.
 */
DescribeExecutionRequest::DescribeExecutionRequest()
    : SFNRequest(new DescribeExecutionRequestPrivate(SFNRequest::DescribeExecutionAction, this))
{

}

bool DescribeExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * DescribeExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeExecutionRequestPrivate
 *
 * @brief  Private implementation for DescribeExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExecutionRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public DescribeExecutionRequest instance.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const SFNRequest::Action action, DescribeExecutionRequest * const q)
    : DescribeExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeExecutionRequest instance.
 */
DescribeExecutionRequestPrivate::DescribeExecutionRequestPrivate(
    const DescribeExecutionRequestPrivate &other, DescribeExecutionRequest * const q)
    : DescribeExecutionPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS

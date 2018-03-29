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

#include "describeworkflowexecutionrequest.h"
#include "describeworkflowexecutionrequest_p.h"
#include "describeworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  DescribeWorkflowExecutionRequest
 *
 * @brief  Implements SWF DescribeWorkflowExecution requests.
 *
 * @see    SWFClient::describeWorkflowExecution
 */

/**
 * @brief  Constructs a new DescribeWorkflowExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeWorkflowExecutionRequest::DescribeWorkflowExecutionRequest(const DescribeWorkflowExecutionRequest &other)
    : SWFRequest(new DescribeWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeWorkflowExecutionRequest object.
 */
DescribeWorkflowExecutionRequest::DescribeWorkflowExecutionRequest()
    : SWFRequest(new DescribeWorkflowExecutionRequestPrivate(SWFRequest::DescribeWorkflowExecutionAction, this))
{

}

bool DescribeWorkflowExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeWorkflowExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeWorkflowExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * DescribeWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkflowExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeWorkflowExecutionRequestPrivate
 *
 * @brief  Private implementation for DescribeWorkflowExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkflowExecutionRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public DescribeWorkflowExecutionRequest instance.
 */
DescribeWorkflowExecutionRequestPrivate::DescribeWorkflowExecutionRequestPrivate(
    const SWFRequest::Action action, DescribeWorkflowExecutionRequest * const q)
    : DescribeWorkflowExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkflowExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkflowExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeWorkflowExecutionRequest instance.
 */
DescribeWorkflowExecutionRequestPrivate::DescribeWorkflowExecutionRequestPrivate(
    const DescribeWorkflowExecutionRequestPrivate &other, DescribeWorkflowExecutionRequest * const q)
    : DescribeWorkflowExecutionPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws

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

#include "terminateworkflowexecutionrequest.h"
#include "terminateworkflowexecutionrequest_p.h"
#include "terminateworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  TerminateWorkflowExecutionRequest
 *
 * @brief  Implements SWF TerminateWorkflowExecution requests.
 *
 * @see    SWFClient::terminateWorkflowExecution
 */

/**
 * @brief  Constructs a new TerminateWorkflowExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateWorkflowExecutionRequest::TerminateWorkflowExecutionRequest(const TerminateWorkflowExecutionRequest &other)
    : SWFRequest(new TerminateWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateWorkflowExecutionRequest object.
 */
TerminateWorkflowExecutionRequest::TerminateWorkflowExecutionRequest()
    : SWFRequest(new TerminateWorkflowExecutionRequestPrivate(SWFRequest::TerminateWorkflowExecutionAction, this))
{

}

bool TerminateWorkflowExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateWorkflowExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateWorkflowExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new TerminateWorkflowExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateWorkflowExecutionRequestPrivate
 *
 * @brief  Private implementation for TerminateWorkflowExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateWorkflowExecutionRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public TerminateWorkflowExecutionRequest instance.
 */
TerminateWorkflowExecutionRequestPrivate::TerminateWorkflowExecutionRequestPrivate(
    const SWFRequest::Action action, TerminateWorkflowExecutionRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateWorkflowExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateWorkflowExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateWorkflowExecutionRequest instance.
 */
TerminateWorkflowExecutionRequestPrivate::TerminateWorkflowExecutionRequestPrivate(
    const TerminateWorkflowExecutionRequestPrivate &other, TerminateWorkflowExecutionRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws

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

#include "signalworkflowexecutionrequest.h"
#include "signalworkflowexecutionrequest_p.h"
#include "signalworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/**
 * @class  SignalWorkflowExecutionRequest
 *
 * @brief  Implements SWF SignalWorkflowExecution requests.
 *
 * @see    SWFClient::signalWorkflowExecution
 */

/**
 * @brief  Constructs a new SignalWorkflowExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SignalWorkflowExecutionRequest::SignalWorkflowExecutionRequest(const SignalWorkflowExecutionRequest &other)
    : SWFRequest(new SignalWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SignalWorkflowExecutionRequest object.
 */
SignalWorkflowExecutionRequest::SignalWorkflowExecutionRequest()
    : SWFRequest(new SignalWorkflowExecutionRequestPrivate(SWFRequest::SignalWorkflowExecutionAction, this))
{

}

bool SignalWorkflowExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SignalWorkflowExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SignalWorkflowExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * SignalWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new SignalWorkflowExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SignalWorkflowExecutionRequestPrivate
 *
 * @brief  Private implementation for SignalWorkflowExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SignalWorkflowExecutionRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public SignalWorkflowExecutionRequest instance.
 */
SignalWorkflowExecutionRequestPrivate::SignalWorkflowExecutionRequestPrivate(
    const SWFRequest::Action action, SignalWorkflowExecutionRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SignalWorkflowExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SignalWorkflowExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SignalWorkflowExecutionRequest instance.
 */
SignalWorkflowExecutionRequestPrivate::SignalWorkflowExecutionRequestPrivate(
    const SignalWorkflowExecutionRequestPrivate &other, SignalWorkflowExecutionRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws

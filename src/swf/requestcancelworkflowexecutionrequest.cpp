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

#include "requestcancelworkflowexecutionrequest.h"
#include "requestcancelworkflowexecutionrequest_p.h"
#include "requestcancelworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  RequestCancelWorkflowExecutionRequest
 *
 * @brief  Implements SWF RequestCancelWorkflowExecution requests.
 *
 * @see    SWFClient::requestCancelWorkflowExecution
 */

/**
 * @brief  Constructs a new RequestCancelWorkflowExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestCancelWorkflowExecutionResponse::RequestCancelWorkflowExecutionResponse(

/**
 * @brief  Constructs a new RequestCancelWorkflowExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RequestCancelWorkflowExecutionRequest::RequestCancelWorkflowExecutionRequest(const RequestCancelWorkflowExecutionRequest &other)
    : SWFRequest(new RequestCancelWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RequestCancelWorkflowExecutionRequest object.
 */
RequestCancelWorkflowExecutionRequest::RequestCancelWorkflowExecutionRequest()
    : SWFRequest(new RequestCancelWorkflowExecutionRequestPrivate(SWFRequest::RequestCancelWorkflowExecutionAction, this))
{

}

bool RequestCancelWorkflowExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RequestCancelWorkflowExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RequestCancelWorkflowExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * RequestCancelWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new RequestCancelWorkflowExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RequestCancelWorkflowExecutionRequestPrivate
 *
 * @brief  Private implementation for RequestCancelWorkflowExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestCancelWorkflowExecutionRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public RequestCancelWorkflowExecutionRequest instance.
 */
RequestCancelWorkflowExecutionRequestPrivate::RequestCancelWorkflowExecutionRequestPrivate(
    const SWFRequest::Action action, RequestCancelWorkflowExecutionRequest * const q)
    : RequestCancelWorkflowExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RequestCancelWorkflowExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RequestCancelWorkflowExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RequestCancelWorkflowExecutionRequest instance.
 */
RequestCancelWorkflowExecutionRequestPrivate::RequestCancelWorkflowExecutionRequestPrivate(
    const RequestCancelWorkflowExecutionRequestPrivate &other, RequestCancelWorkflowExecutionRequest * const q)
    : RequestCancelWorkflowExecutionPrivate(other, q)
{

}

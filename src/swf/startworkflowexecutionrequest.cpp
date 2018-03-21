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

#include "startworkflowexecutionrequest.h"
#include "startworkflowexecutionrequest_p.h"
#include "startworkflowexecutionresponse.h"
#include "swfrequest_p.h"

namespace AWS {
namespace SWF {

/**
 * @class  StartWorkflowExecutionRequest
 *
 * @brief  Implements SWF StartWorkflowExecution requests.
 *
 * @see    SWFClient::startWorkflowExecution
 */

/**
 * @brief  Constructs a new StartWorkflowExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartWorkflowExecutionResponse::StartWorkflowExecutionResponse(

/**
 * @brief  Constructs a new StartWorkflowExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartWorkflowExecutionRequest::StartWorkflowExecutionRequest(const StartWorkflowExecutionRequest &other)
    : SWFRequest(new StartWorkflowExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartWorkflowExecutionRequest object.
 */
StartWorkflowExecutionRequest::StartWorkflowExecutionRequest()
    : SWFRequest(new StartWorkflowExecutionRequestPrivate(SWFRequest::StartWorkflowExecutionAction, this))
{

}

bool StartWorkflowExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartWorkflowExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartWorkflowExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SWFClient::send
 */
AwsAbstractResponse * StartWorkflowExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartWorkflowExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartWorkflowExecutionRequestPrivate
 *
 * @brief  Private implementation for StartWorkflowExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartWorkflowExecutionRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public StartWorkflowExecutionRequest instance.
 */
StartWorkflowExecutionRequestPrivate::StartWorkflowExecutionRequestPrivate(
    const SWFRequest::Action action, StartWorkflowExecutionRequest * const q)
    : StartWorkflowExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartWorkflowExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartWorkflowExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartWorkflowExecutionRequest instance.
 */
StartWorkflowExecutionRequestPrivate::StartWorkflowExecutionRequestPrivate(
    const StartWorkflowExecutionRequestPrivate &other, StartWorkflowExecutionRequest * const q)
    : StartWorkflowExecutionPrivate(other, q)
{

}

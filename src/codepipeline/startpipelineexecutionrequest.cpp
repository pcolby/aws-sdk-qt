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

#include "startpipelineexecutionrequest.h"
#include "startpipelineexecutionrequest_p.h"
#include "startpipelineexecutionresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  StartPipelineExecutionRequest
 *
 * @brief  Implements CodePipeline StartPipelineExecution requests.
 *
 * @see    CodePipelineClient::startPipelineExecution
 */

/**
 * @brief  Constructs a new StartPipelineExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartPipelineExecutionResponse::StartPipelineExecutionResponse(

/**
 * @brief  Constructs a new StartPipelineExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartPipelineExecutionRequest::StartPipelineExecutionRequest(const StartPipelineExecutionRequest &other)
    : CodePipelineRequest(new StartPipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartPipelineExecutionRequest object.
 */
StartPipelineExecutionRequest::StartPipelineExecutionRequest()
    : CodePipelineRequest(new StartPipelineExecutionRequestPrivate(CodePipelineRequest::StartPipelineExecutionAction, this))
{

}

bool StartPipelineExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartPipelineExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartPipelineExecutionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * StartPipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartPipelineExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartPipelineExecutionRequestPrivate
 *
 * @brief  Private implementation for StartPipelineExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartPipelineExecutionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public StartPipelineExecutionRequest instance.
 */
StartPipelineExecutionRequestPrivate::StartPipelineExecutionRequestPrivate(
    const CodePipelineRequest::Action action, StartPipelineExecutionRequest * const q)
    : StartPipelineExecutionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartPipelineExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartPipelineExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartPipelineExecutionRequest instance.
 */
StartPipelineExecutionRequestPrivate::StartPipelineExecutionRequestPrivate(
    const StartPipelineExecutionRequestPrivate &other, StartPipelineExecutionRequest * const q)
    : StartPipelineExecutionPrivate(other, q)
{

}

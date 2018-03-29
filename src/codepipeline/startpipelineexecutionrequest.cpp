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

#include "startpipelineexecutionrequest.h"
#include "startpipelineexecutionrequest_p.h"
#include "startpipelineexecutionresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  StartPipelineExecutionRequest
 *
 * @brief  Implements CodePipeline StartPipelineExecution requests.
 *
 * @see    CodePipelineClient::startPipelineExecution
 */

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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * StartPipelineExecutionRequest::response(QNetworkReply * const reply) const
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
    : CodePipelineRequestPrivate(action, q)
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
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws

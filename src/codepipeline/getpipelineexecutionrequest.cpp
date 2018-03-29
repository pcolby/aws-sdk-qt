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

#include "getpipelineexecutionrequest.h"
#include "getpipelineexecutionrequest_p.h"
#include "getpipelineexecutionresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetPipelineExecutionRequest
 *
 * @brief  Implements CodePipeline GetPipelineExecution requests.
 *
 * @see    CodePipelineClient::getPipelineExecution
 */

/**
 * @brief  Constructs a new GetPipelineExecutionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPipelineExecutionRequest::GetPipelineExecutionRequest(const GetPipelineExecutionRequest &other)
    : CodePipelineRequest(new GetPipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPipelineExecutionRequest object.
 */
GetPipelineExecutionRequest::GetPipelineExecutionRequest()
    : CodePipelineRequest(new GetPipelineExecutionRequestPrivate(CodePipelineRequest::GetPipelineExecutionAction, this))
{

}

bool GetPipelineExecutionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPipelineExecutionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPipelineExecutionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetPipelineExecutionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPipelineExecutionRequestPrivate
 *
 * @brief  Private implementation for GetPipelineExecutionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineExecutionRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public GetPipelineExecutionRequest instance.
 */
GetPipelineExecutionRequestPrivate::GetPipelineExecutionRequestPrivate(
    const CodePipelineRequest::Action action, GetPipelineExecutionRequest * const q)
    : CodePipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineExecutionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPipelineExecutionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPipelineExecutionRequest instance.
 */
GetPipelineExecutionRequestPrivate::GetPipelineExecutionRequestPrivate(
    const GetPipelineExecutionRequestPrivate &other, GetPipelineExecutionRequest * const q)
    : CodePipelineRequestPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws

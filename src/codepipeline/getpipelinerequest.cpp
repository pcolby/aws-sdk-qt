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

#include "getpipelinerequest.h"
#include "getpipelinerequest_p.h"
#include "getpipelineresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  GetPipelineRequest
 *
 * @brief  Implements CodePipeline GetPipeline requests.
 *
 * @see    CodePipelineClient::getPipeline
 */

/**
 * @brief  Constructs a new GetPipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPipelineRequest::GetPipelineRequest(const GetPipelineRequest &other)
    : CodePipelineRequest(new GetPipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPipelineRequest object.
 */
GetPipelineRequest::GetPipelineRequest()
    : CodePipelineRequest(new GetPipelineRequestPrivate(CodePipelineRequest::GetPipelineAction, this))
{

}

bool GetPipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPipelineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * GetPipelineRequest::response(QNetworkReply * const reply) const
{
    return new GetPipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPipelineRequestPrivate
 *
 * @brief  Private implementation for GetPipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public GetPipelineRequest instance.
 */
GetPipelineRequestPrivate::GetPipelineRequestPrivate(
    const CodePipelineRequest::Action action, GetPipelineRequest * const q)
    : GetPipelinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPipelineRequest instance.
 */
GetPipelineRequestPrivate::GetPipelineRequestPrivate(
    const GetPipelineRequestPrivate &other, GetPipelineRequest * const q)
    : GetPipelinePrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws

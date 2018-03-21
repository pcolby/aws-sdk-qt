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

#include "getpipelinestaterequest.h"
#include "getpipelinestaterequest_p.h"
#include "getpipelinestateresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  GetPipelineStateRequest
 *
 * @brief  Implements CodePipeline GetPipelineState requests.
 *
 * @see    CodePipelineClient::getPipelineState
 */

/**
 * @brief  Constructs a new GetPipelineStateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPipelineStateRequest::GetPipelineStateRequest(const GetPipelineStateRequest &other)
    : CodePipelineRequest(new GetPipelineStateRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPipelineStateRequest object.
 */
GetPipelineStateRequest::GetPipelineStateRequest()
    : CodePipelineRequest(new GetPipelineStateRequestPrivate(CodePipelineRequest::GetPipelineStateAction, this))
{

}

bool GetPipelineStateRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPipelineStateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPipelineStateResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * GetPipelineStateRequest::response(QNetworkReply * const reply) const
{
    return new GetPipelineStateResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPipelineStateRequestPrivate
 *
 * @brief  Private implementation for GetPipelineStateRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineStateRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public GetPipelineStateRequest instance.
 */
GetPipelineStateRequestPrivate::GetPipelineStateRequestPrivate(
    const CodePipelineRequest::Action action, GetPipelineStateRequest * const q)
    : GetPipelineStatePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineStateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPipelineStateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPipelineStateRequest instance.
 */
GetPipelineStateRequestPrivate::GetPipelineStateRequestPrivate(
    const GetPipelineStateRequestPrivate &other, GetPipelineStateRequest * const q)
    : GetPipelineStatePrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS

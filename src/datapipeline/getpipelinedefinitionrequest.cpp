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

#include "getpipelinedefinitionrequest.h"
#include "getpipelinedefinitionrequest_p.h"
#include "getpipelinedefinitionresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  GetPipelineDefinitionRequest
 *
 * @brief  Implements DataPipeline GetPipelineDefinition requests.
 *
 * @see    DataPipelineClient::getPipelineDefinition
 */

/**
 * @brief  Constructs a new GetPipelineDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPipelineDefinitionResponse::GetPipelineDefinitionResponse(

/**
 * @brief  Constructs a new GetPipelineDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetPipelineDefinitionRequest::GetPipelineDefinitionRequest(const GetPipelineDefinitionRequest &other)
    : DataPipelineRequest(new GetPipelineDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetPipelineDefinitionRequest object.
 */
GetPipelineDefinitionRequest::GetPipelineDefinitionRequest()
    : DataPipelineRequest(new GetPipelineDefinitionRequestPrivate(DataPipelineRequest::GetPipelineDefinitionAction, this))
{

}

bool GetPipelineDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetPipelineDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetPipelineDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * GetPipelineDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetPipelineDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetPipelineDefinitionRequestPrivate
 *
 * @brief  Private implementation for GetPipelineDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineDefinitionRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public GetPipelineDefinitionRequest instance.
 */
GetPipelineDefinitionRequestPrivate::GetPipelineDefinitionRequestPrivate(
    const DataPipelineRequest::Action action, GetPipelineDefinitionRequest * const q)
    : GetPipelineDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetPipelineDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetPipelineDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetPipelineDefinitionRequest instance.
 */
GetPipelineDefinitionRequestPrivate::GetPipelineDefinitionRequestPrivate(
    const GetPipelineDefinitionRequestPrivate &other, GetPipelineDefinitionRequest * const q)
    : GetPipelineDefinitionPrivate(other, q)
{

}

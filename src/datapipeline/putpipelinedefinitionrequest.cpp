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

#include "putpipelinedefinitionrequest.h"
#include "putpipelinedefinitionrequest_p.h"
#include "putpipelinedefinitionresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  PutPipelineDefinitionRequest
 *
 * @brief  Implements DataPipeline PutPipelineDefinition requests.
 *
 * @see    DataPipelineClient::putPipelineDefinition
 */

/**
 * @brief  Constructs a new PutPipelineDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutPipelineDefinitionRequest::PutPipelineDefinitionRequest(const PutPipelineDefinitionRequest &other)
    : DataPipelineRequest(new PutPipelineDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutPipelineDefinitionRequest object.
 */
PutPipelineDefinitionRequest::PutPipelineDefinitionRequest()
    : DataPipelineRequest(new PutPipelineDefinitionRequestPrivate(DataPipelineRequest::PutPipelineDefinitionAction, this))
{

}

bool PutPipelineDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutPipelineDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutPipelineDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * PutPipelineDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new PutPipelineDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutPipelineDefinitionRequestPrivate
 *
 * @brief  Private implementation for PutPipelineDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutPipelineDefinitionRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public PutPipelineDefinitionRequest instance.
 */
PutPipelineDefinitionRequestPrivate::PutPipelineDefinitionRequestPrivate(
    const DataPipelineRequest::Action action, PutPipelineDefinitionRequest * const q)
    : PutPipelineDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutPipelineDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutPipelineDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutPipelineDefinitionRequest instance.
 */
PutPipelineDefinitionRequestPrivate::PutPipelineDefinitionRequestPrivate(
    const PutPipelineDefinitionRequestPrivate &other, PutPipelineDefinitionRequest * const q)
    : PutPipelineDefinitionPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace AWS

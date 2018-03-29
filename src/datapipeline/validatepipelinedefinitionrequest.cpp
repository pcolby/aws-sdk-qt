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

#include "validatepipelinedefinitionrequest.h"
#include "validatepipelinedefinitionrequest_p.h"
#include "validatepipelinedefinitionresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  ValidatePipelineDefinitionRequest
 *
 * @brief  Implements DataPipeline ValidatePipelineDefinition requests.
 *
 * @see    DataPipelineClient::validatePipelineDefinition
 */

/**
 * @brief  Constructs a new ValidatePipelineDefinitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ValidatePipelineDefinitionRequest::ValidatePipelineDefinitionRequest(const ValidatePipelineDefinitionRequest &other)
    : DataPipelineRequest(new ValidatePipelineDefinitionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ValidatePipelineDefinitionRequest object.
 */
ValidatePipelineDefinitionRequest::ValidatePipelineDefinitionRequest()
    : DataPipelineRequest(new ValidatePipelineDefinitionRequestPrivate(DataPipelineRequest::ValidatePipelineDefinitionAction, this))
{

}

bool ValidatePipelineDefinitionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ValidatePipelineDefinitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ValidatePipelineDefinitionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * ValidatePipelineDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new ValidatePipelineDefinitionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ValidatePipelineDefinitionRequestPrivate
 *
 * @brief  Private implementation for ValidatePipelineDefinitionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidatePipelineDefinitionRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public ValidatePipelineDefinitionRequest instance.
 */
ValidatePipelineDefinitionRequestPrivate::ValidatePipelineDefinitionRequestPrivate(
    const DataPipelineRequest::Action action, ValidatePipelineDefinitionRequest * const q)
    : ValidatePipelineDefinitionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ValidatePipelineDefinitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ValidatePipelineDefinitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ValidatePipelineDefinitionRequest instance.
 */
ValidatePipelineDefinitionRequestPrivate::ValidatePipelineDefinitionRequestPrivate(
    const ValidatePipelineDefinitionRequestPrivate &other, ValidatePipelineDefinitionRequest * const q)
    : ValidatePipelineDefinitionPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws

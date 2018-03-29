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

#include "createpipelinerequest.h"
#include "createpipelinerequest_p.h"
#include "createpipelineresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  CreatePipelineRequest
 *
 * @brief  Implements DataPipeline CreatePipeline requests.
 *
 * @see    DataPipelineClient::createPipeline
 */

/**
 * @brief  Constructs a new CreatePipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePipelineRequest::CreatePipelineRequest(const CreatePipelineRequest &other)
    : DataPipelineRequest(new CreatePipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePipelineRequest object.
 */
CreatePipelineRequest::CreatePipelineRequest()
    : DataPipelineRequest(new CreatePipelineRequestPrivate(DataPipelineRequest::CreatePipelineAction, this))
{

}

bool CreatePipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePipelineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreatePipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePipelineRequestPrivate
 *
 * @brief  Private implementation for CreatePipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePipelineRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public CreatePipelineRequest instance.
 */
CreatePipelineRequestPrivate::CreatePipelineRequestPrivate(
    const DataPipelineRequest::Action action, CreatePipelineRequest * const q)
    : DataPipelineRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePipelineRequest instance.
 */
CreatePipelineRequestPrivate::CreatePipelineRequestPrivate(
    const CreatePipelineRequestPrivate &other, CreatePipelineRequest * const q)
    : DataPipelineRequestPrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws

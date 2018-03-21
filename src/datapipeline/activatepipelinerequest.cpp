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

#include "activatepipelinerequest.h"
#include "activatepipelinerequest_p.h"
#include "activatepipelineresponse.h"
#include "datapipelinerequest_p.h"

namespace AWS {
namespace DataPipeline {

/**
 * @class  ActivatePipelineRequest
 *
 * @brief  Implements DataPipeline ActivatePipeline requests.
 *
 * @see    DataPipelineClient::activatePipeline
 */

/**
 * @brief  Constructs a new ActivatePipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ActivatePipelineResponse::ActivatePipelineResponse(

/**
 * @brief  Constructs a new ActivatePipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ActivatePipelineRequest::ActivatePipelineRequest(const ActivatePipelineRequest &other)
    : DataPipelineRequest(new ActivatePipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ActivatePipelineRequest object.
 */
ActivatePipelineRequest::ActivatePipelineRequest()
    : DataPipelineRequest(new ActivatePipelineRequestPrivate(DataPipelineRequest::ActivatePipelineAction, this))
{

}

bool ActivatePipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ActivatePipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ActivatePipelineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * ActivatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new ActivatePipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ActivatePipelineRequestPrivate
 *
 * @brief  Private implementation for ActivatePipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ActivatePipelineRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public ActivatePipelineRequest instance.
 */
ActivatePipelineRequestPrivate::ActivatePipelineRequestPrivate(
    const DataPipelineRequest::Action action, ActivatePipelineRequest * const q)
    : ActivatePipelinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ActivatePipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ActivatePipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ActivatePipelineRequest instance.
 */
ActivatePipelineRequestPrivate::ActivatePipelineRequestPrivate(
    const ActivatePipelineRequestPrivate &other, ActivatePipelineRequest * const q)
    : ActivatePipelinePrivate(other, q)
{

}

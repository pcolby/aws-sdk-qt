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

#include "deletepipelinerequest.h"
#include "deletepipelinerequest_p.h"
#include "deletepipelineresponse.h"
#include "datapipelinerequest_p.h"

namespace QtAws {
namespace DataPipeline {

/**
 * @class  DeletePipelineRequest
 *
 * @brief  Implements DataPipeline DeletePipeline requests.
 *
 * @see    DataPipelineClient::deletePipeline
 */

/**
 * @brief  Constructs a new DeletePipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePipelineRequest::DeletePipelineRequest(const DeletePipelineRequest &other)
    : DataPipelineRequest(new DeletePipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePipelineRequest object.
 */
DeletePipelineRequest::DeletePipelineRequest()
    : DataPipelineRequest(new DeletePipelineRequestPrivate(DataPipelineRequest::DeletePipelineAction, this))
{

}

bool DeletePipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePipelineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DataPipelineClient::send
 */
AwsAbstractResponse * DeletePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeletePipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePipelineRequestPrivate
 *
 * @brief  Private implementation for DeletePipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePipelineRequestPrivate object.
 *
 * @param  action  DataPipeline action being performed.
 * @param  q       Pointer to this object's public DeletePipelineRequest instance.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const DataPipelineRequest::Action action, DeletePipelineRequest * const q)
    : DeletePipelinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePipelineRequest instance.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const DeletePipelineRequestPrivate &other, DeletePipelineRequest * const q)
    : DeletePipelinePrivate(other, q)
{

}

} // namespace DataPipeline
} // namespace QtAws

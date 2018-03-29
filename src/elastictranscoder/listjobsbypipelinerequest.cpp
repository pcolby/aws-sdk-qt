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

#include "listjobsbypipelinerequest.h"
#include "listjobsbypipelinerequest_p.h"
#include "listjobsbypipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ListJobsByPipelineRequest
 *
 * @brief  Implements ElasticTranscoder ListJobsByPipeline requests.
 *
 * @see    ElasticTranscoderClient::listJobsByPipeline
 */

/**
 * @brief  Constructs a new ListJobsByPipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListJobsByPipelineRequest::ListJobsByPipelineRequest(const ListJobsByPipelineRequest &other)
    : ElasticTranscoderRequest(new ListJobsByPipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListJobsByPipelineRequest object.
 */
ListJobsByPipelineRequest::ListJobsByPipelineRequest()
    : ElasticTranscoderRequest(new ListJobsByPipelineRequestPrivate(ElasticTranscoderRequest::ListJobsByPipelineAction, this))
{

}

bool ListJobsByPipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListJobsByPipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListJobsByPipelineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * ListJobsByPipelineRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsByPipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListJobsByPipelineRequestPrivate
 *
 * @brief  Private implementation for ListJobsByPipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsByPipelineRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ListJobsByPipelineRequest instance.
 */
ListJobsByPipelineRequestPrivate::ListJobsByPipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListJobsByPipelineRequest * const q)
    : ListJobsByPipelinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListJobsByPipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListJobsByPipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListJobsByPipelineRequest instance.
 */
ListJobsByPipelineRequestPrivate::ListJobsByPipelineRequestPrivate(
    const ListJobsByPipelineRequestPrivate &other, ListJobsByPipelineRequest * const q)
    : ListJobsByPipelinePrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace AWS

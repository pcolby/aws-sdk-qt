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

#include "readpipelinerequest.h"
#include "readpipelinerequest_p.h"
#include "readpipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace AWS {
namespace ElasticTranscoder {

/**
 * @class  ReadPipelineRequest
 *
 * @brief  Implements ElasticTranscoder ReadPipeline requests.
 *
 * @see    ElasticTranscoderClient::readPipeline
 */

/**
 * @brief  Constructs a new ReadPipelineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ReadPipelineResponse::ReadPipelineResponse(

/**
 * @brief  Constructs a new ReadPipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReadPipelineRequest::ReadPipelineRequest(const ReadPipelineRequest &other)
    : ElasticTranscoderRequest(new ReadPipelineRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ReadPipelineRequest object.
 */
ReadPipelineRequest::ReadPipelineRequest()
    : ElasticTranscoderRequest(new ReadPipelineRequestPrivate(ElasticTranscoderRequest::ReadPipelineAction, this))
{

}

bool ReadPipelineRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ReadPipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReadPipelineResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
AwsAbstractResponse * ReadPipelineRequest::response(QNetworkReply * const reply) const
{
    return new ReadPipelineResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ReadPipelineRequestPrivate
 *
 * @brief  Private implementation for ReadPipelineRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ReadPipelineRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ReadPipelineRequest instance.
 */
ReadPipelineRequestPrivate::ReadPipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadPipelineRequest * const q)
    : ReadPipelinePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ReadPipelineRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ReadPipelineRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ReadPipelineRequest instance.
 */
ReadPipelineRequestPrivate::ReadPipelineRequestPrivate(
    const ReadPipelineRequestPrivate &other, ReadPipelineRequest * const q)
    : ReadPipelinePrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace AWS

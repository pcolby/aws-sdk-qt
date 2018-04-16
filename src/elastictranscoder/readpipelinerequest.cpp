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

#include "readpipelinerequest.h"
#include "readpipelinerequest_p.h"
#include "readpipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadPipelineRequest
 *
 * \brief The ReadPipelineRequest class provides an interface for ElasticTranscoder ReadPipeline requests.
 *
 * \ingroup ElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readPipeline
 */

/*!
 * @brief  Constructs a new ReadPipelineRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ReadPipelineRequest::ReadPipelineRequest(const ReadPipelineRequest &other)
    : ElasticTranscoderRequest(new ReadPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ReadPipelineRequest object.
 */
ReadPipelineRequest::ReadPipelineRequest()
    : ElasticTranscoderRequest(new ReadPipelineRequestPrivate(ElasticTranscoderRequest::ReadPipelineAction, this))
{

}

/*!
 * \reimp
 */
bool ReadPipelineRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ReadPipelineResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ReadPipelineResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticTranscoderClient::send
 */
QtAws::Core::AwsAbstractResponse * ReadPipelineRequest::response(QNetworkReply * const reply) const
{
    return new ReadPipelineResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ReadPipelineRequestPrivate
 *
 * @brief  Private implementation for ReadPipelineRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ReadPipelineRequestPrivate object.
 *
 * @param  action  ElasticTranscoder action being performed.
 * @param  q       Pointer to this object's public ReadPipelineRequest instance.
 */
ReadPipelineRequestPrivate::ReadPipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadPipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
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
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "readpipelinerequest.h"
#include "readpipelinerequest_p.h"
#include "readpipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadPipelineRequest
 * \brief The ReadPipelineRequest class provides an interface for ElasticTranscoder ReadPipeline requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
ReadPipelineRequest::ReadPipelineRequest(const ReadPipelineRequest &other)
    : ElasticTranscoderRequest(new ReadPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ReadPipelineRequest object.
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
 * Returns a ReadPipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ReadPipelineRequest::response(QNetworkReply * const reply) const
{
    return new ReadPipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ReadPipelineRequestPrivate
 * \brief The ReadPipelineRequestPrivate class provides private implementation for ReadPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ReadPipelineRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ReadPipelineRequestPrivate::ReadPipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, ReadPipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ReadPipelineRequest
 * class' copy constructor.
 */
ReadPipelineRequestPrivate::ReadPipelineRequestPrivate(
    const ReadPipelineRequestPrivate &other, ReadPipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

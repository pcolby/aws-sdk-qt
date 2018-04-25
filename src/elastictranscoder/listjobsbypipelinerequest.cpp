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

#include "listjobsbypipelinerequest.h"
#include "listjobsbypipelinerequest_p.h"
#include "listjobsbypipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByPipelineRequest
 * \brief The ListJobsByPipelineRequest class provides an interface for ElasticTranscoder ListJobsByPipeline requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::listJobsByPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobsByPipelineRequest::ListJobsByPipelineRequest(const ListJobsByPipelineRequest &other)
    : ElasticTranscoderRequest(new ListJobsByPipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobsByPipelineRequest object.
 */
ListJobsByPipelineRequest::ListJobsByPipelineRequest()
    : ElasticTranscoderRequest(new ListJobsByPipelineRequestPrivate(ElasticTranscoderRequest::ListJobsByPipelineAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsByPipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobsByPipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsByPipelineRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsByPipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::ListJobsByPipelineRequestPrivate
 * \brief The ListJobsByPipelineRequestPrivate class provides private implementation for ListJobsByPipelineRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ListJobsByPipelineRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
ListJobsByPipelineRequestPrivate::ListJobsByPipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, ListJobsByPipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobsByPipelineRequest
 * class' copy constructor.
 */
ListJobsByPipelineRequestPrivate::ListJobsByPipelineRequestPrivate(
    const ListJobsByPipelineRequestPrivate &other, ListJobsByPipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

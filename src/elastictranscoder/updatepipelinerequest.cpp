/*
    Copyright 2013-2021 Paul Colby

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

#include "updatepipelinerequest.h"
#include "updatepipelinerequest_p.h"
#include "updatepipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineRequest
 * \brief The UpdatePipelineRequest class provides an interface for ElasticTranscoder UpdatePipeline requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::updatePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePipelineRequest::UpdatePipelineRequest(const UpdatePipelineRequest &other)
    : ElasticTranscoderRequest(new UpdatePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePipelineRequest object.
 */
UpdatePipelineRequest::UpdatePipelineRequest()
    : ElasticTranscoderRequest(new UpdatePipelineRequestPrivate(ElasticTranscoderRequest::UpdatePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineRequestPrivate
 * \brief The UpdatePipelineRequestPrivate class provides private implementation for UpdatePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a UpdatePipelineRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
UpdatePipelineRequestPrivate::UpdatePipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, UpdatePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineRequest
 * class' copy constructor.
 */
UpdatePipelineRequestPrivate::UpdatePipelineRequestPrivate(
    const UpdatePipelineRequestPrivate &other, UpdatePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

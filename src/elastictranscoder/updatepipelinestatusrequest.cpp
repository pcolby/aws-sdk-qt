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

#include "updatepipelinestatusrequest.h"
#include "updatepipelinestatusrequest_p.h"
#include "updatepipelinestatusresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineStatusRequest
 * \brief The UpdatePipelineStatusRequest class provides an interface for ElasticTranscoder UpdatePipelineStatus requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::updatePipelineStatus
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePipelineStatusRequest::UpdatePipelineStatusRequest(const UpdatePipelineStatusRequest &other)
    : ElasticTranscoderRequest(new UpdatePipelineStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePipelineStatusRequest object.
 */
UpdatePipelineStatusRequest::UpdatePipelineStatusRequest()
    : ElasticTranscoderRequest(new UpdatePipelineStatusRequestPrivate(ElasticTranscoderRequest::UpdatePipelineStatusAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePipelineStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePipelineStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineStatusRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineStatusRequestPrivate
 * \brief The UpdatePipelineStatusRequestPrivate class provides private implementation for UpdatePipelineStatusRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 *
 * Constructs a UpdatePipelineStatusRequestPrivate object for ElasticTranscoder \a action with,
 * public implementation \a q.
 */
UpdatePipelineStatusRequestPrivate::UpdatePipelineStatusRequestPrivate(
    const ElasticTranscoderRequest::Action action, UpdatePipelineStatusRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineStatusRequest
 * class' copy constructor.
 */
UpdatePipelineStatusRequestPrivate::UpdatePipelineStatusRequestPrivate(
    const UpdatePipelineStatusRequestPrivate &other, UpdatePipelineStatusRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

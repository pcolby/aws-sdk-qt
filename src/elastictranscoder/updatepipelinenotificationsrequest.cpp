/*
    Copyright 2013-2020 Paul Colby

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

#include "updatepipelinenotificationsrequest.h"
#include "updatepipelinenotificationsrequest_p.h"
#include "updatepipelinenotificationsresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineNotificationsRequest
 * \brief The UpdatePipelineNotificationsRequest class provides an interface for ElasticTranscoder UpdatePipelineNotifications requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::updatePipelineNotifications
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePipelineNotificationsRequest::UpdatePipelineNotificationsRequest(const UpdatePipelineNotificationsRequest &other)
    : ElasticTranscoderRequest(new UpdatePipelineNotificationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePipelineNotificationsRequest object.
 */
UpdatePipelineNotificationsRequest::UpdatePipelineNotificationsRequest()
    : ElasticTranscoderRequest(new UpdatePipelineNotificationsRequestPrivate(ElasticTranscoderRequest::UpdatePipelineNotificationsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePipelineNotificationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePipelineNotificationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineNotificationsRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineNotificationsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::UpdatePipelineNotificationsRequestPrivate
 * \brief The UpdatePipelineNotificationsRequestPrivate class provides private implementation for UpdatePipelineNotificationsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a UpdatePipelineNotificationsRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
UpdatePipelineNotificationsRequestPrivate::UpdatePipelineNotificationsRequestPrivate(
    const ElasticTranscoderRequest::Action action, UpdatePipelineNotificationsRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineNotificationsRequest
 * class' copy constructor.
 */
UpdatePipelineNotificationsRequestPrivate::UpdatePipelineNotificationsRequestPrivate(
    const UpdatePipelineNotificationsRequestPrivate &other, UpdatePipelineNotificationsRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

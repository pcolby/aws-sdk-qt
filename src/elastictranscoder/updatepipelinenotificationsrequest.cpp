// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

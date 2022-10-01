// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a UpdatePipelineStatusRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
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

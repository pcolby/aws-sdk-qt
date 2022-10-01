// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepipelinerequest.h"
#include "deletepipelinerequest_p.h"
#include "deletepipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::DeletePipelineRequest
 * \brief The DeletePipelineRequest class provides an interface for ElasticTranscoder DeletePipeline requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::deletePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePipelineRequest::DeletePipelineRequest(const DeletePipelineRequest &other)
    : ElasticTranscoderRequest(new DeletePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePipelineRequest object.
 */
DeletePipelineRequest::DeletePipelineRequest()
    : ElasticTranscoderRequest(new DeletePipelineRequestPrivate(ElasticTranscoderRequest::DeletePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeletePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::DeletePipelineRequestPrivate
 * \brief The DeletePipelineRequestPrivate class provides private implementation for DeletePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a DeletePipelineRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, DeletePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePipelineRequest
 * class' copy constructor.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const DeletePipelineRequestPrivate &other, DeletePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

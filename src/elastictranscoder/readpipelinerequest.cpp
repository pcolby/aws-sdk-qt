// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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

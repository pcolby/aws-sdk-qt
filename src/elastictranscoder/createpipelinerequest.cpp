// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpipelinerequest.h"
#include "createpipelinerequest_p.h"
#include "createpipelineresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CreatePipelineRequest
 * \brief The CreatePipelineRequest class provides an interface for ElasticTranscoder CreatePipeline requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::createPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePipelineRequest::CreatePipelineRequest(const CreatePipelineRequest &other)
    : ElasticTranscoderRequest(new CreatePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePipelineRequest object.
 */
CreatePipelineRequest::CreatePipelineRequest()
    : ElasticTranscoderRequest(new CreatePipelineRequestPrivate(ElasticTranscoderRequest::CreatePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreatePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::CreatePipelineRequestPrivate
 * \brief The CreatePipelineRequestPrivate class provides private implementation for CreatePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CreatePipelineRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
CreatePipelineRequestPrivate::CreatePipelineRequestPrivate(
    const ElasticTranscoderRequest::Action action, CreatePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePipelineRequest
 * class' copy constructor.
 */
CreatePipelineRequestPrivate::CreatePipelineRequestPrivate(
    const CreatePipelineRequestPrivate &other, CreatePipelineRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws

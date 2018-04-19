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
